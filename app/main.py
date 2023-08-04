import flet as ft

def main(page: ft.Page):

    page.window_min_width = 600
    page.window_min_height = 400
    page.title = "PyTorrent - Torrents"
    page

    torrents = ft.Ref()
    search = ft.Ref()

    def reselect(e):
        torrents.current.visible = e.control.selected_index == 0
        search.current.hint_text=["Название игры или программы", "Имя параметра"][0 if e.control.selected_index != 2 else 1]
        page.title = "PyTorrent - "+["Torrents", "Library", "Settings"][e.control.selected_index]
        
        print("Selected destination:", e.control.selected_index)
        page.update()

    rail = ft.NavigationRail(
        selected_index=0,
        label_type=ft.NavigationRailLabelType.ALL,
        min_width=100,
        min_extended_width=400,
        leading=ft.Text("PyTorrent", scale=1.7),
        group_alignment=-0.9,
        destinations=[
            ft.NavigationRailDestination(
                icon=ft.icons.EXPLORE_OUTLINED,
                selected_icon_content=ft.Icon(ft.icons.EXPLORE),
                label="Торренты",
            ),
            ft.NavigationRailDestination(
                icon_content=ft.Icon(ft.icons.GAMES_OUTLINED),
                selected_icon_content=ft.Icon(ft.icons.GAMES),
                label_content=ft.Text("Моя библиотека"),
            ),
            ft.NavigationRailDestination(
                icon=ft.icons.SETTINGS_OUTLINED,
                selected_icon_content=ft.Icon(ft.icons.SETTINGS),
                label_content=ft.Text("Настройки"),
            ),
        ],
        on_change=reselect,
    )

    page.add(
        ft.Row(
            [
                rail,
                ft.VerticalDivider(width=10),
                ft.Column(
                    [
                        ft.Row(
                            [
                                ft.TextField(hint_text="Название игры или программы", expand=True, ref=search),
                                ft.TextButton(text="Найти", icon=ft.icons.SEARCH, height=45)
                            ],
                        ),
                        ft.GridView(
                            controls=[
                                ft.Container(
                                    content=ft.Column(
                                        [
                                            ft.Image(
                                                src="app_icon.jpg",
                                                fit=ft.ImageFit.FILL,
                                                repeat=ft.ImageRepeat.REPEAT,
                                                border_radius=ft.border_radius.all(3),
                                                expand=True,
                                                width=300
                                            ),
                                            ft.Row(
                                                [
                                                    ft.Text(
                                                        value="RimWorld",
                                                        size=30,
                                                        color=ft.colors.WHITE
                                                    ),
                                                    ft.TextButton("ааа"),
                                                ]
                                            )
                                        ],
                                        width=300
                                    ),
                                    alignment=ft.alignment.center,
                                    width=1000,
                                    height=1000,
                                    expand=False,
                                    bgcolor=ft.colors.BLACK12,
                                    border_radius=ft.border_radius.all(3),
                                ),
                            ],
                            expand=1,
                            runs_count=5,
                            max_extent=300,
                            spacing=5,
                            run_spacing=5,
                            ref=torrents,
                        ),
                    ],
                    expand=True,
                ),
            ],
            expand=True
        )
    )
    page.update()


ft.app(target=main)