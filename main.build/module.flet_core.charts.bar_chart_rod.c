/* Generated code for Python module 'flet_core.charts.bar_chart_rod'
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

/* The "module_flet_core$charts$bar_chart_rod" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$charts$bar_chart_rod;
PyDictObject *moduledict_flet_core$charts$bar_chart_rod;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[143];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[143];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.charts.bar_chart_rod"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 143; i++) {
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
void checkModuleConstants_flet_core$charts$bar_chart_rod(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 143; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c2c4d1b878cc5bc767486c8f2c76b216;
static PyCodeObject *codeobj_060df22ccf12613add44da3607ae1ea0;
static PyCodeObject *codeobj_7fde7bf5790dbccb78390360446c2815;
static PyCodeObject *codeobj_fd47e05e6de78f47af4643bf06deeab9;
static PyCodeObject *codeobj_de68f18a6bbda056bfc1f0a30c5a71f9;
static PyCodeObject *codeobj_a90ba89a80cd548c99bd50d3778b7acc;
static PyCodeObject *codeobj_a923ef1f4960128e6bf2c5a7751ec70e;
static PyCodeObject *codeobj_7b0ab81d2375c7b288ce6c55126515a0;
static PyCodeObject *codeobj_4db2c3cbdd00c11a62d0250c68e4c65d;
static PyCodeObject *codeobj_fedade24f67e281348d053eb546e65a9;
static PyCodeObject *codeobj_b1d25d421ecfc3f597f17d7396990ccf;
static PyCodeObject *codeobj_3b021a4c847135a502762f11bd14b009;
static PyCodeObject *codeobj_e4b59f30d8b51b247b3ba44d040466ca;
static PyCodeObject *codeobj_1bf004e4b55dd2a75b996a0795a2ca5b;
static PyCodeObject *codeobj_e35a693c62d18938048c706b62a26e4d;
static PyCodeObject *codeobj_3ae0f09ad0eeb646a1085c0828e5ef89;
static PyCodeObject *codeobj_0f7b659d0d3d5fbeb3d51db799a2166b;
static PyCodeObject *codeobj_9d7971ec7cc71c552007c25e797f090d;
static PyCodeObject *codeobj_f47ce42b73b269a642dde895fb238a14;
static PyCodeObject *codeobj_f4092d1f7216b0ffd50942218713fb9a;
static PyCodeObject *codeobj_d4ed98eb15ddd70e743d6dea5dc9c7a2;
static PyCodeObject *codeobj_971fb215383c210da8d9e25efdebbd04;
static PyCodeObject *codeobj_ae9e2097a8743a9365fa86c674535f18;
static PyCodeObject *codeobj_349251aaff5e4db61e5e7587ac84c163;
static PyCodeObject *codeobj_87e946f1352b18d28514302b3527fb7e;
static PyCodeObject *codeobj_f6d8249e932bd73192bd82abbc33fd23;
static PyCodeObject *codeobj_7420d10a63b8d4cf7eeed890da459334;
static PyCodeObject *codeobj_eb5aaffb263db8d7ab8e1f7166c6c4ef;
static PyCodeObject *codeobj_6aff99798bc1136e043910e00ef00b73;
static PyCodeObject *codeobj_5c013b4817a3fde44c05d280c442fdbd;
static PyCodeObject *codeobj_d987257a9edba26d2b7288c55acde229;
static PyCodeObject *codeobj_eacf6afd6e9c5c5da1e4efd4443d318f;
static PyCodeObject *codeobj_02b78d39219feac82e8d1beb87f8b312;
static PyCodeObject *codeobj_f63af1dcfb358565543e2d5e81972d98;
static PyCodeObject *codeobj_aec503a0cc6396c6b0b2a81f985eb352;
static PyCodeObject *codeobj_77dc1124d5f6e146e2fcce2f660d5866;
static PyCodeObject *codeobj_7fe1baf13bfa0d1726fc52f68ee3134f;
static PyCodeObject *codeobj_eb86dffd2e5c58e563f800a00b77414b;
static PyCodeObject *codeobj_64772e8a88c125a074d0fff8d1cbd7ba;
static PyCodeObject *codeobj_12cf347b16a592e3b60a6f3b791e167e;
static PyCodeObject *codeobj_5d141ffd2a1a73461784ebeddf6925f4;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[58]; CHECK_OBJECT(module_filename_obj);
    codeobj_c2c4d1b878cc5bc767486c8f2c76b216 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[136], mod_consts[136], NULL, NULL, 0, 0, 0);
    codeobj_060df22ccf12613add44da3607ae1ea0 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[137], NULL, 0, 0, 0);
    codeobj_7fde7bf5790dbccb78390360446c2815 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[138], NULL, 22, 0, 0);
    codeobj_fd47e05e6de78f47af4643bf06deeab9 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[139], NULL, 2, 0, 0);
    codeobj_de68f18a6bbda056bfc1f0a30c5a71f9 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[140], mod_consts[137], 1, 0, 0);
    codeobj_a90ba89a80cd548c99bd50d3778b7acc = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[141], NULL, 1, 0, 0);
    codeobj_a923ef1f4960128e6bf2c5a7751ec70e = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[141], NULL, 1, 0, 0);
    codeobj_7b0ab81d2375c7b288ce6c55126515a0 = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[141], NULL, 1, 0, 0);
    codeobj_4db2c3cbdd00c11a62d0250c68e4c65d = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[139], NULL, 2, 0, 0);
    codeobj_fedade24f67e281348d053eb546e65a9 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[141], NULL, 1, 0, 0);
    codeobj_b1d25d421ecfc3f597f17d7396990ccf = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[139], NULL, 2, 0, 0);
    codeobj_3b021a4c847135a502762f11bd14b009 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[141], NULL, 1, 0, 0);
    codeobj_e4b59f30d8b51b247b3ba44d040466ca = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[139], NULL, 2, 0, 0);
    codeobj_1bf004e4b55dd2a75b996a0795a2ca5b = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[141], NULL, 1, 0, 0);
    codeobj_e35a693c62d18938048c706b62a26e4d = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[139], NULL, 2, 0, 0);
    codeobj_3ae0f09ad0eeb646a1085c0828e5ef89 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[141], NULL, 1, 0, 0);
    codeobj_0f7b659d0d3d5fbeb3d51db799a2166b = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[139], NULL, 2, 0, 0);
    codeobj_9d7971ec7cc71c552007c25e797f090d = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[141], NULL, 1, 0, 0);
    codeobj_f47ce42b73b269a642dde895fb238a14 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[139], NULL, 2, 0, 0);
    codeobj_f4092d1f7216b0ffd50942218713fb9a = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[141], NULL, 1, 0, 0);
    codeobj_d4ed98eb15ddd70e743d6dea5dc9c7a2 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[139], NULL, 2, 0, 0);
    codeobj_971fb215383c210da8d9e25efdebbd04 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[141], NULL, 1, 0, 0);
    codeobj_ae9e2097a8743a9365fa86c674535f18 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[139], NULL, 2, 0, 0);
    codeobj_349251aaff5e4db61e5e7587ac84c163 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[141], NULL, 1, 0, 0);
    codeobj_87e946f1352b18d28514302b3527fb7e = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[139], NULL, 2, 0, 0);
    codeobj_f6d8249e932bd73192bd82abbc33fd23 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[141], NULL, 1, 0, 0);
    codeobj_7420d10a63b8d4cf7eeed890da459334 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[139], NULL, 2, 0, 0);
    codeobj_eb5aaffb263db8d7ab8e1f7166c6c4ef = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[141], NULL, 1, 0, 0);
    codeobj_6aff99798bc1136e043910e00ef00b73 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[139], NULL, 2, 0, 0);
    codeobj_5c013b4817a3fde44c05d280c442fdbd = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[141], NULL, 1, 0, 0);
    codeobj_d987257a9edba26d2b7288c55acde229 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[139], NULL, 2, 0, 0);
    codeobj_eacf6afd6e9c5c5da1e4efd4443d318f = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[141], NULL, 1, 0, 0);
    codeobj_02b78d39219feac82e8d1beb87f8b312 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[139], NULL, 2, 0, 0);
    codeobj_f63af1dcfb358565543e2d5e81972d98 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[141], NULL, 1, 0, 0);
    codeobj_aec503a0cc6396c6b0b2a81f985eb352 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[139], NULL, 2, 0, 0);
    codeobj_77dc1124d5f6e146e2fcce2f660d5866 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[141], NULL, 1, 0, 0);
    codeobj_7fe1baf13bfa0d1726fc52f68ee3134f = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[139], NULL, 2, 0, 0);
    codeobj_eb86dffd2e5c58e563f800a00b77414b = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[141], NULL, 1, 0, 0);
    codeobj_64772e8a88c125a074d0fff8d1cbd7ba = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[139], NULL, 2, 0, 0);
    codeobj_12cf347b16a592e3b60a6f3b791e167e = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[141], NULL, 1, 0, 0);
    codeobj_5d141ffd2a1a73461784ebeddf6925f4 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[139], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__10_to_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__11_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__12_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__13_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__14_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__15_border_side(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__16_border_side(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__17_border_radius(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__18_border_radius(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__19_gradient(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__20_gradient(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__21_bg_from_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__22_bg_from_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__23_bg_to_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__24_bg_to_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__25_bg_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__26_bg_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__27_bg_gradient(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__28_bg_gradient(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__29_selected(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__30_selected(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__31_show_tooltip(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__32_show_tooltip(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__33_tooltip(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__34_tooltip(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__35_tooltip_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__36_tooltip_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__37___set_tooltip_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__38_tooltip_style();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__39_tooltip_style(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__3__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__4__get_children();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__5_rod_stack_items();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__6_rod_stack_items();


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__7_from_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__8_from_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__9_to_y(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_rod_stack_items = python_pars[1];
    PyObject *par_ref = python_pars[2];
    PyObject *par_disabled = python_pars[3];
    PyObject *par_visible = python_pars[4];
    PyObject *par_data = python_pars[5];
    PyObject *par_from_y = python_pars[6];
    PyObject *par_to_y = python_pars[7];
    PyObject *par_width = python_pars[8];
    PyObject *par_color = python_pars[9];
    PyObject *par_gradient = python_pars[10];
    PyObject *par_border_radius = python_pars[11];
    PyObject *par_border_side = python_pars[12];
    PyObject *par_bg_from_y = python_pars[13];
    PyObject *par_bg_to_y = python_pars[14];
    PyObject *par_bg_color = python_pars[15];
    PyObject *par_bg_gradient = python_pars[16];
    PyObject *par_selected = python_pars[17];
    PyObject *par_show_tooltip = python_pars[18];
    PyObject *par_tooltip = python_pars[19];
    PyObject *par_tooltip_style = python_pars[20];
    PyObject *par_tooltip_align = python_pars[21];
    struct Nuitka_FrameObject *frame_7fde7bf5790dbccb78390360446c2815;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7fde7bf5790dbccb78390360446c2815 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7fde7bf5790dbccb78390360446c2815)) {
        Py_XDECREF(cache_frame_7fde7bf5790dbccb78390360446c2815);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7fde7bf5790dbccb78390360446c2815 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7fde7bf5790dbccb78390360446c2815 = MAKE_FUNCTION_FRAME(codeobj_7fde7bf5790dbccb78390360446c2815, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7fde7bf5790dbccb78390360446c2815->m_type_description == NULL);
    frame_7fde7bf5790dbccb78390360446c2815 = cache_frame_7fde7bf5790dbccb78390360446c2815;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7fde7bf5790dbccb78390360446c2815);
    assert(Py_REFCNT(frame_7fde7bf5790dbccb78390360446c2815) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_1_1 = par_disabled;
        CHECK_OBJECT(par_visible);
        tmp_kw_call_dict_value_2_1 = par_visible;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_3_1 = par_data;
        frame_7fde7bf5790dbccb78390360446c2815->m_frame.f_lineno = 41;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_rod_stack_items);
        tmp_assattr_value_1 = par_rod_stack_items;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_from_y);
        tmp_assattr_value_2 = par_from_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_to_y);
        tmp_assattr_value_3 = par_to_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_width);
        tmp_assattr_value_4 = par_width;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_color);
        tmp_assattr_value_5 = par_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_gradient);
        tmp_assattr_value_6 = par_gradient;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_border_side);
        tmp_assattr_value_7 = par_border_side;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_border_radius);
        tmp_assattr_value_8 = par_border_radius;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[10], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_bg_from_y);
        tmp_assattr_value_9 = par_bg_from_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[11], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_bg_to_y);
        tmp_assattr_value_10 = par_bg_to_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[12], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_bg_color);
        tmp_assattr_value_11 = par_bg_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[13], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_bg_gradient);
        tmp_assattr_value_12 = par_bg_gradient;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[14], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_selected);
        tmp_assattr_value_13 = par_selected;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[15], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(par_show_tooltip);
        tmp_assattr_value_14 = par_show_tooltip;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[16], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_tooltip);
        tmp_assattr_value_15 = par_tooltip;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[17], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT(par_tooltip_align);
        tmp_assattr_value_16 = par_tooltip_align;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[18], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(par_tooltip_style);
        tmp_assattr_value_17 = par_tooltip_style;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[19], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7fde7bf5790dbccb78390360446c2815, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7fde7bf5790dbccb78390360446c2815->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7fde7bf5790dbccb78390360446c2815, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7fde7bf5790dbccb78390360446c2815,
        type_description_1,
        par_self,
        par_rod_stack_items,
        par_ref,
        par_disabled,
        par_visible,
        par_data,
        par_from_y,
        par_to_y,
        par_width,
        par_color,
        par_gradient,
        par_border_radius,
        par_border_side,
        par_bg_from_y,
        par_bg_to_y,
        par_bg_color,
        par_bg_gradient,
        par_selected,
        par_show_tooltip,
        par_tooltip,
        par_tooltip_style,
        par_tooltip_align
    );


    // Release cached frame if used for exception.
    if (frame_7fde7bf5790dbccb78390360446c2815 == cache_frame_7fde7bf5790dbccb78390360446c2815) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7fde7bf5790dbccb78390360446c2815);
        cache_frame_7fde7bf5790dbccb78390360446c2815 = NULL;
    }

    assertFrameObject(frame_7fde7bf5790dbccb78390360446c2815);

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
    CHECK_OBJECT(par_rod_stack_items);
    Py_DECREF(par_rod_stack_items);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_from_y);
    Py_DECREF(par_from_y);
    CHECK_OBJECT(par_to_y);
    Py_DECREF(par_to_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_gradient);
    Py_DECREF(par_gradient);
    CHECK_OBJECT(par_border_radius);
    Py_DECREF(par_border_radius);
    CHECK_OBJECT(par_border_side);
    Py_DECREF(par_border_side);
    CHECK_OBJECT(par_bg_from_y);
    Py_DECREF(par_bg_from_y);
    CHECK_OBJECT(par_bg_to_y);
    Py_DECREF(par_bg_to_y);
    CHECK_OBJECT(par_bg_color);
    Py_DECREF(par_bg_color);
    CHECK_OBJECT(par_bg_gradient);
    Py_DECREF(par_bg_gradient);
    CHECK_OBJECT(par_selected);
    Py_DECREF(par_selected);
    CHECK_OBJECT(par_show_tooltip);
    Py_DECREF(par_show_tooltip);
    CHECK_OBJECT(par_tooltip);
    Py_DECREF(par_tooltip);
    CHECK_OBJECT(par_tooltip_style);
    Py_DECREF(par_tooltip_style);
    CHECK_OBJECT(par_tooltip_align);
    Py_DECREF(par_tooltip_align);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_rod_stack_items);
    Py_DECREF(par_rod_stack_items);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_from_y);
    Py_DECREF(par_from_y);
    CHECK_OBJECT(par_to_y);
    Py_DECREF(par_to_y);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_gradient);
    Py_DECREF(par_gradient);
    CHECK_OBJECT(par_border_radius);
    Py_DECREF(par_border_radius);
    CHECK_OBJECT(par_border_side);
    Py_DECREF(par_border_side);
    CHECK_OBJECT(par_bg_from_y);
    Py_DECREF(par_bg_from_y);
    CHECK_OBJECT(par_bg_to_y);
    Py_DECREF(par_bg_to_y);
    CHECK_OBJECT(par_bg_color);
    Py_DECREF(par_bg_color);
    CHECK_OBJECT(par_bg_gradient);
    Py_DECREF(par_bg_gradient);
    CHECK_OBJECT(par_selected);
    Py_DECREF(par_selected);
    CHECK_OBJECT(par_show_tooltip);
    Py_DECREF(par_show_tooltip);
    CHECK_OBJECT(par_tooltip);
    Py_DECREF(par_tooltip);
    CHECK_OBJECT(par_tooltip_style);
    Py_DECREF(par_tooltip_style);
    CHECK_OBJECT(par_tooltip_align);
    Py_DECREF(par_tooltip_align);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__3__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_de68f18a6bbda056bfc1f0a30c5a71f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_de68f18a6bbda056bfc1f0a30c5a71f9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_de68f18a6bbda056bfc1f0a30c5a71f9)) {
        Py_XDECREF(cache_frame_de68f18a6bbda056bfc1f0a30c5a71f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de68f18a6bbda056bfc1f0a30c5a71f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de68f18a6bbda056bfc1f0a30c5a71f9 = MAKE_FUNCTION_FRAME(codeobj_de68f18a6bbda056bfc1f0a30c5a71f9, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_de68f18a6bbda056bfc1f0a30c5a71f9->m_type_description == NULL);
    frame_de68f18a6bbda056bfc1f0a30c5a71f9 = cache_frame_de68f18a6bbda056bfc1f0a30c5a71f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_de68f18a6bbda056bfc1f0a30c5a71f9);
    assert(Py_REFCNT(frame_de68f18a6bbda056bfc1f0a30c5a71f9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$charts$bar_chart_rod, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_de68f18a6bbda056bfc1f0a30c5a71f9->m_frame.f_lineno = 71;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[8];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[23]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 72;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_de68f18a6bbda056bfc1f0a30c5a71f9->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
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
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[24];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 73;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_de68f18a6bbda056bfc1f0a30c5a71f9->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
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
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[22]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[26];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[27]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_de68f18a6bbda056bfc1f0a30c5a71f9->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
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
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[22]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[28];
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[29]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 75;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_de68f18a6bbda056bfc1f0a30c5a71f9->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
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
        exception_tb = MAKE_TRACEBACK(frame_de68f18a6bbda056bfc1f0a30c5a71f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de68f18a6bbda056bfc1f0a30c5a71f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de68f18a6bbda056bfc1f0a30c5a71f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de68f18a6bbda056bfc1f0a30c5a71f9,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_de68f18a6bbda056bfc1f0a30c5a71f9 == cache_frame_de68f18a6bbda056bfc1f0a30c5a71f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_de68f18a6bbda056bfc1f0a30c5a71f9);
        cache_frame_de68f18a6bbda056bfc1f0a30c5a71f9 = NULL;
    }

    assertFrameObject(frame_de68f18a6bbda056bfc1f0a30c5a71f9);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__4__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a90ba89a80cd548c99bd50d3778b7acc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a90ba89a80cd548c99bd50d3778b7acc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a90ba89a80cd548c99bd50d3778b7acc)) {
        Py_XDECREF(cache_frame_a90ba89a80cd548c99bd50d3778b7acc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a90ba89a80cd548c99bd50d3778b7acc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a90ba89a80cd548c99bd50d3778b7acc = MAKE_FUNCTION_FRAME(codeobj_a90ba89a80cd548c99bd50d3778b7acc, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a90ba89a80cd548c99bd50d3778b7acc->m_type_description == NULL);
    frame_a90ba89a80cd548c99bd50d3778b7acc = cache_frame_a90ba89a80cd548c99bd50d3778b7acc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a90ba89a80cd548c99bd50d3778b7acc);
    assert(Py_REFCNT(frame_a90ba89a80cd548c99bd50d3778b7acc) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
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
        exception_tb = MAKE_TRACEBACK(frame_a90ba89a80cd548c99bd50d3778b7acc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a90ba89a80cd548c99bd50d3778b7acc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a90ba89a80cd548c99bd50d3778b7acc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a90ba89a80cd548c99bd50d3778b7acc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a90ba89a80cd548c99bd50d3778b7acc == cache_frame_a90ba89a80cd548c99bd50d3778b7acc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a90ba89a80cd548c99bd50d3778b7acc);
        cache_frame_a90ba89a80cd548c99bd50d3778b7acc = NULL;
    }

    assertFrameObject(frame_a90ba89a80cd548c99bd50d3778b7acc);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__5_rod_stack_items(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f6d8249e932bd73192bd82abbc33fd23;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f6d8249e932bd73192bd82abbc33fd23 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6d8249e932bd73192bd82abbc33fd23)) {
        Py_XDECREF(cache_frame_f6d8249e932bd73192bd82abbc33fd23);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6d8249e932bd73192bd82abbc33fd23 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6d8249e932bd73192bd82abbc33fd23 = MAKE_FUNCTION_FRAME(codeobj_f6d8249e932bd73192bd82abbc33fd23, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f6d8249e932bd73192bd82abbc33fd23->m_type_description == NULL);
    frame_f6d8249e932bd73192bd82abbc33fd23 = cache_frame_f6d8249e932bd73192bd82abbc33fd23;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f6d8249e932bd73192bd82abbc33fd23);
    assert(Py_REFCNT(frame_f6d8249e932bd73192bd82abbc33fd23) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
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
        exception_tb = MAKE_TRACEBACK(frame_f6d8249e932bd73192bd82abbc33fd23, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6d8249e932bd73192bd82abbc33fd23->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6d8249e932bd73192bd82abbc33fd23, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6d8249e932bd73192bd82abbc33fd23,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f6d8249e932bd73192bd82abbc33fd23 == cache_frame_f6d8249e932bd73192bd82abbc33fd23) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f6d8249e932bd73192bd82abbc33fd23);
        cache_frame_f6d8249e932bd73192bd82abbc33fd23 = NULL;
    }

    assertFrameObject(frame_f6d8249e932bd73192bd82abbc33fd23);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__6_rod_stack_items(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_7420d10a63b8d4cf7eeed890da459334;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7420d10a63b8d4cf7eeed890da459334 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7420d10a63b8d4cf7eeed890da459334)) {
        Py_XDECREF(cache_frame_7420d10a63b8d4cf7eeed890da459334);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7420d10a63b8d4cf7eeed890da459334 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7420d10a63b8d4cf7eeed890da459334 = MAKE_FUNCTION_FRAME(codeobj_7420d10a63b8d4cf7eeed890da459334, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7420d10a63b8d4cf7eeed890da459334->m_type_description == NULL);
    frame_7420d10a63b8d4cf7eeed890da459334 = cache_frame_7420d10a63b8d4cf7eeed890da459334;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7420d10a63b8d4cf7eeed890da459334);
    assert(Py_REFCNT(frame_7420d10a63b8d4cf7eeed890da459334) == 2);

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
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7420d10a63b8d4cf7eeed890da459334, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7420d10a63b8d4cf7eeed890da459334->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7420d10a63b8d4cf7eeed890da459334, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7420d10a63b8d4cf7eeed890da459334,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7420d10a63b8d4cf7eeed890da459334 == cache_frame_7420d10a63b8d4cf7eeed890da459334) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7420d10a63b8d4cf7eeed890da459334);
        cache_frame_7420d10a63b8d4cf7eeed890da459334 = NULL;
    }

    assertFrameObject(frame_7420d10a63b8d4cf7eeed890da459334);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__7_from_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_971fb215383c210da8d9e25efdebbd04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_971fb215383c210da8d9e25efdebbd04 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_971fb215383c210da8d9e25efdebbd04)) {
        Py_XDECREF(cache_frame_971fb215383c210da8d9e25efdebbd04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_971fb215383c210da8d9e25efdebbd04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_971fb215383c210da8d9e25efdebbd04 = MAKE_FUNCTION_FRAME(codeobj_971fb215383c210da8d9e25efdebbd04, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_971fb215383c210da8d9e25efdebbd04->m_type_description == NULL);
    frame_971fb215383c210da8d9e25efdebbd04 = cache_frame_971fb215383c210da8d9e25efdebbd04;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_971fb215383c210da8d9e25efdebbd04);
    assert(Py_REFCNT(frame_971fb215383c210da8d9e25efdebbd04) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_971fb215383c210da8d9e25efdebbd04->m_frame.f_lineno = 92;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[32], 0), mod_consts[33]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_971fb215383c210da8d9e25efdebbd04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_971fb215383c210da8d9e25efdebbd04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_971fb215383c210da8d9e25efdebbd04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_971fb215383c210da8d9e25efdebbd04,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_971fb215383c210da8d9e25efdebbd04 == cache_frame_971fb215383c210da8d9e25efdebbd04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_971fb215383c210da8d9e25efdebbd04);
        cache_frame_971fb215383c210da8d9e25efdebbd04 = NULL;
    }

    assertFrameObject(frame_971fb215383c210da8d9e25efdebbd04);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__8_from_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ae9e2097a8743a9365fa86c674535f18;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae9e2097a8743a9365fa86c674535f18 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae9e2097a8743a9365fa86c674535f18)) {
        Py_XDECREF(cache_frame_ae9e2097a8743a9365fa86c674535f18);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae9e2097a8743a9365fa86c674535f18 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae9e2097a8743a9365fa86c674535f18 = MAKE_FUNCTION_FRAME(codeobj_ae9e2097a8743a9365fa86c674535f18, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ae9e2097a8743a9365fa86c674535f18->m_type_description == NULL);
    frame_ae9e2097a8743a9365fa86c674535f18 = cache_frame_ae9e2097a8743a9365fa86c674535f18;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ae9e2097a8743a9365fa86c674535f18);
    assert(Py_REFCNT(frame_ae9e2097a8743a9365fa86c674535f18) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[35];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_ae9e2097a8743a9365fa86c674535f18->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
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
        exception_tb = MAKE_TRACEBACK(frame_ae9e2097a8743a9365fa86c674535f18, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae9e2097a8743a9365fa86c674535f18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae9e2097a8743a9365fa86c674535f18, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae9e2097a8743a9365fa86c674535f18,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ae9e2097a8743a9365fa86c674535f18 == cache_frame_ae9e2097a8743a9365fa86c674535f18) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae9e2097a8743a9365fa86c674535f18);
        cache_frame_ae9e2097a8743a9365fa86c674535f18 = NULL;
    }

    assertFrameObject(frame_ae9e2097a8743a9365fa86c674535f18);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__9_to_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_eacf6afd6e9c5c5da1e4efd4443d318f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eacf6afd6e9c5c5da1e4efd4443d318f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eacf6afd6e9c5c5da1e4efd4443d318f)) {
        Py_XDECREF(cache_frame_eacf6afd6e9c5c5da1e4efd4443d318f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eacf6afd6e9c5c5da1e4efd4443d318f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eacf6afd6e9c5c5da1e4efd4443d318f = MAKE_FUNCTION_FRAME(codeobj_eacf6afd6e9c5c5da1e4efd4443d318f, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eacf6afd6e9c5c5da1e4efd4443d318f->m_type_description == NULL);
    frame_eacf6afd6e9c5c5da1e4efd4443d318f = cache_frame_eacf6afd6e9c5c5da1e4efd4443d318f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eacf6afd6e9c5c5da1e4efd4443d318f);
    assert(Py_REFCNT(frame_eacf6afd6e9c5c5da1e4efd4443d318f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_eacf6afd6e9c5c5da1e4efd4443d318f->m_frame.f_lineno = 101;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[36], 0), mod_consts[33]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
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
        exception_tb = MAKE_TRACEBACK(frame_eacf6afd6e9c5c5da1e4efd4443d318f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eacf6afd6e9c5c5da1e4efd4443d318f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eacf6afd6e9c5c5da1e4efd4443d318f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eacf6afd6e9c5c5da1e4efd4443d318f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_eacf6afd6e9c5c5da1e4efd4443d318f == cache_frame_eacf6afd6e9c5c5da1e4efd4443d318f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eacf6afd6e9c5c5da1e4efd4443d318f);
        cache_frame_eacf6afd6e9c5c5da1e4efd4443d318f = NULL;
    }

    assertFrameObject(frame_eacf6afd6e9c5c5da1e4efd4443d318f);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__10_to_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_02b78d39219feac82e8d1beb87f8b312;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_02b78d39219feac82e8d1beb87f8b312 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_02b78d39219feac82e8d1beb87f8b312)) {
        Py_XDECREF(cache_frame_02b78d39219feac82e8d1beb87f8b312);

#if _DEBUG_REFCOUNTS
        if (cache_frame_02b78d39219feac82e8d1beb87f8b312 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_02b78d39219feac82e8d1beb87f8b312 = MAKE_FUNCTION_FRAME(codeobj_02b78d39219feac82e8d1beb87f8b312, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_02b78d39219feac82e8d1beb87f8b312->m_type_description == NULL);
    frame_02b78d39219feac82e8d1beb87f8b312 = cache_frame_02b78d39219feac82e8d1beb87f8b312;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_02b78d39219feac82e8d1beb87f8b312);
    assert(Py_REFCNT(frame_02b78d39219feac82e8d1beb87f8b312) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[37];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_02b78d39219feac82e8d1beb87f8b312->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_02b78d39219feac82e8d1beb87f8b312, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_02b78d39219feac82e8d1beb87f8b312->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_02b78d39219feac82e8d1beb87f8b312, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_02b78d39219feac82e8d1beb87f8b312,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_02b78d39219feac82e8d1beb87f8b312 == cache_frame_02b78d39219feac82e8d1beb87f8b312) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_02b78d39219feac82e8d1beb87f8b312);
        cache_frame_02b78d39219feac82e8d1beb87f8b312 = NULL;
    }

    assertFrameObject(frame_02b78d39219feac82e8d1beb87f8b312);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__11_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_12cf347b16a592e3b60a6f3b791e167e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12cf347b16a592e3b60a6f3b791e167e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12cf347b16a592e3b60a6f3b791e167e)) {
        Py_XDECREF(cache_frame_12cf347b16a592e3b60a6f3b791e167e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12cf347b16a592e3b60a6f3b791e167e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12cf347b16a592e3b60a6f3b791e167e = MAKE_FUNCTION_FRAME(codeobj_12cf347b16a592e3b60a6f3b791e167e, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_12cf347b16a592e3b60a6f3b791e167e->m_type_description == NULL);
    frame_12cf347b16a592e3b60a6f3b791e167e = cache_frame_12cf347b16a592e3b60a6f3b791e167e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_12cf347b16a592e3b60a6f3b791e167e);
    assert(Py_REFCNT(frame_12cf347b16a592e3b60a6f3b791e167e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_12cf347b16a592e3b60a6f3b791e167e->m_frame.f_lineno = 110;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[38], 0), mod_consts[33]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
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
        exception_tb = MAKE_TRACEBACK(frame_12cf347b16a592e3b60a6f3b791e167e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12cf347b16a592e3b60a6f3b791e167e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12cf347b16a592e3b60a6f3b791e167e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12cf347b16a592e3b60a6f3b791e167e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_12cf347b16a592e3b60a6f3b791e167e == cache_frame_12cf347b16a592e3b60a6f3b791e167e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_12cf347b16a592e3b60a6f3b791e167e);
        cache_frame_12cf347b16a592e3b60a6f3b791e167e = NULL;
    }

    assertFrameObject(frame_12cf347b16a592e3b60a6f3b791e167e);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__12_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_5d141ffd2a1a73461784ebeddf6925f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5d141ffd2a1a73461784ebeddf6925f4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5d141ffd2a1a73461784ebeddf6925f4)) {
        Py_XDECREF(cache_frame_5d141ffd2a1a73461784ebeddf6925f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d141ffd2a1a73461784ebeddf6925f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d141ffd2a1a73461784ebeddf6925f4 = MAKE_FUNCTION_FRAME(codeobj_5d141ffd2a1a73461784ebeddf6925f4, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d141ffd2a1a73461784ebeddf6925f4->m_type_description == NULL);
    frame_5d141ffd2a1a73461784ebeddf6925f4 = cache_frame_5d141ffd2a1a73461784ebeddf6925f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d141ffd2a1a73461784ebeddf6925f4);
    assert(Py_REFCNT(frame_5d141ffd2a1a73461784ebeddf6925f4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[6];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_5d141ffd2a1a73461784ebeddf6925f4->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_5d141ffd2a1a73461784ebeddf6925f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d141ffd2a1a73461784ebeddf6925f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d141ffd2a1a73461784ebeddf6925f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d141ffd2a1a73461784ebeddf6925f4,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_5d141ffd2a1a73461784ebeddf6925f4 == cache_frame_5d141ffd2a1a73461784ebeddf6925f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d141ffd2a1a73461784ebeddf6925f4);
        cache_frame_5d141ffd2a1a73461784ebeddf6925f4 = NULL;
    }

    assertFrameObject(frame_5d141ffd2a1a73461784ebeddf6925f4);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__13_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f4092d1f7216b0ffd50942218713fb9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4092d1f7216b0ffd50942218713fb9a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4092d1f7216b0ffd50942218713fb9a)) {
        Py_XDECREF(cache_frame_f4092d1f7216b0ffd50942218713fb9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4092d1f7216b0ffd50942218713fb9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4092d1f7216b0ffd50942218713fb9a = MAKE_FUNCTION_FRAME(codeobj_f4092d1f7216b0ffd50942218713fb9a, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4092d1f7216b0ffd50942218713fb9a->m_type_description == NULL);
    frame_f4092d1f7216b0ffd50942218713fb9a = cache_frame_f4092d1f7216b0ffd50942218713fb9a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f4092d1f7216b0ffd50942218713fb9a);
    assert(Py_REFCNT(frame_f4092d1f7216b0ffd50942218713fb9a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f4092d1f7216b0ffd50942218713fb9a->m_frame.f_lineno = 119;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
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
        exception_tb = MAKE_TRACEBACK(frame_f4092d1f7216b0ffd50942218713fb9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4092d1f7216b0ffd50942218713fb9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4092d1f7216b0ffd50942218713fb9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4092d1f7216b0ffd50942218713fb9a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f4092d1f7216b0ffd50942218713fb9a == cache_frame_f4092d1f7216b0ffd50942218713fb9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4092d1f7216b0ffd50942218713fb9a);
        cache_frame_f4092d1f7216b0ffd50942218713fb9a = NULL;
    }

    assertFrameObject(frame_f4092d1f7216b0ffd50942218713fb9a);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__14_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d4ed98eb15ddd70e743d6dea5dc9c7a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d4ed98eb15ddd70e743d6dea5dc9c7a2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d4ed98eb15ddd70e743d6dea5dc9c7a2)) {
        Py_XDECREF(cache_frame_d4ed98eb15ddd70e743d6dea5dc9c7a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4ed98eb15ddd70e743d6dea5dc9c7a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4ed98eb15ddd70e743d6dea5dc9c7a2 = MAKE_FUNCTION_FRAME(codeobj_d4ed98eb15ddd70e743d6dea5dc9c7a2, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d4ed98eb15ddd70e743d6dea5dc9c7a2->m_type_description == NULL);
    frame_d4ed98eb15ddd70e743d6dea5dc9c7a2 = cache_frame_d4ed98eb15ddd70e743d6dea5dc9c7a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d4ed98eb15ddd70e743d6dea5dc9c7a2);
    assert(Py_REFCNT(frame_d4ed98eb15ddd70e743d6dea5dc9c7a2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[7];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_d4ed98eb15ddd70e743d6dea5dc9c7a2->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
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
        exception_tb = MAKE_TRACEBACK(frame_d4ed98eb15ddd70e743d6dea5dc9c7a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4ed98eb15ddd70e743d6dea5dc9c7a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4ed98eb15ddd70e743d6dea5dc9c7a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4ed98eb15ddd70e743d6dea5dc9c7a2,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d4ed98eb15ddd70e743d6dea5dc9c7a2 == cache_frame_d4ed98eb15ddd70e743d6dea5dc9c7a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d4ed98eb15ddd70e743d6dea5dc9c7a2);
        cache_frame_d4ed98eb15ddd70e743d6dea5dc9c7a2 = NULL;
    }

    assertFrameObject(frame_d4ed98eb15ddd70e743d6dea5dc9c7a2);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__15_border_side(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9d7971ec7cc71c552007c25e797f090d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9d7971ec7cc71c552007c25e797f090d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9d7971ec7cc71c552007c25e797f090d)) {
        Py_XDECREF(cache_frame_9d7971ec7cc71c552007c25e797f090d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d7971ec7cc71c552007c25e797f090d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d7971ec7cc71c552007c25e797f090d = MAKE_FUNCTION_FRAME(codeobj_9d7971ec7cc71c552007c25e797f090d, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9d7971ec7cc71c552007c25e797f090d->m_type_description == NULL);
    frame_9d7971ec7cc71c552007c25e797f090d = cache_frame_9d7971ec7cc71c552007c25e797f090d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9d7971ec7cc71c552007c25e797f090d);
    assert(Py_REFCNT(frame_9d7971ec7cc71c552007c25e797f090d) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
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
        exception_tb = MAKE_TRACEBACK(frame_9d7971ec7cc71c552007c25e797f090d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d7971ec7cc71c552007c25e797f090d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d7971ec7cc71c552007c25e797f090d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d7971ec7cc71c552007c25e797f090d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9d7971ec7cc71c552007c25e797f090d == cache_frame_9d7971ec7cc71c552007c25e797f090d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d7971ec7cc71c552007c25e797f090d);
        cache_frame_9d7971ec7cc71c552007c25e797f090d = NULL;
    }

    assertFrameObject(frame_9d7971ec7cc71c552007c25e797f090d);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__16_border_side(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f47ce42b73b269a642dde895fb238a14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f47ce42b73b269a642dde895fb238a14 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f47ce42b73b269a642dde895fb238a14)) {
        Py_XDECREF(cache_frame_f47ce42b73b269a642dde895fb238a14);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f47ce42b73b269a642dde895fb238a14 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f47ce42b73b269a642dde895fb238a14 = MAKE_FUNCTION_FRAME(codeobj_f47ce42b73b269a642dde895fb238a14, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f47ce42b73b269a642dde895fb238a14->m_type_description == NULL);
    frame_f47ce42b73b269a642dde895fb238a14 = cache_frame_f47ce42b73b269a642dde895fb238a14;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f47ce42b73b269a642dde895fb238a14);
    assert(Py_REFCNT(frame_f47ce42b73b269a642dde895fb238a14) == 2);

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


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f47ce42b73b269a642dde895fb238a14, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f47ce42b73b269a642dde895fb238a14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f47ce42b73b269a642dde895fb238a14, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f47ce42b73b269a642dde895fb238a14,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f47ce42b73b269a642dde895fb238a14 == cache_frame_f47ce42b73b269a642dde895fb238a14) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f47ce42b73b269a642dde895fb238a14);
        cache_frame_f47ce42b73b269a642dde895fb238a14 = NULL;
    }

    assertFrameObject(frame_f47ce42b73b269a642dde895fb238a14);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__17_border_radius(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3ae0f09ad0eeb646a1085c0828e5ef89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3ae0f09ad0eeb646a1085c0828e5ef89 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3ae0f09ad0eeb646a1085c0828e5ef89)) {
        Py_XDECREF(cache_frame_3ae0f09ad0eeb646a1085c0828e5ef89);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ae0f09ad0eeb646a1085c0828e5ef89 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ae0f09ad0eeb646a1085c0828e5ef89 = MAKE_FUNCTION_FRAME(codeobj_3ae0f09ad0eeb646a1085c0828e5ef89, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ae0f09ad0eeb646a1085c0828e5ef89->m_type_description == NULL);
    frame_3ae0f09ad0eeb646a1085c0828e5ef89 = cache_frame_3ae0f09ad0eeb646a1085c0828e5ef89;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3ae0f09ad0eeb646a1085c0828e5ef89);
    assert(Py_REFCNT(frame_3ae0f09ad0eeb646a1085c0828e5ef89) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
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
        exception_tb = MAKE_TRACEBACK(frame_3ae0f09ad0eeb646a1085c0828e5ef89, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ae0f09ad0eeb646a1085c0828e5ef89->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ae0f09ad0eeb646a1085c0828e5ef89, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ae0f09ad0eeb646a1085c0828e5ef89,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3ae0f09ad0eeb646a1085c0828e5ef89 == cache_frame_3ae0f09ad0eeb646a1085c0828e5ef89) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ae0f09ad0eeb646a1085c0828e5ef89);
        cache_frame_3ae0f09ad0eeb646a1085c0828e5ef89 = NULL;
    }

    assertFrameObject(frame_3ae0f09ad0eeb646a1085c0828e5ef89);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__18_border_radius(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_0f7b659d0d3d5fbeb3d51db799a2166b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f7b659d0d3d5fbeb3d51db799a2166b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0f7b659d0d3d5fbeb3d51db799a2166b)) {
        Py_XDECREF(cache_frame_0f7b659d0d3d5fbeb3d51db799a2166b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f7b659d0d3d5fbeb3d51db799a2166b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f7b659d0d3d5fbeb3d51db799a2166b = MAKE_FUNCTION_FRAME(codeobj_0f7b659d0d3d5fbeb3d51db799a2166b, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0f7b659d0d3d5fbeb3d51db799a2166b->m_type_description == NULL);
    frame_0f7b659d0d3d5fbeb3d51db799a2166b = cache_frame_0f7b659d0d3d5fbeb3d51db799a2166b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0f7b659d0d3d5fbeb3d51db799a2166b);
    assert(Py_REFCNT(frame_0f7b659d0d3d5fbeb3d51db799a2166b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f7b659d0d3d5fbeb3d51db799a2166b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f7b659d0d3d5fbeb3d51db799a2166b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f7b659d0d3d5fbeb3d51db799a2166b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f7b659d0d3d5fbeb3d51db799a2166b,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_0f7b659d0d3d5fbeb3d51db799a2166b == cache_frame_0f7b659d0d3d5fbeb3d51db799a2166b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0f7b659d0d3d5fbeb3d51db799a2166b);
        cache_frame_0f7b659d0d3d5fbeb3d51db799a2166b = NULL;
    }

    assertFrameObject(frame_0f7b659d0d3d5fbeb3d51db799a2166b);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__19_gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_349251aaff5e4db61e5e7587ac84c163;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_349251aaff5e4db61e5e7587ac84c163 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_349251aaff5e4db61e5e7587ac84c163)) {
        Py_XDECREF(cache_frame_349251aaff5e4db61e5e7587ac84c163);

#if _DEBUG_REFCOUNTS
        if (cache_frame_349251aaff5e4db61e5e7587ac84c163 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_349251aaff5e4db61e5e7587ac84c163 = MAKE_FUNCTION_FRAME(codeobj_349251aaff5e4db61e5e7587ac84c163, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_349251aaff5e4db61e5e7587ac84c163->m_type_description == NULL);
    frame_349251aaff5e4db61e5e7587ac84c163 = cache_frame_349251aaff5e4db61e5e7587ac84c163;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_349251aaff5e4db61e5e7587ac84c163);
    assert(Py_REFCNT(frame_349251aaff5e4db61e5e7587ac84c163) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
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
        exception_tb = MAKE_TRACEBACK(frame_349251aaff5e4db61e5e7587ac84c163, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_349251aaff5e4db61e5e7587ac84c163->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_349251aaff5e4db61e5e7587ac84c163, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_349251aaff5e4db61e5e7587ac84c163,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_349251aaff5e4db61e5e7587ac84c163 == cache_frame_349251aaff5e4db61e5e7587ac84c163) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_349251aaff5e4db61e5e7587ac84c163);
        cache_frame_349251aaff5e4db61e5e7587ac84c163 = NULL;
    }

    assertFrameObject(frame_349251aaff5e4db61e5e7587ac84c163);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__20_gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_87e946f1352b18d28514302b3527fb7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87e946f1352b18d28514302b3527fb7e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_87e946f1352b18d28514302b3527fb7e)) {
        Py_XDECREF(cache_frame_87e946f1352b18d28514302b3527fb7e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_87e946f1352b18d28514302b3527fb7e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_87e946f1352b18d28514302b3527fb7e = MAKE_FUNCTION_FRAME(codeobj_87e946f1352b18d28514302b3527fb7e, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_87e946f1352b18d28514302b3527fb7e->m_type_description == NULL);
    frame_87e946f1352b18d28514302b3527fb7e = cache_frame_87e946f1352b18d28514302b3527fb7e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_87e946f1352b18d28514302b3527fb7e);
    assert(Py_REFCNT(frame_87e946f1352b18d28514302b3527fb7e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[23], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_87e946f1352b18d28514302b3527fb7e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87e946f1352b18d28514302b3527fb7e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87e946f1352b18d28514302b3527fb7e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_87e946f1352b18d28514302b3527fb7e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_87e946f1352b18d28514302b3527fb7e == cache_frame_87e946f1352b18d28514302b3527fb7e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_87e946f1352b18d28514302b3527fb7e);
        cache_frame_87e946f1352b18d28514302b3527fb7e = NULL;
    }

    assertFrameObject(frame_87e946f1352b18d28514302b3527fb7e);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__21_bg_from_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fedade24f67e281348d053eb546e65a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fedade24f67e281348d053eb546e65a9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fedade24f67e281348d053eb546e65a9)) {
        Py_XDECREF(cache_frame_fedade24f67e281348d053eb546e65a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fedade24f67e281348d053eb546e65a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fedade24f67e281348d053eb546e65a9 = MAKE_FUNCTION_FRAME(codeobj_fedade24f67e281348d053eb546e65a9, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fedade24f67e281348d053eb546e65a9->m_type_description == NULL);
    frame_fedade24f67e281348d053eb546e65a9 = cache_frame_fedade24f67e281348d053eb546e65a9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fedade24f67e281348d053eb546e65a9);
    assert(Py_REFCNT(frame_fedade24f67e281348d053eb546e65a9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fedade24f67e281348d053eb546e65a9->m_frame.f_lineno = 155;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[40], 0), mod_consts[33]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
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
        exception_tb = MAKE_TRACEBACK(frame_fedade24f67e281348d053eb546e65a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fedade24f67e281348d053eb546e65a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fedade24f67e281348d053eb546e65a9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fedade24f67e281348d053eb546e65a9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fedade24f67e281348d053eb546e65a9 == cache_frame_fedade24f67e281348d053eb546e65a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fedade24f67e281348d053eb546e65a9);
        cache_frame_fedade24f67e281348d053eb546e65a9 = NULL;
    }

    assertFrameObject(frame_fedade24f67e281348d053eb546e65a9);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__22_bg_from_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b1d25d421ecfc3f597f17d7396990ccf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b1d25d421ecfc3f597f17d7396990ccf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b1d25d421ecfc3f597f17d7396990ccf)) {
        Py_XDECREF(cache_frame_b1d25d421ecfc3f597f17d7396990ccf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1d25d421ecfc3f597f17d7396990ccf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1d25d421ecfc3f597f17d7396990ccf = MAKE_FUNCTION_FRAME(codeobj_b1d25d421ecfc3f597f17d7396990ccf, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b1d25d421ecfc3f597f17d7396990ccf->m_type_description == NULL);
    frame_b1d25d421ecfc3f597f17d7396990ccf = cache_frame_b1d25d421ecfc3f597f17d7396990ccf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b1d25d421ecfc3f597f17d7396990ccf);
    assert(Py_REFCNT(frame_b1d25d421ecfc3f597f17d7396990ccf) == 2);

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
        frame_b1d25d421ecfc3f597f17d7396990ccf->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
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
        exception_tb = MAKE_TRACEBACK(frame_b1d25d421ecfc3f597f17d7396990ccf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1d25d421ecfc3f597f17d7396990ccf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1d25d421ecfc3f597f17d7396990ccf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1d25d421ecfc3f597f17d7396990ccf,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b1d25d421ecfc3f597f17d7396990ccf == cache_frame_b1d25d421ecfc3f597f17d7396990ccf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b1d25d421ecfc3f597f17d7396990ccf);
        cache_frame_b1d25d421ecfc3f597f17d7396990ccf = NULL;
    }

    assertFrameObject(frame_b1d25d421ecfc3f597f17d7396990ccf);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__23_bg_to_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1bf004e4b55dd2a75b996a0795a2ca5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1bf004e4b55dd2a75b996a0795a2ca5b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1bf004e4b55dd2a75b996a0795a2ca5b)) {
        Py_XDECREF(cache_frame_1bf004e4b55dd2a75b996a0795a2ca5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bf004e4b55dd2a75b996a0795a2ca5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bf004e4b55dd2a75b996a0795a2ca5b = MAKE_FUNCTION_FRAME(codeobj_1bf004e4b55dd2a75b996a0795a2ca5b, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1bf004e4b55dd2a75b996a0795a2ca5b->m_type_description == NULL);
    frame_1bf004e4b55dd2a75b996a0795a2ca5b = cache_frame_1bf004e4b55dd2a75b996a0795a2ca5b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1bf004e4b55dd2a75b996a0795a2ca5b);
    assert(Py_REFCNT(frame_1bf004e4b55dd2a75b996a0795a2ca5b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1bf004e4b55dd2a75b996a0795a2ca5b->m_frame.f_lineno = 164;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[42], 0), mod_consts[33]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_1bf004e4b55dd2a75b996a0795a2ca5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bf004e4b55dd2a75b996a0795a2ca5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bf004e4b55dd2a75b996a0795a2ca5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bf004e4b55dd2a75b996a0795a2ca5b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1bf004e4b55dd2a75b996a0795a2ca5b == cache_frame_1bf004e4b55dd2a75b996a0795a2ca5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1bf004e4b55dd2a75b996a0795a2ca5b);
        cache_frame_1bf004e4b55dd2a75b996a0795a2ca5b = NULL;
    }

    assertFrameObject(frame_1bf004e4b55dd2a75b996a0795a2ca5b);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__24_bg_to_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e35a693c62d18938048c706b62a26e4d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e35a693c62d18938048c706b62a26e4d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e35a693c62d18938048c706b62a26e4d)) {
        Py_XDECREF(cache_frame_e35a693c62d18938048c706b62a26e4d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e35a693c62d18938048c706b62a26e4d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e35a693c62d18938048c706b62a26e4d = MAKE_FUNCTION_FRAME(codeobj_e35a693c62d18938048c706b62a26e4d, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e35a693c62d18938048c706b62a26e4d->m_type_description == NULL);
    frame_e35a693c62d18938048c706b62a26e4d = cache_frame_e35a693c62d18938048c706b62a26e4d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e35a693c62d18938048c706b62a26e4d);
    assert(Py_REFCNT(frame_e35a693c62d18938048c706b62a26e4d) == 2);

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
        frame_e35a693c62d18938048c706b62a26e4d->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
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
        exception_tb = MAKE_TRACEBACK(frame_e35a693c62d18938048c706b62a26e4d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e35a693c62d18938048c706b62a26e4d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e35a693c62d18938048c706b62a26e4d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e35a693c62d18938048c706b62a26e4d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e35a693c62d18938048c706b62a26e4d == cache_frame_e35a693c62d18938048c706b62a26e4d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e35a693c62d18938048c706b62a26e4d);
        cache_frame_e35a693c62d18938048c706b62a26e4d = NULL;
    }

    assertFrameObject(frame_e35a693c62d18938048c706b62a26e4d);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__25_bg_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7b0ab81d2375c7b288ce6c55126515a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7b0ab81d2375c7b288ce6c55126515a0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7b0ab81d2375c7b288ce6c55126515a0)) {
        Py_XDECREF(cache_frame_7b0ab81d2375c7b288ce6c55126515a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7b0ab81d2375c7b288ce6c55126515a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7b0ab81d2375c7b288ce6c55126515a0 = MAKE_FUNCTION_FRAME(codeobj_7b0ab81d2375c7b288ce6c55126515a0, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7b0ab81d2375c7b288ce6c55126515a0->m_type_description == NULL);
    frame_7b0ab81d2375c7b288ce6c55126515a0 = cache_frame_7b0ab81d2375c7b288ce6c55126515a0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7b0ab81d2375c7b288ce6c55126515a0);
    assert(Py_REFCNT(frame_7b0ab81d2375c7b288ce6c55126515a0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_7b0ab81d2375c7b288ce6c55126515a0->m_frame.f_lineno = 173;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
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
        exception_tb = MAKE_TRACEBACK(frame_7b0ab81d2375c7b288ce6c55126515a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7b0ab81d2375c7b288ce6c55126515a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7b0ab81d2375c7b288ce6c55126515a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7b0ab81d2375c7b288ce6c55126515a0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7b0ab81d2375c7b288ce6c55126515a0 == cache_frame_7b0ab81d2375c7b288ce6c55126515a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7b0ab81d2375c7b288ce6c55126515a0);
        cache_frame_7b0ab81d2375c7b288ce6c55126515a0 = NULL;
    }

    assertFrameObject(frame_7b0ab81d2375c7b288ce6c55126515a0);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__26_bg_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_4db2c3cbdd00c11a62d0250c68e4c65d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4db2c3cbdd00c11a62d0250c68e4c65d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4db2c3cbdd00c11a62d0250c68e4c65d)) {
        Py_XDECREF(cache_frame_4db2c3cbdd00c11a62d0250c68e4c65d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4db2c3cbdd00c11a62d0250c68e4c65d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4db2c3cbdd00c11a62d0250c68e4c65d = MAKE_FUNCTION_FRAME(codeobj_4db2c3cbdd00c11a62d0250c68e4c65d, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4db2c3cbdd00c11a62d0250c68e4c65d->m_type_description == NULL);
    frame_4db2c3cbdd00c11a62d0250c68e4c65d = cache_frame_4db2c3cbdd00c11a62d0250c68e4c65d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4db2c3cbdd00c11a62d0250c68e4c65d);
    assert(Py_REFCNT(frame_4db2c3cbdd00c11a62d0250c68e4c65d) == 2);

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
        frame_4db2c3cbdd00c11a62d0250c68e4c65d->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
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
        exception_tb = MAKE_TRACEBACK(frame_4db2c3cbdd00c11a62d0250c68e4c65d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4db2c3cbdd00c11a62d0250c68e4c65d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4db2c3cbdd00c11a62d0250c68e4c65d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4db2c3cbdd00c11a62d0250c68e4c65d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_4db2c3cbdd00c11a62d0250c68e4c65d == cache_frame_4db2c3cbdd00c11a62d0250c68e4c65d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4db2c3cbdd00c11a62d0250c68e4c65d);
        cache_frame_4db2c3cbdd00c11a62d0250c68e4c65d = NULL;
    }

    assertFrameObject(frame_4db2c3cbdd00c11a62d0250c68e4c65d);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__27_bg_gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3b021a4c847135a502762f11bd14b009;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3b021a4c847135a502762f11bd14b009 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3b021a4c847135a502762f11bd14b009)) {
        Py_XDECREF(cache_frame_3b021a4c847135a502762f11bd14b009);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3b021a4c847135a502762f11bd14b009 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3b021a4c847135a502762f11bd14b009 = MAKE_FUNCTION_FRAME(codeobj_3b021a4c847135a502762f11bd14b009, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3b021a4c847135a502762f11bd14b009->m_type_description == NULL);
    frame_3b021a4c847135a502762f11bd14b009 = cache_frame_3b021a4c847135a502762f11bd14b009;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3b021a4c847135a502762f11bd14b009);
    assert(Py_REFCNT(frame_3b021a4c847135a502762f11bd14b009) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
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
        exception_tb = MAKE_TRACEBACK(frame_3b021a4c847135a502762f11bd14b009, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3b021a4c847135a502762f11bd14b009->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3b021a4c847135a502762f11bd14b009, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3b021a4c847135a502762f11bd14b009,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3b021a4c847135a502762f11bd14b009 == cache_frame_3b021a4c847135a502762f11bd14b009) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3b021a4c847135a502762f11bd14b009);
        cache_frame_3b021a4c847135a502762f11bd14b009 = NULL;
    }

    assertFrameObject(frame_3b021a4c847135a502762f11bd14b009);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__28_bg_gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e4b59f30d8b51b247b3ba44d040466ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e4b59f30d8b51b247b3ba44d040466ca = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e4b59f30d8b51b247b3ba44d040466ca)) {
        Py_XDECREF(cache_frame_e4b59f30d8b51b247b3ba44d040466ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4b59f30d8b51b247b3ba44d040466ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4b59f30d8b51b247b3ba44d040466ca = MAKE_FUNCTION_FRAME(codeobj_e4b59f30d8b51b247b3ba44d040466ca, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e4b59f30d8b51b247b3ba44d040466ca->m_type_description == NULL);
    frame_e4b59f30d8b51b247b3ba44d040466ca = cache_frame_e4b59f30d8b51b247b3ba44d040466ca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e4b59f30d8b51b247b3ba44d040466ca);
    assert(Py_REFCNT(frame_e4b59f30d8b51b247b3ba44d040466ca) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[29], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4b59f30d8b51b247b3ba44d040466ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4b59f30d8b51b247b3ba44d040466ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4b59f30d8b51b247b3ba44d040466ca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4b59f30d8b51b247b3ba44d040466ca,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e4b59f30d8b51b247b3ba44d040466ca == cache_frame_e4b59f30d8b51b247b3ba44d040466ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e4b59f30d8b51b247b3ba44d040466ca);
        cache_frame_e4b59f30d8b51b247b3ba44d040466ca = NULL;
    }

    assertFrameObject(frame_e4b59f30d8b51b247b3ba44d040466ca);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__29_selected(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_eb5aaffb263db8d7ab8e1f7166c6c4ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb5aaffb263db8d7ab8e1f7166c6c4ef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb5aaffb263db8d7ab8e1f7166c6c4ef)) {
        Py_XDECREF(cache_frame_eb5aaffb263db8d7ab8e1f7166c6c4ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb5aaffb263db8d7ab8e1f7166c6c4ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb5aaffb263db8d7ab8e1f7166c6c4ef = MAKE_FUNCTION_FRAME(codeobj_eb5aaffb263db8d7ab8e1f7166c6c4ef, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb5aaffb263db8d7ab8e1f7166c6c4ef->m_type_description == NULL);
    frame_eb5aaffb263db8d7ab8e1f7166c6c4ef = cache_frame_eb5aaffb263db8d7ab8e1f7166c6c4ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb5aaffb263db8d7ab8e1f7166c6c4ef);
    assert(Py_REFCNT(frame_eb5aaffb263db8d7ab8e1f7166c6c4ef) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_eb5aaffb263db8d7ab8e1f7166c6c4ef->m_frame.f_lineno = 191;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[46], 0), mod_consts[47]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
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
        exception_tb = MAKE_TRACEBACK(frame_eb5aaffb263db8d7ab8e1f7166c6c4ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb5aaffb263db8d7ab8e1f7166c6c4ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb5aaffb263db8d7ab8e1f7166c6c4ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb5aaffb263db8d7ab8e1f7166c6c4ef,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_eb5aaffb263db8d7ab8e1f7166c6c4ef == cache_frame_eb5aaffb263db8d7ab8e1f7166c6c4ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb5aaffb263db8d7ab8e1f7166c6c4ef);
        cache_frame_eb5aaffb263db8d7ab8e1f7166c6c4ef = NULL;
    }

    assertFrameObject(frame_eb5aaffb263db8d7ab8e1f7166c6c4ef);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__30_selected(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6aff99798bc1136e043910e00ef00b73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6aff99798bc1136e043910e00ef00b73 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6aff99798bc1136e043910e00ef00b73)) {
        Py_XDECREF(cache_frame_6aff99798bc1136e043910e00ef00b73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6aff99798bc1136e043910e00ef00b73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6aff99798bc1136e043910e00ef00b73 = MAKE_FUNCTION_FRAME(codeobj_6aff99798bc1136e043910e00ef00b73, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6aff99798bc1136e043910e00ef00b73->m_type_description == NULL);
    frame_6aff99798bc1136e043910e00ef00b73 = cache_frame_6aff99798bc1136e043910e00ef00b73;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6aff99798bc1136e043910e00ef00b73);
    assert(Py_REFCNT(frame_6aff99798bc1136e043910e00ef00b73) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[15];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_6aff99798bc1136e043910e00ef00b73->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
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
        exception_tb = MAKE_TRACEBACK(frame_6aff99798bc1136e043910e00ef00b73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6aff99798bc1136e043910e00ef00b73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6aff99798bc1136e043910e00ef00b73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6aff99798bc1136e043910e00ef00b73,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6aff99798bc1136e043910e00ef00b73 == cache_frame_6aff99798bc1136e043910e00ef00b73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6aff99798bc1136e043910e00ef00b73);
        cache_frame_6aff99798bc1136e043910e00ef00b73 = NULL;
    }

    assertFrameObject(frame_6aff99798bc1136e043910e00ef00b73);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__31_show_tooltip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5c013b4817a3fde44c05d280c442fdbd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c013b4817a3fde44c05d280c442fdbd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c013b4817a3fde44c05d280c442fdbd)) {
        Py_XDECREF(cache_frame_5c013b4817a3fde44c05d280c442fdbd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c013b4817a3fde44c05d280c442fdbd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c013b4817a3fde44c05d280c442fdbd = MAKE_FUNCTION_FRAME(codeobj_5c013b4817a3fde44c05d280c442fdbd, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c013b4817a3fde44c05d280c442fdbd->m_type_description == NULL);
    frame_5c013b4817a3fde44c05d280c442fdbd = cache_frame_5c013b4817a3fde44c05d280c442fdbd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5c013b4817a3fde44c05d280c442fdbd);
    assert(Py_REFCNT(frame_5c013b4817a3fde44c05d280c442fdbd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5c013b4817a3fde44c05d280c442fdbd->m_frame.f_lineno = 200;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[48], 0), mod_consts[47]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
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
        exception_tb = MAKE_TRACEBACK(frame_5c013b4817a3fde44c05d280c442fdbd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c013b4817a3fde44c05d280c442fdbd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c013b4817a3fde44c05d280c442fdbd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c013b4817a3fde44c05d280c442fdbd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5c013b4817a3fde44c05d280c442fdbd == cache_frame_5c013b4817a3fde44c05d280c442fdbd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c013b4817a3fde44c05d280c442fdbd);
        cache_frame_5c013b4817a3fde44c05d280c442fdbd = NULL;
    }

    assertFrameObject(frame_5c013b4817a3fde44c05d280c442fdbd);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__32_show_tooltip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d987257a9edba26d2b7288c55acde229;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d987257a9edba26d2b7288c55acde229 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d987257a9edba26d2b7288c55acde229)) {
        Py_XDECREF(cache_frame_d987257a9edba26d2b7288c55acde229);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d987257a9edba26d2b7288c55acde229 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d987257a9edba26d2b7288c55acde229 = MAKE_FUNCTION_FRAME(codeobj_d987257a9edba26d2b7288c55acde229, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d987257a9edba26d2b7288c55acde229->m_type_description == NULL);
    frame_d987257a9edba26d2b7288c55acde229 = cache_frame_d987257a9edba26d2b7288c55acde229;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d987257a9edba26d2b7288c55acde229);
    assert(Py_REFCNT(frame_d987257a9edba26d2b7288c55acde229) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[49];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_d987257a9edba26d2b7288c55acde229->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
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
        exception_tb = MAKE_TRACEBACK(frame_d987257a9edba26d2b7288c55acde229, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d987257a9edba26d2b7288c55acde229->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d987257a9edba26d2b7288c55acde229, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d987257a9edba26d2b7288c55acde229,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d987257a9edba26d2b7288c55acde229 == cache_frame_d987257a9edba26d2b7288c55acde229) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d987257a9edba26d2b7288c55acde229);
        cache_frame_d987257a9edba26d2b7288c55acde229 = NULL;
    }

    assertFrameObject(frame_d987257a9edba26d2b7288c55acde229);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__33_tooltip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f63af1dcfb358565543e2d5e81972d98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f63af1dcfb358565543e2d5e81972d98 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f63af1dcfb358565543e2d5e81972d98)) {
        Py_XDECREF(cache_frame_f63af1dcfb358565543e2d5e81972d98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f63af1dcfb358565543e2d5e81972d98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f63af1dcfb358565543e2d5e81972d98 = MAKE_FUNCTION_FRAME(codeobj_f63af1dcfb358565543e2d5e81972d98, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f63af1dcfb358565543e2d5e81972d98->m_type_description == NULL);
    frame_f63af1dcfb358565543e2d5e81972d98 = cache_frame_f63af1dcfb358565543e2d5e81972d98;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f63af1dcfb358565543e2d5e81972d98);
    assert(Py_REFCNT(frame_f63af1dcfb358565543e2d5e81972d98) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f63af1dcfb358565543e2d5e81972d98->m_frame.f_lineno = 209;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[50], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
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
        exception_tb = MAKE_TRACEBACK(frame_f63af1dcfb358565543e2d5e81972d98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f63af1dcfb358565543e2d5e81972d98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f63af1dcfb358565543e2d5e81972d98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f63af1dcfb358565543e2d5e81972d98,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f63af1dcfb358565543e2d5e81972d98 == cache_frame_f63af1dcfb358565543e2d5e81972d98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f63af1dcfb358565543e2d5e81972d98);
        cache_frame_f63af1dcfb358565543e2d5e81972d98 = NULL;
    }

    assertFrameObject(frame_f63af1dcfb358565543e2d5e81972d98);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__34_tooltip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_aec503a0cc6396c6b0b2a81f985eb352;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aec503a0cc6396c6b0b2a81f985eb352 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aec503a0cc6396c6b0b2a81f985eb352)) {
        Py_XDECREF(cache_frame_aec503a0cc6396c6b0b2a81f985eb352);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aec503a0cc6396c6b0b2a81f985eb352 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aec503a0cc6396c6b0b2a81f985eb352 = MAKE_FUNCTION_FRAME(codeobj_aec503a0cc6396c6b0b2a81f985eb352, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aec503a0cc6396c6b0b2a81f985eb352->m_type_description == NULL);
    frame_aec503a0cc6396c6b0b2a81f985eb352 = cache_frame_aec503a0cc6396c6b0b2a81f985eb352;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aec503a0cc6396c6b0b2a81f985eb352);
    assert(Py_REFCNT(frame_aec503a0cc6396c6b0b2a81f985eb352) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[17];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_aec503a0cc6396c6b0b2a81f985eb352->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
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
        exception_tb = MAKE_TRACEBACK(frame_aec503a0cc6396c6b0b2a81f985eb352, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aec503a0cc6396c6b0b2a81f985eb352->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aec503a0cc6396c6b0b2a81f985eb352, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aec503a0cc6396c6b0b2a81f985eb352,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_aec503a0cc6396c6b0b2a81f985eb352 == cache_frame_aec503a0cc6396c6b0b2a81f985eb352) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aec503a0cc6396c6b0b2a81f985eb352);
        cache_frame_aec503a0cc6396c6b0b2a81f985eb352 = NULL;
    }

    assertFrameObject(frame_aec503a0cc6396c6b0b2a81f985eb352);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__35_tooltip_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_77dc1124d5f6e146e2fcce2f660d5866;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_77dc1124d5f6e146e2fcce2f660d5866 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_77dc1124d5f6e146e2fcce2f660d5866)) {
        Py_XDECREF(cache_frame_77dc1124d5f6e146e2fcce2f660d5866);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77dc1124d5f6e146e2fcce2f660d5866 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77dc1124d5f6e146e2fcce2f660d5866 = MAKE_FUNCTION_FRAME(codeobj_77dc1124d5f6e146e2fcce2f660d5866, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_77dc1124d5f6e146e2fcce2f660d5866->m_type_description == NULL);
    frame_77dc1124d5f6e146e2fcce2f660d5866 = cache_frame_77dc1124d5f6e146e2fcce2f660d5866;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_77dc1124d5f6e146e2fcce2f660d5866);
    assert(Py_REFCNT(frame_77dc1124d5f6e146e2fcce2f660d5866) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
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
        exception_tb = MAKE_TRACEBACK(frame_77dc1124d5f6e146e2fcce2f660d5866, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77dc1124d5f6e146e2fcce2f660d5866->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77dc1124d5f6e146e2fcce2f660d5866, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77dc1124d5f6e146e2fcce2f660d5866,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_77dc1124d5f6e146e2fcce2f660d5866 == cache_frame_77dc1124d5f6e146e2fcce2f660d5866) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_77dc1124d5f6e146e2fcce2f660d5866);
        cache_frame_77dc1124d5f6e146e2fcce2f660d5866 = NULL;
    }

    assertFrameObject(frame_77dc1124d5f6e146e2fcce2f660d5866);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__36_tooltip_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_7fe1baf13bfa0d1726fc52f68ee3134f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7fe1baf13bfa0d1726fc52f68ee3134f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7fe1baf13bfa0d1726fc52f68ee3134f)) {
        Py_XDECREF(cache_frame_7fe1baf13bfa0d1726fc52f68ee3134f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7fe1baf13bfa0d1726fc52f68ee3134f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7fe1baf13bfa0d1726fc52f68ee3134f = MAKE_FUNCTION_FRAME(codeobj_7fe1baf13bfa0d1726fc52f68ee3134f, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7fe1baf13bfa0d1726fc52f68ee3134f->m_type_description == NULL);
    frame_7fe1baf13bfa0d1726fc52f68ee3134f = cache_frame_7fe1baf13bfa0d1726fc52f68ee3134f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7fe1baf13bfa0d1726fc52f68ee3134f);
    assert(Py_REFCNT(frame_7fe1baf13bfa0d1726fc52f68ee3134f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[51], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[53];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[54]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7fe1baf13bfa0d1726fc52f68ee3134f->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_7fe1baf13bfa0d1726fc52f68ee3134f->m_frame.f_lineno = 226;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[55], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7fe1baf13bfa0d1726fc52f68ee3134f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7fe1baf13bfa0d1726fc52f68ee3134f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7fe1baf13bfa0d1726fc52f68ee3134f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7fe1baf13bfa0d1726fc52f68ee3134f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7fe1baf13bfa0d1726fc52f68ee3134f == cache_frame_7fe1baf13bfa0d1726fc52f68ee3134f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7fe1baf13bfa0d1726fc52f68ee3134f);
        cache_frame_7fe1baf13bfa0d1726fc52f68ee3134f = NULL;
    }

    assertFrameObject(frame_7fe1baf13bfa0d1726fc52f68ee3134f);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__37___set_tooltip_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_fd47e05e6de78f47af4643bf06deeab9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd47e05e6de78f47af4643bf06deeab9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd47e05e6de78f47af4643bf06deeab9)) {
        Py_XDECREF(cache_frame_fd47e05e6de78f47af4643bf06deeab9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd47e05e6de78f47af4643bf06deeab9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd47e05e6de78f47af4643bf06deeab9 = MAKE_FUNCTION_FRAME(codeobj_fd47e05e6de78f47af4643bf06deeab9, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd47e05e6de78f47af4643bf06deeab9->m_type_description == NULL);
    frame_fd47e05e6de78f47af4643bf06deeab9 = cache_frame_fd47e05e6de78f47af4643bf06deeab9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fd47e05e6de78f47af4643bf06deeab9);
    assert(Py_REFCNT(frame_fd47e05e6de78f47af4643bf06deeab9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[53];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_fd47e05e6de78f47af4643bf06deeab9->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[34],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_fd47e05e6de78f47af4643bf06deeab9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd47e05e6de78f47af4643bf06deeab9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd47e05e6de78f47af4643bf06deeab9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd47e05e6de78f47af4643bf06deeab9,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_fd47e05e6de78f47af4643bf06deeab9 == cache_frame_fd47e05e6de78f47af4643bf06deeab9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd47e05e6de78f47af4643bf06deeab9);
        cache_frame_fd47e05e6de78f47af4643bf06deeab9 = NULL;
    }

    assertFrameObject(frame_fd47e05e6de78f47af4643bf06deeab9);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__38_tooltip_style(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_eb86dffd2e5c58e563f800a00b77414b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb86dffd2e5c58e563f800a00b77414b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb86dffd2e5c58e563f800a00b77414b)) {
        Py_XDECREF(cache_frame_eb86dffd2e5c58e563f800a00b77414b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb86dffd2e5c58e563f800a00b77414b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb86dffd2e5c58e563f800a00b77414b = MAKE_FUNCTION_FRAME(codeobj_eb86dffd2e5c58e563f800a00b77414b, module_flet_core$charts$bar_chart_rod, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb86dffd2e5c58e563f800a00b77414b->m_type_description == NULL);
    frame_eb86dffd2e5c58e563f800a00b77414b = cache_frame_eb86dffd2e5c58e563f800a00b77414b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb86dffd2e5c58e563f800a00b77414b);
    assert(Py_REFCNT(frame_eb86dffd2e5c58e563f800a00b77414b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[56]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
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
        exception_tb = MAKE_TRACEBACK(frame_eb86dffd2e5c58e563f800a00b77414b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb86dffd2e5c58e563f800a00b77414b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb86dffd2e5c58e563f800a00b77414b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb86dffd2e5c58e563f800a00b77414b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_eb86dffd2e5c58e563f800a00b77414b == cache_frame_eb86dffd2e5c58e563f800a00b77414b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb86dffd2e5c58e563f800a00b77414b);
        cache_frame_eb86dffd2e5c58e563f800a00b77414b = NULL;
    }

    assertFrameObject(frame_eb86dffd2e5c58e563f800a00b77414b);

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


static PyObject *impl_flet_core$charts$bar_chart_rod$$$function__39_tooltip_style(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_64772e8a88c125a074d0fff8d1cbd7ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_64772e8a88c125a074d0fff8d1cbd7ba = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_64772e8a88c125a074d0fff8d1cbd7ba)) {
        Py_XDECREF(cache_frame_64772e8a88c125a074d0fff8d1cbd7ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64772e8a88c125a074d0fff8d1cbd7ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64772e8a88c125a074d0fff8d1cbd7ba = MAKE_FUNCTION_FRAME(codeobj_64772e8a88c125a074d0fff8d1cbd7ba, module_flet_core$charts$bar_chart_rod, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_64772e8a88c125a074d0fff8d1cbd7ba->m_type_description == NULL);
    frame_64772e8a88c125a074d0fff8d1cbd7ba = cache_frame_64772e8a88c125a074d0fff8d1cbd7ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_64772e8a88c125a074d0fff8d1cbd7ba);
    assert(Py_REFCNT(frame_64772e8a88c125a074d0fff8d1cbd7ba) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[56], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_64772e8a88c125a074d0fff8d1cbd7ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64772e8a88c125a074d0fff8d1cbd7ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64772e8a88c125a074d0fff8d1cbd7ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64772e8a88c125a074d0fff8d1cbd7ba,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_64772e8a88c125a074d0fff8d1cbd7ba == cache_frame_64772e8a88c125a074d0fff8d1cbd7ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_64772e8a88c125a074d0fff8d1cbd7ba);
        cache_frame_64772e8a88c125a074d0fff8d1cbd7ba = NULL;
    }

    assertFrameObject(frame_64772e8a88c125a074d0fff8d1cbd7ba);

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



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__10_to_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__10_to_y,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_02b78d39219feac82e8d1beb87f8b312,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__11_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__11_width,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_12cf347b16a592e3b60a6f3b791e167e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__12_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__12_width,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_5d141ffd2a1a73461784ebeddf6925f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__13_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__13_color,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_f4092d1f7216b0ffd50942218713fb9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__14_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__14_color,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_d4ed98eb15ddd70e743d6dea5dc9c7a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__15_border_side(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__15_border_side,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_9d7971ec7cc71c552007c25e797f090d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__16_border_side(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__16_border_side,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_f47ce42b73b269a642dde895fb238a14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__17_border_radius(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__17_border_radius,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_3ae0f09ad0eeb646a1085c0828e5ef89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__18_border_radius(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__18_border_radius,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_0f7b659d0d3d5fbeb3d51db799a2166b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__19_gradient(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__19_gradient,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_349251aaff5e4db61e5e7587ac84c163,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_7fde7bf5790dbccb78390360446c2815,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__20_gradient(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__20_gradient,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_87e946f1352b18d28514302b3527fb7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__21_bg_from_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__21_bg_from_y,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_fedade24f67e281348d053eb546e65a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__22_bg_from_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__22_bg_from_y,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_b1d25d421ecfc3f597f17d7396990ccf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__23_bg_to_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__23_bg_to_y,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_1bf004e4b55dd2a75b996a0795a2ca5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__24_bg_to_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__24_bg_to_y,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_e35a693c62d18938048c706b62a26e4d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__25_bg_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__25_bg_color,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_7b0ab81d2375c7b288ce6c55126515a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__26_bg_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__26_bg_color,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_4db2c3cbdd00c11a62d0250c68e4c65d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__27_bg_gradient(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__27_bg_gradient,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_3b021a4c847135a502762f11bd14b009,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__28_bg_gradient(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__28_bg_gradient,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_e4b59f30d8b51b247b3ba44d040466ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__29_selected(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__29_selected,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_eb5aaffb263db8d7ab8e1f7166c6c4ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_a923ef1f4960128e6bf2c5a7751ec70e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[107]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__30_selected(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__30_selected,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_6aff99798bc1136e043910e00ef00b73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__31_show_tooltip(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__31_show_tooltip,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_5c013b4817a3fde44c05d280c442fdbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__32_show_tooltip(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__32_show_tooltip,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_d987257a9edba26d2b7288c55acde229,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__33_tooltip(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__33_tooltip,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_f63af1dcfb358565543e2d5e81972d98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__34_tooltip(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__34_tooltip,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_aec503a0cc6396c6b0b2a81f985eb352,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__35_tooltip_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__35_tooltip_align,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_77dc1124d5f6e146e2fcce2f660d5866,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__36_tooltip_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__36_tooltip_align,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_7fe1baf13bfa0d1726fc52f68ee3134f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__37___set_tooltip_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__37___set_tooltip_align,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_fd47e05e6de78f47af4643bf06deeab9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__38_tooltip_style() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__38_tooltip_style,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_eb86dffd2e5c58e563f800a00b77414b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__39_tooltip_style(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__39_tooltip_style,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_64772e8a88c125a074d0fff8d1cbd7ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__3__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__3__before_build_command,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_de68f18a6bbda056bfc1f0a30c5a71f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__4__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__4__get_children,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_a90ba89a80cd548c99bd50d3778b7acc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__5_rod_stack_items() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__5_rod_stack_items,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_f6d8249e932bd73192bd82abbc33fd23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__6_rod_stack_items() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__6_rod_stack_items,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_7420d10a63b8d4cf7eeed890da459334,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__7_from_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__7_from_y,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_971fb215383c210da8d9e25efdebbd04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__8_from_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__8_from_y,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_ae9e2097a8743a9365fa86c674535f18,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__9_to_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$bar_chart_rod$$$function__9_to_y,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_eacf6afd6e9c5c5da1e4efd4443d318f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$bar_chart_rod,
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

function_impl_code functable_flet_core$charts$bar_chart_rod[] = {
    impl_flet_core$charts$bar_chart_rod$$$function__1___init__,
    NULL,
    impl_flet_core$charts$bar_chart_rod$$$function__3__before_build_command,
    impl_flet_core$charts$bar_chart_rod$$$function__4__get_children,
    impl_flet_core$charts$bar_chart_rod$$$function__5_rod_stack_items,
    impl_flet_core$charts$bar_chart_rod$$$function__6_rod_stack_items,
    impl_flet_core$charts$bar_chart_rod$$$function__7_from_y,
    impl_flet_core$charts$bar_chart_rod$$$function__8_from_y,
    impl_flet_core$charts$bar_chart_rod$$$function__9_to_y,
    impl_flet_core$charts$bar_chart_rod$$$function__10_to_y,
    impl_flet_core$charts$bar_chart_rod$$$function__11_width,
    impl_flet_core$charts$bar_chart_rod$$$function__12_width,
    impl_flet_core$charts$bar_chart_rod$$$function__13_color,
    impl_flet_core$charts$bar_chart_rod$$$function__14_color,
    impl_flet_core$charts$bar_chart_rod$$$function__15_border_side,
    impl_flet_core$charts$bar_chart_rod$$$function__16_border_side,
    impl_flet_core$charts$bar_chart_rod$$$function__17_border_radius,
    impl_flet_core$charts$bar_chart_rod$$$function__18_border_radius,
    impl_flet_core$charts$bar_chart_rod$$$function__19_gradient,
    impl_flet_core$charts$bar_chart_rod$$$function__20_gradient,
    impl_flet_core$charts$bar_chart_rod$$$function__21_bg_from_y,
    impl_flet_core$charts$bar_chart_rod$$$function__22_bg_from_y,
    impl_flet_core$charts$bar_chart_rod$$$function__23_bg_to_y,
    impl_flet_core$charts$bar_chart_rod$$$function__24_bg_to_y,
    impl_flet_core$charts$bar_chart_rod$$$function__25_bg_color,
    impl_flet_core$charts$bar_chart_rod$$$function__26_bg_color,
    impl_flet_core$charts$bar_chart_rod$$$function__27_bg_gradient,
    impl_flet_core$charts$bar_chart_rod$$$function__28_bg_gradient,
    impl_flet_core$charts$bar_chart_rod$$$function__29_selected,
    impl_flet_core$charts$bar_chart_rod$$$function__30_selected,
    impl_flet_core$charts$bar_chart_rod$$$function__31_show_tooltip,
    impl_flet_core$charts$bar_chart_rod$$$function__32_show_tooltip,
    impl_flet_core$charts$bar_chart_rod$$$function__33_tooltip,
    impl_flet_core$charts$bar_chart_rod$$$function__34_tooltip,
    impl_flet_core$charts$bar_chart_rod$$$function__35_tooltip_align,
    impl_flet_core$charts$bar_chart_rod$$$function__36_tooltip_align,
    impl_flet_core$charts$bar_chart_rod$$$function__37___set_tooltip_align,
    impl_flet_core$charts$bar_chart_rod$$$function__38_tooltip_style,
    impl_flet_core$charts$bar_chart_rod$$$function__39_tooltip_style,
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

    function_impl_code *current = functable_flet_core$charts$bar_chart_rod;
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

    if (offset > sizeof(functable_flet_core$charts$bar_chart_rod) || offset < 0) {
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
        functable_flet_core$charts$bar_chart_rod[offset],
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
        module_flet_core$charts$bar_chart_rod,
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
PyObject *modulecode_flet_core$charts$bar_chart_rod(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.charts.bar_chart_rod");

    // Store the module for future use.
    module_flet_core$charts$bar_chart_rod = module;

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
        PRINT_STRING("flet_core.charts.bar_chart_rod: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.charts.bar_chart_rod: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.charts.bar_chart_rod: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$charts$bar_chart_rod\n");

    moduledict_flet_core$charts$bar_chart_rod = MODULE_DICT(module_flet_core$charts$bar_chart_rod);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$charts$bar_chart_rod,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$charts$bar_chart_rod,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[142]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$charts$bar_chart_rod,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$charts$bar_chart_rod,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$charts$bar_chart_rod,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$charts$bar_chart_rod);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$charts$bar_chart_rod);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_c2c4d1b878cc5bc767486c8f2c76b216;
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
    PyObject *locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_060df22ccf12613add44da3607ae1ea0_2;
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
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_2);
    }
    frame_c2c4d1b878cc5bc767486c8f2c76b216 = MAKE_MODULE_FRAME(codeobj_c2c4d1b878cc5bc767486c8f2c76b216, module_flet_core$charts$bar_chart_rod);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c2c4d1b878cc5bc767486c8f2c76b216);
    assert(Py_REFCNT(frame_c2c4d1b878cc5bc767486c8f2c76b216) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[58];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[61], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[62], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[64],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[64]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[66],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[66]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[67],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[67]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[68];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$charts$bar_chart_rod;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[69];
        tmp_level_value_1 = mod_consts[65];
        frame_c2c4d1b878cc5bc767486c8f2c76b216->m_frame.f_lineno = 3;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[70],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[70]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[71];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$charts$bar_chart_rod;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[72];
        tmp_level_value_2 = mod_consts[65];
        frame_c2c4d1b878cc5bc767486c8f2c76b216->m_frame.f_lineno = 4;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[73],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[74];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$charts$bar_chart_rod;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[75];
        tmp_level_value_3 = mod_consts[65];
        frame_c2c4d1b878cc5bc767486c8f2c76b216->m_frame.f_lineno = 5;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[0],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[0]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[76],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[76]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[77];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$charts$bar_chart_rod;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[78];
        tmp_level_value_4 = mod_consts[65];
        frame_c2c4d1b878cc5bc767486c8f2c76b216->m_frame.f_lineno = 6;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[79],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[80];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$charts$bar_chart_rod;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[81];
        tmp_level_value_5 = mod_consts[65];
        frame_c2c4d1b878cc5bc767486c8f2c76b216->m_frame.f_lineno = 7;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[82],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[83];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$charts$bar_chart_rod;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[84];
        tmp_level_value_6 = mod_consts[65];
        frame_c2c4d1b878cc5bc767486c8f2c76b216->m_frame.f_lineno = 8;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[85],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[85]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[86];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core$charts$bar_chart_rod;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[87];
        tmp_level_value_7 = mod_consts[65];
        frame_c2c4d1b878cc5bc767486c8f2c76b216->m_frame.f_lineno = 9;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[88],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[88]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[52],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[52]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$charts$bar_chart_rod,
                mod_consts[89],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[89]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_19);
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
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        tmp_assign_source_20 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_21 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
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


            exception_lineno = 12;

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
        tmp_subscript_value_1 = mod_consts[65];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_23 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_23;
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
        PyObject *tmp_assign_source_24;
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


            exception_lineno = 12;

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
        frame_c2c4d1b878cc5bc767486c8f2c76b216->m_frame.f_lineno = 12;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
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


            exception_lineno = 12;

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


            exception_lineno = 12;

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


                exception_lineno = 12;

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


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 12;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[98], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_6;
        }
        frame_060df22ccf12613add44da3607ae1ea0_2 = MAKE_CLASS_FRAME(codeobj_060df22ccf12613add44da3607ae1ea0, module_flet_core$charts$bar_chart_rod, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_060df22ccf12613add44da3607ae1ea0_2);
        assert(Py_REFCNT(frame_060df22ccf12613add44da3607ae1ea0_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_3;
            tmp_tuple_element_4 = Py_None;
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(21);
            {
                PyObject *tmp_expression_value_6;
                PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 10, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 11, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 12, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 13, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 14, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 15, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 16, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 17, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 18, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 19, tmp_tuple_element_4);
                tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[52]);

                if (tmp_expression_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_expression_value_6 == NULL)) {
                            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                        }

                        if (tmp_expression_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_6);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[99]);
                Py_DECREF(tmp_expression_value_6);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 20, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_key_1 = mod_consts[3];
            tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_1);

                        exception_lineno = 15;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[66]);

            if (tmp_expression_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_1);
                        Py_DECREF(tmp_expression_value_7);

                        exception_lineno = 15;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[73]);

            if (tmp_subscript_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_subscript_value_3 == NULL)) {
                        tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                    }

                    if (tmp_subscript_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_1);
                        Py_DECREF(tmp_expression_value_7);
                        Py_DECREF(tmp_expression_value_8);

                        exception_lineno = 15;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_8);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_1);
                Py_DECREF(tmp_expression_value_7);

                exception_lineno = 15;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_7);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_1);

                exception_lineno = 15;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 21 );
            {
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_subscript_value_15;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[100];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 16;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[82]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_subscript_value_4 == NULL)) {
                            tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_subscript_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_9);

                            exception_lineno = 16;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 16;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[101];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 17;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[102]);

                if (tmp_subscript_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_5 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_5);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 17;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[103];
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 18;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[102]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_11);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[104];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[64]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 19;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 23;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 24;
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
                tmp_dict_key_1 = mod_consts[6];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 25;
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
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 26;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_7);
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
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 27;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[79]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_subscript_value_8 == NULL)) {
                            tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_subscript_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_13);

                            exception_lineno = 27;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[10];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[88]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
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
                tmp_dict_key_1 = mod_consts[9];
                tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 29;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[70]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_subscript_value_9 == NULL)) {
                            tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_subscript_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_14);

                            exception_lineno = 29;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[11];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
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
                tmp_dict_key_1 = mod_consts[12];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
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
                tmp_dict_key_1 = mod_consts[13];
                tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 32;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[14];
                tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 33;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[79]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_subscript_value_11 == NULL)) {
                            tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_subscript_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_16);

                            exception_lineno = 33;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_11);
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
                tmp_dict_key_1 = mod_consts[15];
                tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[102]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_12);
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
                tmp_dict_key_1 = mod_consts[16];
                tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[102]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[17];
                tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

                if (tmp_subscript_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[19];
                tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 37;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[85]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_subscript_value_15 == NULL)) {
                            tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_subscript_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_20);

                            exception_lineno = 37;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[18];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[52]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
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
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_defaults_1);
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[108], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__3__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__4__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[111], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
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
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__5_rod_stack_items();

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 81;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__5_rod_stack_items();

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 81;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[3]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 85;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__6_rod_stack_items();

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 85;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[115], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
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
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
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
            tmp_called_value_4 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[116];
            tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_2 == NULL)) {
                        tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 91;
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


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__7_from_y(tmp_annotations_2);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 90;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[116];
            tmp_dict_value_3 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 91;
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


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__7_from_y(tmp_annotations_3);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 90;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[4]);

            if (unlikely(tmp_expression_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 94;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[115]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[54];
            tmp_dict_value_4 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 95;
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


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__8_from_y(tmp_annotations_4);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 94;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
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
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
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
            tmp_called_value_7 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[116];
            tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 100;
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


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__9_to_y(tmp_annotations_5);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[116];
            tmp_dict_value_6 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 100;
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


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__9_to_y(tmp_annotations_6);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[5]);

            if (unlikely(tmp_expression_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[115]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[54];
            tmp_dict_value_7 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);

                        exception_lineno = 104;
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


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__10_to_y(tmp_annotations_7);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 103;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
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
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
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
            tmp_called_value_10 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[116];
            tmp_dict_value_8 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 109;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__11_width(tmp_annotations_8);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 108;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[116];
            tmp_dict_value_9 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 109;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__11_width(tmp_annotations_9);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 108;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[6]);

            if (unlikely(tmp_expression_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[115]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[54];
            tmp_dict_value_10 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_10 == NULL)) {
                        tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 113;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__12_width(tmp_annotations_10);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 112;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
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
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_17;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
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
            tmp_called_value_13 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[116];
            tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 118;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

            if (tmp_subscript_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_24);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 118;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__13_color(tmp_annotations_11);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 117;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[116];
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 118;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

            if (tmp_subscript_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_17 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_25);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__13_color(tmp_annotations_12);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 117;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_18;
            tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[7]);

            if (unlikely(tmp_expression_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[115]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_13 = mod_consts[54];
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 122;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

            if (tmp_subscript_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_18 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_27);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__14_color(tmp_annotations_13);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 121;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
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
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_20;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
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
            tmp_called_value_16 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_14 = mod_consts[116];
            tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 127;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[70]);

            if (tmp_subscript_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_subscript_value_19 == NULL)) {
                        tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_subscript_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_expression_value_28);

                        exception_lineno = 127;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_28);
            Py_DECREF(tmp_subscript_value_19);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__15_border_side(tmp_annotations_14);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_17 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_15 = mod_consts[116];
            tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 127;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[70]);

            if (tmp_subscript_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_subscript_value_20 == NULL)) {
                        tmp_subscript_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_subscript_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_29);

                        exception_lineno = 127;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_29);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__15_border_side(tmp_annotations_15);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_21;
            tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[9]);

            if (unlikely(tmp_expression_value_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[115]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_16 = mod_consts[54];
            tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 131;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[70]);

            if (tmp_subscript_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_subscript_value_21 == NULL)) {
                        tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_subscript_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);
                        Py_DECREF(tmp_expression_value_31);

                        exception_lineno = 131;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_31);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);

                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__16_border_side(tmp_annotations_16);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 130;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
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
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_23;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
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
            tmp_called_value_19 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 135;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_17 = mod_consts[116];
            tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 136;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[88]);

            if (tmp_subscript_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_subscript_value_22 == NULL)) {
                        tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_subscript_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);
                        Py_DECREF(tmp_expression_value_32);

                        exception_lineno = 136;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_32);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);

                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__17_border_radius(tmp_annotations_17);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 135;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_20 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_18 = mod_consts[116];
            tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 136;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[88]);

            if (tmp_subscript_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_subscript_value_23 == NULL)) {
                        tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_subscript_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_33);

                        exception_lineno = 136;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_33);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__17_border_radius(tmp_annotations_18);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 135;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_24;
            tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[10]);

            if (unlikely(tmp_expression_value_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[115]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_19 = mod_consts[54];
            tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);

                        exception_lineno = 140;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_24 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[88]);

            if (tmp_subscript_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_subscript_value_24 == NULL)) {
                        tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_subscript_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_expression_value_35);

                        exception_lineno = 140;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_35);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 140;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__18_border_radius(tmp_annotations_19);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 139;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
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
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_26;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
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
            tmp_called_value_22 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 144;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_20 = mod_consts[116];
            tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 145;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_36);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_25 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[79]);

            if (tmp_subscript_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_subscript_value_25 == NULL)) {
                        tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                    }

                    if (tmp_subscript_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_expression_value_36);

                        exception_lineno = 145;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_36);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__19_gradient(tmp_annotations_20);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 144;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_23 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_21 = mod_consts[116];
            tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 145;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_26 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[79]);

            if (tmp_subscript_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_subscript_value_26 == NULL)) {
                        tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                    }

                    if (tmp_subscript_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_37);

                        exception_lineno = 145;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__19_gradient(tmp_annotations_21);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 144;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_27;
            tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[8]);

            if (unlikely(tmp_expression_value_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 148;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[115]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_22 = mod_consts[54];
            tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);

                        exception_lineno = 149;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[79]);

            if (tmp_subscript_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_subscript_value_27 == NULL)) {
                        tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                    }

                    if (tmp_subscript_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);
                        Py_DECREF(tmp_expression_value_39);

                        exception_lineno = 149;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_39);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);

                exception_lineno = 149;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__20_gradient(tmp_annotations_22);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 148;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
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
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
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
            tmp_called_value_25 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 153;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_23 = mod_consts[116];
            tmp_dict_value_23 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_23 == NULL)) {
                        tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);

                        exception_lineno = 154;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__21_bg_from_y(tmp_annotations_23);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 153;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_26 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_24 = mod_consts[116];
            tmp_dict_value_24 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_24 == NULL)) {
                        tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__21_bg_from_y(tmp_annotations_24);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 153;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[11]);

            if (unlikely(tmp_expression_value_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[115]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_25 = mod_consts[54];
            tmp_dict_value_25 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_25 == NULL)) {
                        tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);

                        exception_lineno = 158;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__22_bg_from_y(tmp_annotations_25);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 157;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
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
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
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
            tmp_called_value_28 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 162;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_26 = mod_consts[116];
            tmp_dict_value_26 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_26 == NULL)) {
                        tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);

                        exception_lineno = 163;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__23_bg_to_y(tmp_annotations_26);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_29 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_27 = mod_consts[116];
            tmp_dict_value_27 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_27 == NULL)) {
                        tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 163;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__23_bg_to_y(tmp_annotations_27);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[12]);

            if (unlikely(tmp_expression_value_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[115]);
            Py_DECREF(tmp_expression_value_41);
            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_28 = mod_consts[54];
            tmp_dict_value_28 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[76]);

            if (tmp_dict_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_28 == NULL)) {
                        tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_30);

                        exception_lineno = 167;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_28 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__24_bg_to_y(tmp_annotations_28);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 166;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
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
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_29;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
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
            tmp_called_value_31 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 171;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_29 = mod_consts[116];
            tmp_expression_value_42 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 172;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

            if (tmp_subscript_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_42);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_dict_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_29 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__25_bg_color(tmp_annotations_29);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 171;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_32 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_30 = mod_consts[116];
            tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_43 == NULL)) {
                        tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 172;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_29 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

            if (tmp_subscript_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_29 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_43);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__25_bg_color(tmp_annotations_30);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 171;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_30;
            tmp_expression_value_44 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[13]);

            if (unlikely(tmp_expression_value_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[13]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[115]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_31 = mod_consts[54];
            tmp_expression_value_45 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);

                        exception_lineno = 176;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_30 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

            if (tmp_subscript_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_30 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_45);
            Py_DECREF(tmp_subscript_value_30);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);

                exception_lineno = 176;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_args_element_value_33 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__26_bg_color(tmp_annotations_31);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 175;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
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
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_32;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
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
            tmp_called_value_34 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 180;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_32 = mod_consts[116];
            tmp_expression_value_46 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);

                        exception_lineno = 181;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_31 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[79]);

            if (tmp_subscript_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_subscript_value_31 == NULL)) {
                        tmp_subscript_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                    }

                    if (tmp_subscript_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);
                        Py_DECREF(tmp_expression_value_46);

                        exception_lineno = 181;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_46);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_dict_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_34);

                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));


            tmp_args_element_value_34 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__27_bg_gradient(tmp_annotations_32);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 180;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_35 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_33 = mod_consts[116];
            tmp_expression_value_47 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 181;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_32 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[79]);

            if (tmp_subscript_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_subscript_value_32 == NULL)) {
                        tmp_subscript_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                    }

                    if (tmp_subscript_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_47);

                        exception_lineno = 181;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_47);
            Py_DECREF(tmp_subscript_value_32);
            if (tmp_dict_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));


            tmp_args_element_value_35 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__27_bg_gradient(tmp_annotations_33);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 180;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_36;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_annotations_34;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_33;
            tmp_expression_value_48 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[14]);

            if (unlikely(tmp_expression_value_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[115]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_34 = mod_consts[54];
            tmp_expression_value_49 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);

                        exception_lineno = 185;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_49);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_33 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[79]);

            if (tmp_subscript_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_subscript_value_33 == NULL)) {
                        tmp_subscript_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                    }

                    if (tmp_subscript_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);
                        Py_DECREF(tmp_expression_value_49);

                        exception_lineno = 185;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_49);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);

                exception_lineno = 185;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_34 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));


            tmp_args_element_value_36 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__28_bg_gradient(tmp_annotations_34);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 184;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
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
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_36;
            PyObject *tmp_dict_value_36;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_35;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
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
            tmp_called_value_37 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 189;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_35 = mod_consts[116];
            tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 190;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_34 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[102]);

            if (tmp_subscript_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_34 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_dict_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 190;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_35 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
            Py_DECREF(tmp_dict_value_35);
            assert(!(tmp_res != 0));


            tmp_args_element_value_37 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__29_selected(tmp_annotations_35);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 189;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_38 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_36 = mod_consts[116];
            tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 190;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_51);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_35 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[102]);

            if (tmp_subscript_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_35 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_35);
            Py_DECREF(tmp_expression_value_51);
            Py_DECREF(tmp_subscript_value_35);
            if (tmp_dict_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_36 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));


            tmp_args_element_value_38 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__29_selected(tmp_annotations_36);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 189;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_annotations_37;
            PyObject *tmp_dict_key_37;
            PyObject *tmp_dict_value_37;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_36;
            tmp_expression_value_52 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[15]);

            if (unlikely(tmp_expression_value_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[115]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_37 = mod_consts[54];
            tmp_expression_value_53 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_39);

                        exception_lineno = 194;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_53);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_36 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[102]);

            if (tmp_subscript_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_36 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_36);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_36);
            Py_DECREF(tmp_expression_value_53);
            Py_DECREF(tmp_subscript_value_36);
            if (tmp_dict_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 194;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_37 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));


            tmp_args_element_value_39 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__30_selected(tmp_annotations_37);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 193;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
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
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_annotations_39;
            PyObject *tmp_dict_key_39;
            PyObject *tmp_dict_value_39;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_subscript_value_38;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
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
            tmp_called_value_40 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 198;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_38 = mod_consts[116];
            tmp_expression_value_54 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);

                        exception_lineno = 199;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_54);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_37 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[102]);

            if (tmp_subscript_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_37 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_54);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_dict_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_40);

                exception_lineno = 199;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_38 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_38, tmp_dict_value_38);
            Py_DECREF(tmp_dict_value_38);
            assert(!(tmp_res != 0));


            tmp_args_element_value_40 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__31_show_tooltip(tmp_annotations_38);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 198;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_41 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_39 = mod_consts[116];
            tmp_expression_value_55 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_55 == NULL)) {
                        tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 199;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_55);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_38 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[102]);

            if (tmp_subscript_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_38 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_38);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_55);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_dict_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_39 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));


            tmp_args_element_value_41 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__31_show_tooltip(tmp_annotations_39);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 198;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_42;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_annotations_40;
            PyObject *tmp_dict_key_40;
            PyObject *tmp_dict_value_40;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_39;
            tmp_expression_value_56 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[16]);

            if (unlikely(tmp_expression_value_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[16]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[115]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_40 = mod_consts[54];
            tmp_expression_value_57 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);

                        exception_lineno = 203;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_57);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_39 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[102]);

            if (tmp_subscript_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_39 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_39);
            Py_DECREF(tmp_expression_value_57);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_dict_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_42);

                exception_lineno = 203;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_40 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_40, tmp_dict_value_40);
            Py_DECREF(tmp_dict_value_40);
            assert(!(tmp_res != 0));


            tmp_args_element_value_42 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__32_show_tooltip(tmp_annotations_40);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 202;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
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
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_annotations_42;
            PyObject *tmp_dict_key_42;
            PyObject *tmp_dict_value_42;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_41;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
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
            tmp_called_value_43 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 207;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_41 = mod_consts[116];
            tmp_expression_value_58 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_43);

                        exception_lineno = 208;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_58);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_40 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

            if (tmp_subscript_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_40 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_58);
            Py_DECREF(tmp_subscript_value_40);
            if (tmp_dict_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_43);

                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_41 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_41, tmp_dict_value_41);
            Py_DECREF(tmp_dict_value_41);
            assert(!(tmp_res != 0));


            tmp_args_element_value_43 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__33_tooltip(tmp_annotations_41);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 207;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_44 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_42 = mod_consts[116];
            tmp_expression_value_59 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_59 == NULL)) {
                        tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 208;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_59);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_41 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

            if (tmp_subscript_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_41 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_59);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_42 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_42, tmp_dict_value_42);
            Py_DECREF(tmp_dict_value_42);
            assert(!(tmp_res != 0));


            tmp_args_element_value_44 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__33_tooltip(tmp_annotations_42);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 207;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_annotations_43;
            PyObject *tmp_dict_key_43;
            PyObject *tmp_dict_value_43;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_42;
            tmp_expression_value_60 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[17]);

            if (unlikely(tmp_expression_value_60 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[17]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[115]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_43 = mod_consts[54];
            tmp_expression_value_61 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_61 == NULL)) {
                        tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);

                        exception_lineno = 212;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_61);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_42 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[105]);

            if (tmp_subscript_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_42 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_43 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_61);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_dict_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);

                exception_lineno = 212;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_43 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_43, tmp_dict_value_43);
            Py_DECREF(tmp_dict_value_43);
            assert(!(tmp_res != 0));


            tmp_args_element_value_45 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__34_tooltip(tmp_annotations_43);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 211;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_45);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
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
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
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
            tmp_called_value_46 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 216;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_44 = mod_consts[116];
            tmp_dict_value_44 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[52]);

            if (tmp_dict_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_dict_value_44 == NULL)) {
                        tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_dict_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);

                        exception_lineno = 217;
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


            tmp_args_element_value_46 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__35_tooltip_align(tmp_annotations_44);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 216;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_47 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_45 = mod_consts[116];
            tmp_dict_value_45 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[52]);

            if (tmp_dict_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_dict_value_45 == NULL)) {
                        tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_dict_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 217;
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


            tmp_args_element_value_47 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__35_tooltip_align(tmp_annotations_45);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 216;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_annotations_46;
            PyObject *tmp_dict_key_46;
            PyObject *tmp_dict_value_46;
            tmp_expression_value_62 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[18]);

            if (unlikely(tmp_expression_value_62 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[18]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[115]);
            Py_DECREF(tmp_expression_value_62);
            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_46 = mod_consts[54];
            tmp_dict_value_46 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[52]);

            if (tmp_dict_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_dict_value_46 == NULL)) {
                        tmp_dict_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_dict_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);

                        exception_lineno = 221;
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


            tmp_args_element_value_48 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__36_tooltip_align(tmp_annotations_46);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 220;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_48);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_47;
            PyObject *tmp_dict_key_47;
            PyObject *tmp_dict_value_47;
            tmp_dict_key_47 = mod_consts[54];
            tmp_dict_value_47 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[89]);

            if (tmp_dict_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_dict_value_47 == NULL)) {
                        tmp_dict_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_dict_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 228;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_47 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_47, tmp_dict_key_47, tmp_dict_value_47);
            Py_DECREF(tmp_dict_value_47);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__37___set_tooltip_align(tmp_annotations_47);

            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[55], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_50;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
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
            tmp_called_value_49 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[113]);

            if (unlikely(tmp_called_value_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[113]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_49 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__38_tooltip_style();

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 232;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_49);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_50 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_50 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__38_tooltip_style();

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 232;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[19], tmp_dictset_value);
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
            PyObject *tmp_called_value_51;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_annotations_48;
            PyObject *tmp_dict_key_48;
            PyObject *tmp_dict_value_48;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_43;
            tmp_expression_value_63 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[19]);

            if (unlikely(tmp_expression_value_63 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[19]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[115]);
            Py_DECREF(tmp_expression_value_63);
            if (tmp_called_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_48 = mod_consts[54];
            tmp_expression_value_64 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[67]);

            if (tmp_expression_value_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_64 == NULL)) {
                        tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_51);

                        exception_lineno = 237;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_64);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_43 = PyObject_GetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[85]);

            if (tmp_subscript_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_subscript_value_43 == NULL)) {
                        tmp_subscript_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                    }

                    if (tmp_subscript_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_51);
                        Py_DECREF(tmp_expression_value_64);

                        exception_lineno = 237;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_64);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_dict_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_51);

                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_48 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_48, tmp_dict_key_48, tmp_dict_value_48);
            Py_DECREF(tmp_dict_value_48);
            assert(!(tmp_res != 0));


            tmp_args_element_value_51 = MAKE_FUNCTION_flet_core$charts$bar_chart_rod$$$function__39_tooltip_style(tmp_annotations_48);

            frame_060df22ccf12613add44da3607ae1ea0_2->m_frame.f_lineno = 236;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_51);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_060df22ccf12613add44da3607ae1ea0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_060df22ccf12613add44da3607ae1ea0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_060df22ccf12613add44da3607ae1ea0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_060df22ccf12613add44da3607ae1ea0_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_060df22ccf12613add44da3607ae1ea0_2);

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


                exception_lineno = 12;

                goto try_except_handler_6;
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
        tmp_res = PyObject_SetItem(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_52 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[91];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_c2c4d1b878cc5bc767486c8f2c76b216->m_frame.f_lineno = 12;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_52, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_27);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_26 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12);
        locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12 = NULL;
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

        Py_DECREF(locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12);
        locals_flet_core$charts$bar_chart_rod$$$class__1_BarChartRod_12 = NULL;
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
        exception_lineno = 12;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_26);
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
        exception_tb = MAKE_TRACEBACK(frame_c2c4d1b878cc5bc767486c8f2c76b216, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2c4d1b878cc5bc767486c8f2c76b216->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2c4d1b878cc5bc767486c8f2c76b216, exception_lineno);
    }



    assertFrameObject(frame_c2c4d1b878cc5bc767486c8f2c76b216);

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
    PGO_onModuleExit("flet_core.charts.bar_chart_rod", false);

    Py_INCREF(module_flet_core$charts$bar_chart_rod);
    return module_flet_core$charts$bar_chart_rod;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$bar_chart_rod, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$charts$bar_chart_rod", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
