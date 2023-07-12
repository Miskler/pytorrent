/* Generated code for Python module 'flet_core.charts.bar_chart'
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

/* The "module_flet_core$charts$bar_chart" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$charts$bar_chart;
PyDictObject *moduledict_flet_core$charts$bar_chart;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[197];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[197];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.charts.bar_chart"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 197; i++) {
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
void checkModuleConstants_flet_core$charts$bar_chart(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 197; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_77b7b9ea5d84c26e03ec637439309417;
static PyCodeObject *codeobj_5d8f3c614017756ecf3c235c3daec220;
static PyCodeObject *codeobj_7c9d7fdd4201fe4f95ecf992a804c274;
static PyCodeObject *codeobj_844c8a53486e79cb93ddea6622cc2d60;
static PyCodeObject *codeobj_3532f886da72a3ffb97d11cfbb6c981d;
static PyCodeObject *codeobj_0bcac0371d9851a65a11c02131b889ee;
static PyCodeObject *codeobj_9bc61f82694793e651f7f2728de03f1a;
static PyCodeObject *codeobj_4f86e9c7c36f1f01b71efb4ac2cb53a4;
static PyCodeObject *codeobj_302b2d625f029bddc4e6741e9a06d6d0;
static PyCodeObject *codeobj_68dea94313a5546179711d5ff0733631;
static PyCodeObject *codeobj_446c4471daca7ca1511bf8ae547735c8;
static PyCodeObject *codeobj_b1bb0622f2ce892048923319fa9073e6;
static PyCodeObject *codeobj_773727aff19d4770760d4e214b3cc231;
static PyCodeObject *codeobj_39927c16dfdfecd13fc2d86c879ff03c;
static PyCodeObject *codeobj_99d51b1d43be9035a3c9d131decb50cd;
static PyCodeObject *codeobj_e891278dd3b29902a848dbb5ac34f00c;
static PyCodeObject *codeobj_6137e4afe5a470e719d51e06f2c79b2e;
static PyCodeObject *codeobj_5785f602c1d3ee321d13914efa5eb69b;
static PyCodeObject *codeobj_7a44d63bf6217db2575ecb68990ae915;
static PyCodeObject *codeobj_74eaa939f92f182acaeb6f4053158244;
static PyCodeObject *codeobj_f11ecd94cef636832c1df8dd823d1f6a;
static PyCodeObject *codeobj_f2c4c72b2873388c1900f6857165d73e;
static PyCodeObject *codeobj_b323a4d562fdb6dea6c5fb0ba664c013;
static PyCodeObject *codeobj_68f07faaa4b10aac8d938e05f4cb7cc9;
static PyCodeObject *codeobj_a93edec098ab331c08005cd2de596f2f;
static PyCodeObject *codeobj_cffe7210dae41f197dc50508dadcb11e;
static PyCodeObject *codeobj_5345ca7ab1819de1759864fe88167dc2;
static PyCodeObject *codeobj_e656c1a9a090390edea610e482be840d;
static PyCodeObject *codeobj_4e87c7b20c0f03d2f8971704ce1b63e1;
static PyCodeObject *codeobj_03190eab3721034b5c991b265e63d978;
static PyCodeObject *codeobj_586c2f86c0608530b3a9e03c17d0a288;
static PyCodeObject *codeobj_bf897da1a1aca0e6a6d25c90be119c4f;
static PyCodeObject *codeobj_30fa4d792fce1653d11738a1d69ede62;
static PyCodeObject *codeobj_5382c1026cfc7c237189a4097ff38288;
static PyCodeObject *codeobj_6e05132bded71e67140505c80cd622ce;
static PyCodeObject *codeobj_43e507fc040d1842b0295f7441f9c945;
static PyCodeObject *codeobj_fdd70f201a58dd946a7e5cd172f92989;
static PyCodeObject *codeobj_617c81dfcd08653d86b76f0c95ddd4eb;
static PyCodeObject *codeobj_31de198e93e31dcb6435b5e0480a6791;
static PyCodeObject *codeobj_068484b3eac2cb0c3c9cb11ca47bbf09;
static PyCodeObject *codeobj_15e77580eaa45692e1b1258952bb50ab;
static PyCodeObject *codeobj_decd0a9f85e2bb4485bc07377b7d5f8b;
static PyCodeObject *codeobj_60e504fa20515746d1f61a165269880f;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[76]; CHECK_OBJECT(module_filename_obj);
    codeobj_77b7b9ea5d84c26e03ec637439309417 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[186], mod_consts[186], NULL, NULL, 0, 0, 0);
    codeobj_5d8f3c614017756ecf3c235c3daec220 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[187], NULL, 0, 0, 0);
    codeobj_7c9d7fdd4201fe4f95ecf992a804c274 = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[187], NULL, 0, 0, 0);
    codeobj_844c8a53486e79cb93ddea6622cc2d60 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[188], NULL, 43, 0, 0);
    codeobj_3532f886da72a3ffb97d11cfbb6c981d = MAKE_CODE_OBJECT(module_filename_obj, 313, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[189], NULL, 5, 0, 0);
    codeobj_0bcac0371d9851a65a11c02131b889ee = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[32], mod_consts[190], mod_consts[187], 1, 0, 0);
    codeobj_9bc61f82694793e651f7f2728de03f1a = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[191], NULL, 1, 0, 0);
    codeobj_4f86e9c7c36f1f01b71efb4ac2cb53a4 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[192], NULL, 1, 0, 0);
    codeobj_302b2d625f029bddc4e6741e9a06d6d0 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[192], NULL, 1, 0, 0);
    codeobj_68dea94313a5546179711d5ff0733631 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[193], NULL, 2, 0, 0);
    codeobj_446c4471daca7ca1511bf8ae547735c8 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[192], NULL, 1, 0, 0);
    codeobj_b1bb0622f2ce892048923319fa9073e6 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[193], NULL, 2, 0, 0);
    codeobj_773727aff19d4770760d4e214b3cc231 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[192], NULL, 1, 0, 0);
    codeobj_39927c16dfdfecd13fc2d86c879ff03c = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[193], NULL, 2, 0, 0);
    codeobj_99d51b1d43be9035a3c9d131decb50cd = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[192], NULL, 1, 0, 0);
    codeobj_e891278dd3b29902a848dbb5ac34f00c = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[193], NULL, 2, 0, 0);
    codeobj_6137e4afe5a470e719d51e06f2c79b2e = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[192], NULL, 1, 0, 0);
    codeobj_5785f602c1d3ee321d13914efa5eb69b = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[193], NULL, 2, 0, 0);
    codeobj_7a44d63bf6217db2575ecb68990ae915 = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[192], NULL, 1, 0, 0);
    codeobj_74eaa939f92f182acaeb6f4053158244 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[193], NULL, 2, 0, 0);
    codeobj_f11ecd94cef636832c1df8dd823d1f6a = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[194], NULL, 1, 0, 0);
    codeobj_f2c4c72b2873388c1900f6857165d73e = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[192], NULL, 1, 0, 0);
    codeobj_b323a4d562fdb6dea6c5fb0ba664c013 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[193], NULL, 2, 0, 0);
    codeobj_68f07faaa4b10aac8d938e05f4cb7cc9 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[192], NULL, 1, 0, 0);
    codeobj_a93edec098ab331c08005cd2de596f2f = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[193], NULL, 2, 0, 0);
    codeobj_cffe7210dae41f197dc50508dadcb11e = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[192], NULL, 1, 0, 0);
    codeobj_5345ca7ab1819de1759864fe88167dc2 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[193], NULL, 2, 0, 0);
    codeobj_e656c1a9a090390edea610e482be840d = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[192], NULL, 1, 0, 0);
    codeobj_4e87c7b20c0f03d2f8971704ce1b63e1 = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[193], NULL, 2, 0, 0);
    codeobj_03190eab3721034b5c991b265e63d978 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[192], NULL, 1, 0, 0);
    codeobj_586c2f86c0608530b3a9e03c17d0a288 = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[193], NULL, 2, 0, 0);
    codeobj_bf897da1a1aca0e6a6d25c90be119c4f = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[192], NULL, 1, 0, 0);
    codeobj_30fa4d792fce1653d11738a1d69ede62 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[193], NULL, 2, 0, 0);
    codeobj_5382c1026cfc7c237189a4097ff38288 = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[192], NULL, 1, 0, 0);
    codeobj_6e05132bded71e67140505c80cd622ce = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[195], NULL, 2, 0, 0);
    codeobj_43e507fc040d1842b0295f7441f9c945 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[192], NULL, 1, 0, 0);
    codeobj_fdd70f201a58dd946a7e5cd172f92989 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[193], NULL, 2, 0, 0);
    codeobj_617c81dfcd08653d86b76f0c95ddd4eb = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[192], NULL, 1, 0, 0);
    codeobj_31de198e93e31dcb6435b5e0480a6791 = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[193], NULL, 2, 0, 0);
    codeobj_068484b3eac2cb0c3c9cb11ca47bbf09 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[192], NULL, 1, 0, 0);
    codeobj_15e77580eaa45692e1b1258952bb50ab = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[193], NULL, 2, 0, 0);
    codeobj_decd0a9f85e2bb4485bc07377b7d5f8b = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[192], NULL, 1, 0, 0);
    codeobj_60e504fa20515746d1f61a165269880f = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[193], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__10_animate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__11_bgcolor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__12_bgcolor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__13_interactive(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__14_interactive(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__15_tooltip_bgcolor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__16_tooltip_bgcolor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__17_border(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__18_border(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__19_horizontal_grid_lines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__1___init__$$$function__1_convert_linechart_event_data();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__20_horizontal_grid_lines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__21_vertical_grid_lines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__22_vertical_grid_lines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__23_left_axis(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__24_left_axis(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__25_top_axis(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__26_top_axis(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__27_right_axis(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__28_right_axis(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__29_bottom_axis(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__30_bottom_axis(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__31_baseline_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__32_baseline_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__33_min_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__34_min_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__35_max_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__36_max_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__37_on_chart_event();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__38_on_chart_event();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__39___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__3__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__4__get_children();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__5_bar_groups();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__6_bar_groups();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__7_groups_space(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__8_groups_space(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__9_animate(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$charts$bar_chart$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bar_groups = python_pars[1];
    PyObject *par_ref = python_pars[2];
    PyObject *par_width = python_pars[3];
    PyObject *par_height = python_pars[4];
    PyObject *par_left = python_pars[5];
    PyObject *par_top = python_pars[6];
    PyObject *par_right = python_pars[7];
    PyObject *par_bottom = python_pars[8];
    PyObject *par_expand = python_pars[9];
    PyObject *par_col = python_pars[10];
    PyObject *par_opacity = python_pars[11];
    PyObject *par_rotate = python_pars[12];
    PyObject *par_scale = python_pars[13];
    PyObject *par_offset = python_pars[14];
    PyObject *par_aspect_ratio = python_pars[15];
    PyObject *par_animate_opacity = python_pars[16];
    PyObject *par_animate_size = python_pars[17];
    PyObject *par_animate_position = python_pars[18];
    PyObject *par_animate_rotation = python_pars[19];
    PyObject *par_animate_scale = python_pars[20];
    PyObject *par_animate_offset = python_pars[21];
    PyObject *par_on_animation_end = python_pars[22];
    PyObject *par_tooltip = python_pars[23];
    PyObject *par_visible = python_pars[24];
    PyObject *par_disabled = python_pars[25];
    PyObject *par_data = python_pars[26];
    PyObject *par_groups_space = python_pars[27];
    PyObject *par_animate = python_pars[28];
    PyObject *par_interactive = python_pars[29];
    PyObject *par_bgcolor = python_pars[30];
    PyObject *par_tooltip_bgcolor = python_pars[31];
    PyObject *par_border = python_pars[32];
    PyObject *par_horizontal_grid_lines = python_pars[33];
    PyObject *par_vertical_grid_lines = python_pars[34];
    PyObject *par_left_axis = python_pars[35];
    PyObject *par_top_axis = python_pars[36];
    PyObject *par_right_axis = python_pars[37];
    PyObject *par_bottom_axis = python_pars[38];
    PyObject *par_baseline_y = python_pars[39];
    PyObject *par_min_y = python_pars[40];
    PyObject *par_max_y = python_pars[41];
    PyObject *par_on_chart_event = python_pars[42];
    PyObject *var_convert_linechart_event_data = NULL;
    struct Nuitka_FrameObject *frame_844c8a53486e79cb93ddea6622cc2d60;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_844c8a53486e79cb93ddea6622cc2d60 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_844c8a53486e79cb93ddea6622cc2d60)) {
        Py_XDECREF(cache_frame_844c8a53486e79cb93ddea6622cc2d60);

#if _DEBUG_REFCOUNTS
        if (cache_frame_844c8a53486e79cb93ddea6622cc2d60 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_844c8a53486e79cb93ddea6622cc2d60 = MAKE_FUNCTION_FRAME(codeobj_844c8a53486e79cb93ddea6622cc2d60, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_844c8a53486e79cb93ddea6622cc2d60->m_type_description == NULL);
    frame_844c8a53486e79cb93ddea6622cc2d60 = cache_frame_844c8a53486e79cb93ddea6622cc2d60;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_844c8a53486e79cb93ddea6622cc2d60);
    assert(Py_REFCNT(frame_844c8a53486e79cb93ddea6622cc2d60) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        CHECK_OBJECT(par_width);
        tmp_kw_call_dict_value_1_1 = par_width;
        CHECK_OBJECT(par_height);
        tmp_kw_call_dict_value_2_1 = par_height;
        CHECK_OBJECT(par_left);
        tmp_kw_call_dict_value_3_1 = par_left;
        CHECK_OBJECT(par_top);
        tmp_kw_call_dict_value_4_1 = par_top;
        CHECK_OBJECT(par_right);
        tmp_kw_call_dict_value_5_1 = par_right;
        CHECK_OBJECT(par_bottom);
        tmp_kw_call_dict_value_6_1 = par_bottom;
        CHECK_OBJECT(par_expand);
        tmp_kw_call_dict_value_7_1 = par_expand;
        CHECK_OBJECT(par_col);
        tmp_kw_call_dict_value_8_1 = par_col;
        CHECK_OBJECT(par_opacity);
        tmp_kw_call_dict_value_9_1 = par_opacity;
        CHECK_OBJECT(par_rotate);
        tmp_kw_call_dict_value_10_1 = par_rotate;
        CHECK_OBJECT(par_scale);
        tmp_kw_call_dict_value_11_1 = par_scale;
        CHECK_OBJECT(par_offset);
        tmp_kw_call_dict_value_12_1 = par_offset;
        CHECK_OBJECT(par_aspect_ratio);
        tmp_kw_call_dict_value_13_1 = par_aspect_ratio;
        CHECK_OBJECT(par_animate_opacity);
        tmp_kw_call_dict_value_14_1 = par_animate_opacity;
        CHECK_OBJECT(par_animate_size);
        tmp_kw_call_dict_value_15_1 = par_animate_size;
        CHECK_OBJECT(par_animate_position);
        tmp_kw_call_dict_value_16_1 = par_animate_position;
        CHECK_OBJECT(par_animate_rotation);
        tmp_kw_call_dict_value_17_1 = par_animate_rotation;
        CHECK_OBJECT(par_animate_scale);
        tmp_kw_call_dict_value_18_1 = par_animate_scale;
        CHECK_OBJECT(par_animate_offset);
        tmp_kw_call_dict_value_19_1 = par_animate_offset;
        CHECK_OBJECT(par_on_animation_end);
        tmp_kw_call_dict_value_20_1 = par_on_animation_end;
        CHECK_OBJECT(par_tooltip);
        tmp_kw_call_dict_value_21_1 = par_tooltip;
        CHECK_OBJECT(par_visible);
        tmp_kw_call_dict_value_22_1 = par_visible;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_23_1 = par_disabled;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_24_1 = par_data;
        frame_844c8a53486e79cb93ddea6622cc2d60->m_frame.f_lineno = 72;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[25] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__1___init__$$$function__1_convert_linechart_event_data();

        assert(var_convert_linechart_event_data == NULL);
        var_convert_linechart_event_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_convert_linechart_event_data);
        tmp_args_element_value_1 = var_convert_linechart_event_data;
        frame_844c8a53486e79cb93ddea6622cc2d60->m_frame.f_lineno = 105;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[8];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_844c8a53486e79cb93ddea6622cc2d60->m_frame.f_lineno = 106;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_844c8a53486e79cb93ddea6622cc2d60->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_bar_groups);
        tmp_assattr_value_2 = par_bar_groups;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_groups_space);
        tmp_assattr_value_3 = par_groups_space;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[11], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_animate);
        tmp_assattr_value_4 = par_animate;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[12], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_interactive);
        tmp_assattr_value_5 = par_interactive;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[13], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_bgcolor);
        tmp_assattr_value_6 = par_bgcolor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[14], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_tooltip_bgcolor);
        tmp_assattr_value_7 = par_tooltip_bgcolor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[15], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_border);
        tmp_assattr_value_8 = par_border;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[16], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_horizontal_grid_lines);
        tmp_assattr_value_9 = par_horizontal_grid_lines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[17], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_vertical_grid_lines);
        tmp_assattr_value_10 = par_vertical_grid_lines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[18], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_left_axis);
        tmp_assattr_value_11 = par_left_axis;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[19], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_top_axis);
        tmp_assattr_value_12 = par_top_axis;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[20], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_right_axis);
        tmp_assattr_value_13 = par_right_axis;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[21], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(par_bottom_axis);
        tmp_assattr_value_14 = par_bottom_axis;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[22], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_baseline_y);
        tmp_assattr_value_15 = par_baseline_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[23], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT(par_min_y);
        tmp_assattr_value_16 = par_min_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[24], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(par_max_y);
        tmp_assattr_value_17 = par_max_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[25], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        CHECK_OBJECT(par_on_chart_event);
        tmp_assattr_value_18 = par_on_chart_event;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[26], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_844c8a53486e79cb93ddea6622cc2d60, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_844c8a53486e79cb93ddea6622cc2d60->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_844c8a53486e79cb93ddea6622cc2d60, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_844c8a53486e79cb93ddea6622cc2d60,
        type_description_1,
        par_self,
        par_bar_groups,
        par_ref,
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
        par_groups_space,
        par_animate,
        par_interactive,
        par_bgcolor,
        par_tooltip_bgcolor,
        par_border,
        par_horizontal_grid_lines,
        par_vertical_grid_lines,
        par_left_axis,
        par_top_axis,
        par_right_axis,
        par_bottom_axis,
        par_baseline_y,
        par_min_y,
        par_max_y,
        par_on_chart_event,
        var_convert_linechart_event_data
    );


    // Release cached frame if used for exception.
    if (frame_844c8a53486e79cb93ddea6622cc2d60 == cache_frame_844c8a53486e79cb93ddea6622cc2d60) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_844c8a53486e79cb93ddea6622cc2d60);
        cache_frame_844c8a53486e79cb93ddea6622cc2d60 = NULL;
    }

    assertFrameObject(frame_844c8a53486e79cb93ddea6622cc2d60);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_convert_linechart_event_data);
    Py_DECREF(var_convert_linechart_event_data);
    var_convert_linechart_event_data = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_convert_linechart_event_data);
    var_convert_linechart_event_data = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bar_groups);
    Py_DECREF(par_bar_groups);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
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
    CHECK_OBJECT(par_groups_space);
    Py_DECREF(par_groups_space);
    CHECK_OBJECT(par_animate);
    Py_DECREF(par_animate);
    CHECK_OBJECT(par_interactive);
    Py_DECREF(par_interactive);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_tooltip_bgcolor);
    Py_DECREF(par_tooltip_bgcolor);
    CHECK_OBJECT(par_border);
    Py_DECREF(par_border);
    CHECK_OBJECT(par_horizontal_grid_lines);
    Py_DECREF(par_horizontal_grid_lines);
    CHECK_OBJECT(par_vertical_grid_lines);
    Py_DECREF(par_vertical_grid_lines);
    CHECK_OBJECT(par_left_axis);
    Py_DECREF(par_left_axis);
    CHECK_OBJECT(par_top_axis);
    Py_DECREF(par_top_axis);
    CHECK_OBJECT(par_right_axis);
    Py_DECREF(par_right_axis);
    CHECK_OBJECT(par_bottom_axis);
    Py_DECREF(par_bottom_axis);
    CHECK_OBJECT(par_baseline_y);
    Py_DECREF(par_baseline_y);
    CHECK_OBJECT(par_min_y);
    Py_DECREF(par_min_y);
    CHECK_OBJECT(par_max_y);
    Py_DECREF(par_max_y);
    CHECK_OBJECT(par_on_chart_event);
    Py_DECREF(par_on_chart_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bar_groups);
    Py_DECREF(par_bar_groups);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
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
    CHECK_OBJECT(par_groups_space);
    Py_DECREF(par_groups_space);
    CHECK_OBJECT(par_animate);
    Py_DECREF(par_animate);
    CHECK_OBJECT(par_interactive);
    Py_DECREF(par_interactive);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_tooltip_bgcolor);
    Py_DECREF(par_tooltip_bgcolor);
    CHECK_OBJECT(par_border);
    Py_DECREF(par_border);
    CHECK_OBJECT(par_horizontal_grid_lines);
    Py_DECREF(par_horizontal_grid_lines);
    CHECK_OBJECT(par_vertical_grid_lines);
    Py_DECREF(par_vertical_grid_lines);
    CHECK_OBJECT(par_left_axis);
    Py_DECREF(par_left_axis);
    CHECK_OBJECT(par_top_axis);
    Py_DECREF(par_top_axis);
    CHECK_OBJECT(par_right_axis);
    Py_DECREF(par_right_axis);
    CHECK_OBJECT(par_bottom_axis);
    Py_DECREF(par_bottom_axis);
    CHECK_OBJECT(par_baseline_y);
    Py_DECREF(par_baseline_y);
    CHECK_OBJECT(par_min_y);
    Py_DECREF(par_min_y);
    CHECK_OBJECT(par_max_y);
    Py_DECREF(par_max_y);
    CHECK_OBJECT(par_on_chart_event);
    Py_DECREF(par_on_chart_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$charts$bar_chart$$$function__1___init__$$$function__1_convert_linechart_event_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_e = python_pars[0];
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_f11ecd94cef636832c1df8dd823d1f6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f11ecd94cef636832c1df8dd823d1f6a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f11ecd94cef636832c1df8dd823d1f6a)) {
        Py_XDECREF(cache_frame_f11ecd94cef636832c1df8dd823d1f6a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f11ecd94cef636832c1df8dd823d1f6a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f11ecd94cef636832c1df8dd823d1f6a = MAKE_FUNCTION_FRAME(codeobj_f11ecd94cef636832c1df8dd823d1f6a, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f11ecd94cef636832c1df8dd823d1f6a->m_type_description == NULL);
    frame_f11ecd94cef636832c1df8dd823d1f6a = cache_frame_f11ecd94cef636832c1df8dd823d1f6a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f11ecd94cef636832c1df8dd823d1f6a);
    assert(Py_REFCNT(frame_f11ecd94cef636832c1df8dd823d1f6a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_e);
        tmp_expression_value_2 = par_e;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[29]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f11ecd94cef636832c1df8dd823d1f6a->m_frame.f_lineno = 102;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_d);
        tmp_dircall_arg2_1 = var_d;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f11ecd94cef636832c1df8dd823d1f6a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f11ecd94cef636832c1df8dd823d1f6a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f11ecd94cef636832c1df8dd823d1f6a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f11ecd94cef636832c1df8dd823d1f6a,
        type_description_1,
        par_e,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_f11ecd94cef636832c1df8dd823d1f6a == cache_frame_f11ecd94cef636832c1df8dd823d1f6a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f11ecd94cef636832c1df8dd823d1f6a);
        cache_frame_f11ecd94cef636832c1df8dd823d1f6a = NULL;
    }

    assertFrameObject(frame_f11ecd94cef636832c1df8dd823d1f6a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_d);
    Py_DECREF(var_d);
    var_d = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_d);
    var_d = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$charts$bar_chart$$$function__3__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0bcac0371d9851a65a11c02131b889ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0bcac0371d9851a65a11c02131b889ee = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0bcac0371d9851a65a11c02131b889ee)) {
        Py_XDECREF(cache_frame_0bcac0371d9851a65a11c02131b889ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0bcac0371d9851a65a11c02131b889ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0bcac0371d9851a65a11c02131b889ee = MAKE_FUNCTION_FRAME(codeobj_0bcac0371d9851a65a11c02131b889ee, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0bcac0371d9851a65a11c02131b889ee->m_type_description == NULL);
    frame_0bcac0371d9851a65a11c02131b889ee = cache_frame_0bcac0371d9851a65a11c02131b889ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0bcac0371d9851a65a11c02131b889ee);
    assert(Py_REFCNT(frame_0bcac0371d9851a65a11c02131b889ee) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$charts$bar_chart, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0bcac0371d9851a65a11c02131b889ee->m_frame.f_lineno = 130;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[34];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[35]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 131;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0bcac0371d9851a65a11c02131b889ee->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[36];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[37]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 132;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0bcac0371d9851a65a11c02131b889ee->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[33]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[12];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[38]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 133;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0bcac0371d9851a65a11c02131b889ee->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[33]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[16];
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[39]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 134;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0bcac0371d9851a65a11c02131b889ee->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0bcac0371d9851a65a11c02131b889ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0bcac0371d9851a65a11c02131b889ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0bcac0371d9851a65a11c02131b889ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0bcac0371d9851a65a11c02131b889ee,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0bcac0371d9851a65a11c02131b889ee == cache_frame_0bcac0371d9851a65a11c02131b889ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0bcac0371d9851a65a11c02131b889ee);
        cache_frame_0bcac0371d9851a65a11c02131b889ee = NULL;
    }

    assertFrameObject(frame_0bcac0371d9851a65a11c02131b889ee);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__4__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_children = NULL;
    PyObject *var_ds = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_9bc61f82694793e651f7f2728de03f1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9bc61f82694793e651f7f2728de03f1a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_children == NULL);
        var_children = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_9bc61f82694793e651f7f2728de03f1a)) {
        Py_XDECREF(cache_frame_9bc61f82694793e651f7f2728de03f1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9bc61f82694793e651f7f2728de03f1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9bc61f82694793e651f7f2728de03f1a = MAKE_FUNCTION_FRAME(codeobj_9bc61f82694793e651f7f2728de03f1a, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9bc61f82694793e651f7f2728de03f1a->m_type_description == NULL);
    frame_9bc61f82694793e651f7f2728de03f1a = cache_frame_9bc61f82694793e651f7f2728de03f1a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9bc61f82694793e651f7f2728de03f1a);
    assert(Py_REFCNT(frame_9bc61f82694793e651f7f2728de03f1a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 138;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ds;
            var_ds = tmp_assign_source_4;
            Py_INCREF(var_ds);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = var_children;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ds);
        tmp_args_element_value_1 = var_ds;
        frame_9bc61f82694793e651f7f2728de03f1a->m_frame.f_lineno = 139;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 138;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[43]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[43]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9bc61f82694793e651f7f2728de03f1a->m_frame.f_lineno = 141;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[44],
            &PyTuple_GET_ITEM(mod_consts[45], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_6;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = var_children;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[42]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[43]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9bc61f82694793e651f7f2728de03f1a->m_frame.f_lineno = 142;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[46]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[46]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9bc61f82694793e651f7f2728de03f1a->m_frame.f_lineno = 144;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[44],
            &PyTuple_GET_ITEM(mod_consts[47], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_10;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_children;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[42]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[46]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9bc61f82694793e651f7f2728de03f1a->m_frame.f_lineno = 145;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[48]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[48]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9bc61f82694793e651f7f2728de03f1a->m_frame.f_lineno = 147;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[44],
            &PyTuple_GET_ITEM(mod_consts[49], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_14;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = var_children;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[42]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[48]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9bc61f82694793e651f7f2728de03f1a->m_frame.f_lineno = 148;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_attribute_value_4;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[50]);
        if (tmp_attribute_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_4);

            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[50]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9bc61f82694793e651f7f2728de03f1a->m_frame.f_lineno = 150;
        tmp_call_result_8 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_4,
            mod_consts[44],
            &PyTuple_GET_ITEM(mod_consts[51], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_18;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = var_children;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[42]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[50]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9bc61f82694793e651f7f2728de03f1a->m_frame.f_lineno = 151;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_4:;
    if (var_children == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 152;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_children;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9bc61f82694793e651f7f2728de03f1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9bc61f82694793e651f7f2728de03f1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9bc61f82694793e651f7f2728de03f1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9bc61f82694793e651f7f2728de03f1a,
        type_description_1,
        par_self,
        var_children,
        var_ds
    );


    // Release cached frame if used for exception.
    if (frame_9bc61f82694793e651f7f2728de03f1a == cache_frame_9bc61f82694793e651f7f2728de03f1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9bc61f82694793e651f7f2728de03f1a);
        cache_frame_9bc61f82694793e651f7f2728de03f1a = NULL;
    }

    assertFrameObject(frame_9bc61f82694793e651f7f2728de03f1a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_children);
    var_children = NULL;
    Py_XDECREF(var_ds);
    var_ds = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_children);
    var_children = NULL;
    Py_XDECREF(var_ds);
    var_ds = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__5_bar_groups(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_446c4471daca7ca1511bf8ae547735c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_446c4471daca7ca1511bf8ae547735c8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_446c4471daca7ca1511bf8ae547735c8)) {
        Py_XDECREF(cache_frame_446c4471daca7ca1511bf8ae547735c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_446c4471daca7ca1511bf8ae547735c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_446c4471daca7ca1511bf8ae547735c8 = MAKE_FUNCTION_FRAME(codeobj_446c4471daca7ca1511bf8ae547735c8, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_446c4471daca7ca1511bf8ae547735c8->m_type_description == NULL);
    frame_446c4471daca7ca1511bf8ae547735c8 = cache_frame_446c4471daca7ca1511bf8ae547735c8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_446c4471daca7ca1511bf8ae547735c8);
    assert(Py_REFCNT(frame_446c4471daca7ca1511bf8ae547735c8) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_446c4471daca7ca1511bf8ae547735c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_446c4471daca7ca1511bf8ae547735c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_446c4471daca7ca1511bf8ae547735c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_446c4471daca7ca1511bf8ae547735c8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_446c4471daca7ca1511bf8ae547735c8 == cache_frame_446c4471daca7ca1511bf8ae547735c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_446c4471daca7ca1511bf8ae547735c8);
        cache_frame_446c4471daca7ca1511bf8ae547735c8 = NULL;
    }

    assertFrameObject(frame_446c4471daca7ca1511bf8ae547735c8);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__6_bar_groups(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b1bb0622f2ce892048923319fa9073e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b1bb0622f2ce892048923319fa9073e6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b1bb0622f2ce892048923319fa9073e6)) {
        Py_XDECREF(cache_frame_b1bb0622f2ce892048923319fa9073e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1bb0622f2ce892048923319fa9073e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1bb0622f2ce892048923319fa9073e6 = MAKE_FUNCTION_FRAME(codeobj_b1bb0622f2ce892048923319fa9073e6, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b1bb0622f2ce892048923319fa9073e6->m_type_description == NULL);
    frame_b1bb0622f2ce892048923319fa9073e6 = cache_frame_b1bb0622f2ce892048923319fa9073e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b1bb0622f2ce892048923319fa9073e6);
    assert(Py_REFCNT(frame_b1bb0622f2ce892048923319fa9073e6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        Py_INCREF(tmp_assattr_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b1bb0622f2ce892048923319fa9073e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1bb0622f2ce892048923319fa9073e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1bb0622f2ce892048923319fa9073e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1bb0622f2ce892048923319fa9073e6,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b1bb0622f2ce892048923319fa9073e6 == cache_frame_b1bb0622f2ce892048923319fa9073e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b1bb0622f2ce892048923319fa9073e6);
        cache_frame_b1bb0622f2ce892048923319fa9073e6 = NULL;
    }

    assertFrameObject(frame_b1bb0622f2ce892048923319fa9073e6);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__7_groups_space(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f2c4c72b2873388c1900f6857165d73e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f2c4c72b2873388c1900f6857165d73e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f2c4c72b2873388c1900f6857165d73e)) {
        Py_XDECREF(cache_frame_f2c4c72b2873388c1900f6857165d73e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2c4c72b2873388c1900f6857165d73e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2c4c72b2873388c1900f6857165d73e = MAKE_FUNCTION_FRAME(codeobj_f2c4c72b2873388c1900f6857165d73e, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f2c4c72b2873388c1900f6857165d73e->m_type_description == NULL);
    frame_f2c4c72b2873388c1900f6857165d73e = cache_frame_f2c4c72b2873388c1900f6857165d73e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f2c4c72b2873388c1900f6857165d73e);
    assert(Py_REFCNT(frame_f2c4c72b2873388c1900f6857165d73e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f2c4c72b2873388c1900f6857165d73e->m_frame.f_lineno = 166;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[53], 0), mod_consts[54]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
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
        exception_tb = MAKE_TRACEBACK(frame_f2c4c72b2873388c1900f6857165d73e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2c4c72b2873388c1900f6857165d73e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2c4c72b2873388c1900f6857165d73e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2c4c72b2873388c1900f6857165d73e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f2c4c72b2873388c1900f6857165d73e == cache_frame_f2c4c72b2873388c1900f6857165d73e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f2c4c72b2873388c1900f6857165d73e);
        cache_frame_f2c4c72b2873388c1900f6857165d73e = NULL;
    }

    assertFrameObject(frame_f2c4c72b2873388c1900f6857165d73e);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__8_groups_space(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b323a4d562fdb6dea6c5fb0ba664c013;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b323a4d562fdb6dea6c5fb0ba664c013 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b323a4d562fdb6dea6c5fb0ba664c013)) {
        Py_XDECREF(cache_frame_b323a4d562fdb6dea6c5fb0ba664c013);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b323a4d562fdb6dea6c5fb0ba664c013 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b323a4d562fdb6dea6c5fb0ba664c013 = MAKE_FUNCTION_FRAME(codeobj_b323a4d562fdb6dea6c5fb0ba664c013, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b323a4d562fdb6dea6c5fb0ba664c013->m_type_description == NULL);
    frame_b323a4d562fdb6dea6c5fb0ba664c013 = cache_frame_b323a4d562fdb6dea6c5fb0ba664c013;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b323a4d562fdb6dea6c5fb0ba664c013);
    assert(Py_REFCNT(frame_b323a4d562fdb6dea6c5fb0ba664c013) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[56];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_b323a4d562fdb6dea6c5fb0ba664c013->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[55],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
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
        exception_tb = MAKE_TRACEBACK(frame_b323a4d562fdb6dea6c5fb0ba664c013, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b323a4d562fdb6dea6c5fb0ba664c013->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b323a4d562fdb6dea6c5fb0ba664c013, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b323a4d562fdb6dea6c5fb0ba664c013,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b323a4d562fdb6dea6c5fb0ba664c013 == cache_frame_b323a4d562fdb6dea6c5fb0ba664c013) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b323a4d562fdb6dea6c5fb0ba664c013);
        cache_frame_b323a4d562fdb6dea6c5fb0ba664c013 = NULL;
    }

    assertFrameObject(frame_b323a4d562fdb6dea6c5fb0ba664c013);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__9_animate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_302b2d625f029bddc4e6741e9a06d6d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_302b2d625f029bddc4e6741e9a06d6d0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_302b2d625f029bddc4e6741e9a06d6d0)) {
        Py_XDECREF(cache_frame_302b2d625f029bddc4e6741e9a06d6d0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_302b2d625f029bddc4e6741e9a06d6d0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_302b2d625f029bddc4e6741e9a06d6d0 = MAKE_FUNCTION_FRAME(codeobj_302b2d625f029bddc4e6741e9a06d6d0, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_302b2d625f029bddc4e6741e9a06d6d0->m_type_description == NULL);
    frame_302b2d625f029bddc4e6741e9a06d6d0 = cache_frame_302b2d625f029bddc4e6741e9a06d6d0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_302b2d625f029bddc4e6741e9a06d6d0);
    assert(Py_REFCNT(frame_302b2d625f029bddc4e6741e9a06d6d0) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
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
        exception_tb = MAKE_TRACEBACK(frame_302b2d625f029bddc4e6741e9a06d6d0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_302b2d625f029bddc4e6741e9a06d6d0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_302b2d625f029bddc4e6741e9a06d6d0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_302b2d625f029bddc4e6741e9a06d6d0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_302b2d625f029bddc4e6741e9a06d6d0 == cache_frame_302b2d625f029bddc4e6741e9a06d6d0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_302b2d625f029bddc4e6741e9a06d6d0);
        cache_frame_302b2d625f029bddc4e6741e9a06d6d0 = NULL;
    }

    assertFrameObject(frame_302b2d625f029bddc4e6741e9a06d6d0);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__10_animate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_68dea94313a5546179711d5ff0733631;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_68dea94313a5546179711d5ff0733631 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_68dea94313a5546179711d5ff0733631)) {
        Py_XDECREF(cache_frame_68dea94313a5546179711d5ff0733631);

#if _DEBUG_REFCOUNTS
        if (cache_frame_68dea94313a5546179711d5ff0733631 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_68dea94313a5546179711d5ff0733631 = MAKE_FUNCTION_FRAME(codeobj_68dea94313a5546179711d5ff0733631, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_68dea94313a5546179711d5ff0733631->m_type_description == NULL);
    frame_68dea94313a5546179711d5ff0733631 = cache_frame_68dea94313a5546179711d5ff0733631;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_68dea94313a5546179711d5ff0733631);
    assert(Py_REFCNT(frame_68dea94313a5546179711d5ff0733631) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_68dea94313a5546179711d5ff0733631, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_68dea94313a5546179711d5ff0733631->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_68dea94313a5546179711d5ff0733631, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_68dea94313a5546179711d5ff0733631,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_68dea94313a5546179711d5ff0733631 == cache_frame_68dea94313a5546179711d5ff0733631) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_68dea94313a5546179711d5ff0733631);
        cache_frame_68dea94313a5546179711d5ff0733631 = NULL;
    }

    assertFrameObject(frame_68dea94313a5546179711d5ff0733631);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__11_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_99d51b1d43be9035a3c9d131decb50cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_99d51b1d43be9035a3c9d131decb50cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_99d51b1d43be9035a3c9d131decb50cd)) {
        Py_XDECREF(cache_frame_99d51b1d43be9035a3c9d131decb50cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_99d51b1d43be9035a3c9d131decb50cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_99d51b1d43be9035a3c9d131decb50cd = MAKE_FUNCTION_FRAME(codeobj_99d51b1d43be9035a3c9d131decb50cd, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_99d51b1d43be9035a3c9d131decb50cd->m_type_description == NULL);
    frame_99d51b1d43be9035a3c9d131decb50cd = cache_frame_99d51b1d43be9035a3c9d131decb50cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_99d51b1d43be9035a3c9d131decb50cd);
    assert(Py_REFCNT(frame_99d51b1d43be9035a3c9d131decb50cd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_99d51b1d43be9035a3c9d131decb50cd->m_frame.f_lineno = 184;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[52],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
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
        exception_tb = MAKE_TRACEBACK(frame_99d51b1d43be9035a3c9d131decb50cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_99d51b1d43be9035a3c9d131decb50cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_99d51b1d43be9035a3c9d131decb50cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_99d51b1d43be9035a3c9d131decb50cd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_99d51b1d43be9035a3c9d131decb50cd == cache_frame_99d51b1d43be9035a3c9d131decb50cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_99d51b1d43be9035a3c9d131decb50cd);
        cache_frame_99d51b1d43be9035a3c9d131decb50cd = NULL;
    }

    assertFrameObject(frame_99d51b1d43be9035a3c9d131decb50cd);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__12_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e891278dd3b29902a848dbb5ac34f00c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e891278dd3b29902a848dbb5ac34f00c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e891278dd3b29902a848dbb5ac34f00c)) {
        Py_XDECREF(cache_frame_e891278dd3b29902a848dbb5ac34f00c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e891278dd3b29902a848dbb5ac34f00c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e891278dd3b29902a848dbb5ac34f00c = MAKE_FUNCTION_FRAME(codeobj_e891278dd3b29902a848dbb5ac34f00c, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e891278dd3b29902a848dbb5ac34f00c->m_type_description == NULL);
    frame_e891278dd3b29902a848dbb5ac34f00c = cache_frame_e891278dd3b29902a848dbb5ac34f00c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e891278dd3b29902a848dbb5ac34f00c);
    assert(Py_REFCNT(frame_e891278dd3b29902a848dbb5ac34f00c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[14];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_e891278dd3b29902a848dbb5ac34f00c->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[55],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
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
        exception_tb = MAKE_TRACEBACK(frame_e891278dd3b29902a848dbb5ac34f00c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e891278dd3b29902a848dbb5ac34f00c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e891278dd3b29902a848dbb5ac34f00c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e891278dd3b29902a848dbb5ac34f00c,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e891278dd3b29902a848dbb5ac34f00c == cache_frame_e891278dd3b29902a848dbb5ac34f00c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e891278dd3b29902a848dbb5ac34f00c);
        cache_frame_e891278dd3b29902a848dbb5ac34f00c = NULL;
    }

    assertFrameObject(frame_e891278dd3b29902a848dbb5ac34f00c);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__13_interactive(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cffe7210dae41f197dc50508dadcb11e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cffe7210dae41f197dc50508dadcb11e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cffe7210dae41f197dc50508dadcb11e)) {
        Py_XDECREF(cache_frame_cffe7210dae41f197dc50508dadcb11e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cffe7210dae41f197dc50508dadcb11e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cffe7210dae41f197dc50508dadcb11e = MAKE_FUNCTION_FRAME(codeobj_cffe7210dae41f197dc50508dadcb11e, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cffe7210dae41f197dc50508dadcb11e->m_type_description == NULL);
    frame_cffe7210dae41f197dc50508dadcb11e = cache_frame_cffe7210dae41f197dc50508dadcb11e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cffe7210dae41f197dc50508dadcb11e);
    assert(Py_REFCNT(frame_cffe7210dae41f197dc50508dadcb11e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_cffe7210dae41f197dc50508dadcb11e->m_frame.f_lineno = 193;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[58], 0), mod_consts[59]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
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
        exception_tb = MAKE_TRACEBACK(frame_cffe7210dae41f197dc50508dadcb11e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cffe7210dae41f197dc50508dadcb11e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cffe7210dae41f197dc50508dadcb11e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cffe7210dae41f197dc50508dadcb11e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cffe7210dae41f197dc50508dadcb11e == cache_frame_cffe7210dae41f197dc50508dadcb11e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cffe7210dae41f197dc50508dadcb11e);
        cache_frame_cffe7210dae41f197dc50508dadcb11e = NULL;
    }

    assertFrameObject(frame_cffe7210dae41f197dc50508dadcb11e);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__14_interactive(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_5345ca7ab1819de1759864fe88167dc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5345ca7ab1819de1759864fe88167dc2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5345ca7ab1819de1759864fe88167dc2)) {
        Py_XDECREF(cache_frame_5345ca7ab1819de1759864fe88167dc2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5345ca7ab1819de1759864fe88167dc2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5345ca7ab1819de1759864fe88167dc2 = MAKE_FUNCTION_FRAME(codeobj_5345ca7ab1819de1759864fe88167dc2, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5345ca7ab1819de1759864fe88167dc2->m_type_description == NULL);
    frame_5345ca7ab1819de1759864fe88167dc2 = cache_frame_5345ca7ab1819de1759864fe88167dc2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5345ca7ab1819de1759864fe88167dc2);
    assert(Py_REFCNT(frame_5345ca7ab1819de1759864fe88167dc2) == 2);

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
        frame_5345ca7ab1819de1759864fe88167dc2->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[55],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
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
        exception_tb = MAKE_TRACEBACK(frame_5345ca7ab1819de1759864fe88167dc2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5345ca7ab1819de1759864fe88167dc2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5345ca7ab1819de1759864fe88167dc2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5345ca7ab1819de1759864fe88167dc2,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_5345ca7ab1819de1759864fe88167dc2 == cache_frame_5345ca7ab1819de1759864fe88167dc2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5345ca7ab1819de1759864fe88167dc2);
        cache_frame_5345ca7ab1819de1759864fe88167dc2 = NULL;
    }

    assertFrameObject(frame_5345ca7ab1819de1759864fe88167dc2);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__15_tooltip_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_617c81dfcd08653d86b76f0c95ddd4eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_617c81dfcd08653d86b76f0c95ddd4eb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_617c81dfcd08653d86b76f0c95ddd4eb)) {
        Py_XDECREF(cache_frame_617c81dfcd08653d86b76f0c95ddd4eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_617c81dfcd08653d86b76f0c95ddd4eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_617c81dfcd08653d86b76f0c95ddd4eb = MAKE_FUNCTION_FRAME(codeobj_617c81dfcd08653d86b76f0c95ddd4eb, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_617c81dfcd08653d86b76f0c95ddd4eb->m_type_description == NULL);
    frame_617c81dfcd08653d86b76f0c95ddd4eb = cache_frame_617c81dfcd08653d86b76f0c95ddd4eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_617c81dfcd08653d86b76f0c95ddd4eb);
    assert(Py_REFCNT(frame_617c81dfcd08653d86b76f0c95ddd4eb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_617c81dfcd08653d86b76f0c95ddd4eb->m_frame.f_lineno = 202;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[52],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
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
        exception_tb = MAKE_TRACEBACK(frame_617c81dfcd08653d86b76f0c95ddd4eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_617c81dfcd08653d86b76f0c95ddd4eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_617c81dfcd08653d86b76f0c95ddd4eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_617c81dfcd08653d86b76f0c95ddd4eb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_617c81dfcd08653d86b76f0c95ddd4eb == cache_frame_617c81dfcd08653d86b76f0c95ddd4eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_617c81dfcd08653d86b76f0c95ddd4eb);
        cache_frame_617c81dfcd08653d86b76f0c95ddd4eb = NULL;
    }

    assertFrameObject(frame_617c81dfcd08653d86b76f0c95ddd4eb);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__16_tooltip_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_31de198e93e31dcb6435b5e0480a6791;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_31de198e93e31dcb6435b5e0480a6791 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_31de198e93e31dcb6435b5e0480a6791)) {
        Py_XDECREF(cache_frame_31de198e93e31dcb6435b5e0480a6791);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31de198e93e31dcb6435b5e0480a6791 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31de198e93e31dcb6435b5e0480a6791 = MAKE_FUNCTION_FRAME(codeobj_31de198e93e31dcb6435b5e0480a6791, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_31de198e93e31dcb6435b5e0480a6791->m_type_description == NULL);
    frame_31de198e93e31dcb6435b5e0480a6791 = cache_frame_31de198e93e31dcb6435b5e0480a6791;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_31de198e93e31dcb6435b5e0480a6791);
    assert(Py_REFCNT(frame_31de198e93e31dcb6435b5e0480a6791) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[61];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_31de198e93e31dcb6435b5e0480a6791->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[55],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
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
        exception_tb = MAKE_TRACEBACK(frame_31de198e93e31dcb6435b5e0480a6791, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31de198e93e31dcb6435b5e0480a6791->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31de198e93e31dcb6435b5e0480a6791, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31de198e93e31dcb6435b5e0480a6791,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_31de198e93e31dcb6435b5e0480a6791 == cache_frame_31de198e93e31dcb6435b5e0480a6791) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_31de198e93e31dcb6435b5e0480a6791);
        cache_frame_31de198e93e31dcb6435b5e0480a6791 = NULL;
    }

    assertFrameObject(frame_31de198e93e31dcb6435b5e0480a6791);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__17_border(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6137e4afe5a470e719d51e06f2c79b2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6137e4afe5a470e719d51e06f2c79b2e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6137e4afe5a470e719d51e06f2c79b2e)) {
        Py_XDECREF(cache_frame_6137e4afe5a470e719d51e06f2c79b2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6137e4afe5a470e719d51e06f2c79b2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6137e4afe5a470e719d51e06f2c79b2e = MAKE_FUNCTION_FRAME(codeobj_6137e4afe5a470e719d51e06f2c79b2e, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6137e4afe5a470e719d51e06f2c79b2e->m_type_description == NULL);
    frame_6137e4afe5a470e719d51e06f2c79b2e = cache_frame_6137e4afe5a470e719d51e06f2c79b2e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6137e4afe5a470e719d51e06f2c79b2e);
    assert(Py_REFCNT(frame_6137e4afe5a470e719d51e06f2c79b2e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
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
        exception_tb = MAKE_TRACEBACK(frame_6137e4afe5a470e719d51e06f2c79b2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6137e4afe5a470e719d51e06f2c79b2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6137e4afe5a470e719d51e06f2c79b2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6137e4afe5a470e719d51e06f2c79b2e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6137e4afe5a470e719d51e06f2c79b2e == cache_frame_6137e4afe5a470e719d51e06f2c79b2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6137e4afe5a470e719d51e06f2c79b2e);
        cache_frame_6137e4afe5a470e719d51e06f2c79b2e = NULL;
    }

    assertFrameObject(frame_6137e4afe5a470e719d51e06f2c79b2e);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__18_border(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_5785f602c1d3ee321d13914efa5eb69b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5785f602c1d3ee321d13914efa5eb69b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5785f602c1d3ee321d13914efa5eb69b)) {
        Py_XDECREF(cache_frame_5785f602c1d3ee321d13914efa5eb69b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5785f602c1d3ee321d13914efa5eb69b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5785f602c1d3ee321d13914efa5eb69b = MAKE_FUNCTION_FRAME(codeobj_5785f602c1d3ee321d13914efa5eb69b, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5785f602c1d3ee321d13914efa5eb69b->m_type_description == NULL);
    frame_5785f602c1d3ee321d13914efa5eb69b = cache_frame_5785f602c1d3ee321d13914efa5eb69b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5785f602c1d3ee321d13914efa5eb69b);
    assert(Py_REFCNT(frame_5785f602c1d3ee321d13914efa5eb69b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[39], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5785f602c1d3ee321d13914efa5eb69b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5785f602c1d3ee321d13914efa5eb69b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5785f602c1d3ee321d13914efa5eb69b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5785f602c1d3ee321d13914efa5eb69b,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_5785f602c1d3ee321d13914efa5eb69b == cache_frame_5785f602c1d3ee321d13914efa5eb69b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5785f602c1d3ee321d13914efa5eb69b);
        cache_frame_5785f602c1d3ee321d13914efa5eb69b = NULL;
    }

    assertFrameObject(frame_5785f602c1d3ee321d13914efa5eb69b);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__19_horizontal_grid_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_68f07faaa4b10aac8d938e05f4cb7cc9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_68f07faaa4b10aac8d938e05f4cb7cc9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_68f07faaa4b10aac8d938e05f4cb7cc9)) {
        Py_XDECREF(cache_frame_68f07faaa4b10aac8d938e05f4cb7cc9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_68f07faaa4b10aac8d938e05f4cb7cc9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_68f07faaa4b10aac8d938e05f4cb7cc9 = MAKE_FUNCTION_FRAME(codeobj_68f07faaa4b10aac8d938e05f4cb7cc9, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_68f07faaa4b10aac8d938e05f4cb7cc9->m_type_description == NULL);
    frame_68f07faaa4b10aac8d938e05f4cb7cc9 = cache_frame_68f07faaa4b10aac8d938e05f4cb7cc9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_68f07faaa4b10aac8d938e05f4cb7cc9);
    assert(Py_REFCNT(frame_68f07faaa4b10aac8d938e05f4cb7cc9) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
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
        exception_tb = MAKE_TRACEBACK(frame_68f07faaa4b10aac8d938e05f4cb7cc9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_68f07faaa4b10aac8d938e05f4cb7cc9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_68f07faaa4b10aac8d938e05f4cb7cc9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_68f07faaa4b10aac8d938e05f4cb7cc9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_68f07faaa4b10aac8d938e05f4cb7cc9 == cache_frame_68f07faaa4b10aac8d938e05f4cb7cc9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_68f07faaa4b10aac8d938e05f4cb7cc9);
        cache_frame_68f07faaa4b10aac8d938e05f4cb7cc9 = NULL;
    }

    assertFrameObject(frame_68f07faaa4b10aac8d938e05f4cb7cc9);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__20_horizontal_grid_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a93edec098ab331c08005cd2de596f2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a93edec098ab331c08005cd2de596f2f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a93edec098ab331c08005cd2de596f2f)) {
        Py_XDECREF(cache_frame_a93edec098ab331c08005cd2de596f2f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a93edec098ab331c08005cd2de596f2f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a93edec098ab331c08005cd2de596f2f = MAKE_FUNCTION_FRAME(codeobj_a93edec098ab331c08005cd2de596f2f, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a93edec098ab331c08005cd2de596f2f->m_type_description == NULL);
    frame_a93edec098ab331c08005cd2de596f2f = cache_frame_a93edec098ab331c08005cd2de596f2f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a93edec098ab331c08005cd2de596f2f);
    assert(Py_REFCNT(frame_a93edec098ab331c08005cd2de596f2f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a93edec098ab331c08005cd2de596f2f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a93edec098ab331c08005cd2de596f2f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a93edec098ab331c08005cd2de596f2f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a93edec098ab331c08005cd2de596f2f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a93edec098ab331c08005cd2de596f2f == cache_frame_a93edec098ab331c08005cd2de596f2f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a93edec098ab331c08005cd2de596f2f);
        cache_frame_a93edec098ab331c08005cd2de596f2f = NULL;
    }

    assertFrameObject(frame_a93edec098ab331c08005cd2de596f2f);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__21_vertical_grid_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_decd0a9f85e2bb4485bc07377b7d5f8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_decd0a9f85e2bb4485bc07377b7d5f8b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_decd0a9f85e2bb4485bc07377b7d5f8b)) {
        Py_XDECREF(cache_frame_decd0a9f85e2bb4485bc07377b7d5f8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_decd0a9f85e2bb4485bc07377b7d5f8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_decd0a9f85e2bb4485bc07377b7d5f8b = MAKE_FUNCTION_FRAME(codeobj_decd0a9f85e2bb4485bc07377b7d5f8b, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_decd0a9f85e2bb4485bc07377b7d5f8b->m_type_description == NULL);
    frame_decd0a9f85e2bb4485bc07377b7d5f8b = cache_frame_decd0a9f85e2bb4485bc07377b7d5f8b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_decd0a9f85e2bb4485bc07377b7d5f8b);
    assert(Py_REFCNT(frame_decd0a9f85e2bb4485bc07377b7d5f8b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_decd0a9f85e2bb4485bc07377b7d5f8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_decd0a9f85e2bb4485bc07377b7d5f8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_decd0a9f85e2bb4485bc07377b7d5f8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_decd0a9f85e2bb4485bc07377b7d5f8b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_decd0a9f85e2bb4485bc07377b7d5f8b == cache_frame_decd0a9f85e2bb4485bc07377b7d5f8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_decd0a9f85e2bb4485bc07377b7d5f8b);
        cache_frame_decd0a9f85e2bb4485bc07377b7d5f8b = NULL;
    }

    assertFrameObject(frame_decd0a9f85e2bb4485bc07377b7d5f8b);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__22_vertical_grid_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_60e504fa20515746d1f61a165269880f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_60e504fa20515746d1f61a165269880f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_60e504fa20515746d1f61a165269880f)) {
        Py_XDECREF(cache_frame_60e504fa20515746d1f61a165269880f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_60e504fa20515746d1f61a165269880f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_60e504fa20515746d1f61a165269880f = MAKE_FUNCTION_FRAME(codeobj_60e504fa20515746d1f61a165269880f, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_60e504fa20515746d1f61a165269880f->m_type_description == NULL);
    frame_60e504fa20515746d1f61a165269880f = cache_frame_60e504fa20515746d1f61a165269880f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_60e504fa20515746d1f61a165269880f);
    assert(Py_REFCNT(frame_60e504fa20515746d1f61a165269880f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60e504fa20515746d1f61a165269880f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60e504fa20515746d1f61a165269880f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60e504fa20515746d1f61a165269880f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_60e504fa20515746d1f61a165269880f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_60e504fa20515746d1f61a165269880f == cache_frame_60e504fa20515746d1f61a165269880f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_60e504fa20515746d1f61a165269880f);
        cache_frame_60e504fa20515746d1f61a165269880f = NULL;
    }

    assertFrameObject(frame_60e504fa20515746d1f61a165269880f);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__23_left_axis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e656c1a9a090390edea610e482be840d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e656c1a9a090390edea610e482be840d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e656c1a9a090390edea610e482be840d)) {
        Py_XDECREF(cache_frame_e656c1a9a090390edea610e482be840d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e656c1a9a090390edea610e482be840d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e656c1a9a090390edea610e482be840d = MAKE_FUNCTION_FRAME(codeobj_e656c1a9a090390edea610e482be840d, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e656c1a9a090390edea610e482be840d->m_type_description == NULL);
    frame_e656c1a9a090390edea610e482be840d = cache_frame_e656c1a9a090390edea610e482be840d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e656c1a9a090390edea610e482be840d);
    assert(Py_REFCNT(frame_e656c1a9a090390edea610e482be840d) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
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
        exception_tb = MAKE_TRACEBACK(frame_e656c1a9a090390edea610e482be840d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e656c1a9a090390edea610e482be840d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e656c1a9a090390edea610e482be840d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e656c1a9a090390edea610e482be840d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e656c1a9a090390edea610e482be840d == cache_frame_e656c1a9a090390edea610e482be840d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e656c1a9a090390edea610e482be840d);
        cache_frame_e656c1a9a090390edea610e482be840d = NULL;
    }

    assertFrameObject(frame_e656c1a9a090390edea610e482be840d);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__24_left_axis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_4e87c7b20c0f03d2f8971704ce1b63e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e87c7b20c0f03d2f8971704ce1b63e1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e87c7b20c0f03d2f8971704ce1b63e1)) {
        Py_XDECREF(cache_frame_4e87c7b20c0f03d2f8971704ce1b63e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e87c7b20c0f03d2f8971704ce1b63e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e87c7b20c0f03d2f8971704ce1b63e1 = MAKE_FUNCTION_FRAME(codeobj_4e87c7b20c0f03d2f8971704ce1b63e1, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e87c7b20c0f03d2f8971704ce1b63e1->m_type_description == NULL);
    frame_4e87c7b20c0f03d2f8971704ce1b63e1 = cache_frame_4e87c7b20c0f03d2f8971704ce1b63e1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4e87c7b20c0f03d2f8971704ce1b63e1);
    assert(Py_REFCNT(frame_4e87c7b20c0f03d2f8971704ce1b63e1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[43], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4e87c7b20c0f03d2f8971704ce1b63e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e87c7b20c0f03d2f8971704ce1b63e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e87c7b20c0f03d2f8971704ce1b63e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e87c7b20c0f03d2f8971704ce1b63e1,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_4e87c7b20c0f03d2f8971704ce1b63e1 == cache_frame_4e87c7b20c0f03d2f8971704ce1b63e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e87c7b20c0f03d2f8971704ce1b63e1);
        cache_frame_4e87c7b20c0f03d2f8971704ce1b63e1 = NULL;
    }

    assertFrameObject(frame_4e87c7b20c0f03d2f8971704ce1b63e1);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__25_top_axis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_068484b3eac2cb0c3c9cb11ca47bbf09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_068484b3eac2cb0c3c9cb11ca47bbf09 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_068484b3eac2cb0c3c9cb11ca47bbf09)) {
        Py_XDECREF(cache_frame_068484b3eac2cb0c3c9cb11ca47bbf09);

#if _DEBUG_REFCOUNTS
        if (cache_frame_068484b3eac2cb0c3c9cb11ca47bbf09 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_068484b3eac2cb0c3c9cb11ca47bbf09 = MAKE_FUNCTION_FRAME(codeobj_068484b3eac2cb0c3c9cb11ca47bbf09, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_068484b3eac2cb0c3c9cb11ca47bbf09->m_type_description == NULL);
    frame_068484b3eac2cb0c3c9cb11ca47bbf09 = cache_frame_068484b3eac2cb0c3c9cb11ca47bbf09;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_068484b3eac2cb0c3c9cb11ca47bbf09);
    assert(Py_REFCNT(frame_068484b3eac2cb0c3c9cb11ca47bbf09) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
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
        exception_tb = MAKE_TRACEBACK(frame_068484b3eac2cb0c3c9cb11ca47bbf09, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_068484b3eac2cb0c3c9cb11ca47bbf09->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_068484b3eac2cb0c3c9cb11ca47bbf09, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_068484b3eac2cb0c3c9cb11ca47bbf09,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_068484b3eac2cb0c3c9cb11ca47bbf09 == cache_frame_068484b3eac2cb0c3c9cb11ca47bbf09) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_068484b3eac2cb0c3c9cb11ca47bbf09);
        cache_frame_068484b3eac2cb0c3c9cb11ca47bbf09 = NULL;
    }

    assertFrameObject(frame_068484b3eac2cb0c3c9cb11ca47bbf09);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__26_top_axis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_15e77580eaa45692e1b1258952bb50ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_15e77580eaa45692e1b1258952bb50ab = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_15e77580eaa45692e1b1258952bb50ab)) {
        Py_XDECREF(cache_frame_15e77580eaa45692e1b1258952bb50ab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15e77580eaa45692e1b1258952bb50ab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15e77580eaa45692e1b1258952bb50ab = MAKE_FUNCTION_FRAME(codeobj_15e77580eaa45692e1b1258952bb50ab, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_15e77580eaa45692e1b1258952bb50ab->m_type_description == NULL);
    frame_15e77580eaa45692e1b1258952bb50ab = cache_frame_15e77580eaa45692e1b1258952bb50ab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_15e77580eaa45692e1b1258952bb50ab);
    assert(Py_REFCNT(frame_15e77580eaa45692e1b1258952bb50ab) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[46], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_15e77580eaa45692e1b1258952bb50ab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15e77580eaa45692e1b1258952bb50ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15e77580eaa45692e1b1258952bb50ab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15e77580eaa45692e1b1258952bb50ab,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_15e77580eaa45692e1b1258952bb50ab == cache_frame_15e77580eaa45692e1b1258952bb50ab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_15e77580eaa45692e1b1258952bb50ab);
        cache_frame_15e77580eaa45692e1b1258952bb50ab = NULL;
    }

    assertFrameObject(frame_15e77580eaa45692e1b1258952bb50ab);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__27_right_axis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_43e507fc040d1842b0295f7441f9c945;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_43e507fc040d1842b0295f7441f9c945 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_43e507fc040d1842b0295f7441f9c945)) {
        Py_XDECREF(cache_frame_43e507fc040d1842b0295f7441f9c945);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43e507fc040d1842b0295f7441f9c945 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43e507fc040d1842b0295f7441f9c945 = MAKE_FUNCTION_FRAME(codeobj_43e507fc040d1842b0295f7441f9c945, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43e507fc040d1842b0295f7441f9c945->m_type_description == NULL);
    frame_43e507fc040d1842b0295f7441f9c945 = cache_frame_43e507fc040d1842b0295f7441f9c945;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_43e507fc040d1842b0295f7441f9c945);
    assert(Py_REFCNT(frame_43e507fc040d1842b0295f7441f9c945) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
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
        exception_tb = MAKE_TRACEBACK(frame_43e507fc040d1842b0295f7441f9c945, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43e507fc040d1842b0295f7441f9c945->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43e507fc040d1842b0295f7441f9c945, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43e507fc040d1842b0295f7441f9c945,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_43e507fc040d1842b0295f7441f9c945 == cache_frame_43e507fc040d1842b0295f7441f9c945) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43e507fc040d1842b0295f7441f9c945);
        cache_frame_43e507fc040d1842b0295f7441f9c945 = NULL;
    }

    assertFrameObject(frame_43e507fc040d1842b0295f7441f9c945);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__28_right_axis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_fdd70f201a58dd946a7e5cd172f92989;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fdd70f201a58dd946a7e5cd172f92989 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fdd70f201a58dd946a7e5cd172f92989)) {
        Py_XDECREF(cache_frame_fdd70f201a58dd946a7e5cd172f92989);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fdd70f201a58dd946a7e5cd172f92989 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fdd70f201a58dd946a7e5cd172f92989 = MAKE_FUNCTION_FRAME(codeobj_fdd70f201a58dd946a7e5cd172f92989, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fdd70f201a58dd946a7e5cd172f92989->m_type_description == NULL);
    frame_fdd70f201a58dd946a7e5cd172f92989 = cache_frame_fdd70f201a58dd946a7e5cd172f92989;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fdd70f201a58dd946a7e5cd172f92989);
    assert(Py_REFCNT(frame_fdd70f201a58dd946a7e5cd172f92989) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fdd70f201a58dd946a7e5cd172f92989, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fdd70f201a58dd946a7e5cd172f92989->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fdd70f201a58dd946a7e5cd172f92989, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fdd70f201a58dd946a7e5cd172f92989,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_fdd70f201a58dd946a7e5cd172f92989 == cache_frame_fdd70f201a58dd946a7e5cd172f92989) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fdd70f201a58dd946a7e5cd172f92989);
        cache_frame_fdd70f201a58dd946a7e5cd172f92989 = NULL;
    }

    assertFrameObject(frame_fdd70f201a58dd946a7e5cd172f92989);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__29_bottom_axis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7a44d63bf6217db2575ecb68990ae915;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a44d63bf6217db2575ecb68990ae915 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a44d63bf6217db2575ecb68990ae915)) {
        Py_XDECREF(cache_frame_7a44d63bf6217db2575ecb68990ae915);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a44d63bf6217db2575ecb68990ae915 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a44d63bf6217db2575ecb68990ae915 = MAKE_FUNCTION_FRAME(codeobj_7a44d63bf6217db2575ecb68990ae915, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a44d63bf6217db2575ecb68990ae915->m_type_description == NULL);
    frame_7a44d63bf6217db2575ecb68990ae915 = cache_frame_7a44d63bf6217db2575ecb68990ae915;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a44d63bf6217db2575ecb68990ae915);
    assert(Py_REFCNT(frame_7a44d63bf6217db2575ecb68990ae915) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[50]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
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
        exception_tb = MAKE_TRACEBACK(frame_7a44d63bf6217db2575ecb68990ae915, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a44d63bf6217db2575ecb68990ae915->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a44d63bf6217db2575ecb68990ae915, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a44d63bf6217db2575ecb68990ae915,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7a44d63bf6217db2575ecb68990ae915 == cache_frame_7a44d63bf6217db2575ecb68990ae915) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a44d63bf6217db2575ecb68990ae915);
        cache_frame_7a44d63bf6217db2575ecb68990ae915 = NULL;
    }

    assertFrameObject(frame_7a44d63bf6217db2575ecb68990ae915);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__30_bottom_axis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_74eaa939f92f182acaeb6f4053158244;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_74eaa939f92f182acaeb6f4053158244 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_74eaa939f92f182acaeb6f4053158244)) {
        Py_XDECREF(cache_frame_74eaa939f92f182acaeb6f4053158244);

#if _DEBUG_REFCOUNTS
        if (cache_frame_74eaa939f92f182acaeb6f4053158244 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_74eaa939f92f182acaeb6f4053158244 = MAKE_FUNCTION_FRAME(codeobj_74eaa939f92f182acaeb6f4053158244, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_74eaa939f92f182acaeb6f4053158244->m_type_description == NULL);
    frame_74eaa939f92f182acaeb6f4053158244 = cache_frame_74eaa939f92f182acaeb6f4053158244;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_74eaa939f92f182acaeb6f4053158244);
    assert(Py_REFCNT(frame_74eaa939f92f182acaeb6f4053158244) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[50], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_74eaa939f92f182acaeb6f4053158244, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74eaa939f92f182acaeb6f4053158244->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74eaa939f92f182acaeb6f4053158244, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_74eaa939f92f182acaeb6f4053158244,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_74eaa939f92f182acaeb6f4053158244 == cache_frame_74eaa939f92f182acaeb6f4053158244) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_74eaa939f92f182acaeb6f4053158244);
        cache_frame_74eaa939f92f182acaeb6f4053158244 = NULL;
    }

    assertFrameObject(frame_74eaa939f92f182acaeb6f4053158244);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__31_baseline_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_773727aff19d4770760d4e214b3cc231;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_773727aff19d4770760d4e214b3cc231 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_773727aff19d4770760d4e214b3cc231)) {
        Py_XDECREF(cache_frame_773727aff19d4770760d4e214b3cc231);

#if _DEBUG_REFCOUNTS
        if (cache_frame_773727aff19d4770760d4e214b3cc231 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_773727aff19d4770760d4e214b3cc231 = MAKE_FUNCTION_FRAME(codeobj_773727aff19d4770760d4e214b3cc231, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_773727aff19d4770760d4e214b3cc231->m_type_description == NULL);
    frame_773727aff19d4770760d4e214b3cc231 = cache_frame_773727aff19d4770760d4e214b3cc231;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_773727aff19d4770760d4e214b3cc231);
    assert(Py_REFCNT(frame_773727aff19d4770760d4e214b3cc231) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_773727aff19d4770760d4e214b3cc231->m_frame.f_lineno = 274;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[54]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
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
        exception_tb = MAKE_TRACEBACK(frame_773727aff19d4770760d4e214b3cc231, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_773727aff19d4770760d4e214b3cc231->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_773727aff19d4770760d4e214b3cc231, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_773727aff19d4770760d4e214b3cc231,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_773727aff19d4770760d4e214b3cc231 == cache_frame_773727aff19d4770760d4e214b3cc231) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_773727aff19d4770760d4e214b3cc231);
        cache_frame_773727aff19d4770760d4e214b3cc231 = NULL;
    }

    assertFrameObject(frame_773727aff19d4770760d4e214b3cc231);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__32_baseline_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_39927c16dfdfecd13fc2d86c879ff03c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_39927c16dfdfecd13fc2d86c879ff03c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_39927c16dfdfecd13fc2d86c879ff03c)) {
        Py_XDECREF(cache_frame_39927c16dfdfecd13fc2d86c879ff03c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39927c16dfdfecd13fc2d86c879ff03c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39927c16dfdfecd13fc2d86c879ff03c = MAKE_FUNCTION_FRAME(codeobj_39927c16dfdfecd13fc2d86c879ff03c, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_39927c16dfdfecd13fc2d86c879ff03c->m_type_description == NULL);
    frame_39927c16dfdfecd13fc2d86c879ff03c = cache_frame_39927c16dfdfecd13fc2d86c879ff03c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_39927c16dfdfecd13fc2d86c879ff03c);
    assert(Py_REFCNT(frame_39927c16dfdfecd13fc2d86c879ff03c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[63];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_39927c16dfdfecd13fc2d86c879ff03c->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[55],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
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
        exception_tb = MAKE_TRACEBACK(frame_39927c16dfdfecd13fc2d86c879ff03c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39927c16dfdfecd13fc2d86c879ff03c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39927c16dfdfecd13fc2d86c879ff03c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39927c16dfdfecd13fc2d86c879ff03c,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_39927c16dfdfecd13fc2d86c879ff03c == cache_frame_39927c16dfdfecd13fc2d86c879ff03c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_39927c16dfdfecd13fc2d86c879ff03c);
        cache_frame_39927c16dfdfecd13fc2d86c879ff03c = NULL;
    }

    assertFrameObject(frame_39927c16dfdfecd13fc2d86c879ff03c);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__33_min_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bf897da1a1aca0e6a6d25c90be119c4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bf897da1a1aca0e6a6d25c90be119c4f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf897da1a1aca0e6a6d25c90be119c4f)) {
        Py_XDECREF(cache_frame_bf897da1a1aca0e6a6d25c90be119c4f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf897da1a1aca0e6a6d25c90be119c4f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf897da1a1aca0e6a6d25c90be119c4f = MAKE_FUNCTION_FRAME(codeobj_bf897da1a1aca0e6a6d25c90be119c4f, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf897da1a1aca0e6a6d25c90be119c4f->m_type_description == NULL);
    frame_bf897da1a1aca0e6a6d25c90be119c4f = cache_frame_bf897da1a1aca0e6a6d25c90be119c4f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf897da1a1aca0e6a6d25c90be119c4f);
    assert(Py_REFCNT(frame_bf897da1a1aca0e6a6d25c90be119c4f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bf897da1a1aca0e6a6d25c90be119c4f->m_frame.f_lineno = 283;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[64], 0), mod_consts[54]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
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
        exception_tb = MAKE_TRACEBACK(frame_bf897da1a1aca0e6a6d25c90be119c4f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf897da1a1aca0e6a6d25c90be119c4f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf897da1a1aca0e6a6d25c90be119c4f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf897da1a1aca0e6a6d25c90be119c4f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bf897da1a1aca0e6a6d25c90be119c4f == cache_frame_bf897da1a1aca0e6a6d25c90be119c4f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf897da1a1aca0e6a6d25c90be119c4f);
        cache_frame_bf897da1a1aca0e6a6d25c90be119c4f = NULL;
    }

    assertFrameObject(frame_bf897da1a1aca0e6a6d25c90be119c4f);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__34_min_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_30fa4d792fce1653d11738a1d69ede62;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30fa4d792fce1653d11738a1d69ede62 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_30fa4d792fce1653d11738a1d69ede62)) {
        Py_XDECREF(cache_frame_30fa4d792fce1653d11738a1d69ede62);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30fa4d792fce1653d11738a1d69ede62 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30fa4d792fce1653d11738a1d69ede62 = MAKE_FUNCTION_FRAME(codeobj_30fa4d792fce1653d11738a1d69ede62, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30fa4d792fce1653d11738a1d69ede62->m_type_description == NULL);
    frame_30fa4d792fce1653d11738a1d69ede62 = cache_frame_30fa4d792fce1653d11738a1d69ede62;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_30fa4d792fce1653d11738a1d69ede62);
    assert(Py_REFCNT(frame_30fa4d792fce1653d11738a1d69ede62) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[65];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_30fa4d792fce1653d11738a1d69ede62->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[55],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
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
        exception_tb = MAKE_TRACEBACK(frame_30fa4d792fce1653d11738a1d69ede62, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30fa4d792fce1653d11738a1d69ede62->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30fa4d792fce1653d11738a1d69ede62, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30fa4d792fce1653d11738a1d69ede62,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_30fa4d792fce1653d11738a1d69ede62 == cache_frame_30fa4d792fce1653d11738a1d69ede62) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30fa4d792fce1653d11738a1d69ede62);
        cache_frame_30fa4d792fce1653d11738a1d69ede62 = NULL;
    }

    assertFrameObject(frame_30fa4d792fce1653d11738a1d69ede62);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__35_max_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_03190eab3721034b5c991b265e63d978;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_03190eab3721034b5c991b265e63d978 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_03190eab3721034b5c991b265e63d978)) {
        Py_XDECREF(cache_frame_03190eab3721034b5c991b265e63d978);

#if _DEBUG_REFCOUNTS
        if (cache_frame_03190eab3721034b5c991b265e63d978 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_03190eab3721034b5c991b265e63d978 = MAKE_FUNCTION_FRAME(codeobj_03190eab3721034b5c991b265e63d978, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_03190eab3721034b5c991b265e63d978->m_type_description == NULL);
    frame_03190eab3721034b5c991b265e63d978 = cache_frame_03190eab3721034b5c991b265e63d978;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_03190eab3721034b5c991b265e63d978);
    assert(Py_REFCNT(frame_03190eab3721034b5c991b265e63d978) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_03190eab3721034b5c991b265e63d978->m_frame.f_lineno = 292;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[66], 0), mod_consts[54]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
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
        exception_tb = MAKE_TRACEBACK(frame_03190eab3721034b5c991b265e63d978, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03190eab3721034b5c991b265e63d978->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03190eab3721034b5c991b265e63d978, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_03190eab3721034b5c991b265e63d978,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_03190eab3721034b5c991b265e63d978 == cache_frame_03190eab3721034b5c991b265e63d978) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_03190eab3721034b5c991b265e63d978);
        cache_frame_03190eab3721034b5c991b265e63d978 = NULL;
    }

    assertFrameObject(frame_03190eab3721034b5c991b265e63d978);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__36_max_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_586c2f86c0608530b3a9e03c17d0a288;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_586c2f86c0608530b3a9e03c17d0a288 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_586c2f86c0608530b3a9e03c17d0a288)) {
        Py_XDECREF(cache_frame_586c2f86c0608530b3a9e03c17d0a288);

#if _DEBUG_REFCOUNTS
        if (cache_frame_586c2f86c0608530b3a9e03c17d0a288 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_586c2f86c0608530b3a9e03c17d0a288 = MAKE_FUNCTION_FRAME(codeobj_586c2f86c0608530b3a9e03c17d0a288, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_586c2f86c0608530b3a9e03c17d0a288->m_type_description == NULL);
    frame_586c2f86c0608530b3a9e03c17d0a288 = cache_frame_586c2f86c0608530b3a9e03c17d0a288;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_586c2f86c0608530b3a9e03c17d0a288);
    assert(Py_REFCNT(frame_586c2f86c0608530b3a9e03c17d0a288) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[67];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_586c2f86c0608530b3a9e03c17d0a288->m_frame.f_lineno = 296;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[55],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
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
        exception_tb = MAKE_TRACEBACK(frame_586c2f86c0608530b3a9e03c17d0a288, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_586c2f86c0608530b3a9e03c17d0a288->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_586c2f86c0608530b3a9e03c17d0a288, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_586c2f86c0608530b3a9e03c17d0a288,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_586c2f86c0608530b3a9e03c17d0a288 == cache_frame_586c2f86c0608530b3a9e03c17d0a288) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_586c2f86c0608530b3a9e03c17d0a288);
        cache_frame_586c2f86c0608530b3a9e03c17d0a288 = NULL;
    }

    assertFrameObject(frame_586c2f86c0608530b3a9e03c17d0a288);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__37_on_chart_event(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5382c1026cfc7c237189a4097ff38288;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5382c1026cfc7c237189a4097ff38288 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5382c1026cfc7c237189a4097ff38288)) {
        Py_XDECREF(cache_frame_5382c1026cfc7c237189a4097ff38288);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5382c1026cfc7c237189a4097ff38288 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5382c1026cfc7c237189a4097ff38288 = MAKE_FUNCTION_FRAME(codeobj_5382c1026cfc7c237189a4097ff38288, module_flet_core$charts$bar_chart, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5382c1026cfc7c237189a4097ff38288->m_type_description == NULL);
    frame_5382c1026cfc7c237189a4097ff38288 = cache_frame_5382c1026cfc7c237189a4097ff38288;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5382c1026cfc7c237189a4097ff38288);
    assert(Py_REFCNT(frame_5382c1026cfc7c237189a4097ff38288) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
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
        exception_tb = MAKE_TRACEBACK(frame_5382c1026cfc7c237189a4097ff38288, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5382c1026cfc7c237189a4097ff38288->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5382c1026cfc7c237189a4097ff38288, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5382c1026cfc7c237189a4097ff38288,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5382c1026cfc7c237189a4097ff38288 == cache_frame_5382c1026cfc7c237189a4097ff38288) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5382c1026cfc7c237189a4097ff38288);
        cache_frame_5382c1026cfc7c237189a4097ff38288 = NULL;
    }

    assertFrameObject(frame_5382c1026cfc7c237189a4097ff38288);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__38_on_chart_event(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_6e05132bded71e67140505c80cd622ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e05132bded71e67140505c80cd622ce = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e05132bded71e67140505c80cd622ce)) {
        Py_XDECREF(cache_frame_6e05132bded71e67140505c80cd622ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e05132bded71e67140505c80cd622ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e05132bded71e67140505c80cd622ce = MAKE_FUNCTION_FRAME(codeobj_6e05132bded71e67140505c80cd622ce, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e05132bded71e67140505c80cd622ce->m_type_description == NULL);
    frame_6e05132bded71e67140505c80cd622ce = cache_frame_6e05132bded71e67140505c80cd622ce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e05132bded71e67140505c80cd622ce);
    assert(Py_REFCNT(frame_6e05132bded71e67140505c80cd622ce) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_1 = par_handler;
        frame_6e05132bded71e67140505c80cd622ce->m_frame.f_lineno = 305;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[68], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_handler);
        tmp_cmp_expr_left_1 = par_handler;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_6e05132bded71e67140505c80cd622ce->m_frame.f_lineno = 307;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[55],
            &PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_6e05132bded71e67140505c80cd622ce->m_frame.f_lineno = 309;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[55],
            &PyTuple_GET_ITEM(mod_consts[70], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e05132bded71e67140505c80cd622ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e05132bded71e67140505c80cd622ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e05132bded71e67140505c80cd622ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e05132bded71e67140505c80cd622ce,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_6e05132bded71e67140505c80cd622ce == cache_frame_6e05132bded71e67140505c80cd622ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e05132bded71e67140505c80cd622ce);
        cache_frame_6e05132bded71e67140505c80cd622ce = NULL;
    }

    assertFrameObject(frame_6e05132bded71e67140505c80cd622ce);

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


static PyObject *impl_flet_core$charts$bar_chart$$$function__39___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_type = python_pars[1];
    PyObject *par_group_index = python_pars[2];
    PyObject *par_rod_index = python_pars[3];
    PyObject *par_stack_item_index = python_pars[4];
    struct Nuitka_FrameObject *frame_3532f886da72a3ffb97d11cfbb6c981d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3532f886da72a3ffb97d11cfbb6c981d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3532f886da72a3ffb97d11cfbb6c981d)) {
        Py_XDECREF(cache_frame_3532f886da72a3ffb97d11cfbb6c981d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3532f886da72a3ffb97d11cfbb6c981d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3532f886da72a3ffb97d11cfbb6c981d = MAKE_FUNCTION_FRAME(codeobj_3532f886da72a3ffb97d11cfbb6c981d, module_flet_core$charts$bar_chart, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3532f886da72a3ffb97d11cfbb6c981d->m_type_description == NULL);
    frame_3532f886da72a3ffb97d11cfbb6c981d = cache_frame_3532f886da72a3ffb97d11cfbb6c981d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3532f886da72a3ffb97d11cfbb6c981d);
    assert(Py_REFCNT(frame_3532f886da72a3ffb97d11cfbb6c981d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_type);
        tmp_assattr_value_1 = par_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[71], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_group_index);
        tmp_assattr_value_2 = par_group_index;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[72], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_rod_index);
        tmp_assattr_value_3 = par_rod_index;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[73], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_stack_item_index);
        tmp_assattr_value_4 = par_stack_item_index;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[74], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3532f886da72a3ffb97d11cfbb6c981d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3532f886da72a3ffb97d11cfbb6c981d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3532f886da72a3ffb97d11cfbb6c981d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3532f886da72a3ffb97d11cfbb6c981d,
        type_description_1,
        par_self,
        par_type,
        par_group_index,
        par_rod_index,
        par_stack_item_index
    );


    // Release cached frame if used for exception.
    if (frame_3532f886da72a3ffb97d11cfbb6c981d == cache_frame_3532f886da72a3ffb97d11cfbb6c981d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3532f886da72a3ffb97d11cfbb6c981d);
        cache_frame_3532f886da72a3ffb97d11cfbb6c981d = NULL;
    }

    assertFrameObject(frame_3532f886da72a3ffb97d11cfbb6c981d);

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
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_group_index);
    Py_DECREF(par_group_index);
    CHECK_OBJECT(par_rod_index);
    Py_DECREF(par_rod_index);
    CHECK_OBJECT(par_stack_item_index);
    Py_DECREF(par_stack_item_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_group_index);
    Py_DECREF(par_group_index);
    CHECK_OBJECT(par_rod_index);
    Py_DECREF(par_rod_index);
    CHECK_OBJECT(par_stack_item_index);
    Py_DECREF(par_stack_item_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__10_animate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__10_animate,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_68dea94313a5546179711d5ff0733631,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__11_bgcolor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__11_bgcolor,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_99d51b1d43be9035a3c9d131decb50cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__12_bgcolor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__12_bgcolor,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_e891278dd3b29902a848dbb5ac34f00c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__13_interactive(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__13_interactive,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_cffe7210dae41f197dc50508dadcb11e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__14_interactive(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__14_interactive,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_5345ca7ab1819de1759864fe88167dc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__15_tooltip_bgcolor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__15_tooltip_bgcolor,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_617c81dfcd08653d86b76f0c95ddd4eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__16_tooltip_bgcolor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__16_tooltip_bgcolor,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_31de198e93e31dcb6435b5e0480a6791,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__17_border(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__17_border,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_6137e4afe5a470e719d51e06f2c79b2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__18_border(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__18_border,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_5785f602c1d3ee321d13914efa5eb69b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__19_horizontal_grid_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__19_horizontal_grid_lines,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_68f07faaa4b10aac8d938e05f4cb7cc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_844c8a53486e79cb93ddea6622cc2d60,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__1___init__$$$function__1_convert_linechart_event_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__1___init__$$$function__1_convert_linechart_event_data,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[4],
#endif
        codeobj_f11ecd94cef636832c1df8dd823d1f6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__20_horizontal_grid_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__20_horizontal_grid_lines,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_a93edec098ab331c08005cd2de596f2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__21_vertical_grid_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__21_vertical_grid_lines,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_decd0a9f85e2bb4485bc07377b7d5f8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__22_vertical_grid_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__22_vertical_grid_lines,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_60e504fa20515746d1f61a165269880f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__23_left_axis(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__23_left_axis,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_e656c1a9a090390edea610e482be840d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__24_left_axis(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__24_left_axis,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_4e87c7b20c0f03d2f8971704ce1b63e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__25_top_axis(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__25_top_axis,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_068484b3eac2cb0c3c9cb11ca47bbf09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__26_top_axis(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__26_top_axis,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_15e77580eaa45692e1b1258952bb50ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__27_right_axis(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__27_right_axis,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_43e507fc040d1842b0295f7441f9c945,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__28_right_axis(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__28_right_axis,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_fdd70f201a58dd946a7e5cd172f92989,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__29_bottom_axis(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__29_bottom_axis,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_7a44d63bf6217db2575ecb68990ae915,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_4f86e9c7c36f1f01b71efb4ac2cb53a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[156]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__30_bottom_axis(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__30_bottom_axis,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_74eaa939f92f182acaeb6f4053158244,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__31_baseline_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__31_baseline_y,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_773727aff19d4770760d4e214b3cc231,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__32_baseline_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__32_baseline_y,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_39927c16dfdfecd13fc2d86c879ff03c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__33_min_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__33_min_y,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_bf897da1a1aca0e6a6d25c90be119c4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__34_min_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__34_min_y,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_30fa4d792fce1653d11738a1d69ede62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__35_max_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__35_max_y,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_03190eab3721034b5c991b265e63d978,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__36_max_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__36_max_y,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_586c2f86c0608530b3a9e03c17d0a288,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__37_on_chart_event() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__37_on_chart_event,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_5382c1026cfc7c237189a4097ff38288,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__38_on_chart_event() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__38_on_chart_event,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_6e05132bded71e67140505c80cd622ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__39___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__39___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_3532f886da72a3ffb97d11cfbb6c981d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__3__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__3__before_build_command,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_0bcac0371d9851a65a11c02131b889ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__4__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__4__get_children,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_9bc61f82694793e651f7f2728de03f1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__5_bar_groups() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__5_bar_groups,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_446c4471daca7ca1511bf8ae547735c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__6_bar_groups() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__6_bar_groups,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_b1bb0622f2ce892048923319fa9073e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__7_groups_space(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__7_groups_space,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_f2c4c72b2873388c1900f6857165d73e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__8_groups_space(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__8_groups_space,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_b323a4d562fdb6dea6c5fb0ba664c013,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__9_animate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart$$$function__9_animate,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_302b2d625f029bddc4e6741e9a06d6d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart,
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

function_impl_code functable_flet_core$charts$bar_chart[] = {
    impl_flet_core$charts$bar_chart$$$function__1___init__$$$function__1_convert_linechart_event_data,
    impl_flet_core$charts$bar_chart$$$function__1___init__,
    NULL,
    impl_flet_core$charts$bar_chart$$$function__3__before_build_command,
    impl_flet_core$charts$bar_chart$$$function__4__get_children,
    impl_flet_core$charts$bar_chart$$$function__5_bar_groups,
    impl_flet_core$charts$bar_chart$$$function__6_bar_groups,
    impl_flet_core$charts$bar_chart$$$function__7_groups_space,
    impl_flet_core$charts$bar_chart$$$function__8_groups_space,
    impl_flet_core$charts$bar_chart$$$function__9_animate,
    impl_flet_core$charts$bar_chart$$$function__10_animate,
    impl_flet_core$charts$bar_chart$$$function__11_bgcolor,
    impl_flet_core$charts$bar_chart$$$function__12_bgcolor,
    impl_flet_core$charts$bar_chart$$$function__13_interactive,
    impl_flet_core$charts$bar_chart$$$function__14_interactive,
    impl_flet_core$charts$bar_chart$$$function__15_tooltip_bgcolor,
    impl_flet_core$charts$bar_chart$$$function__16_tooltip_bgcolor,
    impl_flet_core$charts$bar_chart$$$function__17_border,
    impl_flet_core$charts$bar_chart$$$function__18_border,
    impl_flet_core$charts$bar_chart$$$function__19_horizontal_grid_lines,
    impl_flet_core$charts$bar_chart$$$function__20_horizontal_grid_lines,
    impl_flet_core$charts$bar_chart$$$function__21_vertical_grid_lines,
    impl_flet_core$charts$bar_chart$$$function__22_vertical_grid_lines,
    impl_flet_core$charts$bar_chart$$$function__23_left_axis,
    impl_flet_core$charts$bar_chart$$$function__24_left_axis,
    impl_flet_core$charts$bar_chart$$$function__25_top_axis,
    impl_flet_core$charts$bar_chart$$$function__26_top_axis,
    impl_flet_core$charts$bar_chart$$$function__27_right_axis,
    impl_flet_core$charts$bar_chart$$$function__28_right_axis,
    impl_flet_core$charts$bar_chart$$$function__29_bottom_axis,
    impl_flet_core$charts$bar_chart$$$function__30_bottom_axis,
    impl_flet_core$charts$bar_chart$$$function__31_baseline_y,
    impl_flet_core$charts$bar_chart$$$function__32_baseline_y,
    impl_flet_core$charts$bar_chart$$$function__33_min_y,
    impl_flet_core$charts$bar_chart$$$function__34_min_y,
    impl_flet_core$charts$bar_chart$$$function__35_max_y,
    impl_flet_core$charts$bar_chart$$$function__36_max_y,
    impl_flet_core$charts$bar_chart$$$function__37_on_chart_event,
    impl_flet_core$charts$bar_chart$$$function__38_on_chart_event,
    impl_flet_core$charts$bar_chart$$$function__39___init__,
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

    function_impl_code *current = functable_flet_core$charts$bar_chart;
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

    if (offset > sizeof(functable_flet_core$charts$bar_chart) || offset < 0) {
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
        functable_flet_core$charts$bar_chart[offset],
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
        module_flet_core$charts$bar_chart,
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
PyObject *modulecode_flet_core$charts$bar_chart(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.charts.bar_chart");

    // Store the module for future use.
    module_flet_core$charts$bar_chart = module;

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
        PRINT_STRING("flet_core.charts.bar_chart: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.charts.bar_chart: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.charts.bar_chart: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$charts$bar_chart\n");

    moduledict_flet_core$charts$bar_chart = MODULE_DICT(module_flet_core$charts$bar_chart);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$charts$bar_chart,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$charts$bar_chart,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[196]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$charts$bar_chart,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$charts$bar_chart,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$charts$bar_chart,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$charts$bar_chart);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$charts$bar_chart);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_77b7b9ea5d84c26e03ec637439309417;
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
    int tmp_res;
    PyObject *locals_flet_core$charts$bar_chart$$$class__1_BarChart_22 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5d8f3c614017756ecf3c235c3daec220_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_flet_core$charts$bar_chart$$$class__2_BarChartEvent_312 = NULL;
    struct Nuitka_FrameObject *frame_7c9d7fdd4201fe4f95ecf992a804c274_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_2);
    }
    frame_77b7b9ea5d84c26e03ec637439309417 = MAKE_MODULE_FRAME(codeobj_77b7b9ea5d84c26e03ec637439309417, module_flet_core$charts$bar_chart);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_77b7b9ea5d84c26e03ec637439309417);
    assert(Py_REFCNT(frame_77b7b9ea5d84c26e03ec637439309417) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[76];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[79], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[80], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[27];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$charts$bar_chart;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[82];
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_4);
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
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[83],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[83]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[84],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[84]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[85],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[85]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[86],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[86]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[87];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$charts$bar_chart;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[88];
        tmp_level_value_2 = mod_consts[82];
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 4;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[89],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[89]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[90];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$charts$bar_chart;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[91];
        tmp_level_value_3 = mod_consts[82];
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 5;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[92],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[93];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$charts$bar_chart;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[94];
        tmp_level_value_4 = mod_consts[82];
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 6;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[95],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[96];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$charts$bar_chart;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[97];
        tmp_level_value_5 = mod_consts[82];
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 7;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[98],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[98]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[99];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$charts$bar_chart;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[100];
        tmp_level_value_6 = mod_consts[82];
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 8;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[0],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[101];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core$charts$bar_chart;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[102];
        tmp_level_value_7 = mod_consts[82];
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 9;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[103],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[103]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[104];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_flet_core$charts$bar_chart;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[105];
        tmp_level_value_8 = mod_consts[82];
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 10;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[106],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[106]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[107];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_flet_core$charts$bar_chart;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[108];
        tmp_level_value_9 = mod_consts[82];
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 11;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[5],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[109];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_flet_core$charts$bar_chart;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[110];
        tmp_level_value_10 = mod_consts[82];
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 12;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[111],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[112];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_flet_core$charts$bar_chart;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[113];
        tmp_level_value_11 = mod_consts[82];
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 13;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[114],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[114]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[115],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[115]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[116],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[116]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[117],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[117]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_18 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_flet_core$charts$bar_chart,
                mod_consts[118],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[118]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_24);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_26 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
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


            exception_lineno = 22;

            goto try_except_handler_3;
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
        tmp_subscript_value_1 = mod_consts[82];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[119]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[119]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[120];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 22;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[121]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
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
        tmp_mod_expr_left_1 = mod_consts[122];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[123];
        tmp_getattr_default_1 = mod_consts[124];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[123]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 22;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_30;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$charts$bar_chart$$$class__1_BarChart_22 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[127], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        frame_5d8f3c614017756ecf3c235c3daec220_2 = MAKE_CLASS_FRAME(codeobj_5d8f3c614017756ecf3c235c3daec220, module_flet_core$charts$bar_chart, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_5d8f3c614017756ecf3c235c3daec220_2);
        assert(Py_REFCNT(frame_5d8f3c614017756ecf3c235c3daec220_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_3;
            tmp_defaults_1 = mod_consts[128];
            tmp_dict_key_1 = mod_consts[10];
            tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 25;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[84]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_6);

                        exception_lineno = 25;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[92]);

            if (tmp_subscript_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[92]);

                    if (unlikely(tmp_subscript_value_3 == NULL)) {
                        tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
                    }

                    if (tmp_subscript_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_6);
                        Py_DECREF(tmp_expression_value_7);

                        exception_lineno = 25;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_7);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_6);

                exception_lineno = 25;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_6);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 40 );
            {
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
                tmp_dict_key_1 = mod_consts[129];
                tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 26;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[111]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[111]);

                        if (unlikely(tmp_subscript_value_4 == NULL)) {
                            tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
                        }

                        if (tmp_subscript_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_8);

                            exception_lineno = 26;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 26;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[130];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 27;
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
                tmp_dict_key_1 = mod_consts[131];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 28;
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
                tmp_dict_key_1 = mod_consts[132];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 29;
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
                tmp_dict_key_1 = mod_consts[133];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 30;
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
                tmp_dict_key_1 = mod_consts[134];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 31;
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
                tmp_dict_key_1 = mod_consts[135];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 32;
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
                tmp_dict_key_1 = mod_consts[136];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[86]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[86]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 33;
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
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[137]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[138]);

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


                    exception_lineno = 33;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[139];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[116]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[116]);

                        if (unlikely(tmp_subscript_value_6 == NULL)) {
                            tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
                        }

                        if (tmp_subscript_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_10);

                            exception_lineno = 34;
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


                    exception_lineno = 34;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[140];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
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
                tmp_dict_key_1 = mod_consts[141];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[117]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[117]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
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
                tmp_dict_key_1 = mod_consts[142];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[118]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[118]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 37;
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
                tmp_dict_key_1 = mod_consts[143];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[115]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[115]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
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
                tmp_dict_key_1 = mod_consts[144];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 39;
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
                tmp_dict_key_1 = mod_consts[145];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[114]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[114]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 40;
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
                tmp_dict_key_1 = mod_consts[146];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[114]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[114]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 41;
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
                tmp_dict_key_1 = mod_consts[147];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[114]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[114]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 42;
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
                tmp_dict_key_1 = mod_consts[148];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[114]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[114]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 43;
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
                tmp_dict_key_1 = mod_consts[149];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[114]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[114]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 44;
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
                tmp_dict_key_1 = mod_consts[150];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[114]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[114]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 45;
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
                tmp_dict_key_1 = mod_consts[151];
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 47;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[152]);

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


                    exception_lineno = 47;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[153];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 48;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[137]);

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


                    exception_lineno = 48;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[154];
                tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 49;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[137]);

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


                    exception_lineno = 49;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[29];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[83]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[83]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 50;
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
                tmp_dict_key_1 = mod_consts[11];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 54;
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
                tmp_dict_key_1 = mod_consts[12];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[114]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[114]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 55;
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
                tmp_dict_key_1 = mod_consts[13];
                tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 56;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[137]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 56;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[14];
                tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 57;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[152]);

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


                    exception_lineno = 57;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[15];
                tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 58;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[152]);

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


                    exception_lineno = 58;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[16];
                tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 59;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[89]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_subscript_value_13 == NULL)) {
                            tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_subscript_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_17);

                            exception_lineno = 59;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 59;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[17];
                tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[98]);

                if (tmp_subscript_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[98]);

                        if (unlikely(tmp_subscript_value_14 == NULL)) {
                            tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                        }

                        if (tmp_subscript_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_18);

                            exception_lineno = 60;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 60;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[18];
                tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 61;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[98]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[98]);

                        if (unlikely(tmp_subscript_value_15 == NULL)) {
                            tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                        }

                        if (tmp_subscript_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_19);

                            exception_lineno = 61;
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


                    exception_lineno = 61;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[19];
                tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 62;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

                if (tmp_subscript_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                        if (unlikely(tmp_subscript_value_16 == NULL)) {
                            tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                        }

                        if (tmp_subscript_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_20);

                            exception_lineno = 62;
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


                    exception_lineno = 62;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[20];
                tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 63;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                        if (unlikely(tmp_subscript_value_17 == NULL)) {
                            tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                        }

                        if (tmp_subscript_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_21);

                            exception_lineno = 63;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 63;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[21];
                tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 64;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                        if (unlikely(tmp_subscript_value_18 == NULL)) {
                            tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                        }

                        if (tmp_subscript_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_22);

                            exception_lineno = 64;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 64;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[22];
                tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 65;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                        if (unlikely(tmp_subscript_value_19 == NULL)) {
                            tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                        }

                        if (tmp_subscript_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_23);

                            exception_lineno = 65;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 65;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[23];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
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
                tmp_dict_key_1 = mod_consts[24];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
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
                tmp_dict_key_1 = mod_consts[25];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 68;
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
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[157], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__3__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__4__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[160], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
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
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 155;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__5_bar_groups();

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 155;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__5_bar_groups();

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 155;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[10]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 159;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__6_bar_groups();

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 159;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[164], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
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
            tmp_called_value_4 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 164;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[165];
            tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_2 == NULL)) {
                        tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 165;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__7_groups_space(tmp_annotations_2);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 164;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[165];
            tmp_dict_value_3 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 165;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__7_groups_space(tmp_annotations_3);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 164;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[11]);

            if (unlikely(tmp_expression_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[164]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[167];
            tmp_dict_value_4 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 169;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__8_groups_space(tmp_annotations_4);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 168;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
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
            tmp_called_value_7 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[165];
            tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[114]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 174;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__9_animate(tmp_annotations_5);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 173;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[165];
            tmp_dict_value_6 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[114]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 174;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__9_animate(tmp_annotations_6);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 173;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[12]);

            if (unlikely(tmp_expression_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[164]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[167];
            tmp_dict_value_7 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[114]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);

                        exception_lineno = 178;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__10_animate(tmp_annotations_7);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 177;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_21;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
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
            tmp_called_value_10 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[165];
            tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 183;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[152]);

            if (tmp_subscript_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_26);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__11_bgcolor(tmp_annotations_8);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 182;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[165];
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 183;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[152]);

            if (tmp_subscript_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_21 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_27);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__11_bgcolor(tmp_annotations_9);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 182;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_22;
            tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[14]);

            if (unlikely(tmp_expression_value_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 186;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[164]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[167];
            tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 187;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[152]);

            if (tmp_subscript_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_29);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 187;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__12_bgcolor(tmp_annotations_10);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 186;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_24;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
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
            tmp_called_value_13 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 191;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[165];
            tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 192;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[137]);

            if (tmp_subscript_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_23 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_30);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 192;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__13_interactive(tmp_annotations_11);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 191;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[165];
            tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 192;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_24 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[137]);

            if (tmp_subscript_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_24 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_31);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__13_interactive(tmp_annotations_12);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 191;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_25;
            tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[13]);

            if (unlikely(tmp_expression_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[13]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 195;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[164]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_13 = mod_consts[167];
            tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 196;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_25 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[137]);

            if (tmp_subscript_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_25 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_33);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 196;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__14_interactive(tmp_annotations_13);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 195;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_27;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
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
            tmp_called_value_16 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 200;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_14 = mod_consts[165];
            tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 201;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_26 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[152]);

            if (tmp_subscript_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_34);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 201;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__15_tooltip_bgcolor(tmp_annotations_14);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 200;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_17 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_15 = mod_consts[165];
            tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 201;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[152]);

            if (tmp_subscript_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_27 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_35);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__15_tooltip_bgcolor(tmp_annotations_15);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 200;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_28;
            tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[15]);

            if (unlikely(tmp_expression_value_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[164]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_16 = mod_consts[167];
            tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 205;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[152]);

            if (tmp_subscript_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);

                exception_lineno = 205;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__16_tooltip_bgcolor(tmp_annotations_16);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 204;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_30;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
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
            tmp_called_value_19 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_17 = mod_consts[165];
            tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 210;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_38);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_29 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[89]);

            if (tmp_subscript_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_subscript_value_29 == NULL)) {
                        tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_subscript_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);
                        Py_DECREF(tmp_expression_value_38);

                        exception_lineno = 210;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_38);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);

                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__17_border(tmp_annotations_17);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 209;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_20 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_18 = mod_consts[165];
            tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 210;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_30 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[89]);

            if (tmp_subscript_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_subscript_value_30 == NULL)) {
                        tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_subscript_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_39);

                        exception_lineno = 210;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_39);
            Py_DECREF(tmp_subscript_value_30);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__17_border(tmp_annotations_18);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 209;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_31;
            tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[16]);

            if (unlikely(tmp_expression_value_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[16]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 213;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[164]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_19 = mod_consts[167];
            tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);

                        exception_lineno = 214;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_31 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[89]);

            if (tmp_subscript_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_subscript_value_31 == NULL)) {
                        tmp_subscript_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_subscript_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_expression_value_41);

                        exception_lineno = 214;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_41);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 214;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__18_border(tmp_annotations_19);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 213;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_33;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
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
            tmp_called_value_22 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_20 = mod_consts[165];
            tmp_expression_value_42 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 219;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_32 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[98]);

            if (tmp_subscript_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_subscript_value_32 == NULL)) {
                        tmp_subscript_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_subscript_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_expression_value_42);

                        exception_lineno = 219;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_42);
            Py_DECREF(tmp_subscript_value_32);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 219;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__19_horizontal_grid_lines(tmp_annotations_20);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 218;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_23 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_21 = mod_consts[165];
            tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_43 == NULL)) {
                        tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 219;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_33 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[98]);

            if (tmp_subscript_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_subscript_value_33 == NULL)) {
                        tmp_subscript_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_subscript_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_43);

                        exception_lineno = 219;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_43);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__19_horizontal_grid_lines(tmp_annotations_21);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 218;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_34;
            tmp_expression_value_44 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[17]);

            if (unlikely(tmp_expression_value_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[17]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 222;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[164]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_22 = mod_consts[167];
            tmp_expression_value_45 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);

                        exception_lineno = 223;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_34 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[98]);

            if (tmp_subscript_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_subscript_value_34 == NULL)) {
                        tmp_subscript_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_subscript_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);
                        Py_DECREF(tmp_expression_value_45);

                        exception_lineno = 223;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_45);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);

                exception_lineno = 223;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__20_horizontal_grid_lines(tmp_annotations_22);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 222;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_36;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
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
            tmp_called_value_25 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_23 = mod_consts[165];
            tmp_expression_value_46 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);

                        exception_lineno = 228;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_35 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[98]);

            if (tmp_subscript_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_subscript_value_35 == NULL)) {
                        tmp_subscript_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_subscript_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);
                        Py_DECREF(tmp_expression_value_46);

                        exception_lineno = 228;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_35);
            Py_DECREF(tmp_expression_value_46);
            Py_DECREF(tmp_subscript_value_35);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__21_vertical_grid_lines(tmp_annotations_23);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 227;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_26 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_24 = mod_consts[165];
            tmp_expression_value_47 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 228;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_36 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[98]);

            if (tmp_subscript_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_subscript_value_36 == NULL)) {
                        tmp_subscript_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_subscript_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_47);

                        exception_lineno = 228;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_36);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_36);
            Py_DECREF(tmp_expression_value_47);
            Py_DECREF(tmp_subscript_value_36);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__21_vertical_grid_lines(tmp_annotations_24);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 227;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_37;
            tmp_expression_value_48 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[18]);

            if (unlikely(tmp_expression_value_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[18]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[164]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_25 = mod_consts[167];
            tmp_expression_value_49 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);

                        exception_lineno = 232;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_49);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_37 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[98]);

            if (tmp_subscript_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_subscript_value_37 == NULL)) {
                        tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_subscript_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_expression_value_49);

                        exception_lineno = 232;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_49);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__22_vertical_grid_lines(tmp_annotations_25);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 231;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_39;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
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
            tmp_called_value_28 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_26 = mod_consts[165];
            tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);

                        exception_lineno = 237;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_38 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_38 == NULL)) {
                        tmp_subscript_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);
                        Py_DECREF(tmp_expression_value_50);

                        exception_lineno = 237;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_38);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__23_left_axis(tmp_annotations_26);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 236;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_29 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_27 = mod_consts[165];
            tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 237;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_51);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_39 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_39 == NULL)) {
                        tmp_subscript_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_51);

                        exception_lineno = 237;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_39);
            Py_DECREF(tmp_expression_value_51);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__23_left_axis(tmp_annotations_27);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 236;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_40;
            tmp_expression_value_52 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[19]);

            if (unlikely(tmp_expression_value_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[19]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[164]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_28 = mod_consts[167];
            tmp_expression_value_53 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_30);

                        exception_lineno = 241;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_53);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_40 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_40 == NULL)) {
                        tmp_subscript_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_30);
                        Py_DECREF(tmp_expression_value_53);

                        exception_lineno = 241;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_53);
            Py_DECREF(tmp_subscript_value_40);
            if (tmp_dict_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_30);

                exception_lineno = 241;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_28 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__24_left_axis(tmp_annotations_28);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 240;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_subscript_value_42;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
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
            tmp_called_value_31 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_29 = mod_consts[165];
            tmp_expression_value_54 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 246;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_54);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_41 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_41 == NULL)) {
                        tmp_subscript_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_expression_value_54);

                        exception_lineno = 246;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_54);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_29 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__25_top_axis(tmp_annotations_29);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 245;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_32 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_30 = mod_consts[165];
            tmp_expression_value_55 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_55 == NULL)) {
                        tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 246;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_55);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_42 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_42 == NULL)) {
                        tmp_subscript_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_55);

                        exception_lineno = 246;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_55);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__25_top_axis(tmp_annotations_30);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 245;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_43;
            tmp_expression_value_56 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[20]);

            if (unlikely(tmp_expression_value_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[20]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[164]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_31 = mod_consts[167];
            tmp_expression_value_57 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);

                        exception_lineno = 250;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_57);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_43 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_43 == NULL)) {
                        tmp_subscript_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);
                        Py_DECREF(tmp_expression_value_57);

                        exception_lineno = 250;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_57);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);

                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_args_element_value_33 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__26_top_axis(tmp_annotations_31);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 249;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_44;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_45;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
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
            tmp_called_value_34 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_32 = mod_consts[165];
            tmp_expression_value_58 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);

                        exception_lineno = 255;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_58);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_44 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_44 == NULL)) {
                        tmp_subscript_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);
                        Py_DECREF(tmp_expression_value_58);

                        exception_lineno = 255;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_44);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_44);
            Py_DECREF(tmp_expression_value_58);
            Py_DECREF(tmp_subscript_value_44);
            if (tmp_dict_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_34);

                exception_lineno = 255;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));


            tmp_args_element_value_34 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__27_right_axis(tmp_annotations_32);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 254;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_35 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_33 = mod_consts[165];
            tmp_expression_value_59 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_59 == NULL)) {
                        tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 255;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_59);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_45 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_45 == NULL)) {
                        tmp_subscript_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_59);

                        exception_lineno = 255;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_45);
            Py_DECREF(tmp_expression_value_59);
            Py_DECREF(tmp_subscript_value_45);
            if (tmp_dict_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));


            tmp_args_element_value_35 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__27_right_axis(tmp_annotations_33);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 254;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_36;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_annotations_34;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_46;
            tmp_expression_value_60 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[21]);

            if (unlikely(tmp_expression_value_60 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[21]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[164]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_34 = mod_consts[167];
            tmp_expression_value_61 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_61 == NULL)) {
                        tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);

                        exception_lineno = 259;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_61);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_46 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_46 == NULL)) {
                        tmp_subscript_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);
                        Py_DECREF(tmp_expression_value_61);

                        exception_lineno = 259;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_61);
            Py_DECREF(tmp_subscript_value_46);
            if (tmp_dict_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);

                exception_lineno = 259;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_34 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));


            tmp_args_element_value_36 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__28_right_axis(tmp_annotations_34);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 258;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_annotations_35;
            PyObject *tmp_dict_key_35;
            PyObject *tmp_dict_value_35;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_36;
            PyObject *tmp_dict_value_36;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_48;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
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
            tmp_called_value_37 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_35 = mod_consts[165];
            tmp_expression_value_62 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_62 == NULL)) {
                        tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 264;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_62);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_47 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_47 == NULL)) {
                        tmp_subscript_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);
                        Py_DECREF(tmp_expression_value_62);

                        exception_lineno = 264;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_47);
            Py_DECREF(tmp_expression_value_62);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_dict_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 264;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_35 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
            Py_DECREF(tmp_dict_value_35);
            assert(!(tmp_res != 0));


            tmp_args_element_value_37 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__29_bottom_axis(tmp_annotations_35);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 263;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_38 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_36 = mod_consts[165];
            tmp_expression_value_63 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 264;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_63);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_48 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_48 == NULL)) {
                        tmp_subscript_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_63);

                        exception_lineno = 264;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_48);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_48);
            Py_DECREF(tmp_expression_value_63);
            Py_DECREF(tmp_subscript_value_48);
            if (tmp_dict_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_36 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));


            tmp_args_element_value_38 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__29_bottom_axis(tmp_annotations_36);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 263;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_annotations_37;
            PyObject *tmp_dict_key_37;
            PyObject *tmp_dict_value_37;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_49;
            tmp_expression_value_64 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[22]);

            if (unlikely(tmp_expression_value_64 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[22]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 267;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[164]);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_37 = mod_consts[167];
            tmp_expression_value_65 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[85]);

            if (tmp_expression_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_expression_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_39);

                        exception_lineno = 268;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_65);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_49 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[95]);

            if (tmp_subscript_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_subscript_value_49 == NULL)) {
                        tmp_subscript_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_subscript_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_39);
                        Py_DECREF(tmp_expression_value_65);

                        exception_lineno = 268;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_49);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_49);
            Py_DECREF(tmp_expression_value_65);
            Py_DECREF(tmp_subscript_value_49);
            if (tmp_dict_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 268;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_37 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));


            tmp_args_element_value_39 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__30_bottom_axis(tmp_annotations_37);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 267;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_annotations_38;
            PyObject *tmp_dict_key_38;
            PyObject *tmp_dict_value_38;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_annotations_39;
            PyObject *tmp_dict_key_39;
            PyObject *tmp_dict_value_39;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
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
            tmp_called_value_40 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_38 = mod_consts[165];
            tmp_dict_value_38 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_38 == NULL)) {
                        tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);

                        exception_lineno = 273;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_38);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_38 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_38, tmp_dict_value_38);
            Py_DECREF(tmp_dict_value_38);
            assert(!(tmp_res != 0));


            tmp_args_element_value_40 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__31_baseline_y(tmp_annotations_38);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 272;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_41 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_39 = mod_consts[165];
            tmp_dict_value_39 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_39 == NULL)) {
                        tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 273;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_39 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));


            tmp_args_element_value_41 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__31_baseline_y(tmp_annotations_39);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 272;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_42;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_annotations_40;
            PyObject *tmp_dict_key_40;
            PyObject *tmp_dict_value_40;
            tmp_expression_value_66 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[23]);

            if (unlikely(tmp_expression_value_66 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[164]);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_40 = mod_consts[167];
            tmp_dict_value_40 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_40 == NULL)) {
                        tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);

                        exception_lineno = 277;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_40 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_40, tmp_dict_value_40);
            Py_DECREF(tmp_dict_value_40);
            assert(!(tmp_res != 0));


            tmp_args_element_value_42 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__32_baseline_y(tmp_annotations_40);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 276;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_annotations_41;
            PyObject *tmp_dict_key_41;
            PyObject *tmp_dict_value_41;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_annotations_42;
            PyObject *tmp_dict_key_42;
            PyObject *tmp_dict_value_42;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
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
            tmp_called_value_43 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_41 = mod_consts[165];
            tmp_dict_value_41 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_41 == NULL)) {
                        tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_43);

                        exception_lineno = 282;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_41 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_41, tmp_dict_value_41);
            Py_DECREF(tmp_dict_value_41);
            assert(!(tmp_res != 0));


            tmp_args_element_value_43 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__33_min_y(tmp_annotations_41);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 281;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_44 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_42 = mod_consts[165];
            tmp_dict_value_42 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_42 == NULL)) {
                        tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 282;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_42 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_42, tmp_dict_value_42);
            Py_DECREF(tmp_dict_value_42);
            assert(!(tmp_res != 0));


            tmp_args_element_value_44 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__33_min_y(tmp_annotations_42);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 281;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_annotations_43;
            PyObject *tmp_dict_key_43;
            PyObject *tmp_dict_value_43;
            tmp_expression_value_67 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[24]);

            if (unlikely(tmp_expression_value_67 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[24]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 285;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[164]);
            Py_DECREF(tmp_expression_value_67);
            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_43 = mod_consts[167];
            tmp_dict_value_43 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_43 == NULL)) {
                        tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);

                        exception_lineno = 286;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_43 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_43, tmp_dict_value_43);
            Py_DECREF(tmp_dict_value_43);
            assert(!(tmp_res != 0));


            tmp_args_element_value_45 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__34_min_y(tmp_annotations_43);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 285;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_45);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_annotations_44;
            PyObject *tmp_dict_key_44;
            PyObject *tmp_dict_value_44;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_annotations_45;
            PyObject *tmp_dict_key_45;
            PyObject *tmp_dict_value_45;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_19 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_17;
            } else {
                goto condexpr_false_17;
            }
            condexpr_true_17:;
            tmp_called_value_46 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_44 = mod_consts[165];
            tmp_dict_value_44 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_44 == NULL)) {
                        tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);

                        exception_lineno = 291;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_44);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_44 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_44, tmp_dict_value_44);
            Py_DECREF(tmp_dict_value_44);
            assert(!(tmp_res != 0));


            tmp_args_element_value_46 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__35_max_y(tmp_annotations_44);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 290;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_47 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_45 = mod_consts[165];
            tmp_dict_value_45 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_45 == NULL)) {
                        tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 291;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_45 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_45, tmp_dict_value_45);
            Py_DECREF(tmp_dict_value_45);
            assert(!(tmp_res != 0));


            tmp_args_element_value_47 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__35_max_y(tmp_annotations_45);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 290;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_annotations_46;
            PyObject *tmp_dict_key_46;
            PyObject *tmp_dict_value_46;
            tmp_expression_value_68 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[25]);

            if (unlikely(tmp_expression_value_68 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[25]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 294;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[164]);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_46 = mod_consts[167];
            tmp_dict_value_46 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[103]);

            if (tmp_dict_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_dict_value_46 == NULL)) {
                        tmp_dict_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_dict_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);

                        exception_lineno = 295;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_46 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_46, tmp_dict_value_46);
            Py_DECREF(tmp_dict_value_46);
            assert(!(tmp_res != 0));


            tmp_args_element_value_48 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__36_max_y(tmp_annotations_46);

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 294;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_48);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_50;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_20 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_18;
            } else {
                goto condexpr_false_18;
            }
            condexpr_true_18:;
            tmp_called_value_49 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[162]);

            if (unlikely(tmp_called_value_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[162]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_49 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__37_on_chart_event();

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 299;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_49);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_50 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_50 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__37_on_chart_event();

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 299;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_51;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[26]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[26]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_51 = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__38_on_chart_event();

            frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame.f_lineno = 303;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[164], tmp_args_element_value_51);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5d8f3c614017756ecf3c235c3daec220_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5d8f3c614017756ecf3c235c3daec220_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5d8f3c614017756ecf3c235c3daec220_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5d8f3c614017756ecf3c235c3daec220_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_5d8f3c614017756ecf3c235c3daec220_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22, mod_consts[183], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_51 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[120];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_flet_core$charts$bar_chart$$$class__1_BarChart_22;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 22;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_51, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_5;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_32);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_31 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22);
        locals_flet_core$charts$bar_chart$$$class__1_BarChart_22 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$charts$bar_chart$$$class__1_BarChart_22);
        locals_flet_core$charts$bar_chart$$$class__1_BarChart_22 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 22;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_31);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_6;
        }
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_34 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_50;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_6;
        }
        tmp_condition_result_22 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_69 = tmp_class_creation_2__bases;
        tmp_subscript_value_50 = mod_consts[82];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_69, tmp_subscript_value_50, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_6;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_19:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_70 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_70, mod_consts[119]);
        tmp_condition_result_23 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_71 = tmp_class_creation_2__metaclass;
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[119]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_6;
        }
        tmp_tuple_element_7 = mod_consts[30];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_7 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 312;
        tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_52, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_72 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_72, mod_consts[121]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_6;
        }
        tmp_condition_result_24 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[122];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[123];
        tmp_getattr_default_2 = mod_consts[124];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_73;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_73 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_73 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[123]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 312;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_38;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$charts$bar_chart$$$class__2_BarChartEvent_312 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__2_BarChartEvent_312, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__2_BarChartEvent_312, mod_consts[127], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_8;
        }
        frame_7c9d7fdd4201fe4f95ecf992a804c274_3 = MAKE_CLASS_FRAME(codeobj_7c9d7fdd4201fe4f95ecf992a804c274, module_flet_core$charts$bar_chart, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7c9d7fdd4201fe4f95ecf992a804c274_3);
        assert(Py_REFCNT(frame_7c9d7fdd4201fe4f95ecf992a804c274_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_47;
            tmp_annotations_47 = DICT_COPY(mod_consts[184]);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$bar_chart$$$function__39___init__(tmp_annotations_47);

            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__2_BarChartEvent_312, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7c9d7fdd4201fe4f95ecf992a804c274_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7c9d7fdd4201fe4f95ecf992a804c274_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7c9d7fdd4201fe4f95ecf992a804c274_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7c9d7fdd4201fe4f95ecf992a804c274_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_7c9d7fdd4201fe4f95ecf992a804c274_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart$$$class__2_BarChartEvent_312, mod_consts[183], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto try_except_handler_8;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_53 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = mod_consts[30];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_flet_core$charts$bar_chart$$$class__2_BarChartEvent_312;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_77b7b9ea5d84c26e03ec637439309417->m_frame.f_lineno = 312;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_53, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_39 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_flet_core$charts$bar_chart$$$class__2_BarChartEvent_312);
        locals_flet_core$charts$bar_chart$$$class__2_BarChartEvent_312 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$charts$bar_chart$$$class__2_BarChartEvent_312);
        locals_flet_core$charts$bar_chart$$$class__2_BarChartEvent_312 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 312;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_39);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_77b7b9ea5d84c26e03ec637439309417, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77b7b9ea5d84c26e03ec637439309417->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77b7b9ea5d84c26e03ec637439309417, exception_lineno);
    }



    assertFrameObject(frame_77b7b9ea5d84c26e03ec637439309417);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core.charts.bar_chart", false);

    Py_INCREF(module_flet_core$charts$bar_chart);
    return module_flet_core$charts$bar_chart;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$charts$bar_chart", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
