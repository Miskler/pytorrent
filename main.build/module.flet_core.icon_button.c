/* Generated code for Python module 'flet_core.icon_button'
 * created by Nuitka version 1.6.4
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_flet_core$icon_button" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$icon_button;
PyDictObject *moduledict_flet_core$icon_button;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[165];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[165];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.icon_button"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 165; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_flet_core$icon_button(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 165; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9278a1afa7626cd32bafd320f83cef1d;
static PyCodeObject *codeobj_26b8adb11367f728bf687ad33435dcf6;
static PyCodeObject *codeobj_d6b62e9d9f5a20c6c8a425ff304b000f;
static PyCodeObject *codeobj_8bb47f78aa8d556d8f99531da117d5b9;
static PyCodeObject *codeobj_97b7c32902eaed9a60db36dc667bf7f7;
static PyCodeObject *codeobj_4583dbb484cc53804f53a7b8578a0868;
static PyCodeObject *codeobj_b859fcb44f9fa0c61e10f42131fd4e7a;
static PyCodeObject *codeobj_e313a241c0ce37f1f9c7408ab3aee9f6;
static PyCodeObject *codeobj_9a78f656a5de14d188bd46eb97fd5bd0;
static PyCodeObject *codeobj_c40698d7e4626c67f87d27b3df6c4e43;
static PyCodeObject *codeobj_b265ec15053c5fea440577a0a24e0fe1;
static PyCodeObject *codeobj_44114986c3c4d5511e9e9b36a1b4b143;
static PyCodeObject *codeobj_56db09d11148206a68ddb012be42ea37;
static PyCodeObject *codeobj_f954c177cc7c480c99f419a2352be0ab;
static PyCodeObject *codeobj_326796b03a89d32f2aa3be83ff935702;
static PyCodeObject *codeobj_d76827b52ffbbe2c2dfbe31ba956d451;
static PyCodeObject *codeobj_a8a392288b1eaac1c7b468ae52e5711a;
static PyCodeObject *codeobj_e689a41b56507463d792f36570f1e262;
static PyCodeObject *codeobj_a356b5a14b8bfdf9a827ec3b28d8a46f;
static PyCodeObject *codeobj_eb85e9e054fc3e26589be59e29474bbb;
static PyCodeObject *codeobj_dd21a984d7c7c9818180d20960e53a27;
static PyCodeObject *codeobj_5d859493b3d7bd234c2505ed4a911731;
static PyCodeObject *codeobj_e597525d2e0443498635697a3125a8a5;
static PyCodeObject *codeobj_38656a600302e9864976143917a6eadd;
static PyCodeObject *codeobj_69363085aaa9f8906969955043bb5650;
static PyCodeObject *codeobj_dcdfd18df59fc9bf075cc0c16f0c3d01;
static PyCodeObject *codeobj_1440653ddd519d49cf7375e74882a295;
static PyCodeObject *codeobj_93a6c6a86b08c86e5d43066f7a438c8f;
static PyCodeObject *codeobj_dbdd64fa408b96bf620277eaf471637f;
static PyCodeObject *codeobj_d0a73e2893ddbbdf388437c8294cce30;
static PyCodeObject *codeobj_f2605739071f71698e5ffd9549826a69;
static PyCodeObject *codeobj_2b4a5b5dc89b32017fd5a7c3c52c52bd;
static PyCodeObject *codeobj_4b1f171da46f4c81e8e7f0e8e8568073;
static PyCodeObject *codeobj_296cd3e3f1bcd9b0ed5fb4474c52957e;
static PyCodeObject *codeobj_2dd330fee8a4f3ca5b07c0ac98702136;
static PyCodeObject *codeobj_7a0aa5a4fbbce39723b3f71c4caf5540;
static PyCodeObject *codeobj_e53579356d00126edcf4f348a21702f8;
static PyCodeObject *codeobj_b2c1e8a502730ad27ec737354f906b72;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[61]; CHECK_OBJECT(module_filename_obj);
    codeobj_9278a1afa7626cd32bafd320f83cef1d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[157], mod_consts[157], NULL, NULL, 0, 0, 0);
    codeobj_26b8adb11367f728bf687ad33435dcf6 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[158], NULL, 0, 0, 0);
    codeobj_d6b62e9d9f5a20c6c8a425ff304b000f = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[159], NULL, 42, 0, 0);
    codeobj_8bb47f78aa8d556d8f99531da117d5b9 = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], mod_consts[160], mod_consts[158], 1, 0, 0);
    codeobj_97b7c32902eaed9a60db36dc667bf7f7 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[161], NULL, 1, 0, 0);
    codeobj_4583dbb484cc53804f53a7b8578a0868 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[161], NULL, 1, 0, 0);
    codeobj_b859fcb44f9fa0c61e10f42131fd4e7a = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[161], NULL, 1, 0, 0);
    codeobj_e313a241c0ce37f1f9c7408ab3aee9f6 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[162], NULL, 2, 0, 0);
    codeobj_9a78f656a5de14d188bd46eb97fd5bd0 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[161], NULL, 1, 0, 0);
    codeobj_c40698d7e4626c67f87d27b3df6c4e43 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[162], NULL, 2, 0, 0);
    codeobj_b265ec15053c5fea440577a0a24e0fe1 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[161], NULL, 1, 0, 0);
    codeobj_44114986c3c4d5511e9e9b36a1b4b143 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[162], NULL, 2, 0, 0);
    codeobj_56db09d11148206a68ddb012be42ea37 = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[161], NULL, 1, 0, 0);
    codeobj_f954c177cc7c480c99f419a2352be0ab = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[161], NULL, 1, 0, 0);
    codeobj_326796b03a89d32f2aa3be83ff935702 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[161], NULL, 1, 0, 0);
    codeobj_d76827b52ffbbe2c2dfbe31ba956d451 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[162], NULL, 2, 0, 0);
    codeobj_a8a392288b1eaac1c7b468ae52e5711a = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[161], NULL, 1, 0, 0);
    codeobj_e689a41b56507463d792f36570f1e262 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[162], NULL, 2, 0, 0);
    codeobj_a356b5a14b8bfdf9a827ec3b28d8a46f = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[161], NULL, 1, 0, 0);
    codeobj_eb85e9e054fc3e26589be59e29474bbb = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[162], NULL, 2, 0, 0);
    codeobj_dd21a984d7c7c9818180d20960e53a27 = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[161], NULL, 1, 0, 0);
    codeobj_5d859493b3d7bd234c2505ed4a911731 = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[163], NULL, 2, 0, 0);
    codeobj_e597525d2e0443498635697a3125a8a5 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[161], NULL, 1, 0, 0);
    codeobj_38656a600302e9864976143917a6eadd = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[163], NULL, 2, 0, 0);
    codeobj_69363085aaa9f8906969955043bb5650 = MAKE_CODE_OBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[161], NULL, 1, 0, 0);
    codeobj_dcdfd18df59fc9bf075cc0c16f0c3d01 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[163], NULL, 2, 0, 0);
    codeobj_1440653ddd519d49cf7375e74882a295 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[161], NULL, 1, 0, 0);
    codeobj_93a6c6a86b08c86e5d43066f7a438c8f = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[162], NULL, 2, 0, 0);
    codeobj_dbdd64fa408b96bf620277eaf471637f = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[161], NULL, 1, 0, 0);
    codeobj_d0a73e2893ddbbdf388437c8294cce30 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[162], NULL, 2, 0, 0);
    codeobj_f2605739071f71698e5ffd9549826a69 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[161], NULL, 1, 0, 0);
    codeobj_2b4a5b5dc89b32017fd5a7c3c52c52bd = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[162], NULL, 2, 0, 0);
    codeobj_4b1f171da46f4c81e8e7f0e8e8568073 = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[161], NULL, 1, 0, 0);
    codeobj_296cd3e3f1bcd9b0ed5fb4474c52957e = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[162], NULL, 2, 0, 0);
    codeobj_2dd330fee8a4f3ca5b07c0ac98702136 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[161], NULL, 1, 0, 0);
    codeobj_7a0aa5a4fbbce39723b3f71c4caf5540 = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[162], NULL, 2, 0, 0);
    codeobj_e53579356d00126edcf4f348a21702f8 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[161], NULL, 1, 0, 0);
    codeobj_b2c1e8a502730ad27ec737354f906b72 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[162], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_flet_core$icon_button$$$function__6_focus_async$$$coroutine__1_focus_async(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__10_selected_icon();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__11_icon_size();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__12_icon_size();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__13_icon_color();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__14_icon_color();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__15_selected_icon_color();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__16_selected_icon_color();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__17_bgcolor();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__18_bgcolor();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__19_selected(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__20_selected(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__21_style(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__22_style(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__23_url();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__24_url();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__25_url_target();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__26_url_target();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__27_on_click();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__28_on_click();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__29_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__30_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__31_autofocus(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__32_autofocus(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__33_on_focus();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__34_on_focus();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__35_on_blur();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__36_on_blur();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__3__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__4__get_children();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__5_focus();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__6_focus_async();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__7_icon();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__8_icon();


static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__9_selected_icon();


// The module function definitions.
static PyObject *impl_flet_core$icon_button$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_icon = python_pars[1];
    PyObject *par_ref = python_pars[2];
    PyObject *par_key = python_pars[3];
    PyObject *par_width = python_pars[4];
    PyObject *par_height = python_pars[5];
    PyObject *par_left = python_pars[6];
    PyObject *par_top = python_pars[7];
    PyObject *par_right = python_pars[8];
    PyObject *par_bottom = python_pars[9];
    PyObject *par_expand = python_pars[10];
    PyObject *par_col = python_pars[11];
    PyObject *par_opacity = python_pars[12];
    PyObject *par_rotate = python_pars[13];
    PyObject *par_scale = python_pars[14];
    PyObject *par_offset = python_pars[15];
    PyObject *par_aspect_ratio = python_pars[16];
    PyObject *par_animate_opacity = python_pars[17];
    PyObject *par_animate_size = python_pars[18];
    PyObject *par_animate_position = python_pars[19];
    PyObject *par_animate_rotation = python_pars[20];
    PyObject *par_animate_scale = python_pars[21];
    PyObject *par_animate_offset = python_pars[22];
    PyObject *par_on_animation_end = python_pars[23];
    PyObject *par_tooltip = python_pars[24];
    PyObject *par_visible = python_pars[25];
    PyObject *par_disabled = python_pars[26];
    PyObject *par_data = python_pars[27];
    PyObject *par_icon_size = python_pars[28];
    PyObject *par_icon_color = python_pars[29];
    PyObject *par_selected_icon = python_pars[30];
    PyObject *par_selected_icon_color = python_pars[31];
    PyObject *par_selected = python_pars[32];
    PyObject *par_bgcolor = python_pars[33];
    PyObject *par_style = python_pars[34];
    PyObject *par_content = python_pars[35];
    PyObject *par_autofocus = python_pars[36];
    PyObject *par_url = python_pars[37];
    PyObject *par_url_target = python_pars[38];
    PyObject *par_on_click = python_pars[39];
    PyObject *par_on_focus = python_pars[40];
    PyObject *par_on_blur = python_pars[41];
    struct Nuitka_FrameObject *frame_d6b62e9d9f5a20c6c8a425ff304b000f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d6b62e9d9f5a20c6c8a425ff304b000f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6b62e9d9f5a20c6c8a425ff304b000f)) {
        Py_XDECREF(cache_frame_d6b62e9d9f5a20c6c8a425ff304b000f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6b62e9d9f5a20c6c8a425ff304b000f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6b62e9d9f5a20c6c8a425ff304b000f = MAKE_FUNCTION_FRAME(codeobj_d6b62e9d9f5a20c6c8a425ff304b000f, module_flet_core$icon_button, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6b62e9d9f5a20c6c8a425ff304b000f->m_type_description == NULL);
    frame_d6b62e9d9f5a20c6c8a425ff304b000f = cache_frame_d6b62e9d9f5a20c6c8a425ff304b000f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d6b62e9d9f5a20c6c8a425ff304b000f);
    assert(Py_REFCNT(frame_d6b62e9d9f5a20c6c8a425ff304b000f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        PyObject *tmp_kw_call_dict_value_10_1;
        PyObject *tmp_kw_call_dict_value_11_1;
        PyObject *tmp_kw_call_dict_value_12_1;
        PyObject *tmp_kw_call_dict_value_13_1;
        PyObject *tmp_kw_call_dict_value_14_1;
        PyObject *tmp_kw_call_dict_value_15_1;
        PyObject *tmp_kw_call_dict_value_16_1;
        PyObject *tmp_kw_call_dict_value_17_1;
        PyObject *tmp_kw_call_dict_value_18_1;
        PyObject *tmp_kw_call_dict_value_19_1;
        PyObject *tmp_kw_call_dict_value_20_1;
        PyObject *tmp_kw_call_dict_value_21_1;
        PyObject *tmp_kw_call_dict_value_22_1;
        PyObject *tmp_kw_call_dict_value_23_1;
        PyObject *tmp_kw_call_dict_value_24_1;
        PyObject *tmp_kw_call_dict_value_25_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        CHECK_OBJECT(par_key);
        tmp_kw_call_dict_value_1_1 = par_key;
        CHECK_OBJECT(par_width);
        tmp_kw_call_dict_value_2_1 = par_width;
        CHECK_OBJECT(par_height);
        tmp_kw_call_dict_value_3_1 = par_height;
        CHECK_OBJECT(par_left);
        tmp_kw_call_dict_value_4_1 = par_left;
        CHECK_OBJECT(par_top);
        tmp_kw_call_dict_value_5_1 = par_top;
        CHECK_OBJECT(par_right);
        tmp_kw_call_dict_value_6_1 = par_right;
        CHECK_OBJECT(par_bottom);
        tmp_kw_call_dict_value_7_1 = par_bottom;
        CHECK_OBJECT(par_expand);
        tmp_kw_call_dict_value_8_1 = par_expand;
        CHECK_OBJECT(par_col);
        tmp_kw_call_dict_value_9_1 = par_col;
        CHECK_OBJECT(par_opacity);
        tmp_kw_call_dict_value_10_1 = par_opacity;
        CHECK_OBJECT(par_rotate);
        tmp_kw_call_dict_value_11_1 = par_rotate;
        CHECK_OBJECT(par_scale);
        tmp_kw_call_dict_value_12_1 = par_scale;
        CHECK_OBJECT(par_offset);
        tmp_kw_call_dict_value_13_1 = par_offset;
        CHECK_OBJECT(par_aspect_ratio);
        tmp_kw_call_dict_value_14_1 = par_aspect_ratio;
        CHECK_OBJECT(par_animate_opacity);
        tmp_kw_call_dict_value_15_1 = par_animate_opacity;
        CHECK_OBJECT(par_animate_size);
        tmp_kw_call_dict_value_16_1 = par_animate_size;
        CHECK_OBJECT(par_animate_position);
        tmp_kw_call_dict_value_17_1 = par_animate_position;
        CHECK_OBJECT(par_animate_rotation);
        tmp_kw_call_dict_value_18_1 = par_animate_rotation;
        CHECK_OBJECT(par_animate_scale);
        tmp_kw_call_dict_value_19_1 = par_animate_scale;
        CHECK_OBJECT(par_animate_offset);
        tmp_kw_call_dict_value_20_1 = par_animate_offset;
        CHECK_OBJECT(par_on_animation_end);
        tmp_kw_call_dict_value_21_1 = par_on_animation_end;
        CHECK_OBJECT(par_tooltip);
        tmp_kw_call_dict_value_22_1 = par_tooltip;
        CHECK_OBJECT(par_visible);
        tmp_kw_call_dict_value_23_1 = par_visible;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_24_1 = par_disabled;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_25_1 = par_data;
        frame_d6b62e9d9f5a20c6c8a425ff304b000f->m_frame.f_lineno = 103;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[26] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1, tmp_kw_call_dict_value_25_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_icon);
        tmp_assattr_value_1 = par_icon;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_icon_size);
        tmp_assattr_value_2 = par_icon_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_icon_color);
        tmp_assattr_value_3 = par_icon_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_selected_icon);
        tmp_assattr_value_4 = par_selected_icon;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_selected_icon_color);
        tmp_assattr_value_5 = par_selected_icon_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_selected);
        tmp_assattr_value_6 = par_selected;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_bgcolor);
        tmp_assattr_value_7 = par_bgcolor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_style);
        tmp_assattr_value_8 = par_style;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[10], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_content);
        tmp_assattr_value_9 = par_content;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[11], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_autofocus);
        tmp_assattr_value_10 = par_autofocus;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[12], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_url);
        tmp_assattr_value_11 = par_url;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[13], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_url_target);
        tmp_assattr_value_12 = par_url_target;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[14], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_on_click);
        tmp_assattr_value_13 = par_on_click;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[15], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(par_on_focus);
        tmp_assattr_value_14 = par_on_focus;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[16], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_on_blur);
        tmp_assattr_value_15 = par_on_blur;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[17], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6b62e9d9f5a20c6c8a425ff304b000f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6b62e9d9f5a20c6c8a425ff304b000f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6b62e9d9f5a20c6c8a425ff304b000f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6b62e9d9f5a20c6c8a425ff304b000f,
        type_description_1,
        par_self,
        par_icon,
        par_ref,
        par_key,
        par_width,
        par_height,
        par_left,
        par_top,
        par_right,
        par_bottom,
        par_expand,
        par_col,
        par_opacity,
        par_rotate,
        par_scale,
        par_offset,
        par_aspect_ratio,
        par_animate_opacity,
        par_animate_size,
        par_animate_position,
        par_animate_rotation,
        par_animate_scale,
        par_animate_offset,
        par_on_animation_end,
        par_tooltip,
        par_visible,
        par_disabled,
        par_data,
        par_icon_size,
        par_icon_color,
        par_selected_icon,
        par_selected_icon_color,
        par_selected,
        par_bgcolor,
        par_style,
        par_content,
        par_autofocus,
        par_url,
        par_url_target,
        par_on_click,
        par_on_focus,
        par_on_blur
    );


    // Release cached frame if used for exception.
    if (frame_d6b62e9d9f5a20c6c8a425ff304b000f == cache_frame_d6b62e9d9f5a20c6c8a425ff304b000f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6b62e9d9f5a20c6c8a425ff304b000f);
        cache_frame_d6b62e9d9f5a20c6c8a425ff304b000f = NULL;
    }

    assertFrameObject(frame_d6b62e9d9f5a20c6c8a425ff304b000f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_top);
    Py_DECREF(par_top);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_bottom);
    Py_DECREF(par_bottom);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);
    CHECK_OBJECT(par_opacity);
    Py_DECREF(par_opacity);
    CHECK_OBJECT(par_rotate);
    Py_DECREF(par_rotate);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    CHECK_OBJECT(par_aspect_ratio);
    Py_DECREF(par_aspect_ratio);
    CHECK_OBJECT(par_animate_opacity);
    Py_DECREF(par_animate_opacity);
    CHECK_OBJECT(par_animate_size);
    Py_DECREF(par_animate_size);
    CHECK_OBJECT(par_animate_position);
    Py_DECREF(par_animate_position);
    CHECK_OBJECT(par_animate_rotation);
    Py_DECREF(par_animate_rotation);
    CHECK_OBJECT(par_animate_scale);
    Py_DECREF(par_animate_scale);
    CHECK_OBJECT(par_animate_offset);
    Py_DECREF(par_animate_offset);
    CHECK_OBJECT(par_on_animation_end);
    Py_DECREF(par_on_animation_end);
    CHECK_OBJECT(par_tooltip);
    Py_DECREF(par_tooltip);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_icon_size);
    Py_DECREF(par_icon_size);
    CHECK_OBJECT(par_icon_color);
    Py_DECREF(par_icon_color);
    CHECK_OBJECT(par_selected_icon);
    Py_DECREF(par_selected_icon);
    CHECK_OBJECT(par_selected_icon_color);
    Py_DECREF(par_selected_icon_color);
    CHECK_OBJECT(par_selected);
    Py_DECREF(par_selected);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_autofocus);
    Py_DECREF(par_autofocus);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_url_target);
    Py_DECREF(par_url_target);
    CHECK_OBJECT(par_on_click);
    Py_DECREF(par_on_click);
    CHECK_OBJECT(par_on_focus);
    Py_DECREF(par_on_focus);
    CHECK_OBJECT(par_on_blur);
    Py_DECREF(par_on_blur);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_top);
    Py_DECREF(par_top);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_bottom);
    Py_DECREF(par_bottom);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);
    CHECK_OBJECT(par_opacity);
    Py_DECREF(par_opacity);
    CHECK_OBJECT(par_rotate);
    Py_DECREF(par_rotate);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    CHECK_OBJECT(par_aspect_ratio);
    Py_DECREF(par_aspect_ratio);
    CHECK_OBJECT(par_animate_opacity);
    Py_DECREF(par_animate_opacity);
    CHECK_OBJECT(par_animate_size);
    Py_DECREF(par_animate_size);
    CHECK_OBJECT(par_animate_position);
    Py_DECREF(par_animate_position);
    CHECK_OBJECT(par_animate_rotation);
    Py_DECREF(par_animate_rotation);
    CHECK_OBJECT(par_animate_scale);
    Py_DECREF(par_animate_scale);
    CHECK_OBJECT(par_animate_offset);
    Py_DECREF(par_animate_offset);
    CHECK_OBJECT(par_on_animation_end);
    Py_DECREF(par_on_animation_end);
    CHECK_OBJECT(par_tooltip);
    Py_DECREF(par_tooltip);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_icon_size);
    Py_DECREF(par_icon_size);
    CHECK_OBJECT(par_icon_color);
    Py_DECREF(par_icon_color);
    CHECK_OBJECT(par_selected_icon);
    Py_DECREF(par_selected_icon);
    CHECK_OBJECT(par_selected_icon_color);
    Py_DECREF(par_selected_icon_color);
    CHECK_OBJECT(par_selected);
    Py_DECREF(par_selected);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_autofocus);
    Py_DECREF(par_autofocus);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_url_target);
    Py_DECREF(par_url_target);
    CHECK_OBJECT(par_on_click);
    Py_DECREF(par_on_click);
    CHECK_OBJECT(par_on_focus);
    Py_DECREF(par_on_focus);
    CHECK_OBJECT(par_on_blur);
    Py_DECREF(par_on_blur);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__3__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8bb47f78aa8d556d8f99531da117d5b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8bb47f78aa8d556d8f99531da117d5b9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8bb47f78aa8d556d8f99531da117d5b9)) {
        Py_XDECREF(cache_frame_8bb47f78aa8d556d8f99531da117d5b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8bb47f78aa8d556d8f99531da117d5b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8bb47f78aa8d556d8f99531da117d5b9 = MAKE_FUNCTION_FRAME(codeobj_8bb47f78aa8d556d8f99531da117d5b9, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8bb47f78aa8d556d8f99531da117d5b9->m_type_description == NULL);
    frame_8bb47f78aa8d556d8f99531da117d5b9 = cache_frame_8bb47f78aa8d556d8f99531da117d5b9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8bb47f78aa8d556d8f99531da117d5b9);
    assert(Py_REFCNT(frame_8bb47f78aa8d556d8f99531da117d5b9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$icon_button, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_8bb47f78aa8d556d8f99531da117d5b9->m_frame.f_lineno = 153;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[19]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 155;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 155;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_8bb47f78aa8d556d8f99531da117d5b9->m_frame.f_lineno = 155;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[20]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 155;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[22], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[20]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 156;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[23]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 156;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_8bb47f78aa8d556d8f99531da117d5b9->m_frame.f_lineno = 156;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[20]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_2);

            exception_lineno = 156;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[23], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[24]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[10];
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[20]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 157;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_8bb47f78aa8d556d8f99531da117d5b9->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8bb47f78aa8d556d8f99531da117d5b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8bb47f78aa8d556d8f99531da117d5b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8bb47f78aa8d556d8f99531da117d5b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8bb47f78aa8d556d8f99531da117d5b9,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8bb47f78aa8d556d8f99531da117d5b9 == cache_frame_8bb47f78aa8d556d8f99531da117d5b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8bb47f78aa8d556d8f99531da117d5b9);
        cache_frame_8bb47f78aa8d556d8f99531da117d5b9 = NULL;
    }

    assertFrameObject(frame_8bb47f78aa8d556d8f99531da117d5b9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__4__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_97b7c32902eaed9a60db36dc667bf7f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_97b7c32902eaed9a60db36dc667bf7f7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_97b7c32902eaed9a60db36dc667bf7f7)) {
        Py_XDECREF(cache_frame_97b7c32902eaed9a60db36dc667bf7f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97b7c32902eaed9a60db36dc667bf7f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97b7c32902eaed9a60db36dc667bf7f7 = MAKE_FUNCTION_FRAME(codeobj_97b7c32902eaed9a60db36dc667bf7f7, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97b7c32902eaed9a60db36dc667bf7f7->m_type_description == NULL);
    frame_97b7c32902eaed9a60db36dc667bf7f7 = cache_frame_97b7c32902eaed9a60db36dc667bf7f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97b7c32902eaed9a60db36dc667bf7f7);
    assert(Py_REFCNT(frame_97b7c32902eaed9a60db36dc667bf7f7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_97b7c32902eaed9a60db36dc667bf7f7->m_frame.f_lineno = 162;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[26],
            &PyTuple_GET_ITEM(mod_consts[27], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_97b7c32902eaed9a60db36dc667bf7f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97b7c32902eaed9a60db36dc667bf7f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97b7c32902eaed9a60db36dc667bf7f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97b7c32902eaed9a60db36dc667bf7f7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_97b7c32902eaed9a60db36dc667bf7f7 == cache_frame_97b7c32902eaed9a60db36dc667bf7f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97b7c32902eaed9a60db36dc667bf7f7);
        cache_frame_97b7c32902eaed9a60db36dc667bf7f7 = NULL;
    }

    assertFrameObject(frame_97b7c32902eaed9a60db36dc667bf7f7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__5_focus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_56db09d11148206a68ddb012be42ea37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56db09d11148206a68ddb012be42ea37 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_56db09d11148206a68ddb012be42ea37)) {
        Py_XDECREF(cache_frame_56db09d11148206a68ddb012be42ea37);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56db09d11148206a68ddb012be42ea37 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56db09d11148206a68ddb012be42ea37 = MAKE_FUNCTION_FRAME(codeobj_56db09d11148206a68ddb012be42ea37, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_56db09d11148206a68ddb012be42ea37->m_type_description == NULL);
    frame_56db09d11148206a68ddb012be42ea37 = cache_frame_56db09d11148206a68ddb012be42ea37;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_56db09d11148206a68ddb012be42ea37);
    assert(Py_REFCNT(frame_56db09d11148206a68ddb012be42ea37) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[28];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_56db09d11148206a68ddb012be42ea37->m_frame.f_lineno = 166;
        tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[29]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_56db09d11148206a68ddb012be42ea37->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_56db09d11148206a68ddb012be42ea37->m_frame.f_lineno = 167;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_56db09d11148206a68ddb012be42ea37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56db09d11148206a68ddb012be42ea37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56db09d11148206a68ddb012be42ea37, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56db09d11148206a68ddb012be42ea37,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_56db09d11148206a68ddb012be42ea37 == cache_frame_56db09d11148206a68ddb012be42ea37) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_56db09d11148206a68ddb012be42ea37);
        cache_frame_56db09d11148206a68ddb012be42ea37 = NULL;
    }

    assertFrameObject(frame_56db09d11148206a68ddb012be42ea37);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__6_focus_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_COROUTINE_flet_core$icon_button$$$function__6_focus_async$$$coroutine__1_focus_async(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct flet_core$icon_button$$$function__6_focus_async$$$coroutine__1_focus_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$icon_button$$$function__6_focus_async$$$coroutine__1_focus_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$icon_button$$$function__6_focus_async$$$coroutine__1_focus_async_locals *coroutine_heap = (struct flet_core$icon_button$$$function__6_focus_async$$$coroutine__1_focus_async_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f954c177cc7c480c99f419a2352be0ab, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(coroutine);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[31]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[28];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 170;
        tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[29]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 171;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[31]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 171;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[32]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 171;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_await_result_1);
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_flet_core$icon_button$$$function__6_focus_async$$$coroutine__1_focus_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$icon_button$$$function__6_focus_async$$$coroutine__1_focus_async_context,
        module_flet_core$icon_button,
        mod_consts[33],
        mod_consts[34],
        codeobj_f954c177cc7c480c99f419a2352be0ab,
        closure,
        1,
#if 1
        sizeof(struct flet_core$icon_button$$$function__6_focus_async$$$coroutine__1_focus_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$icon_button$$$function__7_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_326796b03a89d32f2aa3be83ff935702;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_326796b03a89d32f2aa3be83ff935702 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_326796b03a89d32f2aa3be83ff935702)) {
        Py_XDECREF(cache_frame_326796b03a89d32f2aa3be83ff935702);

#if _DEBUG_REFCOUNTS
        if (cache_frame_326796b03a89d32f2aa3be83ff935702 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_326796b03a89d32f2aa3be83ff935702 = MAKE_FUNCTION_FRAME(codeobj_326796b03a89d32f2aa3be83ff935702, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_326796b03a89d32f2aa3be83ff935702->m_type_description == NULL);
    frame_326796b03a89d32f2aa3be83ff935702 = cache_frame_326796b03a89d32f2aa3be83ff935702;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_326796b03a89d32f2aa3be83ff935702);
    assert(Py_REFCNT(frame_326796b03a89d32f2aa3be83ff935702) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_326796b03a89d32f2aa3be83ff935702->m_frame.f_lineno = 176;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[35],
            PyTuple_GET_ITEM(mod_consts[36], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_326796b03a89d32f2aa3be83ff935702, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_326796b03a89d32f2aa3be83ff935702->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_326796b03a89d32f2aa3be83ff935702, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_326796b03a89d32f2aa3be83ff935702,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_326796b03a89d32f2aa3be83ff935702 == cache_frame_326796b03a89d32f2aa3be83ff935702) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_326796b03a89d32f2aa3be83ff935702);
        cache_frame_326796b03a89d32f2aa3be83ff935702 = NULL;
    }

    assertFrameObject(frame_326796b03a89d32f2aa3be83ff935702);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__8_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d76827b52ffbbe2c2dfbe31ba956d451;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d76827b52ffbbe2c2dfbe31ba956d451 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d76827b52ffbbe2c2dfbe31ba956d451)) {
        Py_XDECREF(cache_frame_d76827b52ffbbe2c2dfbe31ba956d451);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d76827b52ffbbe2c2dfbe31ba956d451 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d76827b52ffbbe2c2dfbe31ba956d451 = MAKE_FUNCTION_FRAME(codeobj_d76827b52ffbbe2c2dfbe31ba956d451, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d76827b52ffbbe2c2dfbe31ba956d451->m_type_description == NULL);
    frame_d76827b52ffbbe2c2dfbe31ba956d451 = cache_frame_d76827b52ffbbe2c2dfbe31ba956d451;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d76827b52ffbbe2c2dfbe31ba956d451);
    assert(Py_REFCNT(frame_d76827b52ffbbe2c2dfbe31ba956d451) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[3];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_d76827b52ffbbe2c2dfbe31ba956d451->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[37],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d76827b52ffbbe2c2dfbe31ba956d451, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d76827b52ffbbe2c2dfbe31ba956d451->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d76827b52ffbbe2c2dfbe31ba956d451, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d76827b52ffbbe2c2dfbe31ba956d451,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d76827b52ffbbe2c2dfbe31ba956d451 == cache_frame_d76827b52ffbbe2c2dfbe31ba956d451) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d76827b52ffbbe2c2dfbe31ba956d451);
        cache_frame_d76827b52ffbbe2c2dfbe31ba956d451 = NULL;
    }

    assertFrameObject(frame_d76827b52ffbbe2c2dfbe31ba956d451);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__9_selected_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_dbdd64fa408b96bf620277eaf471637f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dbdd64fa408b96bf620277eaf471637f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dbdd64fa408b96bf620277eaf471637f)) {
        Py_XDECREF(cache_frame_dbdd64fa408b96bf620277eaf471637f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dbdd64fa408b96bf620277eaf471637f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dbdd64fa408b96bf620277eaf471637f = MAKE_FUNCTION_FRAME(codeobj_dbdd64fa408b96bf620277eaf471637f, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dbdd64fa408b96bf620277eaf471637f->m_type_description == NULL);
    frame_dbdd64fa408b96bf620277eaf471637f = cache_frame_dbdd64fa408b96bf620277eaf471637f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dbdd64fa408b96bf620277eaf471637f);
    assert(Py_REFCNT(frame_dbdd64fa408b96bf620277eaf471637f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_dbdd64fa408b96bf620277eaf471637f->m_frame.f_lineno = 185;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[35],
            PyTuple_GET_ITEM(mod_consts[38], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dbdd64fa408b96bf620277eaf471637f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dbdd64fa408b96bf620277eaf471637f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dbdd64fa408b96bf620277eaf471637f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dbdd64fa408b96bf620277eaf471637f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_dbdd64fa408b96bf620277eaf471637f == cache_frame_dbdd64fa408b96bf620277eaf471637f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dbdd64fa408b96bf620277eaf471637f);
        cache_frame_dbdd64fa408b96bf620277eaf471637f = NULL;
    }

    assertFrameObject(frame_dbdd64fa408b96bf620277eaf471637f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__10_selected_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d0a73e2893ddbbdf388437c8294cce30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0a73e2893ddbbdf388437c8294cce30 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0a73e2893ddbbdf388437c8294cce30)) {
        Py_XDECREF(cache_frame_d0a73e2893ddbbdf388437c8294cce30);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0a73e2893ddbbdf388437c8294cce30 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0a73e2893ddbbdf388437c8294cce30 = MAKE_FUNCTION_FRAME(codeobj_d0a73e2893ddbbdf388437c8294cce30, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0a73e2893ddbbdf388437c8294cce30->m_type_description == NULL);
    frame_d0a73e2893ddbbdf388437c8294cce30 = cache_frame_d0a73e2893ddbbdf388437c8294cce30;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0a73e2893ddbbdf388437c8294cce30);
    assert(Py_REFCNT(frame_d0a73e2893ddbbdf388437c8294cce30) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[39];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_d0a73e2893ddbbdf388437c8294cce30->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[37],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0a73e2893ddbbdf388437c8294cce30, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0a73e2893ddbbdf388437c8294cce30->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0a73e2893ddbbdf388437c8294cce30, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0a73e2893ddbbdf388437c8294cce30,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d0a73e2893ddbbdf388437c8294cce30 == cache_frame_d0a73e2893ddbbdf388437c8294cce30) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0a73e2893ddbbdf388437c8294cce30);
        cache_frame_d0a73e2893ddbbdf388437c8294cce30 = NULL;
    }

    assertFrameObject(frame_d0a73e2893ddbbdf388437c8294cce30);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__11_icon_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a356b5a14b8bfdf9a827ec3b28d8a46f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a356b5a14b8bfdf9a827ec3b28d8a46f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a356b5a14b8bfdf9a827ec3b28d8a46f)) {
        Py_XDECREF(cache_frame_a356b5a14b8bfdf9a827ec3b28d8a46f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a356b5a14b8bfdf9a827ec3b28d8a46f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a356b5a14b8bfdf9a827ec3b28d8a46f = MAKE_FUNCTION_FRAME(codeobj_a356b5a14b8bfdf9a827ec3b28d8a46f, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a356b5a14b8bfdf9a827ec3b28d8a46f->m_type_description == NULL);
    frame_a356b5a14b8bfdf9a827ec3b28d8a46f = cache_frame_a356b5a14b8bfdf9a827ec3b28d8a46f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a356b5a14b8bfdf9a827ec3b28d8a46f);
    assert(Py_REFCNT(frame_a356b5a14b8bfdf9a827ec3b28d8a46f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a356b5a14b8bfdf9a827ec3b28d8a46f->m_frame.f_lineno = 194;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[35],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a356b5a14b8bfdf9a827ec3b28d8a46f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a356b5a14b8bfdf9a827ec3b28d8a46f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a356b5a14b8bfdf9a827ec3b28d8a46f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a356b5a14b8bfdf9a827ec3b28d8a46f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a356b5a14b8bfdf9a827ec3b28d8a46f == cache_frame_a356b5a14b8bfdf9a827ec3b28d8a46f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a356b5a14b8bfdf9a827ec3b28d8a46f);
        cache_frame_a356b5a14b8bfdf9a827ec3b28d8a46f = NULL;
    }

    assertFrameObject(frame_a356b5a14b8bfdf9a827ec3b28d8a46f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__12_icon_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_eb85e9e054fc3e26589be59e29474bbb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb85e9e054fc3e26589be59e29474bbb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb85e9e054fc3e26589be59e29474bbb)) {
        Py_XDECREF(cache_frame_eb85e9e054fc3e26589be59e29474bbb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb85e9e054fc3e26589be59e29474bbb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb85e9e054fc3e26589be59e29474bbb = MAKE_FUNCTION_FRAME(codeobj_eb85e9e054fc3e26589be59e29474bbb, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb85e9e054fc3e26589be59e29474bbb->m_type_description == NULL);
    frame_eb85e9e054fc3e26589be59e29474bbb = cache_frame_eb85e9e054fc3e26589be59e29474bbb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb85e9e054fc3e26589be59e29474bbb);
    assert(Py_REFCNT(frame_eb85e9e054fc3e26589be59e29474bbb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[41];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_eb85e9e054fc3e26589be59e29474bbb->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[37],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eb85e9e054fc3e26589be59e29474bbb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb85e9e054fc3e26589be59e29474bbb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb85e9e054fc3e26589be59e29474bbb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb85e9e054fc3e26589be59e29474bbb,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_eb85e9e054fc3e26589be59e29474bbb == cache_frame_eb85e9e054fc3e26589be59e29474bbb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb85e9e054fc3e26589be59e29474bbb);
        cache_frame_eb85e9e054fc3e26589be59e29474bbb = NULL;
    }

    assertFrameObject(frame_eb85e9e054fc3e26589be59e29474bbb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__13_icon_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a8a392288b1eaac1c7b468ae52e5711a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a8a392288b1eaac1c7b468ae52e5711a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a8a392288b1eaac1c7b468ae52e5711a)) {
        Py_XDECREF(cache_frame_a8a392288b1eaac1c7b468ae52e5711a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a8a392288b1eaac1c7b468ae52e5711a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a8a392288b1eaac1c7b468ae52e5711a = MAKE_FUNCTION_FRAME(codeobj_a8a392288b1eaac1c7b468ae52e5711a, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a8a392288b1eaac1c7b468ae52e5711a->m_type_description == NULL);
    frame_a8a392288b1eaac1c7b468ae52e5711a = cache_frame_a8a392288b1eaac1c7b468ae52e5711a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a8a392288b1eaac1c7b468ae52e5711a);
    assert(Py_REFCNT(frame_a8a392288b1eaac1c7b468ae52e5711a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a8a392288b1eaac1c7b468ae52e5711a->m_frame.f_lineno = 203;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[35],
            PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a8a392288b1eaac1c7b468ae52e5711a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a8a392288b1eaac1c7b468ae52e5711a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a8a392288b1eaac1c7b468ae52e5711a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a8a392288b1eaac1c7b468ae52e5711a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a8a392288b1eaac1c7b468ae52e5711a == cache_frame_a8a392288b1eaac1c7b468ae52e5711a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a8a392288b1eaac1c7b468ae52e5711a);
        cache_frame_a8a392288b1eaac1c7b468ae52e5711a = NULL;
    }

    assertFrameObject(frame_a8a392288b1eaac1c7b468ae52e5711a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__14_icon_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e689a41b56507463d792f36570f1e262;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e689a41b56507463d792f36570f1e262 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e689a41b56507463d792f36570f1e262)) {
        Py_XDECREF(cache_frame_e689a41b56507463d792f36570f1e262);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e689a41b56507463d792f36570f1e262 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e689a41b56507463d792f36570f1e262 = MAKE_FUNCTION_FRAME(codeobj_e689a41b56507463d792f36570f1e262, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e689a41b56507463d792f36570f1e262->m_type_description == NULL);
    frame_e689a41b56507463d792f36570f1e262 = cache_frame_e689a41b56507463d792f36570f1e262;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e689a41b56507463d792f36570f1e262);
    assert(Py_REFCNT(frame_e689a41b56507463d792f36570f1e262) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[43];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_e689a41b56507463d792f36570f1e262->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[37],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e689a41b56507463d792f36570f1e262, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e689a41b56507463d792f36570f1e262->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e689a41b56507463d792f36570f1e262, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e689a41b56507463d792f36570f1e262,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e689a41b56507463d792f36570f1e262 == cache_frame_e689a41b56507463d792f36570f1e262) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e689a41b56507463d792f36570f1e262);
        cache_frame_e689a41b56507463d792f36570f1e262 = NULL;
    }

    assertFrameObject(frame_e689a41b56507463d792f36570f1e262);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__15_selected_icon_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f2605739071f71698e5ffd9549826a69;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f2605739071f71698e5ffd9549826a69 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f2605739071f71698e5ffd9549826a69)) {
        Py_XDECREF(cache_frame_f2605739071f71698e5ffd9549826a69);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2605739071f71698e5ffd9549826a69 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2605739071f71698e5ffd9549826a69 = MAKE_FUNCTION_FRAME(codeobj_f2605739071f71698e5ffd9549826a69, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f2605739071f71698e5ffd9549826a69->m_type_description == NULL);
    frame_f2605739071f71698e5ffd9549826a69 = cache_frame_f2605739071f71698e5ffd9549826a69;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f2605739071f71698e5ffd9549826a69);
    assert(Py_REFCNT(frame_f2605739071f71698e5ffd9549826a69) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f2605739071f71698e5ffd9549826a69->m_frame.f_lineno = 212;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[35],
            PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2605739071f71698e5ffd9549826a69, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2605739071f71698e5ffd9549826a69->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2605739071f71698e5ffd9549826a69, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2605739071f71698e5ffd9549826a69,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f2605739071f71698e5ffd9549826a69 == cache_frame_f2605739071f71698e5ffd9549826a69) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f2605739071f71698e5ffd9549826a69);
        cache_frame_f2605739071f71698e5ffd9549826a69 = NULL;
    }

    assertFrameObject(frame_f2605739071f71698e5ffd9549826a69);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__16_selected_icon_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_2b4a5b5dc89b32017fd5a7c3c52c52bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b4a5b5dc89b32017fd5a7c3c52c52bd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b4a5b5dc89b32017fd5a7c3c52c52bd)) {
        Py_XDECREF(cache_frame_2b4a5b5dc89b32017fd5a7c3c52c52bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b4a5b5dc89b32017fd5a7c3c52c52bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b4a5b5dc89b32017fd5a7c3c52c52bd = MAKE_FUNCTION_FRAME(codeobj_2b4a5b5dc89b32017fd5a7c3c52c52bd, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b4a5b5dc89b32017fd5a7c3c52c52bd->m_type_description == NULL);
    frame_2b4a5b5dc89b32017fd5a7c3c52c52bd = cache_frame_2b4a5b5dc89b32017fd5a7c3c52c52bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2b4a5b5dc89b32017fd5a7c3c52c52bd);
    assert(Py_REFCNT(frame_2b4a5b5dc89b32017fd5a7c3c52c52bd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[45];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_2b4a5b5dc89b32017fd5a7c3c52c52bd->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[37],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2b4a5b5dc89b32017fd5a7c3c52c52bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b4a5b5dc89b32017fd5a7c3c52c52bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b4a5b5dc89b32017fd5a7c3c52c52bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b4a5b5dc89b32017fd5a7c3c52c52bd,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_2b4a5b5dc89b32017fd5a7c3c52c52bd == cache_frame_2b4a5b5dc89b32017fd5a7c3c52c52bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b4a5b5dc89b32017fd5a7c3c52c52bd);
        cache_frame_2b4a5b5dc89b32017fd5a7c3c52c52bd = NULL;
    }

    assertFrameObject(frame_2b4a5b5dc89b32017fd5a7c3c52c52bd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__17_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9a78f656a5de14d188bd46eb97fd5bd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9a78f656a5de14d188bd46eb97fd5bd0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9a78f656a5de14d188bd46eb97fd5bd0)) {
        Py_XDECREF(cache_frame_9a78f656a5de14d188bd46eb97fd5bd0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a78f656a5de14d188bd46eb97fd5bd0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a78f656a5de14d188bd46eb97fd5bd0 = MAKE_FUNCTION_FRAME(codeobj_9a78f656a5de14d188bd46eb97fd5bd0, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9a78f656a5de14d188bd46eb97fd5bd0->m_type_description == NULL);
    frame_9a78f656a5de14d188bd46eb97fd5bd0 = cache_frame_9a78f656a5de14d188bd46eb97fd5bd0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9a78f656a5de14d188bd46eb97fd5bd0);
    assert(Py_REFCNT(frame_9a78f656a5de14d188bd46eb97fd5bd0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_9a78f656a5de14d188bd46eb97fd5bd0->m_frame.f_lineno = 221;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[35],
            PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9a78f656a5de14d188bd46eb97fd5bd0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a78f656a5de14d188bd46eb97fd5bd0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a78f656a5de14d188bd46eb97fd5bd0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a78f656a5de14d188bd46eb97fd5bd0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9a78f656a5de14d188bd46eb97fd5bd0 == cache_frame_9a78f656a5de14d188bd46eb97fd5bd0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9a78f656a5de14d188bd46eb97fd5bd0);
        cache_frame_9a78f656a5de14d188bd46eb97fd5bd0 = NULL;
    }

    assertFrameObject(frame_9a78f656a5de14d188bd46eb97fd5bd0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__18_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_c40698d7e4626c67f87d27b3df6c4e43;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c40698d7e4626c67f87d27b3df6c4e43 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c40698d7e4626c67f87d27b3df6c4e43)) {
        Py_XDECREF(cache_frame_c40698d7e4626c67f87d27b3df6c4e43);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c40698d7e4626c67f87d27b3df6c4e43 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c40698d7e4626c67f87d27b3df6c4e43 = MAKE_FUNCTION_FRAME(codeobj_c40698d7e4626c67f87d27b3df6c4e43, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c40698d7e4626c67f87d27b3df6c4e43->m_type_description == NULL);
    frame_c40698d7e4626c67f87d27b3df6c4e43 = cache_frame_c40698d7e4626c67f87d27b3df6c4e43;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c40698d7e4626c67f87d27b3df6c4e43);
    assert(Py_REFCNT(frame_c40698d7e4626c67f87d27b3df6c4e43) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[9];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_c40698d7e4626c67f87d27b3df6c4e43->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[37],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c40698d7e4626c67f87d27b3df6c4e43, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c40698d7e4626c67f87d27b3df6c4e43->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c40698d7e4626c67f87d27b3df6c4e43, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c40698d7e4626c67f87d27b3df6c4e43,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c40698d7e4626c67f87d27b3df6c4e43 == cache_frame_c40698d7e4626c67f87d27b3df6c4e43) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c40698d7e4626c67f87d27b3df6c4e43);
        cache_frame_c40698d7e4626c67f87d27b3df6c4e43 = NULL;
    }

    assertFrameObject(frame_c40698d7e4626c67f87d27b3df6c4e43);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__19_selected(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1440653ddd519d49cf7375e74882a295;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1440653ddd519d49cf7375e74882a295 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1440653ddd519d49cf7375e74882a295)) {
        Py_XDECREF(cache_frame_1440653ddd519d49cf7375e74882a295);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1440653ddd519d49cf7375e74882a295 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1440653ddd519d49cf7375e74882a295 = MAKE_FUNCTION_FRAME(codeobj_1440653ddd519d49cf7375e74882a295, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1440653ddd519d49cf7375e74882a295->m_type_description == NULL);
    frame_1440653ddd519d49cf7375e74882a295 = cache_frame_1440653ddd519d49cf7375e74882a295;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1440653ddd519d49cf7375e74882a295);
    assert(Py_REFCNT(frame_1440653ddd519d49cf7375e74882a295) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1440653ddd519d49cf7375e74882a295->m_frame.f_lineno = 230;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[47], 0), mod_consts[48]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1440653ddd519d49cf7375e74882a295, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1440653ddd519d49cf7375e74882a295->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1440653ddd519d49cf7375e74882a295, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1440653ddd519d49cf7375e74882a295,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1440653ddd519d49cf7375e74882a295 == cache_frame_1440653ddd519d49cf7375e74882a295) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1440653ddd519d49cf7375e74882a295);
        cache_frame_1440653ddd519d49cf7375e74882a295 = NULL;
    }

    assertFrameObject(frame_1440653ddd519d49cf7375e74882a295);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__20_selected(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_93a6c6a86b08c86e5d43066f7a438c8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_93a6c6a86b08c86e5d43066f7a438c8f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_93a6c6a86b08c86e5d43066f7a438c8f)) {
        Py_XDECREF(cache_frame_93a6c6a86b08c86e5d43066f7a438c8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_93a6c6a86b08c86e5d43066f7a438c8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_93a6c6a86b08c86e5d43066f7a438c8f = MAKE_FUNCTION_FRAME(codeobj_93a6c6a86b08c86e5d43066f7a438c8f, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_93a6c6a86b08c86e5d43066f7a438c8f->m_type_description == NULL);
    frame_93a6c6a86b08c86e5d43066f7a438c8f = cache_frame_93a6c6a86b08c86e5d43066f7a438c8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_93a6c6a86b08c86e5d43066f7a438c8f);
    assert(Py_REFCNT(frame_93a6c6a86b08c86e5d43066f7a438c8f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[8];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_93a6c6a86b08c86e5d43066f7a438c8f->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[37],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_93a6c6a86b08c86e5d43066f7a438c8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_93a6c6a86b08c86e5d43066f7a438c8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_93a6c6a86b08c86e5d43066f7a438c8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_93a6c6a86b08c86e5d43066f7a438c8f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_93a6c6a86b08c86e5d43066f7a438c8f == cache_frame_93a6c6a86b08c86e5d43066f7a438c8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_93a6c6a86b08c86e5d43066f7a438c8f);
        cache_frame_93a6c6a86b08c86e5d43066f7a438c8f = NULL;
    }

    assertFrameObject(frame_93a6c6a86b08c86e5d43066f7a438c8f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__21_style(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4b1f171da46f4c81e8e7f0e8e8568073;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4b1f171da46f4c81e8e7f0e8e8568073 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4b1f171da46f4c81e8e7f0e8e8568073)) {
        Py_XDECREF(cache_frame_4b1f171da46f4c81e8e7f0e8e8568073);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4b1f171da46f4c81e8e7f0e8e8568073 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4b1f171da46f4c81e8e7f0e8e8568073 = MAKE_FUNCTION_FRAME(codeobj_4b1f171da46f4c81e8e7f0e8e8568073, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4b1f171da46f4c81e8e7f0e8e8568073->m_type_description == NULL);
    frame_4b1f171da46f4c81e8e7f0e8e8568073 = cache_frame_4b1f171da46f4c81e8e7f0e8e8568073;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4b1f171da46f4c81e8e7f0e8e8568073);
    assert(Py_REFCNT(frame_4b1f171da46f4c81e8e7f0e8e8568073) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4b1f171da46f4c81e8e7f0e8e8568073, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b1f171da46f4c81e8e7f0e8e8568073->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b1f171da46f4c81e8e7f0e8e8568073, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4b1f171da46f4c81e8e7f0e8e8568073,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4b1f171da46f4c81e8e7f0e8e8568073 == cache_frame_4b1f171da46f4c81e8e7f0e8e8568073) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4b1f171da46f4c81e8e7f0e8e8568073);
        cache_frame_4b1f171da46f4c81e8e7f0e8e8568073 = NULL;
    }

    assertFrameObject(frame_4b1f171da46f4c81e8e7f0e8e8568073);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__22_style(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_296cd3e3f1bcd9b0ed5fb4474c52957e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_296cd3e3f1bcd9b0ed5fb4474c52957e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_296cd3e3f1bcd9b0ed5fb4474c52957e)) {
        Py_XDECREF(cache_frame_296cd3e3f1bcd9b0ed5fb4474c52957e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_296cd3e3f1bcd9b0ed5fb4474c52957e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_296cd3e3f1bcd9b0ed5fb4474c52957e = MAKE_FUNCTION_FRAME(codeobj_296cd3e3f1bcd9b0ed5fb4474c52957e, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_296cd3e3f1bcd9b0ed5fb4474c52957e->m_type_description == NULL);
    frame_296cd3e3f1bcd9b0ed5fb4474c52957e = cache_frame_296cd3e3f1bcd9b0ed5fb4474c52957e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_296cd3e3f1bcd9b0ed5fb4474c52957e);
    assert(Py_REFCNT(frame_296cd3e3f1bcd9b0ed5fb4474c52957e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_296cd3e3f1bcd9b0ed5fb4474c52957e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_296cd3e3f1bcd9b0ed5fb4474c52957e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_296cd3e3f1bcd9b0ed5fb4474c52957e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_296cd3e3f1bcd9b0ed5fb4474c52957e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_296cd3e3f1bcd9b0ed5fb4474c52957e == cache_frame_296cd3e3f1bcd9b0ed5fb4474c52957e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_296cd3e3f1bcd9b0ed5fb4474c52957e);
        cache_frame_296cd3e3f1bcd9b0ed5fb4474c52957e = NULL;
    }

    assertFrameObject(frame_296cd3e3f1bcd9b0ed5fb4474c52957e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__23_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2dd330fee8a4f3ca5b07c0ac98702136;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2dd330fee8a4f3ca5b07c0ac98702136 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2dd330fee8a4f3ca5b07c0ac98702136)) {
        Py_XDECREF(cache_frame_2dd330fee8a4f3ca5b07c0ac98702136);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2dd330fee8a4f3ca5b07c0ac98702136 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2dd330fee8a4f3ca5b07c0ac98702136 = MAKE_FUNCTION_FRAME(codeobj_2dd330fee8a4f3ca5b07c0ac98702136, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2dd330fee8a4f3ca5b07c0ac98702136->m_type_description == NULL);
    frame_2dd330fee8a4f3ca5b07c0ac98702136 = cache_frame_2dd330fee8a4f3ca5b07c0ac98702136;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2dd330fee8a4f3ca5b07c0ac98702136);
    assert(Py_REFCNT(frame_2dd330fee8a4f3ca5b07c0ac98702136) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_2dd330fee8a4f3ca5b07c0ac98702136->m_frame.f_lineno = 248;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[35],
            PyTuple_GET_ITEM(mod_consts[49], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2dd330fee8a4f3ca5b07c0ac98702136, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2dd330fee8a4f3ca5b07c0ac98702136->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2dd330fee8a4f3ca5b07c0ac98702136, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2dd330fee8a4f3ca5b07c0ac98702136,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2dd330fee8a4f3ca5b07c0ac98702136 == cache_frame_2dd330fee8a4f3ca5b07c0ac98702136) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2dd330fee8a4f3ca5b07c0ac98702136);
        cache_frame_2dd330fee8a4f3ca5b07c0ac98702136 = NULL;
    }

    assertFrameObject(frame_2dd330fee8a4f3ca5b07c0ac98702136);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__24_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_7a0aa5a4fbbce39723b3f71c4caf5540;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a0aa5a4fbbce39723b3f71c4caf5540 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a0aa5a4fbbce39723b3f71c4caf5540)) {
        Py_XDECREF(cache_frame_7a0aa5a4fbbce39723b3f71c4caf5540);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a0aa5a4fbbce39723b3f71c4caf5540 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a0aa5a4fbbce39723b3f71c4caf5540 = MAKE_FUNCTION_FRAME(codeobj_7a0aa5a4fbbce39723b3f71c4caf5540, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a0aa5a4fbbce39723b3f71c4caf5540->m_type_description == NULL);
    frame_7a0aa5a4fbbce39723b3f71c4caf5540 = cache_frame_7a0aa5a4fbbce39723b3f71c4caf5540;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a0aa5a4fbbce39723b3f71c4caf5540);
    assert(Py_REFCNT(frame_7a0aa5a4fbbce39723b3f71c4caf5540) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[13];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_7a0aa5a4fbbce39723b3f71c4caf5540->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[37],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7a0aa5a4fbbce39723b3f71c4caf5540, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a0aa5a4fbbce39723b3f71c4caf5540->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a0aa5a4fbbce39723b3f71c4caf5540, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a0aa5a4fbbce39723b3f71c4caf5540,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7a0aa5a4fbbce39723b3f71c4caf5540 == cache_frame_7a0aa5a4fbbce39723b3f71c4caf5540) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a0aa5a4fbbce39723b3f71c4caf5540);
        cache_frame_7a0aa5a4fbbce39723b3f71c4caf5540 = NULL;
    }

    assertFrameObject(frame_7a0aa5a4fbbce39723b3f71c4caf5540);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__25_url_target(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e53579356d00126edcf4f348a21702f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e53579356d00126edcf4f348a21702f8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e53579356d00126edcf4f348a21702f8)) {
        Py_XDECREF(cache_frame_e53579356d00126edcf4f348a21702f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e53579356d00126edcf4f348a21702f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e53579356d00126edcf4f348a21702f8 = MAKE_FUNCTION_FRAME(codeobj_e53579356d00126edcf4f348a21702f8, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e53579356d00126edcf4f348a21702f8->m_type_description == NULL);
    frame_e53579356d00126edcf4f348a21702f8 = cache_frame_e53579356d00126edcf4f348a21702f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e53579356d00126edcf4f348a21702f8);
    assert(Py_REFCNT(frame_e53579356d00126edcf4f348a21702f8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e53579356d00126edcf4f348a21702f8->m_frame.f_lineno = 257;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[35],
            PyTuple_GET_ITEM(mod_consts[50], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e53579356d00126edcf4f348a21702f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e53579356d00126edcf4f348a21702f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e53579356d00126edcf4f348a21702f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e53579356d00126edcf4f348a21702f8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e53579356d00126edcf4f348a21702f8 == cache_frame_e53579356d00126edcf4f348a21702f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e53579356d00126edcf4f348a21702f8);
        cache_frame_e53579356d00126edcf4f348a21702f8 = NULL;
    }

    assertFrameObject(frame_e53579356d00126edcf4f348a21702f8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__26_url_target(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b2c1e8a502730ad27ec737354f906b72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b2c1e8a502730ad27ec737354f906b72 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b2c1e8a502730ad27ec737354f906b72)) {
        Py_XDECREF(cache_frame_b2c1e8a502730ad27ec737354f906b72);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2c1e8a502730ad27ec737354f906b72 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2c1e8a502730ad27ec737354f906b72 = MAKE_FUNCTION_FRAME(codeobj_b2c1e8a502730ad27ec737354f906b72, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b2c1e8a502730ad27ec737354f906b72->m_type_description == NULL);
    frame_b2c1e8a502730ad27ec737354f906b72 = cache_frame_b2c1e8a502730ad27ec737354f906b72;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b2c1e8a502730ad27ec737354f906b72);
    assert(Py_REFCNT(frame_b2c1e8a502730ad27ec737354f906b72) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[51];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_b2c1e8a502730ad27ec737354f906b72->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[37],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b2c1e8a502730ad27ec737354f906b72, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2c1e8a502730ad27ec737354f906b72->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2c1e8a502730ad27ec737354f906b72, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2c1e8a502730ad27ec737354f906b72,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b2c1e8a502730ad27ec737354f906b72 == cache_frame_b2c1e8a502730ad27ec737354f906b72) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b2c1e8a502730ad27ec737354f906b72);
        cache_frame_b2c1e8a502730ad27ec737354f906b72 = NULL;
    }

    assertFrameObject(frame_b2c1e8a502730ad27ec737354f906b72);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__27_on_click(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e597525d2e0443498635697a3125a8a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e597525d2e0443498635697a3125a8a5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e597525d2e0443498635697a3125a8a5)) {
        Py_XDECREF(cache_frame_e597525d2e0443498635697a3125a8a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e597525d2e0443498635697a3125a8a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e597525d2e0443498635697a3125a8a5 = MAKE_FUNCTION_FRAME(codeobj_e597525d2e0443498635697a3125a8a5, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e597525d2e0443498635697a3125a8a5->m_type_description == NULL);
    frame_e597525d2e0443498635697a3125a8a5 = cache_frame_e597525d2e0443498635697a3125a8a5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e597525d2e0443498635697a3125a8a5);
    assert(Py_REFCNT(frame_e597525d2e0443498635697a3125a8a5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e597525d2e0443498635697a3125a8a5->m_frame.f_lineno = 266;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[52],
            PyTuple_GET_ITEM(mod_consts[53], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e597525d2e0443498635697a3125a8a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e597525d2e0443498635697a3125a8a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e597525d2e0443498635697a3125a8a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e597525d2e0443498635697a3125a8a5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e597525d2e0443498635697a3125a8a5 == cache_frame_e597525d2e0443498635697a3125a8a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e597525d2e0443498635697a3125a8a5);
        cache_frame_e597525d2e0443498635697a3125a8a5 = NULL;
    }

    assertFrameObject(frame_e597525d2e0443498635697a3125a8a5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__28_on_click(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_38656a600302e9864976143917a6eadd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_38656a600302e9864976143917a6eadd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_38656a600302e9864976143917a6eadd)) {
        Py_XDECREF(cache_frame_38656a600302e9864976143917a6eadd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_38656a600302e9864976143917a6eadd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_38656a600302e9864976143917a6eadd = MAKE_FUNCTION_FRAME(codeobj_38656a600302e9864976143917a6eadd, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_38656a600302e9864976143917a6eadd->m_type_description == NULL);
    frame_38656a600302e9864976143917a6eadd = cache_frame_38656a600302e9864976143917a6eadd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_38656a600302e9864976143917a6eadd);
    assert(Py_REFCNT(frame_38656a600302e9864976143917a6eadd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[55];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_38656a600302e9864976143917a6eadd->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[54],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_38656a600302e9864976143917a6eadd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38656a600302e9864976143917a6eadd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38656a600302e9864976143917a6eadd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_38656a600302e9864976143917a6eadd,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_38656a600302e9864976143917a6eadd == cache_frame_38656a600302e9864976143917a6eadd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_38656a600302e9864976143917a6eadd);
        cache_frame_38656a600302e9864976143917a6eadd = NULL;
    }

    assertFrameObject(frame_38656a600302e9864976143917a6eadd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__29_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b265ec15053c5fea440577a0a24e0fe1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b265ec15053c5fea440577a0a24e0fe1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b265ec15053c5fea440577a0a24e0fe1)) {
        Py_XDECREF(cache_frame_b265ec15053c5fea440577a0a24e0fe1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b265ec15053c5fea440577a0a24e0fe1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b265ec15053c5fea440577a0a24e0fe1 = MAKE_FUNCTION_FRAME(codeobj_b265ec15053c5fea440577a0a24e0fe1, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b265ec15053c5fea440577a0a24e0fe1->m_type_description == NULL);
    frame_b265ec15053c5fea440577a0a24e0fe1 = cache_frame_b265ec15053c5fea440577a0a24e0fe1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b265ec15053c5fea440577a0a24e0fe1);
    assert(Py_REFCNT(frame_b265ec15053c5fea440577a0a24e0fe1) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b265ec15053c5fea440577a0a24e0fe1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b265ec15053c5fea440577a0a24e0fe1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b265ec15053c5fea440577a0a24e0fe1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b265ec15053c5fea440577a0a24e0fe1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b265ec15053c5fea440577a0a24e0fe1 == cache_frame_b265ec15053c5fea440577a0a24e0fe1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b265ec15053c5fea440577a0a24e0fe1);
        cache_frame_b265ec15053c5fea440577a0a24e0fe1 = NULL;
    }

    assertFrameObject(frame_b265ec15053c5fea440577a0a24e0fe1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__30_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_44114986c3c4d5511e9e9b36a1b4b143;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_44114986c3c4d5511e9e9b36a1b4b143 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_44114986c3c4d5511e9e9b36a1b4b143)) {
        Py_XDECREF(cache_frame_44114986c3c4d5511e9e9b36a1b4b143);

#if _DEBUG_REFCOUNTS
        if (cache_frame_44114986c3c4d5511e9e9b36a1b4b143 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_44114986c3c4d5511e9e9b36a1b4b143 = MAKE_FUNCTION_FRAME(codeobj_44114986c3c4d5511e9e9b36a1b4b143, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_44114986c3c4d5511e9e9b36a1b4b143->m_type_description == NULL);
    frame_44114986c3c4d5511e9e9b36a1b4b143 = cache_frame_44114986c3c4d5511e9e9b36a1b4b143;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_44114986c3c4d5511e9e9b36a1b4b143);
    assert(Py_REFCNT(frame_44114986c3c4d5511e9e9b36a1b4b143) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[25], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_44114986c3c4d5511e9e9b36a1b4b143, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44114986c3c4d5511e9e9b36a1b4b143->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44114986c3c4d5511e9e9b36a1b4b143, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_44114986c3c4d5511e9e9b36a1b4b143,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_44114986c3c4d5511e9e9b36a1b4b143 == cache_frame_44114986c3c4d5511e9e9b36a1b4b143) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_44114986c3c4d5511e9e9b36a1b4b143);
        cache_frame_44114986c3c4d5511e9e9b36a1b4b143 = NULL;
    }

    assertFrameObject(frame_44114986c3c4d5511e9e9b36a1b4b143);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__31_autofocus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b859fcb44f9fa0c61e10f42131fd4e7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b859fcb44f9fa0c61e10f42131fd4e7a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b859fcb44f9fa0c61e10f42131fd4e7a)) {
        Py_XDECREF(cache_frame_b859fcb44f9fa0c61e10f42131fd4e7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b859fcb44f9fa0c61e10f42131fd4e7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b859fcb44f9fa0c61e10f42131fd4e7a = MAKE_FUNCTION_FRAME(codeobj_b859fcb44f9fa0c61e10f42131fd4e7a, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b859fcb44f9fa0c61e10f42131fd4e7a->m_type_description == NULL);
    frame_b859fcb44f9fa0c61e10f42131fd4e7a = cache_frame_b859fcb44f9fa0c61e10f42131fd4e7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b859fcb44f9fa0c61e10f42131fd4e7a);
    assert(Py_REFCNT(frame_b859fcb44f9fa0c61e10f42131fd4e7a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b859fcb44f9fa0c61e10f42131fd4e7a->m_frame.f_lineno = 284;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[56], 0), mod_consts[48]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b859fcb44f9fa0c61e10f42131fd4e7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b859fcb44f9fa0c61e10f42131fd4e7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b859fcb44f9fa0c61e10f42131fd4e7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b859fcb44f9fa0c61e10f42131fd4e7a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b859fcb44f9fa0c61e10f42131fd4e7a == cache_frame_b859fcb44f9fa0c61e10f42131fd4e7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b859fcb44f9fa0c61e10f42131fd4e7a);
        cache_frame_b859fcb44f9fa0c61e10f42131fd4e7a = NULL;
    }

    assertFrameObject(frame_b859fcb44f9fa0c61e10f42131fd4e7a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__32_autofocus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e313a241c0ce37f1f9c7408ab3aee9f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e313a241c0ce37f1f9c7408ab3aee9f6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e313a241c0ce37f1f9c7408ab3aee9f6)) {
        Py_XDECREF(cache_frame_e313a241c0ce37f1f9c7408ab3aee9f6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e313a241c0ce37f1f9c7408ab3aee9f6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e313a241c0ce37f1f9c7408ab3aee9f6 = MAKE_FUNCTION_FRAME(codeobj_e313a241c0ce37f1f9c7408ab3aee9f6, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e313a241c0ce37f1f9c7408ab3aee9f6->m_type_description == NULL);
    frame_e313a241c0ce37f1f9c7408ab3aee9f6 = cache_frame_e313a241c0ce37f1f9c7408ab3aee9f6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e313a241c0ce37f1f9c7408ab3aee9f6);
    assert(Py_REFCNT(frame_e313a241c0ce37f1f9c7408ab3aee9f6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[12];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_e313a241c0ce37f1f9c7408ab3aee9f6->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[37],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e313a241c0ce37f1f9c7408ab3aee9f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e313a241c0ce37f1f9c7408ab3aee9f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e313a241c0ce37f1f9c7408ab3aee9f6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e313a241c0ce37f1f9c7408ab3aee9f6,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e313a241c0ce37f1f9c7408ab3aee9f6 == cache_frame_e313a241c0ce37f1f9c7408ab3aee9f6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e313a241c0ce37f1f9c7408ab3aee9f6);
        cache_frame_e313a241c0ce37f1f9c7408ab3aee9f6 = NULL;
    }

    assertFrameObject(frame_e313a241c0ce37f1f9c7408ab3aee9f6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__33_on_focus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_69363085aaa9f8906969955043bb5650;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_69363085aaa9f8906969955043bb5650 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_69363085aaa9f8906969955043bb5650)) {
        Py_XDECREF(cache_frame_69363085aaa9f8906969955043bb5650);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69363085aaa9f8906969955043bb5650 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69363085aaa9f8906969955043bb5650 = MAKE_FUNCTION_FRAME(codeobj_69363085aaa9f8906969955043bb5650, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69363085aaa9f8906969955043bb5650->m_type_description == NULL);
    frame_69363085aaa9f8906969955043bb5650 = cache_frame_69363085aaa9f8906969955043bb5650;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69363085aaa9f8906969955043bb5650);
    assert(Py_REFCNT(frame_69363085aaa9f8906969955043bb5650) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_69363085aaa9f8906969955043bb5650->m_frame.f_lineno = 293;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[52],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69363085aaa9f8906969955043bb5650, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69363085aaa9f8906969955043bb5650->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69363085aaa9f8906969955043bb5650, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69363085aaa9f8906969955043bb5650,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_69363085aaa9f8906969955043bb5650 == cache_frame_69363085aaa9f8906969955043bb5650) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69363085aaa9f8906969955043bb5650);
        cache_frame_69363085aaa9f8906969955043bb5650 = NULL;
    }

    assertFrameObject(frame_69363085aaa9f8906969955043bb5650);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__34_on_focus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_dcdfd18df59fc9bf075cc0c16f0c3d01;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dcdfd18df59fc9bf075cc0c16f0c3d01 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dcdfd18df59fc9bf075cc0c16f0c3d01)) {
        Py_XDECREF(cache_frame_dcdfd18df59fc9bf075cc0c16f0c3d01);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dcdfd18df59fc9bf075cc0c16f0c3d01 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dcdfd18df59fc9bf075cc0c16f0c3d01 = MAKE_FUNCTION_FRAME(codeobj_dcdfd18df59fc9bf075cc0c16f0c3d01, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dcdfd18df59fc9bf075cc0c16f0c3d01->m_type_description == NULL);
    frame_dcdfd18df59fc9bf075cc0c16f0c3d01 = cache_frame_dcdfd18df59fc9bf075cc0c16f0c3d01;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dcdfd18df59fc9bf075cc0c16f0c3d01);
    assert(Py_REFCNT(frame_dcdfd18df59fc9bf075cc0c16f0c3d01) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[28];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_dcdfd18df59fc9bf075cc0c16f0c3d01->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[54],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dcdfd18df59fc9bf075cc0c16f0c3d01, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dcdfd18df59fc9bf075cc0c16f0c3d01->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dcdfd18df59fc9bf075cc0c16f0c3d01, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dcdfd18df59fc9bf075cc0c16f0c3d01,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_dcdfd18df59fc9bf075cc0c16f0c3d01 == cache_frame_dcdfd18df59fc9bf075cc0c16f0c3d01) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dcdfd18df59fc9bf075cc0c16f0c3d01);
        cache_frame_dcdfd18df59fc9bf075cc0c16f0c3d01 = NULL;
    }

    assertFrameObject(frame_dcdfd18df59fc9bf075cc0c16f0c3d01);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__35_on_blur(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_dd21a984d7c7c9818180d20960e53a27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dd21a984d7c7c9818180d20960e53a27 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dd21a984d7c7c9818180d20960e53a27)) {
        Py_XDECREF(cache_frame_dd21a984d7c7c9818180d20960e53a27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd21a984d7c7c9818180d20960e53a27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd21a984d7c7c9818180d20960e53a27 = MAKE_FUNCTION_FRAME(codeobj_dd21a984d7c7c9818180d20960e53a27, module_flet_core$icon_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd21a984d7c7c9818180d20960e53a27->m_type_description == NULL);
    frame_dd21a984d7c7c9818180d20960e53a27 = cache_frame_dd21a984d7c7c9818180d20960e53a27;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dd21a984d7c7c9818180d20960e53a27);
    assert(Py_REFCNT(frame_dd21a984d7c7c9818180d20960e53a27) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_dd21a984d7c7c9818180d20960e53a27->m_frame.f_lineno = 302;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[52],
            PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd21a984d7c7c9818180d20960e53a27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd21a984d7c7c9818180d20960e53a27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd21a984d7c7c9818180d20960e53a27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd21a984d7c7c9818180d20960e53a27,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_dd21a984d7c7c9818180d20960e53a27 == cache_frame_dd21a984d7c7c9818180d20960e53a27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd21a984d7c7c9818180d20960e53a27);
        cache_frame_dd21a984d7c7c9818180d20960e53a27 = NULL;
    }

    assertFrameObject(frame_dd21a984d7c7c9818180d20960e53a27);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$icon_button$$$function__36_on_blur(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_5d859493b3d7bd234c2505ed4a911731;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5d859493b3d7bd234c2505ed4a911731 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5d859493b3d7bd234c2505ed4a911731)) {
        Py_XDECREF(cache_frame_5d859493b3d7bd234c2505ed4a911731);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d859493b3d7bd234c2505ed4a911731 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d859493b3d7bd234c2505ed4a911731 = MAKE_FUNCTION_FRAME(codeobj_5d859493b3d7bd234c2505ed4a911731, module_flet_core$icon_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d859493b3d7bd234c2505ed4a911731->m_type_description == NULL);
    frame_5d859493b3d7bd234c2505ed4a911731 = cache_frame_5d859493b3d7bd234c2505ed4a911731;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d859493b3d7bd234c2505ed4a911731);
    assert(Py_REFCNT(frame_5d859493b3d7bd234c2505ed4a911731) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[59];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_5d859493b3d7bd234c2505ed4a911731->m_frame.f_lineno = 306;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[54],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5d859493b3d7bd234c2505ed4a911731, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d859493b3d7bd234c2505ed4a911731->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d859493b3d7bd234c2505ed4a911731, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d859493b3d7bd234c2505ed4a911731,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_5d859493b3d7bd234c2505ed4a911731 == cache_frame_5d859493b3d7bd234c2505ed4a911731) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d859493b3d7bd234c2505ed4a911731);
        cache_frame_5d859493b3d7bd234c2505ed4a911731 = NULL;
    }

    assertFrameObject(frame_5d859493b3d7bd234c2505ed4a911731);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__10_selected_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__10_selected_icon,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_d0a73e2893ddbbdf388437c8294cce30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__11_icon_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__11_icon_size,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_a356b5a14b8bfdf9a827ec3b28d8a46f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__12_icon_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__12_icon_size,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_eb85e9e054fc3e26589be59e29474bbb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__13_icon_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__13_icon_color,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_a8a392288b1eaac1c7b468ae52e5711a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__14_icon_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__14_icon_color,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_e689a41b56507463d792f36570f1e262,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__15_selected_icon_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__15_selected_icon_color,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_f2605739071f71698e5ffd9549826a69,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__16_selected_icon_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__16_selected_icon_color,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_2b4a5b5dc89b32017fd5a7c3c52c52bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__17_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__17_bgcolor,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_9a78f656a5de14d188bd46eb97fd5bd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__18_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__18_bgcolor,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_c40698d7e4626c67f87d27b3df6c4e43,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__19_selected(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__19_selected,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_1440653ddd519d49cf7375e74882a295,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_d6b62e9d9f5a20c6c8a425ff304b000f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__20_selected(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__20_selected,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_93a6c6a86b08c86e5d43066f7a438c8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__21_style(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__21_style,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_4b1f171da46f4c81e8e7f0e8e8568073,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__22_style(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__22_style,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_296cd3e3f1bcd9b0ed5fb4474c52957e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__23_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__23_url,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_2dd330fee8a4f3ca5b07c0ac98702136,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__24_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__24_url,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_7a0aa5a4fbbce39723b3f71c4caf5540,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__25_url_target() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__25_url_target,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_e53579356d00126edcf4f348a21702f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__26_url_target() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__26_url_target,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_b2c1e8a502730ad27ec737354f906b72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__27_on_click() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__27_on_click,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_e597525d2e0443498635697a3125a8a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__28_on_click() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__28_on_click,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_38656a600302e9864976143917a6eadd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__29_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__29_content,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_b265ec15053c5fea440577a0a24e0fe1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_4583dbb484cc53804f53a7b8578a0868,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[130]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__30_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__30_content,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_44114986c3c4d5511e9e9b36a1b4b143,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__31_autofocus(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__31_autofocus,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_b859fcb44f9fa0c61e10f42131fd4e7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__32_autofocus(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__32_autofocus,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_e313a241c0ce37f1f9c7408ab3aee9f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__33_on_focus() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__33_on_focus,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_69363085aaa9f8906969955043bb5650,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__34_on_focus() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__34_on_focus,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_dcdfd18df59fc9bf075cc0c16f0c3d01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__35_on_blur() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__35_on_blur,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_dd21a984d7c7c9818180d20960e53a27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__36_on_blur() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__36_on_blur,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_5d859493b3d7bd234c2505ed4a911731,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__3__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__3__before_build_command,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_8bb47f78aa8d556d8f99531da117d5b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__4__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__4__get_children,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_97b7c32902eaed9a60db36dc667bf7f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__5_focus() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__5_focus,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_56db09d11148206a68ddb012be42ea37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__6_focus_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__6_focus_async,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_f954c177cc7c480c99f419a2352be0ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__7_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__7_icon,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_326796b03a89d32f2aa3be83ff935702,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__8_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__8_icon,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_d76827b52ffbbe2c2dfbe31ba956d451,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$icon_button$$$function__9_selected_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$icon_button$$$function__9_selected_icon,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_dbdd64fa408b96bf620277eaf471637f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$icon_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_flet_core$icon_button[] = {
    impl_flet_core$icon_button$$$function__1___init__,
    NULL,
    impl_flet_core$icon_button$$$function__3__before_build_command,
    impl_flet_core$icon_button$$$function__4__get_children,
    impl_flet_core$icon_button$$$function__5_focus,
    impl_flet_core$icon_button$$$function__6_focus_async,
    impl_flet_core$icon_button$$$function__7_icon,
    impl_flet_core$icon_button$$$function__8_icon,
    impl_flet_core$icon_button$$$function__9_selected_icon,
    impl_flet_core$icon_button$$$function__10_selected_icon,
    impl_flet_core$icon_button$$$function__11_icon_size,
    impl_flet_core$icon_button$$$function__12_icon_size,
    impl_flet_core$icon_button$$$function__13_icon_color,
    impl_flet_core$icon_button$$$function__14_icon_color,
    impl_flet_core$icon_button$$$function__15_selected_icon_color,
    impl_flet_core$icon_button$$$function__16_selected_icon_color,
    impl_flet_core$icon_button$$$function__17_bgcolor,
    impl_flet_core$icon_button$$$function__18_bgcolor,
    impl_flet_core$icon_button$$$function__19_selected,
    impl_flet_core$icon_button$$$function__20_selected,
    impl_flet_core$icon_button$$$function__21_style,
    impl_flet_core$icon_button$$$function__22_style,
    impl_flet_core$icon_button$$$function__23_url,
    impl_flet_core$icon_button$$$function__24_url,
    impl_flet_core$icon_button$$$function__25_url_target,
    impl_flet_core$icon_button$$$function__26_url_target,
    impl_flet_core$icon_button$$$function__27_on_click,
    impl_flet_core$icon_button$$$function__28_on_click,
    impl_flet_core$icon_button$$$function__29_content,
    impl_flet_core$icon_button$$$function__30_content,
    impl_flet_core$icon_button$$$function__31_autofocus,
    impl_flet_core$icon_button$$$function__32_autofocus,
    impl_flet_core$icon_button$$$function__33_on_focus,
    impl_flet_core$icon_button$$$function__34_on_focus,
    impl_flet_core$icon_button$$$function__35_on_blur,
    impl_flet_core$icon_button$$$function__36_on_blur,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_flet_core$icon_button;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_flet_core$icon_button) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_flet_core$icon_button[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_flet_core$icon_button,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_flet_core$icon_button(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.icon_button");

    // Store the module for future use.
    module_flet_core$icon_button = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.icon_button: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.icon_button: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.icon_button: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$icon_button\n");

    moduledict_flet_core$icon_button = MODULE_DICT(module_flet_core$icon_button);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$icon_button,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$icon_button,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[164]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$icon_button,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$icon_button,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$icon_button,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$icon_button);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$icon_button, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$icon_button, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$icon_button, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$icon_button);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_9278a1afa7626cd32bafd320f83cef1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *locals_flet_core$icon_button$$$class__1_IconButton_17 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_26b8adb11367f728bf687ad33435dcf6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_2);
    }
    frame_9278a1afa7626cd32bafd320f83cef1d = MAKE_MODULE_FRAME(codeobj_9278a1afa7626cd32bafd320f83cef1d, module_flet_core$icon_button);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9278a1afa7626cd32bafd320f83cef1d);
    assert(Py_REFCNT(frame_9278a1afa7626cd32bafd320f83cef1d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[61];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[64], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[65], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[29];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$icon_button;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[67];
        frame_9278a1afa7626cd32bafd320f83cef1d->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[68],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[68]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[69],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[69]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[70],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[70]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_8);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[71];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$icon_button;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[72];
        tmp_level_value_2 = mod_consts[67];
        frame_9278a1afa7626cd32bafd320f83cef1d->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[73],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[74];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$icon_button;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[75];
        tmp_level_value_3 = mod_consts[67];
        frame_9278a1afa7626cd32bafd320f83cef1d->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[0],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[76];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$icon_button;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[77];
        tmp_level_value_4 = mod_consts[67];
        frame_9278a1afa7626cd32bafd320f83cef1d->m_frame.f_lineno = 6;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[78],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[78]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[79],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[79]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_13);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[80];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$icon_button;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[81];
        tmp_level_value_5 = mod_consts[67];
        frame_9278a1afa7626cd32bafd320f83cef1d->m_frame.f_lineno = 7;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[82],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[83];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$icon_button;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[84];
        tmp_level_value_6 = mod_consts[67];
        frame_9278a1afa7626cd32bafd320f83cef1d->m_frame.f_lineno = 8;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[85],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[85]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[86],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[86]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[87],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[87]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[88],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[88]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$icon_button,
                mod_consts[89],
                mod_consts[67]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[89]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_20);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[67];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[90]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[90]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[91];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_9278a1afa7626cd32bafd320f83cef1d->m_frame.f_lineno = 17;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[92]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[93];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[94];
        tmp_getattr_default_1 = mod_consts[95];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[94]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 17;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$icon_button$$$class__1_IconButton_17 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[99], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        frame_26b8adb11367f728bf687ad33435dcf6_2 = MAKE_CLASS_FRAME(codeobj_26b8adb11367f728bf687ad33435dcf6, module_flet_core$icon_button, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_26b8adb11367f728bf687ad33435dcf6_2);
        assert(Py_REFCNT(frame_26b8adb11367f728bf687ad33435dcf6_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            tmp_defaults_1 = mod_consts[100];
            tmp_dict_key_1 = mod_consts[3];
            tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 58;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[101]);

            if (tmp_subscript_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_6);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 37 );
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_19;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[102];
                tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 59;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[82]);

                if (tmp_subscript_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_subscript_value_3 == NULL)) {
                            tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_subscript_value_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_7);

                            exception_lineno = 59;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_3);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_7);
                Py_DECREF(tmp_subscript_value_3);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[103];
                tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[101]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_8);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[104];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[79]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 61;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[105];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[79]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 62;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[106];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[79]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 63;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[107];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[79]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 64;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[108];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[79]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 65;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[109];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[79]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 66;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[110];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[70]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_4 = Py_None;
                tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[111]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[112]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_5, 2, tmp_tuple_element_4);
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[113];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 68;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[87]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[87]);

                        if (unlikely(tmp_subscript_value_6 == NULL)) {
                            tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                        }

                        if (tmp_subscript_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_10);

                            exception_lineno = 68;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[114];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[79]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 69;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[115];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[88]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 70;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[116];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[89]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 71;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[117];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[86]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[86]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 72;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[118];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[79]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 73;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[119];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[85]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 74;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[120];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[85]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 75;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[121];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[85]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[122];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[85]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[123];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[85]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[124];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[85]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 79;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[125];
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 81;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[101]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_11);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[126];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 82;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[111]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 82;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[127];
                tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 83;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[111]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[128];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[68]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 84;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[4];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[79]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 88;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[5];
                tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 89;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[101]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[6];
                tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 90;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[101]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 91;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[101]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 92;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[111]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 92;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 93;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[101]);

                if (tmp_subscript_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[10];
                tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 94;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[73]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[73]);

                        if (unlikely(tmp_subscript_value_15 == NULL)) {
                            tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                        }

                        if (tmp_subscript_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_19);

                            exception_lineno = 94;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[11];
                tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 95;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[78]);

                if (tmp_subscript_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[78]);

                        if (unlikely(tmp_subscript_value_16 == NULL)) {
                            tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                        }

                        if (tmp_subscript_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_20);

                            exception_lineno = 95;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[12];
                tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 96;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[111]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[13];
                tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 97;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[101]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[14];
                tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 98;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[101]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_19);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$icon_button$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$icon_button$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[131], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$icon_button$$$function__3__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$icon_button$$$function__4__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[134], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$icon_button$$$function__5_focus();

        tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[28], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$icon_button$$$function__6_focus_async();

        tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[33], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$icon_button$$$function__7_icon();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 174;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$icon_button$$$function__7_icon();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 174;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[3]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 178;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$icon_button$$$function__8_icon();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 178;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[139], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$icon_button$$$function__9_selected_icon();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 183;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$icon_button$$$function__9_selected_icon();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 183;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_6;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[6]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 187;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$icon_button$$$function__10_selected_icon();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 187;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[139], tmp_args_element_value_6);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 192;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$icon_button$$$function__11_icon_size();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 192;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$icon_button$$$function__11_icon_size();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 192;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_9;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[4]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 196;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$icon_button$$$function__12_icon_size();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 196;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[139], tmp_args_element_value_9);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_11;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_8 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 201;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$icon_button$$$function__13_icon_color();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 201;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$icon_button$$$function__13_icon_color();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 201;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_12;
            tmp_called_instance_4 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[5]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 205;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$icon_button$$$function__14_icon_color();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 205;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[139], tmp_args_element_value_12);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_14;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_10 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$icon_button$$$function__15_selected_icon_color();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 210;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$icon_button$$$function__15_selected_icon_color();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 210;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_15;
            tmp_called_instance_5 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[7]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 214;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$icon_button$$$function__16_selected_icon_color();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 214;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[139], tmp_args_element_value_15);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_17;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_12 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 219;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$icon_button$$$function__17_bgcolor();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 219;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$icon_button$$$function__17_bgcolor();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 219;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_18;
            tmp_called_instance_6 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[9]);

            if (unlikely(tmp_called_instance_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 223;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$icon_button$$$function__18_bgcolor();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 223;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[139], tmp_args_element_value_18);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_21;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_14 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[145];
            tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 229;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[111]);

            if (tmp_subscript_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_20 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_24);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$icon_button$$$function__19_selected(tmp_annotations_2);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 228;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[145];
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 229;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[111]);

            if (tmp_subscript_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_21 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_25);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$icon_button$$$function__19_selected(tmp_annotations_3);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 228;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_22;
            tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[8]);

            if (unlikely(tmp_expression_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[139]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[147];
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 233;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[111]);

            if (tmp_subscript_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_22 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_27);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 233;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$icon_button$$$function__20_selected(tmp_annotations_4);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 232;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_24;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_17 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[145];
            tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 238;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[73]);

            if (tmp_subscript_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_subscript_value_23 == NULL)) {
                        tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                    }

                    if (tmp_subscript_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);
                        Py_DECREF(tmp_expression_value_28);

                        exception_lineno = 238;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_28);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$icon_button$$$function__21_style(tmp_annotations_5);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 237;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[145];
            tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 238;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_24 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[73]);

            if (tmp_subscript_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_subscript_value_24 == NULL)) {
                        tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                    }

                    if (tmp_subscript_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_29);

                        exception_lineno = 238;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_29);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$icon_button$$$function__21_style(tmp_annotations_6);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 237;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_25;
            tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[10]);

            if (unlikely(tmp_expression_value_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 241;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[139]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[147];
            tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 242;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_25 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[73]);

            if (tmp_subscript_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_subscript_value_25 == NULL)) {
                        tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                    }

                    if (tmp_subscript_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);
                        Py_DECREF(tmp_expression_value_31);

                        exception_lineno = 242;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_31);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);

                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$icon_button$$$function__22_style(tmp_annotations_7);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 241;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_26;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_20 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$icon_button$$$function__23_url();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 246;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$icon_button$$$function__23_url();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 246;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_27;
            tmp_called_instance_7 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[13]);

            if (unlikely(tmp_called_instance_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[13]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$icon_button$$$function__24_url();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 250;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[139], tmp_args_element_value_27);
            Py_DECREF(tmp_called_instance_7);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_29;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_22 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 255;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$icon_button$$$function__25_url_target();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 255;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_23 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$icon_button$$$function__25_url_target();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 255;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_value_30;
            tmp_called_instance_8 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[14]);

            if (unlikely(tmp_called_instance_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 259;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$icon_button$$$function__26_url_target();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 259;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[139], tmp_args_element_value_30);
            Py_DECREF(tmp_called_instance_8);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_32;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_24 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 264;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$icon_button$$$function__27_on_click();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 264;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_25 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$icon_button$$$function__27_on_click();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 264;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_value_33;
            tmp_called_instance_9 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[15]);

            if (unlikely(tmp_called_instance_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 268;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_33 = MAKE_FUNCTION_flet_core$icon_button$$$function__28_on_click();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 268;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[139], tmp_args_element_value_33);
            Py_DECREF(tmp_called_instance_9);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_27;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_26 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 273;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[145];
            tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 274;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_26 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[78]);

            if (tmp_subscript_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_subscript_value_26 == NULL)) {
                        tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_subscript_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_expression_value_32);

                        exception_lineno = 274;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_32);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 274;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_34 = MAKE_FUNCTION_flet_core$icon_button$$$function__29_content(tmp_annotations_8);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 273;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_27 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[145];
            tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 274;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[78]);

            if (tmp_subscript_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_subscript_value_27 == NULL)) {
                        tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_subscript_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_33);

                        exception_lineno = 274;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_33);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_35 = MAKE_FUNCTION_flet_core$icon_button$$$function__29_content(tmp_annotations_9);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 273;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_28;
            tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[11]);

            if (unlikely(tmp_expression_value_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 277;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[139]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[147];
            tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);

                        exception_lineno = 278;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[78]);

            if (tmp_subscript_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_subscript_value_28 == NULL)) {
                        tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_subscript_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);
                        Py_DECREF(tmp_expression_value_35);

                        exception_lineno = 278;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_35);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 278;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_36 = MAKE_FUNCTION_flet_core$icon_button$$$function__30_content(tmp_annotations_10);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 277;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_30;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_29 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 282;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[145];
            tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_29);

                        exception_lineno = 283;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_36);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_29 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[111]);

            if (tmp_subscript_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_29 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_36);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 283;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_37 = MAKE_FUNCTION_flet_core$icon_button$$$function__31_autofocus(tmp_annotations_11);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 282;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_30 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[145];
            tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 283;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_30 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[111]);

            if (tmp_subscript_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_30 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_30);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_38 = MAKE_FUNCTION_flet_core$icon_button$$$function__31_autofocus(tmp_annotations_12);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 282;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_31;
            tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[12]);

            if (unlikely(tmp_expression_value_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[139]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_13 = mod_consts[147];
            tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[69]);

            if (tmp_expression_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 287;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_31 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[111]);

            if (tmp_subscript_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_31 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_39);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 287;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_39 = MAKE_FUNCTION_flet_core$icon_button$$$function__32_autofocus(tmp_annotations_13);

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 286;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_41;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            tmp_called_value_32 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 291;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_40 = MAKE_FUNCTION_flet_core$icon_button$$$function__33_on_focus();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 291;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_33 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_41 = MAKE_FUNCTION_flet_core$icon_button$$$function__33_on_focus();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 291;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_value_42;
            tmp_called_instance_10 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[16]);

            if (unlikely(tmp_called_instance_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[16]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_42 = MAKE_FUNCTION_flet_core$icon_button$$$function__34_on_focus();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 295;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[139], tmp_args_element_value_42);
            Py_DECREF(tmp_called_instance_10);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_44;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_18 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            tmp_called_value_34 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[137]);

            if (unlikely(tmp_called_value_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[137]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 300;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_43 = MAKE_FUNCTION_flet_core$icon_button$$$function__35_on_blur();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 300;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_35 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_44 = MAKE_FUNCTION_flet_core$icon_button$$$function__35_on_blur();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 300;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_45;
            tmp_called_instance_11 = PyObject_GetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[17]);

            if (unlikely(tmp_called_instance_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[17]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_45 = MAKE_FUNCTION_flet_core$icon_button$$$function__36_on_blur();

            frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame.f_lineno = 304;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[139], tmp_args_element_value_45);
            Py_DECREF(tmp_called_instance_11);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_26b8adb11367f728bf687ad33435dcf6_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_26b8adb11367f728bf687ad33435dcf6_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_26b8adb11367f728bf687ad33435dcf6_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_26b8adb11367f728bf687ad33435dcf6_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_26b8adb11367f728bf687ad33435dcf6_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$icon_button$$$class__1_IconButton_17, mod_consts[156], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_36 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[91];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_flet_core$icon_button$$$class__1_IconButton_17;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_9278a1afa7626cd32bafd320f83cef1d->m_frame.f_lineno = 17;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_36, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_28);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_27 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_flet_core$icon_button$$$class__1_IconButton_17);
        locals_flet_core$icon_button$$$class__1_IconButton_17 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$icon_button$$$class__1_IconButton_17);
        locals_flet_core$icon_button$$$class__1_IconButton_17 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 17;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$icon_button, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_27);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9278a1afa7626cd32bafd320f83cef1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9278a1afa7626cd32bafd320f83cef1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9278a1afa7626cd32bafd320f83cef1d, exception_lineno);
    }



    assertFrameObject(frame_9278a1afa7626cd32bafd320f83cef1d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core.icon_button", false);

    Py_INCREF(module_flet_core$icon_button);
    return module_flet_core$icon_button;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$icon_button, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$icon_button", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
