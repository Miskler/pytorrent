import flet
from flet import AppBar, ElevatedButton, Page, Text, View, colors


def main(page: Page):
    page.title = "PyTorrent"
    page.window_min_height = 300
    page.window_min_width = 550

    print("Initial route:", page.route)

    def route_change(e):
        print("Route change:", e.route)
        page.views.clear()
        page.views.append(
            View(
                "/",
                [
                    AppBar(
                        title=Text("Торрент загрузки"),
                        bgcolor=colors.SURFACE_VARIANT,
                        actions=[
                            ElevatedButton("Искать торрент!", on_click=open_torrents),
                            flet.Container(width=10),
                            ElevatedButton("Настройки", on_click=open_settings),
                            flet.Container(width=10),
                        ]
                    ),
                ],
            )
        )
        if page.route == "/torrents":
            page.views.append(
                View(
                    "/torrents",
                    [
                        AppBar(
                            title=Text("Торренты"),
                            bgcolor=colors.SURFACE_VARIANT
                        ),
                        Text("Body!", style="bodyMedium"),
                    ],
                )
            )
        elif page.route == "/settings":
            page.views.append(
                View(
                    "/settings",
                    [
                        AppBar(
                            title=Text("Настройки"), bgcolor=colors.SURFACE_VARIANT
                        ),
                        flet.ListView(
                            controls=[
                                flet.Container(
                                    alignment=flet.alignment.center,
                                    expand=False,
                                    content=flet.Text("Доступ к RuTracker.org", size=50)
                                ),
                                flet.TextField(hint_text="Имя пользователя или логин"),
                                flet.Container(height=10),
                                flet.TextField(hint_text="Пароль"),
                                flet.Container(
                                    content=flet.Container(
                                        content=flet.Text("Зачем эти данные?"),
                                        margin=10,
                                        padding=10,
                                        alignment=flet.alignment.center,
                                        bgcolor=flet.colors.BLACK26,
                                        width=150,
                                        height=40,
                                        border_radius=10,
                                    )
                                ),
                                flet.Container(
                                    alignment=flet.alignment.center,
                                    expand=False,
                                    content=flet.Text("Доступ к RuTracker.org", size=50)
                                ),
                                flet.TextField(hint_text="Имя пользователя или логин"),
                                flet.Container(height=10),
                                flet.TextField(hint_text="Пароль"),
                                flet.Container(
                                    content=flet.Container(
                                        content=flet.Text("Зачем эти данные?"),
                                        margin=10,
                                        padding=10,
                                        alignment=flet.alignment.center,
                                        bgcolor=flet.colors.BLACK26,
                                        width=50,
                                        height=40,
                                        border_radius=10,
                                    )
                                ),
                            ],
                        ),
                    ],
                )
            )
        page.update()

    def view_pop(e):
        print("View pop:", e.view)
        page.views.pop()
        top_view = page.views[-1]
        page.go(top_view.route)

    page.on_route_change = route_change
    page.on_view_pop = view_pop

    def open_torrents(e):
        page.go("/torrents")

    def open_settings(e):
        page.go("/settings")

    page.go(page.route)

def start():
    print("\nGUI START")
    flet.app(target=main)

def event():
    return 99
