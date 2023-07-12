
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 109 > 0
static unsigned char *bytecode_data[109];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_backends$_asyncio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_eventloop(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_fileio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_resources(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_signals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_sockets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_streams(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_subprocesses(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_synchronization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_tasks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_typedattr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_resources(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_sockets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_streams(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_subprocesses(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_tasks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$from_thread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$lowlevel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$streams(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$streams$memory(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$streams$stapled(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$streams$tls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$to_thread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_termui_impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_textwrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_winconsole(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$decorators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$shell_completion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$termui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansitowin32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$initialise(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$win32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$winterm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$GUID(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$_comobject(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$_meta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$_safearray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$automation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$client$_code_cache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$client$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$client$_events(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$client$_generate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$client$dynamic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$client$lazybind(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$connectionpoints(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$errorinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$hresult(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$logutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$messageloop(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$npsupport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$patcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$persist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$safearray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$server(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$server$inprocserver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$tools$codegenerator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$tools$tlbparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$tools$typedesc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$tools$typedesc_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_comtypes$typeinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$async_local_socket_connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$async_websocket_connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$auth$authorization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$auth$group(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$auth$oauth_provider(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$auth$oauth_token(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$auth$user(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$flet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$pubsub(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$reconnecting_websocket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$sync_local_socket_connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$sync_websocket_connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$alert_dialog(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$alignment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$animated_switcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$animation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$app_bar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$audio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$banner(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$blur(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$border(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$border_radius(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$bottom_sheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$buttons(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$callable_control(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$arc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$canvas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$circle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$color(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$fill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$line(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$oval(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$path(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$points(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$rect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$shadow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$shape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$canvas$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$card(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$bar_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$bar_chart_group(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$bar_chart_rod(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$bar_chart_rod_stack_item(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$chart_axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$chart_axis_label(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$chart_grid_lines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$chart_point_line(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$chart_point_shape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$line_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$line_chart_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$line_chart_data_point(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$pie_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$charts$pie_chart_section(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$checkbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$circle_avatar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$client_storage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$column(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$constrained_control(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$container(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$control(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$control_event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$datatable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$divider(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$drag_target(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$draggable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$dropdown(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$elevated_button(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$embed_json_encoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$event_handler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$file_picker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$filled_button(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$filled_tonal_button(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$flet_app(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$floating_action_button(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$form_field_control(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$gesture_detector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$gradients(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$grid_view(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$haptic_feedback(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$icon(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$icon_button(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$icons(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$inline_span(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$list_tile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$list_view(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$local_connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$locks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$margin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$markdown(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$navigation_bar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$navigation_rail(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$outlined_button(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$padding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$page(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$painting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$popup_menu_button(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$progress_bar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$progress_ring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$protocol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$querystring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$radio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$radio_group(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$ref(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$responsive_row(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$row(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$scrollable_control(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$semantics(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$session_storage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$shader_mask(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$shadow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$shake_detector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$slider(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$snack_bar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$stack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$switch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$tabs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$template_route(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$text_button(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$text_span(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$text_style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$textfield(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$theme(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$tooltip(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$transform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$transparent_pointer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$user_control(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$vertical_divider(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$view(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_flet_core$window_drag_area(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_abnf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_events(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_headers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_readers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_receivebuffer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_state(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_writers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h2$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h2$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h2$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h2$events(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h2$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h2$frame_buffer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h2$settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h2$stream(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h2$utilities(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h2$windows(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hpack$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hpack$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hpack$hpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hpack$huffman(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hpack$huffman_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hpack$huffman_table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hpack$struct(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hpack$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$connection_pool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$http11(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$http2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$http_proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$socks_proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_ssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$connection_pool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$http11(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$http2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$http_proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$socks_proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_synchronization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_trace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$backends$asyncio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$backends$auto(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$backends$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$backends$sync(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$backends$trio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$__version__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_content(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_decoders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_main(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_multipart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_status_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports$asgi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports$default(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports$mock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports$wsgi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_urls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hyperframe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hyperframe$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hyperframe$flags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hyperframe$frame(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_pep440(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$clients(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$clients$backend_application(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$clients$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$clients$legacy_application(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$clients$mobile_application(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$clients$service_application(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$clients$web_application(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$endpoints(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$endpoints$authorization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$endpoints$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$endpoints$introspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$endpoints$metadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$endpoints$pre_configured(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$endpoints$resource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$endpoints$revocation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$endpoints$token(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$grant_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$grant_types$authorization_code(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$grant_types$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$grant_types$client_credentials(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$grant_types$implicit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$grant_types$refresh_token(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$grant_types$resource_owner_password_credentials(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$parameters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$request_validator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$tokens(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc6749$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc8628(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc8628$clients(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$oauth2$rfc8628$clients$device(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$signals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oauthlib$uri_validate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin32_bootstrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin32_system32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_repath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986$_mixin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986$abnf_regexp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986$iri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986$misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986$normalizers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986$parseresult(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986$uri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_rfc3986$validators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sniffio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sniffio$_impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sniffio$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_typing_extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_abnf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_app(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_cookiejar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_handshake(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_http(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_logging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_socket(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_ssl_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websocket$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$datastructures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$extensions$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$extensions$permessage_deflate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$frames(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$headers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$http(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$http11(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$imports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$compatibility(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$framing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$handshake(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$http(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$legacy$protocol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$streams(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$uri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_websockets$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\104\157\143\165\155\145\156\164\163\134\107\151\164\110\165\142\134\160\171\164\157\162\162\145\156\164\134\155\141\151\156\56\160\171"
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\104\157\143\165\155\145\156\164\163\134\107\151\164\110\165\142\134\160\171\164\157\162\162\145\156\164\134\155\141\151\156\56\160\171"
#endif
},
    {"_pydecimal", NULL, 0, 157758, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\137\160\171\144\145\143\151\155\141\154\56\160\171"
#endif
},
    {"anyio", modulecode_anyio, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"anyio._backends", modulecode_anyio$_backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\142\141\143\153\145\156\144\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"anyio._backends._asyncio", modulecode_anyio$_backends$_asyncio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\142\141\143\153\145\156\144\163\134\137\141\163\171\156\143\151\157\56\160\171"
#endif
},
    {"anyio._core", modulecode_anyio$_core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"anyio._core._compat", modulecode_anyio$_core$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"anyio._core._eventloop", modulecode_anyio$_core$_eventloop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\145\166\145\156\164\154\157\157\160\56\160\171"
#endif
},
    {"anyio._core._exceptions", modulecode_anyio$_core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"anyio._core._fileio", modulecode_anyio$_core$_fileio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\146\151\154\145\151\157\56\160\171"
#endif
},
    {"anyio._core._resources", modulecode_anyio$_core$_resources, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\162\145\163\157\165\162\143\145\163\56\160\171"
#endif
},
    {"anyio._core._signals", modulecode_anyio$_core$_signals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\163\151\147\156\141\154\163\56\160\171"
#endif
},
    {"anyio._core._sockets", modulecode_anyio$_core$_sockets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\163\157\143\153\145\164\163\56\160\171"
#endif
},
    {"anyio._core._streams", modulecode_anyio$_core$_streams, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\163\164\162\145\141\155\163\56\160\171"
#endif
},
    {"anyio._core._subprocesses", modulecode_anyio$_core$_subprocesses, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\163\165\142\160\162\157\143\145\163\163\145\163\56\160\171"
#endif
},
    {"anyio._core._synchronization", modulecode_anyio$_core$_synchronization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\163\171\156\143\150\162\157\156\151\172\141\164\151\157\156\56\160\171"
#endif
},
    {"anyio._core._tasks", modulecode_anyio$_core$_tasks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\164\141\163\153\163\56\160\171"
#endif
},
    {"anyio._core._testing", modulecode_anyio$_core$_testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\164\145\163\164\151\156\147\56\160\171"
#endif
},
    {"anyio._core._typedattr", modulecode_anyio$_core$_typedattr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\137\143\157\162\145\134\137\164\171\160\145\144\141\164\164\162\56\160\171"
#endif
},
    {"anyio.abc", modulecode_anyio$abc, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\141\142\143\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"anyio.abc._resources", modulecode_anyio$abc$_resources, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\141\142\143\134\137\162\145\163\157\165\162\143\145\163\56\160\171"
#endif
},
    {"anyio.abc._sockets", modulecode_anyio$abc$_sockets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\141\142\143\134\137\163\157\143\153\145\164\163\56\160\171"
#endif
},
    {"anyio.abc._streams", modulecode_anyio$abc$_streams, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\141\142\143\134\137\163\164\162\145\141\155\163\56\160\171"
#endif
},
    {"anyio.abc._subprocesses", modulecode_anyio$abc$_subprocesses, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\141\142\143\134\137\163\165\142\160\162\157\143\145\163\163\145\163\56\160\171"
#endif
},
    {"anyio.abc._tasks", modulecode_anyio$abc$_tasks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\141\142\143\134\137\164\141\163\153\163\56\160\171"
#endif
},
    {"anyio.abc._testing", modulecode_anyio$abc$_testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\141\142\143\134\137\164\145\163\164\151\156\147\56\160\171"
#endif
},
    {"anyio.from_thread", modulecode_anyio$from_thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\146\162\157\155\137\164\150\162\145\141\144\56\160\171"
#endif
},
    {"anyio.lowlevel", modulecode_anyio$lowlevel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\154\157\167\154\145\166\145\154\56\160\171"
#endif
},
    {"anyio.streams", modulecode_anyio$streams, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\163\164\162\145\141\155\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"anyio.streams.memory", modulecode_anyio$streams$memory, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\163\164\162\145\141\155\163\134\155\145\155\157\162\171\56\160\171"
#endif
},
    {"anyio.streams.stapled", modulecode_anyio$streams$stapled, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\163\164\162\145\141\155\163\134\163\164\141\160\154\145\144\56\160\171"
#endif
},
    {"anyio.streams.tls", modulecode_anyio$streams$tls, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\163\164\162\145\141\155\163\134\164\154\163\56\160\171"
#endif
},
    {"anyio.to_thread", modulecode_anyio$to_thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\141\156\171\151\157\134\164\157\137\164\150\162\145\141\144\56\160\171"
#endif
},
    {"asyncio", NULL, 1, 766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"asyncio.base_events", NULL, 2, 51850, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\142\141\163\145\137\145\166\145\156\164\163\56\160\171"
#endif
},
    {"asyncio.base_futures", NULL, 3, 1933, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\142\141\163\145\137\146\165\164\165\162\145\163\56\160\171"
#endif
},
    {"asyncio.base_subprocess", NULL, 4, 9408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\142\141\163\145\137\163\165\142\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"asyncio.base_tasks", NULL, 5, 2003, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\142\141\163\145\137\164\141\163\153\163\56\160\171"
#endif
},
    {"asyncio.constants", NULL, 6, 608, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"asyncio.coroutines", NULL, 7, 6643, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\143\157\162\157\165\164\151\156\145\163\56\160\171"
#endif
},
    {"asyncio.events", NULL, 8, 28443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\145\166\145\156\164\163\56\160\171"
#endif
},
    {"asyncio.exceptions", NULL, 9, 2490, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"asyncio.format_helpers", NULL, 10, 2361, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\146\157\162\155\141\164\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"asyncio.futures", NULL, 11, 11909, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\146\165\164\165\162\145\163\56\160\171"
#endif
},
    {"asyncio.locks", NULL, 12, 14195, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\154\157\143\153\163\56\160\171"
#endif
},
    {"asyncio.log", NULL, 13, 251, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\154\157\147\56\160\171"
#endif
},
    {"asyncio.mixins", NULL, 14, 1099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\155\151\170\151\156\163\56\160\171"
#endif
},
    {"asyncio.proactor_events", NULL, 15, 24646, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\160\162\157\141\143\164\157\162\137\145\166\145\156\164\163\56\160\171"
#endif
},
    {"asyncio.protocols", NULL, 16, 8320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\160\162\157\164\157\143\157\154\163\56\160\171"
#endif
},
    {"asyncio.queues", NULL, 17, 8322, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\161\165\145\165\145\163\56\160\171"
#endif
},
    {"asyncio.runners", NULL, 18, 2114, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\162\165\156\156\145\162\163\56\160\171"
#endif
},
    {"asyncio.selector_events", NULL, 19, 29502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\163\145\154\145\143\164\157\162\137\145\166\145\156\164\163\56\160\171"
#endif
},
    {"asyncio.sslproto", NULL, 20, 21976, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\163\163\154\160\162\157\164\157\56\160\171"
#endif
},
    {"asyncio.staggered", NULL, 21, 4205, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\163\164\141\147\147\145\162\145\144\56\160\171"
#endif
},
    {"asyncio.streams", NULL, 22, 20418, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\163\164\162\145\141\155\163\56\160\171"
#endif
},
    {"asyncio.subprocess", NULL, 23, 7084, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\163\165\142\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"asyncio.tasks", NULL, 24, 23995, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\164\141\163\153\163\56\160\171"
#endif
},
    {"asyncio.threads", NULL, 25, 1007, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\164\150\162\145\141\144\163\56\160\171"
#endif
},
    {"asyncio.transports", NULL, 26, 12354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\164\162\141\156\163\160\157\162\164\163\56\160\171"
#endif
},
    {"asyncio.trsock", NULL, 27, 7864, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\164\162\163\157\143\153\56\160\171"
#endif
},
    {"asyncio.windows_events", NULL, 28, 24081, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\167\151\156\144\157\167\163\137\145\166\145\156\164\163\56\160\171"
#endif
},
    {"asyncio.windows_utils", NULL, 29, 4518, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\141\163\171\156\143\151\157\134\167\151\156\144\157\167\163\137\165\164\151\154\163\56\160\171"
#endif
},
    {"bz2", NULL, 30, 10892, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\142\172\62\56\160\171"
#endif
},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\145\162\164\151\146\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\145\162\164\151\146\151\134\143\157\162\145\56\160\171"
#endif
},
    {"click", modulecode_click, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"click._compat", modulecode_click$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"click._termui_impl", modulecode_click$_termui_impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\137\164\145\162\155\165\151\137\151\155\160\154\56\160\171"
#endif
},
    {"click._textwrap", modulecode_click$_textwrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\137\164\145\170\164\167\162\141\160\56\160\171"
#endif
},
    {"click._winconsole", modulecode_click$_winconsole, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\137\167\151\156\143\157\156\163\157\154\145\56\160\171"
#endif
},
    {"click.core", modulecode_click$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\143\157\162\145\56\160\171"
#endif
},
    {"click.decorators", modulecode_click$decorators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\144\145\143\157\162\141\164\157\162\163\56\160\171"
#endif
},
    {"click.exceptions", modulecode_click$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"click.formatting", modulecode_click$formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\146\157\162\155\141\164\164\151\156\147\56\160\171"
#endif
},
    {"click.globals", modulecode_click$globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\147\154\157\142\141\154\163\56\160\171"
#endif
},
    {"click.parser", modulecode_click$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\160\141\162\163\145\162\56\160\171"
#endif
},
    {"click.shell_completion", modulecode_click$shell_completion, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\163\150\145\154\154\137\143\157\155\160\154\145\164\151\157\156\56\160\171"
#endif
},
    {"click.termui", modulecode_click$termui, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\164\145\162\155\165\151\56\160\171"
#endif
},
    {"click.types", modulecode_click$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\164\171\160\145\163\56\160\171"
#endif
},
    {"click.utils", modulecode_click$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\154\151\143\153\134\165\164\151\154\163\56\160\171"
#endif
},
    {"colorama", modulecode_colorama, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"colorama.ansi", modulecode_colorama$ansi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\141\156\163\151\56\160\171"
#endif
},
    {"colorama.ansitowin32", modulecode_colorama$ansitowin32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\141\156\163\151\164\157\167\151\156\63\62\56\160\171"
#endif
},
    {"colorama.initialise", modulecode_colorama$initialise, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\151\156\151\164\151\141\154\151\163\145\56\160\171"
#endif
},
    {"colorama.win32", modulecode_colorama$win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\167\151\156\63\62\56\160\171"
#endif
},
    {"colorama.winterm", modulecode_colorama$winterm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\154\157\162\141\155\141\134\167\151\156\164\145\162\155\56\160\171"
#endif
},
    {"comtypes", modulecode_comtypes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"comtypes.GUID", modulecode_comtypes$GUID, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\107\125\111\104\56\160\171"
#endif
},
    {"comtypes._comobject", modulecode_comtypes$_comobject, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\137\143\157\155\157\142\152\145\143\164\56\160\171"
#endif
},
    {"comtypes._meta", modulecode_comtypes$_meta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\137\155\145\164\141\56\160\171"
#endif
},
    {"comtypes._safearray", modulecode_comtypes$_safearray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\137\163\141\146\145\141\162\162\141\171\56\160\171"
#endif
},
    {"comtypes.automation", modulecode_comtypes$automation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\141\165\164\157\155\141\164\151\157\156\56\160\171"
#endif
},
    {"comtypes.client", modulecode_comtypes$client, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\143\154\151\145\156\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"comtypes.client._code_cache", modulecode_comtypes$client$_code_cache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\143\154\151\145\156\164\134\137\143\157\144\145\137\143\141\143\150\145\56\160\171"
#endif
},
    {"comtypes.client._constants", modulecode_comtypes$client$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\143\154\151\145\156\164\134\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"comtypes.client._events", modulecode_comtypes$client$_events, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\143\154\151\145\156\164\134\137\145\166\145\156\164\163\56\160\171"
#endif
},
    {"comtypes.client._generate", modulecode_comtypes$client$_generate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\143\154\151\145\156\164\134\137\147\145\156\145\162\141\164\145\56\160\171"
#endif
},
    {"comtypes.client.dynamic", modulecode_comtypes$client$dynamic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\143\154\151\145\156\164\134\144\171\156\141\155\151\143\56\160\171"
#endif
},
    {"comtypes.client.lazybind", modulecode_comtypes$client$lazybind, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\143\154\151\145\156\164\134\154\141\172\171\142\151\156\144\56\160\171"
#endif
},
    {"comtypes.connectionpoints", modulecode_comtypes$connectionpoints, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\143\157\156\156\145\143\164\151\157\156\160\157\151\156\164\163\56\160\171"
#endif
},
    {"comtypes.errorinfo", modulecode_comtypes$errorinfo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\145\162\162\157\162\151\156\146\157\56\160\171"
#endif
},
    {"comtypes.gen", NULL, 31, 173, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\147\145\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"comtypes.hresult", modulecode_comtypes$hresult, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\150\162\145\163\165\154\164\56\160\171"
#endif
},
    {"comtypes.logutil", modulecode_comtypes$logutil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\154\157\147\165\164\151\154\56\160\171"
#endif
},
    {"comtypes.messageloop", modulecode_comtypes$messageloop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\155\145\163\163\141\147\145\154\157\157\160\56\160\171"
#endif
},
    {"comtypes.npsupport", modulecode_comtypes$npsupport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\156\160\163\165\160\160\157\162\164\56\160\171"
#endif
},
    {"comtypes.patcher", modulecode_comtypes$patcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\160\141\164\143\150\145\162\56\160\171"
#endif
},
    {"comtypes.persist", modulecode_comtypes$persist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\160\145\162\163\151\163\164\56\160\171"
#endif
},
    {"comtypes.safearray", modulecode_comtypes$safearray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\163\141\146\145\141\162\162\141\171\56\160\171"
#endif
},
    {"comtypes.server", modulecode_comtypes$server, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\163\145\162\166\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"comtypes.server.inprocserver", modulecode_comtypes$server$inprocserver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\163\145\162\166\145\162\134\151\156\160\162\157\143\163\145\162\166\145\162\56\160\171"
#endif
},
    {"comtypes.tools", modulecode_comtypes$tools, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\164\157\157\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"comtypes.tools.codegenerator", modulecode_comtypes$tools$codegenerator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\164\157\157\154\163\134\143\157\144\145\147\145\156\145\162\141\164\157\162\56\160\171"
#endif
},
    {"comtypes.tools.tlbparser", modulecode_comtypes$tools$tlbparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\164\157\157\154\163\134\164\154\142\160\141\162\163\145\162\56\160\171"
#endif
},
    {"comtypes.tools.typedesc", modulecode_comtypes$tools$typedesc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\164\157\157\154\163\134\164\171\160\145\144\145\163\143\56\160\171"
#endif
},
    {"comtypes.tools.typedesc_base", modulecode_comtypes$tools$typedesc_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\164\157\157\154\163\134\164\171\160\145\144\145\163\143\137\142\141\163\145\56\160\171"
#endif
},
    {"comtypes.typeinfo", modulecode_comtypes$typeinfo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\157\155\164\171\160\145\163\134\164\171\160\145\151\156\146\157\56\160\171"
#endif
},
    {"concurrent", NULL, 32, 157, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\143\157\156\143\165\162\162\145\156\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"concurrent.futures", NULL, 33, 1129, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\143\157\156\143\165\162\162\145\156\164\134\146\165\164\165\162\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"concurrent.futures._base", NULL, 34, 22255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\143\157\156\143\165\162\162\145\156\164\134\146\165\164\165\162\145\163\134\137\142\141\163\145\56\160\171"
#endif
},
    {"concurrent.futures.process", NULL, 35, 21769, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\143\157\156\143\165\162\162\145\156\164\134\146\165\164\165\162\145\163\134\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"concurrent.futures.thread", NULL, 36, 5987, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\143\157\156\143\165\162\162\145\156\164\134\146\165\164\165\162\145\163\134\164\150\162\145\141\144\56\160\171"
#endif
},
    {"ctypes", NULL, 37, 15904, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\143\164\171\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"ctypes._endian", NULL, 38, 1923, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\143\164\171\160\145\163\134\137\145\156\144\151\141\156\56\160\171"
#endif
},
    {"ctypes.wintypes", NULL, 39, 4880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\143\164\171\160\145\163\134\167\151\156\164\171\160\145\163\56\160\171"
#endif
},
    {"decimal", NULL, 40, 384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\144\145\143\151\155\141\154\56\160\171"
#endif
},
    {"email", NULL, 41, 1582, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"email._encoded_words", NULL, 42, 5762, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\137\145\156\143\157\144\145\144\137\167\157\162\144\163\56\160\171"
#endif
},
    {"email._header_value_parser", NULL, 43, 77817, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\137\150\145\141\144\145\162\137\166\141\154\165\145\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email._parseaddr", NULL, 44, 12534, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\137\160\141\162\163\145\141\144\144\162\56\160\171"
#endif
},
    {"email._policybase", NULL, 45, 14804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\137\160\157\154\151\143\171\142\141\163\145\56\160\171"
#endif
},
    {"email.base64mime", NULL, 46, 3262, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\142\141\163\145\66\64\155\151\155\145\56\160\171"
#endif
},
    {"email.charset", NULL, 47, 11597, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\143\150\141\162\163\145\164\56\160\171"
#endif
},
    {"email.contentmanager", NULL, 48, 7411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\143\157\156\164\145\156\164\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"email.encoders", NULL, 49, 1649, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\145\156\143\157\144\145\162\163\56\160\171"
#endif
},
    {"email.errors", NULL, 50, 5724, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\145\162\162\157\162\163\56\160\171"
#endif
},
    {"email.feedparser", NULL, 51, 10600, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\146\145\145\144\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email.generator", NULL, 52, 12623, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\147\145\156\145\162\141\164\157\162\56\160\171"
#endif
},
    {"email.header", NULL, 53, 16484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\150\145\141\144\145\162\56\160\171"
#endif
},
    {"email.headerregistry", NULL, 54, 21927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\150\145\141\144\145\162\162\145\147\151\163\164\162\171\56\160\171"
#endif
},
    {"email.iterators", NULL, 55, 1990, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\151\164\145\162\141\164\157\162\163\56\160\171"
#endif
},
    {"email.message", NULL, 56, 37826, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\155\145\163\163\141\147\145\56\160\171"
#endif
},
    {"email.parser", NULL, 57, 5695, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email.policy", NULL, 58, 9675, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\160\157\154\151\143\171\56\160\171"
#endif
},
    {"email.quoprimime", NULL, 59, 7645, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\161\165\157\160\162\151\155\151\155\145\56\160\171"
#endif
},
    {"email.utils", NULL, 60, 9693, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\145\155\141\151\154\134\165\164\151\154\163\56\160\171"
#endif
},
    {"flet", modulecode_flet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"flet.async_local_socket_connection", modulecode_flet$async_local_socket_connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\141\163\171\156\143\137\154\157\143\141\154\137\163\157\143\153\145\164\137\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"flet.async_websocket_connection", modulecode_flet$async_websocket_connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\141\163\171\156\143\137\167\145\142\163\157\143\153\145\164\137\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"flet.auth", modulecode_flet$auth, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\141\165\164\150"
#endif
},
    {"flet.auth.authorization", modulecode_flet$auth$authorization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\141\165\164\150\134\141\165\164\150\157\162\151\172\141\164\151\157\156\56\160\171"
#endif
},
    {"flet.auth.group", modulecode_flet$auth$group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\141\165\164\150\134\147\162\157\165\160\56\160\171"
#endif
},
    {"flet.auth.oauth_provider", modulecode_flet$auth$oauth_provider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\141\165\164\150\134\157\141\165\164\150\137\160\162\157\166\151\144\145\162\56\160\171"
#endif
},
    {"flet.auth.oauth_token", modulecode_flet$auth$oauth_token, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\141\165\164\150\134\157\141\165\164\150\137\164\157\153\145\156\56\160\171"
#endif
},
    {"flet.auth.user", modulecode_flet$auth$user, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\141\165\164\150\134\165\163\145\162\56\160\171"
#endif
},
    {"flet.constants", modulecode_flet$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"flet.flet", modulecode_flet$flet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\146\154\145\164\56\160\171"
#endif
},
    {"flet.pubsub", modulecode_flet$pubsub, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\160\165\142\163\165\142\56\160\171"
#endif
},
    {"flet.reconnecting_websocket", modulecode_flet$reconnecting_websocket, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\162\145\143\157\156\156\145\143\164\151\156\147\137\167\145\142\163\157\143\153\145\164\56\160\171"
#endif
},
    {"flet.sync_local_socket_connection", modulecode_flet$sync_local_socket_connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\163\171\156\143\137\154\157\143\141\154\137\163\157\143\153\145\164\137\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"flet.sync_websocket_connection", modulecode_flet$sync_websocket_connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\163\171\156\143\137\167\145\142\163\157\143\153\145\164\137\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"flet.utils", modulecode_flet$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\165\164\151\154\163\56\160\171"
#endif
},
    {"flet.version", modulecode_flet$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"flet_core", modulecode_flet_core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"flet_core.alert_dialog", modulecode_flet_core$alert_dialog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\141\154\145\162\164\137\144\151\141\154\157\147\56\160\171"
#endif
},
    {"flet_core.alignment", modulecode_flet_core$alignment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\141\154\151\147\156\155\145\156\164\56\160\171"
#endif
},
    {"flet_core.animated_switcher", modulecode_flet_core$animated_switcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\141\156\151\155\141\164\145\144\137\163\167\151\164\143\150\145\162\56\160\171"
#endif
},
    {"flet_core.animation", modulecode_flet_core$animation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\141\156\151\155\141\164\151\157\156\56\160\171"
#endif
},
    {"flet_core.app_bar", modulecode_flet_core$app_bar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\141\160\160\137\142\141\162\56\160\171"
#endif
},
    {"flet_core.audio", modulecode_flet_core$audio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\141\165\144\151\157\56\160\171"
#endif
},
    {"flet_core.banner", modulecode_flet_core$banner, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\142\141\156\156\145\162\56\160\171"
#endif
},
    {"flet_core.blur", modulecode_flet_core$blur, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\142\154\165\162\56\160\171"
#endif
},
    {"flet_core.border", modulecode_flet_core$border, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\142\157\162\144\145\162\56\160\171"
#endif
},
    {"flet_core.border_radius", modulecode_flet_core$border_radius, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\142\157\162\144\145\162\137\162\141\144\151\165\163\56\160\171"
#endif
},
    {"flet_core.bottom_sheet", modulecode_flet_core$bottom_sheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\142\157\164\164\157\155\137\163\150\145\145\164\56\160\171"
#endif
},
    {"flet_core.buttons", modulecode_flet_core$buttons, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\142\165\164\164\157\156\163\56\160\171"
#endif
},
    {"flet_core.callable_control", modulecode_flet_core$callable_control, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\154\154\141\142\154\145\137\143\157\156\164\162\157\154\56\160\171"
#endif
},
    {"flet_core.canvas", modulecode_flet_core$canvas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"flet_core.canvas.arc", modulecode_flet_core$canvas$arc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\141\162\143\56\160\171"
#endif
},
    {"flet_core.canvas.canvas", modulecode_flet_core$canvas$canvas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\143\141\156\166\141\163\56\160\171"
#endif
},
    {"flet_core.canvas.circle", modulecode_flet_core$canvas$circle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\143\151\162\143\154\145\56\160\171"
#endif
},
    {"flet_core.canvas.color", modulecode_flet_core$canvas$color, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\143\157\154\157\162\56\160\171"
#endif
},
    {"flet_core.canvas.fill", modulecode_flet_core$canvas$fill, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\146\151\154\154\56\160\171"
#endif
},
    {"flet_core.canvas.line", modulecode_flet_core$canvas$line, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\154\151\156\145\56\160\171"
#endif
},
    {"flet_core.canvas.oval", modulecode_flet_core$canvas$oval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\157\166\141\154\56\160\171"
#endif
},
    {"flet_core.canvas.path", modulecode_flet_core$canvas$path, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\160\141\164\150\56\160\171"
#endif
},
    {"flet_core.canvas.points", modulecode_flet_core$canvas$points, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\160\157\151\156\164\163\56\160\171"
#endif
},
    {"flet_core.canvas.rect", modulecode_flet_core$canvas$rect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\162\145\143\164\56\160\171"
#endif
},
    {"flet_core.canvas.shadow", modulecode_flet_core$canvas$shadow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\163\150\141\144\157\167\56\160\171"
#endif
},
    {"flet_core.canvas.shape", modulecode_flet_core$canvas$shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\163\150\141\160\145\56\160\171"
#endif
},
    {"flet_core.canvas.text", modulecode_flet_core$canvas$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\156\166\141\163\134\164\145\170\164\56\160\171"
#endif
},
    {"flet_core.card", modulecode_flet_core$card, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\141\162\144\56\160\171"
#endif
},
    {"flet_core.charts", modulecode_flet_core$charts, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163"
#endif
},
    {"flet_core.charts.bar_chart", modulecode_flet_core$charts$bar_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\142\141\162\137\143\150\141\162\164\56\160\171"
#endif
},
    {"flet_core.charts.bar_chart_group", modulecode_flet_core$charts$bar_chart_group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\142\141\162\137\143\150\141\162\164\137\147\162\157\165\160\56\160\171"
#endif
},
    {"flet_core.charts.bar_chart_rod", modulecode_flet_core$charts$bar_chart_rod, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\142\141\162\137\143\150\141\162\164\137\162\157\144\56\160\171"
#endif
},
    {"flet_core.charts.bar_chart_rod_stack_item", modulecode_flet_core$charts$bar_chart_rod_stack_item, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\142\141\162\137\143\150\141\162\164\137\162\157\144\137\163\164\141\143\153\137\151\164\145\155\56\160\171"
#endif
},
    {"flet_core.charts.chart_axis", modulecode_flet_core$charts$chart_axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\143\150\141\162\164\137\141\170\151\163\56\160\171"
#endif
},
    {"flet_core.charts.chart_axis_label", modulecode_flet_core$charts$chart_axis_label, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\143\150\141\162\164\137\141\170\151\163\137\154\141\142\145\154\56\160\171"
#endif
},
    {"flet_core.charts.chart_grid_lines", modulecode_flet_core$charts$chart_grid_lines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\143\150\141\162\164\137\147\162\151\144\137\154\151\156\145\163\56\160\171"
#endif
},
    {"flet_core.charts.chart_point_line", modulecode_flet_core$charts$chart_point_line, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\143\150\141\162\164\137\160\157\151\156\164\137\154\151\156\145\56\160\171"
#endif
},
    {"flet_core.charts.chart_point_shape", modulecode_flet_core$charts$chart_point_shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\143\150\141\162\164\137\160\157\151\156\164\137\163\150\141\160\145\56\160\171"
#endif
},
    {"flet_core.charts.line_chart", modulecode_flet_core$charts$line_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\154\151\156\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"flet_core.charts.line_chart_data", modulecode_flet_core$charts$line_chart_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\154\151\156\145\137\143\150\141\162\164\137\144\141\164\141\56\160\171"
#endif
},
    {"flet_core.charts.line_chart_data_point", modulecode_flet_core$charts$line_chart_data_point, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\154\151\156\145\137\143\150\141\162\164\137\144\141\164\141\137\160\157\151\156\164\56\160\171"
#endif
},
    {"flet_core.charts.pie_chart", modulecode_flet_core$charts$pie_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\160\151\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"flet_core.charts.pie_chart_section", modulecode_flet_core$charts$pie_chart_section, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\141\162\164\163\134\160\151\145\137\143\150\141\162\164\137\163\145\143\164\151\157\156\56\160\171"
#endif
},
    {"flet_core.checkbox", modulecode_flet_core$checkbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\150\145\143\153\142\157\170\56\160\171"
#endif
},
    {"flet_core.circle_avatar", modulecode_flet_core$circle_avatar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\151\162\143\154\145\137\141\166\141\164\141\162\56\160\171"
#endif
},
    {"flet_core.client_storage", modulecode_flet_core$client_storage, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\154\151\145\156\164\137\163\164\157\162\141\147\145\56\160\171"
#endif
},
    {"flet_core.clipboard", modulecode_flet_core$clipboard, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\154\151\160\142\157\141\162\144\56\160\171"
#endif
},
    {"flet_core.colors", modulecode_flet_core$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\157\154\157\162\163\56\160\171"
#endif
},
    {"flet_core.column", modulecode_flet_core$column, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\157\154\165\155\156\56\160\171"
#endif
},
    {"flet_core.connection", modulecode_flet_core$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"flet_core.constrained_control", modulecode_flet_core$constrained_control, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\157\156\163\164\162\141\151\156\145\144\137\143\157\156\164\162\157\154\56\160\171"
#endif
},
    {"flet_core.container", modulecode_flet_core$container, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\157\156\164\141\151\156\145\162\56\160\171"
#endif
},
    {"flet_core.control", modulecode_flet_core$control, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\157\156\164\162\157\154\56\160\171"
#endif
},
    {"flet_core.control_event", modulecode_flet_core$control_event, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\143\157\156\164\162\157\154\137\145\166\145\156\164\56\160\171"
#endif
},
    {"flet_core.datatable", modulecode_flet_core$datatable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\144\141\164\141\164\141\142\154\145\56\160\171"
#endif
},
    {"flet_core.divider", modulecode_flet_core$divider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\144\151\166\151\144\145\162\56\160\171"
#endif
},
    {"flet_core.drag_target", modulecode_flet_core$drag_target, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\144\162\141\147\137\164\141\162\147\145\164\56\160\171"
#endif
},
    {"flet_core.draggable", modulecode_flet_core$draggable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\144\162\141\147\147\141\142\154\145\56\160\171"
#endif
},
    {"flet_core.dropdown", modulecode_flet_core$dropdown, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\144\162\157\160\144\157\167\156\56\160\171"
#endif
},
    {"flet_core.elevated_button", modulecode_flet_core$elevated_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\145\154\145\166\141\164\145\144\137\142\165\164\164\157\156\56\160\171"
#endif
},
    {"flet_core.embed_json_encoder", modulecode_flet_core$embed_json_encoder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\145\155\142\145\144\137\152\163\157\156\137\145\156\143\157\144\145\162\56\160\171"
#endif
},
    {"flet_core.event", modulecode_flet_core$event, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\145\166\145\156\164\56\160\171"
#endif
},
    {"flet_core.event_handler", modulecode_flet_core$event_handler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\145\166\145\156\164\137\150\141\156\144\154\145\162\56\160\171"
#endif
},
    {"flet_core.file_picker", modulecode_flet_core$file_picker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\146\151\154\145\137\160\151\143\153\145\162\56\160\171"
#endif
},
    {"flet_core.filled_button", modulecode_flet_core$filled_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\146\151\154\154\145\144\137\142\165\164\164\157\156\56\160\171"
#endif
},
    {"flet_core.filled_tonal_button", modulecode_flet_core$filled_tonal_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\146\151\154\154\145\144\137\164\157\156\141\154\137\142\165\164\164\157\156\56\160\171"
#endif
},
    {"flet_core.flet_app", modulecode_flet_core$flet_app, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\146\154\145\164\137\141\160\160\56\160\171"
#endif
},
    {"flet_core.floating_action_button", modulecode_flet_core$floating_action_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\146\154\157\141\164\151\156\147\137\141\143\164\151\157\156\137\142\165\164\164\157\156\56\160\171"
#endif
},
    {"flet_core.form_field_control", modulecode_flet_core$form_field_control, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\146\157\162\155\137\146\151\145\154\144\137\143\157\156\164\162\157\154\56\160\171"
#endif
},
    {"flet_core.gesture_detector", modulecode_flet_core$gesture_detector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\147\145\163\164\165\162\145\137\144\145\164\145\143\164\157\162\56\160\171"
#endif
},
    {"flet_core.gradients", modulecode_flet_core$gradients, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\147\162\141\144\151\145\156\164\163\56\160\171"
#endif
},
    {"flet_core.grid_view", modulecode_flet_core$grid_view, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\147\162\151\144\137\166\151\145\167\56\160\171"
#endif
},
    {"flet_core.haptic_feedback", modulecode_flet_core$haptic_feedback, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\150\141\160\164\151\143\137\146\145\145\144\142\141\143\153\56\160\171"
#endif
},
    {"flet_core.icon", modulecode_flet_core$icon, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\151\143\157\156\56\160\171"
#endif
},
    {"flet_core.icon_button", modulecode_flet_core$icon_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\151\143\157\156\137\142\165\164\164\157\156\56\160\171"
#endif
},
    {"flet_core.icons", modulecode_flet_core$icons, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\151\143\157\156\163\56\160\171"
#endif
},
    {"flet_core.image", modulecode_flet_core$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\151\155\141\147\145\56\160\171"
#endif
},
    {"flet_core.inline_span", modulecode_flet_core$inline_span, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\151\156\154\151\156\145\137\163\160\141\156\56\160\171"
#endif
},
    {"flet_core.list_tile", modulecode_flet_core$list_tile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\154\151\163\164\137\164\151\154\145\56\160\171"
#endif
},
    {"flet_core.list_view", modulecode_flet_core$list_view, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\154\151\163\164\137\166\151\145\167\56\160\171"
#endif
},
    {"flet_core.local_connection", modulecode_flet_core$local_connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\154\157\143\141\154\137\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"flet_core.locks", modulecode_flet_core$locks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\154\157\143\153\163\56\160\171"
#endif
},
    {"flet_core.margin", modulecode_flet_core$margin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\155\141\162\147\151\156\56\160\171"
#endif
},
    {"flet_core.markdown", modulecode_flet_core$markdown, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\155\141\162\153\144\157\167\156\56\160\171"
#endif
},
    {"flet_core.navigation_bar", modulecode_flet_core$navigation_bar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\156\141\166\151\147\141\164\151\157\156\137\142\141\162\56\160\171"
#endif
},
    {"flet_core.navigation_rail", modulecode_flet_core$navigation_rail, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\156\141\166\151\147\141\164\151\157\156\137\162\141\151\154\56\160\171"
#endif
},
    {"flet_core.outlined_button", modulecode_flet_core$outlined_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\157\165\164\154\151\156\145\144\137\142\165\164\164\157\156\56\160\171"
#endif
},
    {"flet_core.padding", modulecode_flet_core$padding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\160\141\144\144\151\156\147\56\160\171"
#endif
},
    {"flet_core.page", modulecode_flet_core$page, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\160\141\147\145\56\160\171"
#endif
},
    {"flet_core.painting", modulecode_flet_core$painting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\160\141\151\156\164\151\156\147\56\160\171"
#endif
},
    {"flet_core.popup_menu_button", modulecode_flet_core$popup_menu_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\160\157\160\165\160\137\155\145\156\165\137\142\165\164\164\157\156\56\160\171"
#endif
},
    {"flet_core.progress_bar", modulecode_flet_core$progress_bar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\160\162\157\147\162\145\163\163\137\142\141\162\56\160\171"
#endif
},
    {"flet_core.progress_ring", modulecode_flet_core$progress_ring, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\160\162\157\147\162\145\163\163\137\162\151\156\147\56\160\171"
#endif
},
    {"flet_core.protocol", modulecode_flet_core$protocol, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\160\162\157\164\157\143\157\154\56\160\171"
#endif
},
    {"flet_core.querystring", modulecode_flet_core$querystring, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\161\165\145\162\171\163\164\162\151\156\147\56\160\171"
#endif
},
    {"flet_core.radio", modulecode_flet_core$radio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\162\141\144\151\157\56\160\171"
#endif
},
    {"flet_core.radio_group", modulecode_flet_core$radio_group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\162\141\144\151\157\137\147\162\157\165\160\56\160\171"
#endif
},
    {"flet_core.ref", modulecode_flet_core$ref, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\162\145\146\56\160\171"
#endif
},
    {"flet_core.responsive_row", modulecode_flet_core$responsive_row, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\162\145\163\160\157\156\163\151\166\145\137\162\157\167\56\160\171"
#endif
},
    {"flet_core.row", modulecode_flet_core$row, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\162\157\167\56\160\171"
#endif
},
    {"flet_core.scrollable_control", modulecode_flet_core$scrollable_control, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\163\143\162\157\154\154\141\142\154\145\137\143\157\156\164\162\157\154\56\160\171"
#endif
},
    {"flet_core.semantics", modulecode_flet_core$semantics, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\163\145\155\141\156\164\151\143\163\56\160\171"
#endif
},
    {"flet_core.session_storage", modulecode_flet_core$session_storage, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\163\145\163\163\151\157\156\137\163\164\157\162\141\147\145\56\160\171"
#endif
},
    {"flet_core.shader_mask", modulecode_flet_core$shader_mask, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\163\150\141\144\145\162\137\155\141\163\153\56\160\171"
#endif
},
    {"flet_core.shadow", modulecode_flet_core$shadow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\163\150\141\144\157\167\56\160\171"
#endif
},
    {"flet_core.shake_detector", modulecode_flet_core$shake_detector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\163\150\141\153\145\137\144\145\164\145\143\164\157\162\56\160\171"
#endif
},
    {"flet_core.slider", modulecode_flet_core$slider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\163\154\151\144\145\162\56\160\171"
#endif
},
    {"flet_core.snack_bar", modulecode_flet_core$snack_bar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\163\156\141\143\153\137\142\141\162\56\160\171"
#endif
},
    {"flet_core.stack", modulecode_flet_core$stack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\163\164\141\143\153\56\160\171"
#endif
},
    {"flet_core.switch", modulecode_flet_core$switch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\163\167\151\164\143\150\56\160\171"
#endif
},
    {"flet_core.tabs", modulecode_flet_core$tabs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\141\142\163\56\160\171"
#endif
},
    {"flet_core.template_route", modulecode_flet_core$template_route, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\145\155\160\154\141\164\145\137\162\157\165\164\145\56\160\171"
#endif
},
    {"flet_core.text", modulecode_flet_core$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\145\170\164\56\160\171"
#endif
},
    {"flet_core.text_button", modulecode_flet_core$text_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\145\170\164\137\142\165\164\164\157\156\56\160\171"
#endif
},
    {"flet_core.text_span", modulecode_flet_core$text_span, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\145\170\164\137\163\160\141\156\56\160\171"
#endif
},
    {"flet_core.text_style", modulecode_flet_core$text_style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\145\170\164\137\163\164\171\154\145\56\160\171"
#endif
},
    {"flet_core.textfield", modulecode_flet_core$textfield, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\145\170\164\146\151\145\154\144\56\160\171"
#endif
},
    {"flet_core.theme", modulecode_flet_core$theme, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\150\145\155\145\56\160\171"
#endif
},
    {"flet_core.tooltip", modulecode_flet_core$tooltip, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\157\157\154\164\151\160\56\160\171"
#endif
},
    {"flet_core.transform", modulecode_flet_core$transform, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\162\141\156\163\146\157\162\155\56\160\171"
#endif
},
    {"flet_core.transparent_pointer", modulecode_flet_core$transparent_pointer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\162\141\156\163\160\141\162\145\156\164\137\160\157\151\156\164\145\162\56\160\171"
#endif
},
    {"flet_core.types", modulecode_flet_core$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\164\171\160\145\163\56\160\171"
#endif
},
    {"flet_core.user_control", modulecode_flet_core$user_control, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\165\163\145\162\137\143\157\156\164\162\157\154\56\160\171"
#endif
},
    {"flet_core.utils", modulecode_flet_core$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\165\164\151\154\163\56\160\171"
#endif
},
    {"flet_core.vertical_divider", modulecode_flet_core$vertical_divider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\166\145\162\164\151\143\141\154\137\144\151\166\151\144\145\162\56\160\171"
#endif
},
    {"flet_core.view", modulecode_flet_core$view, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\166\151\145\167\56\160\171"
#endif
},
    {"flet_core.window_drag_area", modulecode_flet_core$window_drag_area, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\154\145\164\137\143\157\162\145\134\167\151\156\144\157\167\137\144\162\141\147\137\141\162\145\141\56\160\171"
#endif
},
    {"h11", modulecode_h11, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\61\61\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"h11._abnf", modulecode_h11$_abnf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\61\61\134\137\141\142\156\146\56\160\171"
#endif
},
    {"h11._connection", modulecode_h11$_connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\61\61\134\137\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"h11._events", modulecode_h11$_events, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\61\61\134\137\145\166\145\156\164\163\56\160\171"
#endif
},
    {"h11._headers", modulecode_h11$_headers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\61\61\134\137\150\145\141\144\145\162\163\56\160\171"
#endif
},
    {"h11._readers", modulecode_h11$_readers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\61\61\134\137\162\145\141\144\145\162\163\56\160\171"
#endif
},
    {"h11._receivebuffer", modulecode_h11$_receivebuffer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\61\61\134\137\162\145\143\145\151\166\145\142\165\146\146\145\162\56\160\171"
#endif
},
    {"h11._state", modulecode_h11$_state, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\61\61\134\137\163\164\141\164\145\56\160\171"
#endif
},
    {"h11._util", modulecode_h11$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\61\61\134\137\165\164\151\154\56\160\171"
#endif
},
    {"h11._version", modulecode_h11$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\61\61\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"h11._writers", modulecode_h11$_writers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\61\61\134\137\167\162\151\164\145\162\163\56\160\171"
#endif
},
    {"h2", modulecode_h2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\62\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"h2.config", modulecode_h2$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\62\134\143\157\156\146\151\147\56\160\171"
#endif
},
    {"h2.connection", modulecode_h2$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\62\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"h2.errors", modulecode_h2$errors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\62\134\145\162\162\157\162\163\56\160\171"
#endif
},
    {"h2.events", modulecode_h2$events, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\62\134\145\166\145\156\164\163\56\160\171"
#endif
},
    {"h2.exceptions", modulecode_h2$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\62\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"h2.frame_buffer", modulecode_h2$frame_buffer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\62\134\146\162\141\155\145\137\142\165\146\146\145\162\56\160\171"
#endif
},
    {"h2.settings", modulecode_h2$settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\62\134\163\145\164\164\151\156\147\163\56\160\171"
#endif
},
    {"h2.stream", modulecode_h2$stream, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\62\134\163\164\162\145\141\155\56\160\171"
#endif
},
    {"h2.utilities", modulecode_h2$utilities, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\62\134\165\164\151\154\151\164\151\145\163\56\160\171"
#endif
},
    {"h2.windows", modulecode_h2$windows, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\62\134\167\151\156\144\157\167\163\56\160\171"
#endif
},
    {"hashlib", NULL, 61, 6867, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\150\141\163\150\154\151\142\56\160\171"
#endif
},
    {"hmac", NULL, 62, 6995, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\150\155\141\143\56\160\171"
#endif
},
    {"hpack", modulecode_hpack, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\160\141\143\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"hpack.compat", modulecode_hpack$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\160\141\143\153\134\143\157\155\160\141\164\56\160\171"
#endif
},
    {"hpack.exceptions", modulecode_hpack$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\160\141\143\153\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"hpack.hpack", modulecode_hpack$hpack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\160\141\143\153\134\150\160\141\143\153\56\160\171"
#endif
},
    {"hpack.huffman", modulecode_hpack$huffman, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\160\141\143\153\134\150\165\146\146\155\141\156\56\160\171"
#endif
},
    {"hpack.huffman_constants", modulecode_hpack$huffman_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\160\141\143\153\134\150\165\146\146\155\141\156\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"hpack.huffman_table", modulecode_hpack$huffman_table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\160\141\143\153\134\150\165\146\146\155\141\156\137\164\141\142\154\145\56\160\171"
#endif
},
    {"hpack.struct", modulecode_hpack$struct, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\160\141\143\153\134\163\164\162\165\143\164\56\160\171"
#endif
},
    {"hpack.table", modulecode_hpack$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\160\141\143\153\134\164\141\142\154\145\56\160\171"
#endif
},
    {"http", NULL, 63, 6438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\150\164\164\160\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"http.client", NULL, 64, 35135, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\150\164\164\160\134\143\154\151\145\156\164\56\160\171"
#endif
},
    {"http.cookiejar", NULL, 65, 53462, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\150\164\164\160\134\143\157\157\153\151\145\152\141\162\56\160\171"
#endif
},
    {"http.cookies", NULL, 66, 15360, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\150\164\164\160\134\143\157\157\153\151\145\163\56\160\171"
#endif
},
    {"httpcore", modulecode_httpcore, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"httpcore._api", modulecode_httpcore$_api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\141\160\151\56\160\171"
#endif
},
    {"httpcore._async", modulecode_httpcore$_async, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\141\163\171\156\143\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"httpcore._async.connection", modulecode_httpcore$_async$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\141\163\171\156\143\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"httpcore._async.connection_pool", modulecode_httpcore$_async$connection_pool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\141\163\171\156\143\134\143\157\156\156\145\143\164\151\157\156\137\160\157\157\154\56\160\171"
#endif
},
    {"httpcore._async.http11", modulecode_httpcore$_async$http11, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\141\163\171\156\143\134\150\164\164\160\61\61\56\160\171"
#endif
},
    {"httpcore._async.http2", modulecode_httpcore$_async$http2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\141\163\171\156\143\134\150\164\164\160\62\56\160\171"
#endif
},
    {"httpcore._async.http_proxy", modulecode_httpcore$_async$http_proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\141\163\171\156\143\134\150\164\164\160\137\160\162\157\170\171\56\160\171"
#endif
},
    {"httpcore._async.interfaces", modulecode_httpcore$_async$interfaces, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\141\163\171\156\143\134\151\156\164\145\162\146\141\143\145\163\56\160\171"
#endif
},
    {"httpcore._async.socks_proxy", modulecode_httpcore$_async$socks_proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\141\163\171\156\143\134\163\157\143\153\163\137\160\162\157\170\171\56\160\171"
#endif
},
    {"httpcore._exceptions", modulecode_httpcore$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"httpcore._models", modulecode_httpcore$_models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\155\157\144\145\154\163\56\160\171"
#endif
},
    {"httpcore._ssl", modulecode_httpcore$_ssl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\163\163\154\56\160\171"
#endif
},
    {"httpcore._sync", modulecode_httpcore$_sync, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\163\171\156\143\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"httpcore._sync.connection", modulecode_httpcore$_sync$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\163\171\156\143\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"httpcore._sync.connection_pool", modulecode_httpcore$_sync$connection_pool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\163\171\156\143\134\143\157\156\156\145\143\164\151\157\156\137\160\157\157\154\56\160\171"
#endif
},
    {"httpcore._sync.http11", modulecode_httpcore$_sync$http11, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\163\171\156\143\134\150\164\164\160\61\61\56\160\171"
#endif
},
    {"httpcore._sync.http2", modulecode_httpcore$_sync$http2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\163\171\156\143\134\150\164\164\160\62\56\160\171"
#endif
},
    {"httpcore._sync.http_proxy", modulecode_httpcore$_sync$http_proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\163\171\156\143\134\150\164\164\160\137\160\162\157\170\171\56\160\171"
#endif
},
    {"httpcore._sync.interfaces", modulecode_httpcore$_sync$interfaces, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\163\171\156\143\134\151\156\164\145\162\146\141\143\145\163\56\160\171"
#endif
},
    {"httpcore._sync.socks_proxy", modulecode_httpcore$_sync$socks_proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\163\171\156\143\134\163\157\143\153\163\137\160\162\157\170\171\56\160\171"
#endif
},
    {"httpcore._synchronization", modulecode_httpcore$_synchronization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\163\171\156\143\150\162\157\156\151\172\141\164\151\157\156\56\160\171"
#endif
},
    {"httpcore._trace", modulecode_httpcore$_trace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\164\162\141\143\145\56\160\171"
#endif
},
    {"httpcore._utils", modulecode_httpcore$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\137\165\164\151\154\163\56\160\171"
#endif
},
    {"httpcore.backends", modulecode_httpcore$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\142\141\143\153\145\156\144\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"httpcore.backends.asyncio", modulecode_httpcore$backends$asyncio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\142\141\143\153\145\156\144\163\134\141\163\171\156\143\151\157\56\160\171"
#endif
},
    {"httpcore.backends.auto", modulecode_httpcore$backends$auto, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\142\141\143\153\145\156\144\163\134\141\165\164\157\56\160\171"
#endif
},
    {"httpcore.backends.base", modulecode_httpcore$backends$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\142\141\143\153\145\156\144\163\134\142\141\163\145\56\160\171"
#endif
},
    {"httpcore.backends.sync", modulecode_httpcore$backends$sync, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\142\141\143\153\145\156\144\163\134\163\171\156\143\56\160\171"
#endif
},
    {"httpcore.backends.trio", modulecode_httpcore$backends$trio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\143\157\162\145\134\142\141\143\153\145\156\144\163\134\164\162\151\157\56\160\171"
#endif
},
    {"httpx", modulecode_httpx, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"httpx.__version__", modulecode_httpx$__version__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\137\166\145\162\163\151\157\156\137\137\56\160\171"
#endif
},
    {"httpx._api", modulecode_httpx$_api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\141\160\151\56\160\171"
#endif
},
    {"httpx._auth", modulecode_httpx$_auth, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\141\165\164\150\56\160\171"
#endif
},
    {"httpx._client", modulecode_httpx$_client, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\143\154\151\145\156\164\56\160\171"
#endif
},
    {"httpx._compat", modulecode_httpx$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"httpx._config", modulecode_httpx$_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\143\157\156\146\151\147\56\160\171"
#endif
},
    {"httpx._content", modulecode_httpx$_content, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\143\157\156\164\145\156\164\56\160\171"
#endif
},
    {"httpx._decoders", modulecode_httpx$_decoders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\144\145\143\157\144\145\162\163\56\160\171"
#endif
},
    {"httpx._exceptions", modulecode_httpx$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"httpx._main", modulecode_httpx$_main, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\155\141\151\156\56\160\171"
#endif
},
    {"httpx._models", modulecode_httpx$_models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\155\157\144\145\154\163\56\160\171"
#endif
},
    {"httpx._multipart", modulecode_httpx$_multipart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\155\165\154\164\151\160\141\162\164\56\160\171"
#endif
},
    {"httpx._status_codes", modulecode_httpx$_status_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\163\164\141\164\165\163\137\143\157\144\145\163\56\160\171"
#endif
},
    {"httpx._transports", modulecode_httpx$_transports, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\164\162\141\156\163\160\157\162\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"httpx._transports.asgi", modulecode_httpx$_transports$asgi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\164\162\141\156\163\160\157\162\164\163\134\141\163\147\151\56\160\171"
#endif
},
    {"httpx._transports.base", modulecode_httpx$_transports$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\164\162\141\156\163\160\157\162\164\163\134\142\141\163\145\56\160\171"
#endif
},
    {"httpx._transports.default", modulecode_httpx$_transports$default, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\164\162\141\156\163\160\157\162\164\163\134\144\145\146\141\165\154\164\56\160\171"
#endif
},
    {"httpx._transports.mock", modulecode_httpx$_transports$mock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\164\162\141\156\163\160\157\162\164\163\134\155\157\143\153\56\160\171"
#endif
},
    {"httpx._transports.wsgi", modulecode_httpx$_transports$wsgi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\164\162\141\156\163\160\157\162\164\163\134\167\163\147\151\56\160\171"
#endif
},
    {"httpx._types", modulecode_httpx$_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\164\171\160\145\163\56\160\171"
#endif
},
    {"httpx._urls", modulecode_httpx$_urls, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\165\162\154\163\56\160\171"
#endif
},
    {"httpx._utils", modulecode_httpx$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\164\164\160\170\134\137\165\164\151\154\163\56\160\171"
#endif
},
    {"hyperframe", modulecode_hyperframe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\171\160\145\162\146\162\141\155\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"hyperframe.exceptions", modulecode_hyperframe$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\171\160\145\162\146\162\141\155\145\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"hyperframe.flags", modulecode_hyperframe$flags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\171\160\145\162\146\162\141\155\145\134\146\154\141\147\163\56\160\171"
#endif
},
    {"hyperframe.frame", modulecode_hyperframe$frame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\150\171\160\145\162\146\162\141\155\145\134\146\162\141\155\145\56\160\171"
#endif
},
    {"idna", modulecode_idna, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"idna.core", modulecode_idna$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\143\157\162\145\56\160\171"
#endif
},
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\151\144\156\141\144\141\164\141\56\160\171"
#endif
},
    {"idna.intranges", modulecode_idna$intranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\151\156\164\162\141\156\147\145\163\56\160\171"
#endif
},
    {"idna.package_data", modulecode_idna$package_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\160\141\143\153\141\147\145\137\144\141\164\141\56\160\171"
#endif
},
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\165\164\163\64\66\144\141\164\141\56\160\171"
#endif
},
    {"logging", NULL, 67, 66925, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\154\157\147\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"lzma", NULL, 68, 12122, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\154\172\155\141\56\160\171"
#endif
},
    {"multiprocessing", NULL, 69, 691, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\55\160\157\163\164\114\157\141\144\56\160\171"
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\55\160\162\145\114\157\141\144\56\160\171"
#endif
},
    {"multiprocessing.connection", NULL, 70, 25673, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"multiprocessing.context", NULL, 71, 12876, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\143\157\156\164\145\170\164\56\160\171"
#endif
},
    {"multiprocessing.dummy", NULL, 72, 3890, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\144\165\155\155\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"multiprocessing.dummy.connection", NULL, 73, 2590, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\144\165\155\155\171\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"multiprocessing.forkserver", NULL, 74, 8448, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\146\157\162\153\163\145\162\166\145\162\56\160\171"
#endif
},
    {"multiprocessing.heap", NULL, 75, 7690, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\150\145\141\160\56\160\171"
#endif
},
    {"multiprocessing.managers", NULL, 76, 40784, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\155\141\156\141\147\145\162\163\56\160\171"
#endif
},
    {"multiprocessing.pool", NULL, 77, 25224, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\160\157\157\154\56\160\171"
#endif
},
    {"multiprocessing.popen_spawn_win32", NULL, 78, 3496, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\160\157\160\145\156\137\163\160\141\167\156\137\167\151\156\63\62\56\160\171"
#endif
},
    {"multiprocessing.process", NULL, 79, 11284, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"multiprocessing.queues", NULL, 80, 10307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\161\165\145\165\145\163\56\160\171"
#endif
},
    {"multiprocessing.reduction", NULL, 81, 8319, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\162\145\144\165\143\164\151\157\156\56\160\171"
#endif
},
    {"multiprocessing.resource_sharer", NULL, 82, 5323, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\162\145\163\157\165\162\143\145\137\163\150\141\162\145\162\56\160\171"
#endif
},
    {"multiprocessing.resource_tracker", NULL, 83, 5544, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\162\145\163\157\165\162\143\145\137\164\162\141\143\153\145\162\56\160\171"
#endif
},
    {"multiprocessing.shared_memory", NULL, 84, 14457, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\150\141\162\145\144\137\155\145\155\157\162\171\56\160\171"
#endif
},
    {"multiprocessing.sharedctypes", NULL, 85, 7122, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\150\141\162\145\144\143\164\171\160\145\163\56\160\171"
#endif
},
    {"multiprocessing.spawn", NULL, 86, 6759, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\160\141\167\156\56\160\171"
#endif
},
    {"multiprocessing.synchronize", NULL, 87, 11349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\163\171\156\143\150\162\157\156\151\172\145\56\160\171"
#endif
},
    {"multiprocessing.util", NULL, 88, 11519, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\155\165\154\164\151\160\162\157\143\145\163\163\151\156\147\134\165\164\151\154\56\160\171"
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\143\157\156\146\151\147\137\137\56\160\171"
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\144\151\163\164\162\151\142\165\164\157\162\137\151\156\151\164\56\160\171"
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\147\154\157\142\141\154\163\56\160\171"
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\160\171\164\145\163\164\164\145\163\164\145\162\56\160\171"
#endif
},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\151\156\163\160\145\143\164\56\160\171"
#endif
},
    {"numpy.compat._pep440", modulecode_numpy$compat$_pep440, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\160\145\160\64\64\60\56\160\171"
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\160\171\63\153\56\160\171"
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\56\160\171"
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\163\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\56\160\171"
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\137\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\151\156\164\145\162\156\141\154\56\160\171"
#endif
},
    {"numpy.core._machar", modulecode_numpy$core$_machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\141\143\150\141\162\56\160\171"
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\163\164\162\151\156\147\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\164\171\160\145\137\141\154\151\141\163\145\163\56\160\171"
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\165\146\165\156\143\137\143\157\156\146\151\147\56\160\171"
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\141\162\162\141\171\160\162\151\156\164\56\160\171"
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\144\145\146\143\150\141\162\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\145\151\156\163\165\155\146\165\156\143\56\160\171"
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\162\157\155\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\147\145\164\154\151\155\151\164\163\56\160\171"
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\145\155\155\141\160\56\160\171"
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\165\154\164\151\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\157\166\145\162\162\151\144\145\163\56\160\171"
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\165\155\141\164\150\56\160\171"
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\164\171\160\145\163\154\151\142\56\160\171"
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\56\160\171"
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\150\145\154\160\145\162\56\160\171"
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\144\141\164\141\163\157\165\162\143\145\56\160\171"
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\151\157\164\157\157\154\163\56\160\171"
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\160\141\144\56\160\171"
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\163\145\164\157\160\163\56\160\171"
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\164\145\162\141\164\157\162\56\160\171"
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\157\162\155\141\164\56\160\171"
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\150\151\163\164\157\147\162\141\155\163\56\160\171"
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\151\156\144\145\170\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\155\151\170\151\156\163\56\160\171"
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\141\156\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\160\171\151\157\56\160\171"
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\143\151\155\141\164\150\56\160\171"
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\164\162\151\144\145\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\167\157\144\151\155\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\171\160\145\137\143\150\145\143\153\56\160\171"
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\146\165\156\143\154\151\153\145\56\160\171"
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\154\151\156\141\154\147\56\160\171"
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\143\157\162\145\56\160\171"
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\145\170\164\162\141\163\56\160\171"
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\155\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\144\145\146\155\141\164\162\151\170\56\160\171"
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\160\157\154\171\142\141\163\145\56\160\171"
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\143\150\145\142\171\163\150\145\166\56\160\171"
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\56\160\171"
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\137\145\56\160\171"
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\141\147\165\145\162\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\145\147\145\156\144\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\160\151\143\153\154\145\56\160\171"
#endif
},
    {"numpy.testing", NULL, 89, 2382, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\164\145\163\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"oauthlib", modulecode_oauthlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"oauthlib.common", modulecode_oauthlib$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"oauthlib.oauth2", modulecode_oauthlib$oauth2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749", modulecode_oauthlib$oauth2$rfc6749, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.clients", modulecode_oauthlib$oauth2$rfc6749$clients, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\143\154\151\145\156\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.clients.backend_application", modulecode_oauthlib$oauth2$rfc6749$clients$backend_application, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\143\154\151\145\156\164\163\134\142\141\143\153\145\156\144\137\141\160\160\154\151\143\141\164\151\157\156\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.clients.base", modulecode_oauthlib$oauth2$rfc6749$clients$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\143\154\151\145\156\164\163\134\142\141\163\145\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.clients.legacy_application", modulecode_oauthlib$oauth2$rfc6749$clients$legacy_application, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\143\154\151\145\156\164\163\134\154\145\147\141\143\171\137\141\160\160\154\151\143\141\164\151\157\156\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.clients.mobile_application", modulecode_oauthlib$oauth2$rfc6749$clients$mobile_application, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\143\154\151\145\156\164\163\134\155\157\142\151\154\145\137\141\160\160\154\151\143\141\164\151\157\156\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.clients.service_application", modulecode_oauthlib$oauth2$rfc6749$clients$service_application, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\143\154\151\145\156\164\163\134\163\145\162\166\151\143\145\137\141\160\160\154\151\143\141\164\151\157\156\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.clients.web_application", modulecode_oauthlib$oauth2$rfc6749$clients$web_application, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\143\154\151\145\156\164\163\134\167\145\142\137\141\160\160\154\151\143\141\164\151\157\156\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.endpoints", modulecode_oauthlib$oauth2$rfc6749$endpoints, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\145\156\144\160\157\151\156\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.endpoints.authorization", modulecode_oauthlib$oauth2$rfc6749$endpoints$authorization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\145\156\144\160\157\151\156\164\163\134\141\165\164\150\157\162\151\172\141\164\151\157\156\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.endpoints.base", modulecode_oauthlib$oauth2$rfc6749$endpoints$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\145\156\144\160\157\151\156\164\163\134\142\141\163\145\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.endpoints.introspect", modulecode_oauthlib$oauth2$rfc6749$endpoints$introspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\145\156\144\160\157\151\156\164\163\134\151\156\164\162\157\163\160\145\143\164\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.endpoints.metadata", modulecode_oauthlib$oauth2$rfc6749$endpoints$metadata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\145\156\144\160\157\151\156\164\163\134\155\145\164\141\144\141\164\141\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.endpoints.pre_configured", modulecode_oauthlib$oauth2$rfc6749$endpoints$pre_configured, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\145\156\144\160\157\151\156\164\163\134\160\162\145\137\143\157\156\146\151\147\165\162\145\144\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.endpoints.resource", modulecode_oauthlib$oauth2$rfc6749$endpoints$resource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\145\156\144\160\157\151\156\164\163\134\162\145\163\157\165\162\143\145\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.endpoints.revocation", modulecode_oauthlib$oauth2$rfc6749$endpoints$revocation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\145\156\144\160\157\151\156\164\163\134\162\145\166\157\143\141\164\151\157\156\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.endpoints.token", modulecode_oauthlib$oauth2$rfc6749$endpoints$token, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\145\156\144\160\157\151\156\164\163\134\164\157\153\145\156\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.errors", modulecode_oauthlib$oauth2$rfc6749$errors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\145\162\162\157\162\163\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.grant_types", modulecode_oauthlib$oauth2$rfc6749$grant_types, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\147\162\141\156\164\137\164\171\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.grant_types.authorization_code", modulecode_oauthlib$oauth2$rfc6749$grant_types$authorization_code, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\147\162\141\156\164\137\164\171\160\145\163\134\141\165\164\150\157\162\151\172\141\164\151\157\156\137\143\157\144\145\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.grant_types.base", modulecode_oauthlib$oauth2$rfc6749$grant_types$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\147\162\141\156\164\137\164\171\160\145\163\134\142\141\163\145\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.grant_types.client_credentials", modulecode_oauthlib$oauth2$rfc6749$grant_types$client_credentials, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\147\162\141\156\164\137\164\171\160\145\163\134\143\154\151\145\156\164\137\143\162\145\144\145\156\164\151\141\154\163\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.grant_types.implicit", modulecode_oauthlib$oauth2$rfc6749$grant_types$implicit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\147\162\141\156\164\137\164\171\160\145\163\134\151\155\160\154\151\143\151\164\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.grant_types.refresh_token", modulecode_oauthlib$oauth2$rfc6749$grant_types$refresh_token, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\147\162\141\156\164\137\164\171\160\145\163\134\162\145\146\162\145\163\150\137\164\157\153\145\156\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.grant_types.resource_owner_password_credentials", modulecode_oauthlib$oauth2$rfc6749$grant_types$resource_owner_password_credentials, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\147\162\141\156\164\137\164\171\160\145\163\134\162\145\163\157\165\162\143\145\137\157\167\156\145\162\137\160\141\163\163\167\157\162\144\137\143\162\145\144\145\156\164\151\141\154\163\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.parameters", modulecode_oauthlib$oauth2$rfc6749$parameters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\160\141\162\141\155\145\164\145\162\163\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.request_validator", modulecode_oauthlib$oauth2$rfc6749$request_validator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\162\145\161\165\145\163\164\137\166\141\154\151\144\141\164\157\162\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.tokens", modulecode_oauthlib$oauth2$rfc6749$tokens, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\164\157\153\145\156\163\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc6749.utils", modulecode_oauthlib$oauth2$rfc6749$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\66\67\64\71\134\165\164\151\154\163\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc8628", modulecode_oauthlib$oauth2$rfc8628, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\70\66\62\70\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc8628.clients", modulecode_oauthlib$oauth2$rfc8628$clients, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\70\66\62\70\134\143\154\151\145\156\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"oauthlib.oauth2.rfc8628.clients.device", modulecode_oauthlib$oauth2$rfc8628$clients$device, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\157\141\165\164\150\62\134\162\146\143\70\66\62\70\134\143\154\151\145\156\164\163\134\144\145\166\151\143\145\56\160\171"
#endif
},
    {"oauthlib.signals", modulecode_oauthlib$signals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\163\151\147\156\141\154\163\56\160\171"
#endif
},
    {"oauthlib.uri_validate", modulecode_oauthlib$uri_validate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\141\165\164\150\154\151\142\134\165\162\151\137\166\141\154\151\144\141\164\145\56\160\171"
#endif
},
    {"pywin32_bootstrap", modulecode_pywin32_bootstrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\134\154\151\142\134\160\171\167\151\156\63\62\137\142\157\157\164\163\164\162\141\160\56\160\171"
#endif
},
    {"pywin32_system32", modulecode_pywin32_system32, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\167\151\156\63\62\137\163\171\163\164\145\155\63\62"
#endif
},
    {"queue", NULL, 90, 10814, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\161\165\145\165\145\56\160\171"
#endif
},
    {"repath", modulecode_repath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\160\141\164\150\56\160\171"
#endif
},
    {"rfc3986", modulecode_rfc3986, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"rfc3986._mixin", modulecode_rfc3986$_mixin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\137\155\151\170\151\156\56\160\171"
#endif
},
    {"rfc3986.abnf_regexp", modulecode_rfc3986$abnf_regexp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\141\142\156\146\137\162\145\147\145\170\160\56\160\171"
#endif
},
    {"rfc3986.api", modulecode_rfc3986$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\141\160\151\56\160\171"
#endif
},
    {"rfc3986.compat", modulecode_rfc3986$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\143\157\155\160\141\164\56\160\171"
#endif
},
    {"rfc3986.exceptions", modulecode_rfc3986$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"rfc3986.iri", modulecode_rfc3986$iri, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\151\162\151\56\160\171"
#endif
},
    {"rfc3986.misc", modulecode_rfc3986$misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\155\151\163\143\56\160\171"
#endif
},
    {"rfc3986.normalizers", modulecode_rfc3986$normalizers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\156\157\162\155\141\154\151\172\145\162\163\56\160\171"
#endif
},
    {"rfc3986.parseresult", modulecode_rfc3986$parseresult, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\160\141\162\163\145\162\145\163\165\154\164\56\160\171"
#endif
},
    {"rfc3986.uri", modulecode_rfc3986$uri, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\165\162\151\56\160\171"
#endif
},
    {"rfc3986.validators", modulecode_rfc3986$validators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\146\143\63\71\70\66\134\166\141\154\151\144\141\164\157\162\163\56\160\171"
#endif
},
    {"runpy", NULL, 91, 9433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\162\165\156\160\171\56\160\171"
#endif
},
    {"secrets", NULL, 92, 2197, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\145\143\162\145\164\163\56\160\171"
#endif
},
    {"selectors", NULL, 93, 17127, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\145\154\145\143\164\157\162\163\56\160\171"
#endif
},
    {"site", NULL, 94, 17402, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\56\160\171"
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\151\170\56\160\171"
#endif
},
    {"sniffio", modulecode_sniffio, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\156\151\146\146\151\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"sniffio._impl", modulecode_sniffio$_impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\156\151\146\146\151\157\134\137\151\155\160\154\56\160\171"
#endif
},
    {"sniffio._version", modulecode_sniffio$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\156\151\146\146\151\157\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"socket", NULL, 95, 28973, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\157\143\153\145\164\56\160\171"
#endif
},
    {"ssl", NULL, 96, 44842, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\163\154\56\160\171"
#endif
},
    {"subprocess", NULL, 97, 44529, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\165\142\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"typing_extensions", modulecode_typing_extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\164\171\160\151\156\147\137\145\170\164\145\156\163\151\157\156\163\56\160\171"
#endif
},
    {"urllib", NULL, 98, 153, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\165\162\154\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"urllib.error", NULL, 99, 2843, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\165\162\154\154\151\142\134\145\162\162\157\162\56\160\171"
#endif
},
    {"urllib.parse", NULL, 100, 33818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\165\162\154\154\151\142\134\160\141\162\163\145\56\160\171"
#endif
},
    {"urllib.request", NULL, 101, 71360, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\165\162\154\154\151\142\134\162\145\161\165\145\163\164\56\160\171"
#endif
},
    {"urllib.response", NULL, 102, 3489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\165\162\154\154\151\142\134\162\145\163\160\157\156\163\145\56\160\171"
#endif
},
    {"uuid", NULL, 103, 22489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\165\165\151\144\56\160\171"
#endif
},
    {"websocket", modulecode_websocket, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"websocket._abnf", modulecode_websocket$_abnf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\141\142\156\146\56\160\171"
#endif
},
    {"websocket._app", modulecode_websocket$_app, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\141\160\160\56\160\171"
#endif
},
    {"websocket._cookiejar", modulecode_websocket$_cookiejar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\143\157\157\153\151\145\152\141\162\56\160\171"
#endif
},
    {"websocket._core", modulecode_websocket$_core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\143\157\162\145\56\160\171"
#endif
},
    {"websocket._exceptions", modulecode_websocket$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"websocket._handshake", modulecode_websocket$_handshake, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\150\141\156\144\163\150\141\153\145\56\160\171"
#endif
},
    {"websocket._http", modulecode_websocket$_http, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\150\164\164\160\56\160\171"
#endif
},
    {"websocket._logging", modulecode_websocket$_logging, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\154\157\147\147\151\156\147\56\160\171"
#endif
},
    {"websocket._socket", modulecode_websocket$_socket, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\163\157\143\153\145\164\56\160\171"
#endif
},
    {"websocket._ssl_compat", modulecode_websocket$_ssl_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\163\163\154\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"websocket._url", modulecode_websocket$_url, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\165\162\154\56\160\171"
#endif
},
    {"websocket._utils", modulecode_websocket$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\134\137\165\164\151\154\163\56\160\171"
#endif
},
    {"websockets", modulecode_websockets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"websockets.client", modulecode_websockets$client, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\143\154\151\145\156\164\56\160\171"
#endif
},
    {"websockets.connection", modulecode_websockets$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"websockets.datastructures", modulecode_websockets$datastructures, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\144\141\164\141\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"websockets.exceptions", modulecode_websockets$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"websockets.extensions", modulecode_websockets$extensions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\145\170\164\145\156\163\151\157\156\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"websockets.extensions.base", modulecode_websockets$extensions$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\145\170\164\145\156\163\151\157\156\163\134\142\141\163\145\56\160\171"
#endif
},
    {"websockets.extensions.permessage_deflate", modulecode_websockets$extensions$permessage_deflate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\145\170\164\145\156\163\151\157\156\163\134\160\145\162\155\145\163\163\141\147\145\137\144\145\146\154\141\164\145\56\160\171"
#endif
},
    {"websockets.frames", modulecode_websockets$frames, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\146\162\141\155\145\163\56\160\171"
#endif
},
    {"websockets.headers", modulecode_websockets$headers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\150\145\141\144\145\162\163\56\160\171"
#endif
},
    {"websockets.http", modulecode_websockets$http, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\150\164\164\160\56\160\171"
#endif
},
    {"websockets.http11", modulecode_websockets$http11, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\150\164\164\160\61\61\56\160\171"
#endif
},
    {"websockets.imports", modulecode_websockets$imports, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\151\155\160\157\162\164\163\56\160\171"
#endif
},
    {"websockets.legacy", modulecode_websockets$legacy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\154\145\147\141\143\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"websockets.legacy.client", modulecode_websockets$legacy$client, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\154\145\147\141\143\171\134\143\154\151\145\156\164\56\160\171"
#endif
},
    {"websockets.legacy.compatibility", modulecode_websockets$legacy$compatibility, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\154\145\147\141\143\171\134\143\157\155\160\141\164\151\142\151\154\151\164\171\56\160\171"
#endif
},
    {"websockets.legacy.framing", modulecode_websockets$legacy$framing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\154\145\147\141\143\171\134\146\162\141\155\151\156\147\56\160\171"
#endif
},
    {"websockets.legacy.handshake", modulecode_websockets$legacy$handshake, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\154\145\147\141\143\171\134\150\141\156\144\163\150\141\153\145\56\160\171"
#endif
},
    {"websockets.legacy.http", modulecode_websockets$legacy$http, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\154\145\147\141\143\171\134\150\164\164\160\56\160\171"
#endif
},
    {"websockets.legacy.protocol", modulecode_websockets$legacy$protocol, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\154\145\147\141\143\171\134\160\162\157\164\157\143\157\154\56\160\171"
#endif
},
    {"websockets.streams", modulecode_websockets$streams, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\163\164\162\145\141\155\163\56\160\171"
#endif
},
    {"websockets.typing", modulecode_websockets$typing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\164\171\160\151\156\147\56\160\171"
#endif
},
    {"websockets.uri", modulecode_websockets$uri, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\165\162\151\56\160\171"
#endif
},
    {"websockets.utils", modulecode_websockets$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\165\164\151\154\163\56\160\171"
#endif
},
    {"websockets.version", modulecode_websockets$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\145\142\163\157\143\153\145\164\163\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"xml", NULL, 104, 715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xml.parsers", NULL, 105, 330, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\170\155\154\134\160\141\162\163\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xml.parsers.expat", NULL, 106, 359, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\170\155\154\134\160\141\162\163\145\162\163\134\145\170\160\141\164\56\160\171"
#endif
},
    {"xmlrpc", NULL, 107, 153, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\170\155\154\162\160\143\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xmlrpc.client", NULL, 108, 34410, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\113\101\115\101\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\170\155\154\162\160\143\134\143\154\151\145\156\164\56\160\171"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

