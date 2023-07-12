/* Generated code for Python module 'flet_core.charts.line_chart_data'
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

/* The "module_flet_core$charts$line_chart_data" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$charts$line_chart_data;
PyDictObject *moduledict_flet_core$charts$line_chart_data;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[148];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[148];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.charts.line_chart_data"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 148; i++) {
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
void checkModuleConstants_flet_core$charts$line_chart_data(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 148; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_17e5491542bcc9101c2829a32e5ab835;
static PyCodeObject *codeobj_70e14b9738a806133ed5e66936aabe15;
static PyCodeObject *codeobj_1811d78554fb28f8b7b22542ae4fe4a5;
static PyCodeObject *codeobj_06b71866344d09d0bf49862b11a87983;
static PyCodeObject *codeobj_5ecd0d21c64934cc34b7350f375f0a11;
static PyCodeObject *codeobj_4a3261cc85091dbdd78843d3acf0dd60;
static PyCodeObject *codeobj_be0fb7a41cb224fa27871a4d772b6c59;
static PyCodeObject *codeobj_67a63f7a5a674f3c53d33f5a353b473b;
static PyCodeObject *codeobj_db213bfb10296d2a6a587f2cfc6ba4f0;
static PyCodeObject *codeobj_6c721688db080eed99b62d97431affd6;
static PyCodeObject *codeobj_ccfaf703db00ac5cb780bfcc1f52e593;
static PyCodeObject *codeobj_cdccceb6d0f2548ab25237efaf2c833a;
static PyCodeObject *codeobj_135393193e9f44497b4b36449a7190ad;
static PyCodeObject *codeobj_dceac9e8245fc5893c7b4dbdc8e5c418;
static PyCodeObject *codeobj_665df66bfe60f9b5013c90e5a33a045b;
static PyCodeObject *codeobj_5b1d54baa3c2d9016a30c6405139d90c;
static PyCodeObject *codeobj_c161ab30bda28144c6bd33163a6648a8;
static PyCodeObject *codeobj_ea282f5703d71d4fa928590a9b45bd99;
static PyCodeObject *codeobj_d94e6f179e0198aa1f5c02df200d436b;
static PyCodeObject *codeobj_79ec31e8a345e234293c1dfc1dd062f7;
static PyCodeObject *codeobj_f567253af3cf3570cbcf31f4addfe9d0;
static PyCodeObject *codeobj_fc61de8832201598a8c55c0c5d9f2116;
static PyCodeObject *codeobj_3e7a271e4581243550b5fe052b1e89f7;
static PyCodeObject *codeobj_b749468102a28f0837239fac755b4425;
static PyCodeObject *codeobj_0bcd1f5452897415d3e13d41fc719323;
static PyCodeObject *codeobj_414983331721fa6a70b062c4a08b6d85;
static PyCodeObject *codeobj_21ffc4587192eaa0cd52cd94feca7a5b;
static PyCodeObject *codeobj_1da694f5379e8aa27d43d0e3ad37233f;
static PyCodeObject *codeobj_5e87828296183b5c36e65eb9aed06f63;
static PyCodeObject *codeobj_bbe0148a3ac43066493426a04af103ff;
static PyCodeObject *codeobj_b0b15a24f83759e6414106bdd164eae8;
static PyCodeObject *codeobj_a06ed3846154dad5a58b4ca9742f9d3b;
static PyCodeObject *codeobj_28fd55de5ef589110bfaa4d97ad22e6a;
static PyCodeObject *codeobj_db227a51423932ab5c1a2325c21adaed;
static PyCodeObject *codeobj_48ef4ea2e744bc07a8cdc04fb900222b;
static PyCodeObject *codeobj_ef715ded065c515e2891a35cbc7ed8a1;
static PyCodeObject *codeobj_58dd1b6900a7f319b9e20a37e20a8815;
static PyCodeObject *codeobj_f61ab04cb780a6bd86ddc5d037afa558;
static PyCodeObject *codeobj_ce145a3b96449543ebdadcea13285f9b;
static PyCodeObject *codeobj_6d8f3bb780c8fe3eb3a2a76af4e10576;
static PyCodeObject *codeobj_c696f88757177f53ea2f6f69e1d7dc91;
static PyCodeObject *codeobj_6756e7db04da8f5445329f1db3cfded4;
static PyCodeObject *codeobj_6337d17b8393e5f42e66d401d580d399;
static PyCodeObject *codeobj_27e8943a284b450521fbb6540b680a44;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[62]; CHECK_OBJECT(module_filename_obj);
    codeobj_17e5491542bcc9101c2829a32e5ab835 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[141], mod_consts[141], NULL, NULL, 0, 0, 0);
    codeobj_70e14b9738a806133ed5e66936aabe15 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[142], NULL, 0, 0, 0);
    codeobj_1811d78554fb28f8b7b22542ae4fe4a5 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[143], NULL, 24, 0, 0);
    codeobj_06b71866344d09d0bf49862b11a87983 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[23], mod_consts[23], mod_consts[144], mod_consts[142], 1, 0, 0);
    codeobj_5ecd0d21c64934cc34b7350f375f0a11 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[145], NULL, 1, 0, 0);
    codeobj_4a3261cc85091dbdd78843d3acf0dd60 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[145], NULL, 1, 0, 0);
    codeobj_be0fb7a41cb224fa27871a4d772b6c59 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[145], NULL, 1, 0, 0);
    codeobj_67a63f7a5a674f3c53d33f5a353b473b = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[146], NULL, 2, 0, 0);
    codeobj_db213bfb10296d2a6a587f2cfc6ba4f0 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[145], NULL, 1, 0, 0);
    codeobj_6c721688db080eed99b62d97431affd6 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[146], NULL, 2, 0, 0);
    codeobj_ccfaf703db00ac5cb780bfcc1f52e593 = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[145], NULL, 1, 0, 0);
    codeobj_cdccceb6d0f2548ab25237efaf2c833a = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[146], NULL, 2, 0, 0);
    codeobj_135393193e9f44497b4b36449a7190ad = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[145], NULL, 1, 0, 0);
    codeobj_dceac9e8245fc5893c7b4dbdc8e5c418 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[146], NULL, 2, 0, 0);
    codeobj_665df66bfe60f9b5013c90e5a33a045b = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[145], NULL, 1, 0, 0);
    codeobj_5b1d54baa3c2d9016a30c6405139d90c = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[146], NULL, 2, 0, 0);
    codeobj_c161ab30bda28144c6bd33163a6648a8 = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[145], NULL, 1, 0, 0);
    codeobj_ea282f5703d71d4fa928590a9b45bd99 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[146], NULL, 2, 0, 0);
    codeobj_d94e6f179e0198aa1f5c02df200d436b = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[145], NULL, 1, 0, 0);
    codeobj_79ec31e8a345e234293c1dfc1dd062f7 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[146], NULL, 2, 0, 0);
    codeobj_f567253af3cf3570cbcf31f4addfe9d0 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[145], NULL, 1, 0, 0);
    codeobj_fc61de8832201598a8c55c0c5d9f2116 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[146], NULL, 2, 0, 0);
    codeobj_3e7a271e4581243550b5fe052b1e89f7 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[145], NULL, 1, 0, 0);
    codeobj_b749468102a28f0837239fac755b4425 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[146], NULL, 2, 0, 0);
    codeobj_0bcd1f5452897415d3e13d41fc719323 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[145], NULL, 1, 0, 0);
    codeobj_414983331721fa6a70b062c4a08b6d85 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[146], NULL, 2, 0, 0);
    codeobj_21ffc4587192eaa0cd52cd94feca7a5b = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[145], NULL, 1, 0, 0);
    codeobj_1da694f5379e8aa27d43d0e3ad37233f = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[146], NULL, 2, 0, 0);
    codeobj_5e87828296183b5c36e65eb9aed06f63 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[145], NULL, 1, 0, 0);
    codeobj_bbe0148a3ac43066493426a04af103ff = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[146], NULL, 2, 0, 0);
    codeobj_b0b15a24f83759e6414106bdd164eae8 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[145], NULL, 1, 0, 0);
    codeobj_a06ed3846154dad5a58b4ca9742f9d3b = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[146], NULL, 2, 0, 0);
    codeobj_28fd55de5ef589110bfaa4d97ad22e6a = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[145], NULL, 1, 0, 0);
    codeobj_db227a51423932ab5c1a2325c21adaed = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[146], NULL, 2, 0, 0);
    codeobj_48ef4ea2e744bc07a8cdc04fb900222b = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[145], NULL, 1, 0, 0);
    codeobj_ef715ded065c515e2891a35cbc7ed8a1 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[146], NULL, 2, 0, 0);
    codeobj_58dd1b6900a7f319b9e20a37e20a8815 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[145], NULL, 1, 0, 0);
    codeobj_f61ab04cb780a6bd86ddc5d037afa558 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[146], NULL, 2, 0, 0);
    codeobj_ce145a3b96449543ebdadcea13285f9b = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[145], NULL, 1, 0, 0);
    codeobj_6d8f3bb780c8fe3eb3a2a76af4e10576 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[146], NULL, 2, 0, 0);
    codeobj_c696f88757177f53ea2f6f69e1d7dc91 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[145], NULL, 1, 0, 0);
    codeobj_6756e7db04da8f5445329f1db3cfded4 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[146], NULL, 2, 0, 0);
    codeobj_6337d17b8393e5f42e66d401d580d399 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[145], NULL, 1, 0, 0);
    codeobj_27e8943a284b450521fbb6540b680a44 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[146], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__10_curved(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__11_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__12_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__13_gradient(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__14_gradient(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__15_stroke_cap_round(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__16_stroke_cap_round(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__17_dash_pattern();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__18_dash_pattern(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__19_shadow();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__20_shadow(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__21_point();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__22_point(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__23_selected_point();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__24_selected_point(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__25_above_line_bgcolor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__26_above_line_bgcolor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__27_above_line_gradient(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__28_above_line_gradient(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__29_above_line_cutoff_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__30_above_line_cutoff_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__31_above_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__32_above_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__33_below_line_bgcolor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__34_below_line_bgcolor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__35_below_line_gradient(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__36_below_line_gradient(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__37_below_line_cutoff_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__38_below_line_cutoff_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__39_below_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__3__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__40_below_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__41_selected_below_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__42_selected_below_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__4__get_children();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__5_data_points();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__6_data_points();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__7_stroke_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__8_stroke_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__9_curved(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$charts$line_chart_data$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data_points = python_pars[1];
    PyObject *par_ref = python_pars[2];
    PyObject *par_disabled = python_pars[3];
    PyObject *par_visible = python_pars[4];
    PyObject *par_data = python_pars[5];
    PyObject *par_curved = python_pars[6];
    PyObject *par_color = python_pars[7];
    PyObject *par_gradient = python_pars[8];
    PyObject *par_stroke_width = python_pars[9];
    PyObject *par_stroke_cap_round = python_pars[10];
    PyObject *par_dash_pattern = python_pars[11];
    PyObject *par_shadow = python_pars[12];
    PyObject *par_above_line_bgcolor = python_pars[13];
    PyObject *par_above_line_gradient = python_pars[14];
    PyObject *par_above_line_cutoff_y = python_pars[15];
    PyObject *par_above_line = python_pars[16];
    PyObject *par_below_line_bgcolor = python_pars[17];
    PyObject *par_below_line_gradient = python_pars[18];
    PyObject *par_below_line_cutoff_y = python_pars[19];
    PyObject *par_below_line = python_pars[20];
    PyObject *par_selected_below_line = python_pars[21];
    PyObject *par_point = python_pars[22];
    PyObject *par_selected_point = python_pars[23];
    struct Nuitka_FrameObject *frame_1811d78554fb28f8b7b22542ae4fe4a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1811d78554fb28f8b7b22542ae4fe4a5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1811d78554fb28f8b7b22542ae4fe4a5)) {
        Py_XDECREF(cache_frame_1811d78554fb28f8b7b22542ae4fe4a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1811d78554fb28f8b7b22542ae4fe4a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1811d78554fb28f8b7b22542ae4fe4a5 = MAKE_FUNCTION_FRAME(codeobj_1811d78554fb28f8b7b22542ae4fe4a5, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1811d78554fb28f8b7b22542ae4fe4a5->m_type_description == NULL);
    frame_1811d78554fb28f8b7b22542ae4fe4a5 = cache_frame_1811d78554fb28f8b7b22542ae4fe4a5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1811d78554fb28f8b7b22542ae4fe4a5);
    assert(Py_REFCNT(frame_1811d78554fb28f8b7b22542ae4fe4a5) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooooo";
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
        frame_1811d78554fb28f8b7b22542ae4fe4a5->m_frame.f_lineno = 43;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_data_points);
        tmp_assattr_value_1 = par_data_points;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_curved);
        tmp_assattr_value_2 = par_curved;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_color);
        tmp_assattr_value_3 = par_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_gradient);
        tmp_assattr_value_4 = par_gradient;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_stroke_width);
        tmp_assattr_value_5 = par_stroke_width;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_stroke_cap_round);
        tmp_assattr_value_6 = par_stroke_cap_round;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_shadow);
        tmp_assattr_value_7 = par_shadow;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_dash_pattern);
        tmp_assattr_value_8 = par_dash_pattern;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[10], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_above_line_bgcolor);
        tmp_assattr_value_9 = par_above_line_bgcolor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[11], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_above_line_gradient);
        tmp_assattr_value_10 = par_above_line_gradient;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[12], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_above_line_cutoff_y);
        tmp_assattr_value_11 = par_above_line_cutoff_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[13], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_above_line);
        tmp_assattr_value_12 = par_above_line;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[14], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_below_line_bgcolor);
        tmp_assattr_value_13 = par_below_line_bgcolor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[15], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(par_below_line_gradient);
        tmp_assattr_value_14 = par_below_line_gradient;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[16], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_below_line_cutoff_y);
        tmp_assattr_value_15 = par_below_line_cutoff_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[17], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT(par_below_line);
        tmp_assattr_value_16 = par_below_line;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[18], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(par_selected_below_line);
        tmp_assattr_value_17 = par_selected_below_line;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[19], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        CHECK_OBJECT(par_point);
        tmp_assattr_value_18 = par_point;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[20], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        CHECK_OBJECT(par_selected_point);
        tmp_assattr_value_19 = par_selected_point;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[21], tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1811d78554fb28f8b7b22542ae4fe4a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1811d78554fb28f8b7b22542ae4fe4a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1811d78554fb28f8b7b22542ae4fe4a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1811d78554fb28f8b7b22542ae4fe4a5,
        type_description_1,
        par_self,
        par_data_points,
        par_ref,
        par_disabled,
        par_visible,
        par_data,
        par_curved,
        par_color,
        par_gradient,
        par_stroke_width,
        par_stroke_cap_round,
        par_dash_pattern,
        par_shadow,
        par_above_line_bgcolor,
        par_above_line_gradient,
        par_above_line_cutoff_y,
        par_above_line,
        par_below_line_bgcolor,
        par_below_line_gradient,
        par_below_line_cutoff_y,
        par_below_line,
        par_selected_below_line,
        par_point,
        par_selected_point
    );


    // Release cached frame if used for exception.
    if (frame_1811d78554fb28f8b7b22542ae4fe4a5 == cache_frame_1811d78554fb28f8b7b22542ae4fe4a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1811d78554fb28f8b7b22542ae4fe4a5);
        cache_frame_1811d78554fb28f8b7b22542ae4fe4a5 = NULL;
    }

    assertFrameObject(frame_1811d78554fb28f8b7b22542ae4fe4a5);

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
    CHECK_OBJECT(par_data_points);
    Py_DECREF(par_data_points);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_curved);
    Py_DECREF(par_curved);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_gradient);
    Py_DECREF(par_gradient);
    CHECK_OBJECT(par_stroke_width);
    Py_DECREF(par_stroke_width);
    CHECK_OBJECT(par_stroke_cap_round);
    Py_DECREF(par_stroke_cap_round);
    CHECK_OBJECT(par_dash_pattern);
    Py_DECREF(par_dash_pattern);
    CHECK_OBJECT(par_shadow);
    Py_DECREF(par_shadow);
    CHECK_OBJECT(par_above_line_bgcolor);
    Py_DECREF(par_above_line_bgcolor);
    CHECK_OBJECT(par_above_line_gradient);
    Py_DECREF(par_above_line_gradient);
    CHECK_OBJECT(par_above_line_cutoff_y);
    Py_DECREF(par_above_line_cutoff_y);
    CHECK_OBJECT(par_above_line);
    Py_DECREF(par_above_line);
    CHECK_OBJECT(par_below_line_bgcolor);
    Py_DECREF(par_below_line_bgcolor);
    CHECK_OBJECT(par_below_line_gradient);
    Py_DECREF(par_below_line_gradient);
    CHECK_OBJECT(par_below_line_cutoff_y);
    Py_DECREF(par_below_line_cutoff_y);
    CHECK_OBJECT(par_below_line);
    Py_DECREF(par_below_line);
    CHECK_OBJECT(par_selected_below_line);
    Py_DECREF(par_selected_below_line);
    CHECK_OBJECT(par_point);
    Py_DECREF(par_point);
    CHECK_OBJECT(par_selected_point);
    Py_DECREF(par_selected_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data_points);
    Py_DECREF(par_data_points);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_curved);
    Py_DECREF(par_curved);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_gradient);
    Py_DECREF(par_gradient);
    CHECK_OBJECT(par_stroke_width);
    Py_DECREF(par_stroke_width);
    CHECK_OBJECT(par_stroke_cap_round);
    Py_DECREF(par_stroke_cap_round);
    CHECK_OBJECT(par_dash_pattern);
    Py_DECREF(par_dash_pattern);
    CHECK_OBJECT(par_shadow);
    Py_DECREF(par_shadow);
    CHECK_OBJECT(par_above_line_bgcolor);
    Py_DECREF(par_above_line_bgcolor);
    CHECK_OBJECT(par_above_line_gradient);
    Py_DECREF(par_above_line_gradient);
    CHECK_OBJECT(par_above_line_cutoff_y);
    Py_DECREF(par_above_line_cutoff_y);
    CHECK_OBJECT(par_above_line);
    Py_DECREF(par_above_line);
    CHECK_OBJECT(par_below_line_bgcolor);
    Py_DECREF(par_below_line_bgcolor);
    CHECK_OBJECT(par_below_line_gradient);
    Py_DECREF(par_below_line_gradient);
    CHECK_OBJECT(par_below_line_cutoff_y);
    Py_DECREF(par_below_line_cutoff_y);
    CHECK_OBJECT(par_below_line);
    Py_DECREF(par_below_line);
    CHECK_OBJECT(par_selected_below_line);
    Py_DECREF(par_selected_below_line);
    CHECK_OBJECT(par_point);
    Py_DECREF(par_point);
    CHECK_OBJECT(par_selected_point);
    Py_DECREF(par_selected_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$charts$line_chart_data$$$function__3__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_06b71866344d09d0bf49862b11a87983;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_06b71866344d09d0bf49862b11a87983 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_06b71866344d09d0bf49862b11a87983)) {
        Py_XDECREF(cache_frame_06b71866344d09d0bf49862b11a87983);

#if _DEBUG_REFCOUNTS
        if (cache_frame_06b71866344d09d0bf49862b11a87983 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_06b71866344d09d0bf49862b11a87983 = MAKE_FUNCTION_FRAME(codeobj_06b71866344d09d0bf49862b11a87983, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_06b71866344d09d0bf49862b11a87983->m_type_description == NULL);
    frame_06b71866344d09d0bf49862b11a87983 = cache_frame_06b71866344d09d0bf49862b11a87983;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_06b71866344d09d0bf49862b11a87983);
    assert(Py_REFCNT(frame_06b71866344d09d0bf49862b11a87983) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$charts$line_chart_data, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06b71866344d09d0bf49862b11a87983->m_frame.f_lineno = 75;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[23]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[6];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 76;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06b71866344d09d0bf49862b11a87983->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
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
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[24]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[9];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[26]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 77;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06b71866344d09d0bf49862b11a87983->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
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
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[24]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[20];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[27]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 78;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06b71866344d09d0bf49862b11a87983->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
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
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[24]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
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

            exception_lineno = 79;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06b71866344d09d0bf49862b11a87983->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[24]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[30];
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[31]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 80;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06b71866344d09d0bf49862b11a87983->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[24]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[32];
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[33]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 81;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06b71866344d09d0bf49862b11a87983->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[24]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[34];
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[35]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 82;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06b71866344d09d0bf49862b11a87983->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[24]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[36];
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[37]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 83;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06b71866344d09d0bf49862b11a87983->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[24]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = mod_consts[38];
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[39]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 84;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06b71866344d09d0bf49862b11a87983->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[24]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[40];
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[41]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 85;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06b71866344d09d0bf49862b11a87983->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_06b71866344d09d0bf49862b11a87983, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_06b71866344d09d0bf49862b11a87983->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_06b71866344d09d0bf49862b11a87983, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_06b71866344d09d0bf49862b11a87983,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_06b71866344d09d0bf49862b11a87983 == cache_frame_06b71866344d09d0bf49862b11a87983) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_06b71866344d09d0bf49862b11a87983);
        cache_frame_06b71866344d09d0bf49862b11a87983 = NULL;
    }

    assertFrameObject(frame_06b71866344d09d0bf49862b11a87983);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__4__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5ecd0d21c64934cc34b7350f375f0a11;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5ecd0d21c64934cc34b7350f375f0a11 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5ecd0d21c64934cc34b7350f375f0a11)) {
        Py_XDECREF(cache_frame_5ecd0d21c64934cc34b7350f375f0a11);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ecd0d21c64934cc34b7350f375f0a11 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ecd0d21c64934cc34b7350f375f0a11 = MAKE_FUNCTION_FRAME(codeobj_5ecd0d21c64934cc34b7350f375f0a11, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5ecd0d21c64934cc34b7350f375f0a11->m_type_description == NULL);
    frame_5ecd0d21c64934cc34b7350f375f0a11 = cache_frame_5ecd0d21c64934cc34b7350f375f0a11;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5ecd0d21c64934cc34b7350f375f0a11);
    assert(Py_REFCNT(frame_5ecd0d21c64934cc34b7350f375f0a11) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_5ecd0d21c64934cc34b7350f375f0a11, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ecd0d21c64934cc34b7350f375f0a11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ecd0d21c64934cc34b7350f375f0a11, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ecd0d21c64934cc34b7350f375f0a11,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5ecd0d21c64934cc34b7350f375f0a11 == cache_frame_5ecd0d21c64934cc34b7350f375f0a11) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5ecd0d21c64934cc34b7350f375f0a11);
        cache_frame_5ecd0d21c64934cc34b7350f375f0a11 = NULL;
    }

    assertFrameObject(frame_5ecd0d21c64934cc34b7350f375f0a11);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__5_data_points(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5e87828296183b5c36e65eb9aed06f63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5e87828296183b5c36e65eb9aed06f63 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5e87828296183b5c36e65eb9aed06f63)) {
        Py_XDECREF(cache_frame_5e87828296183b5c36e65eb9aed06f63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e87828296183b5c36e65eb9aed06f63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e87828296183b5c36e65eb9aed06f63 = MAKE_FUNCTION_FRAME(codeobj_5e87828296183b5c36e65eb9aed06f63, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5e87828296183b5c36e65eb9aed06f63->m_type_description == NULL);
    frame_5e87828296183b5c36e65eb9aed06f63 = cache_frame_5e87828296183b5c36e65eb9aed06f63;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5e87828296183b5c36e65eb9aed06f63);
    assert(Py_REFCNT(frame_5e87828296183b5c36e65eb9aed06f63) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_5e87828296183b5c36e65eb9aed06f63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e87828296183b5c36e65eb9aed06f63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e87828296183b5c36e65eb9aed06f63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e87828296183b5c36e65eb9aed06f63,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5e87828296183b5c36e65eb9aed06f63 == cache_frame_5e87828296183b5c36e65eb9aed06f63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5e87828296183b5c36e65eb9aed06f63);
        cache_frame_5e87828296183b5c36e65eb9aed06f63 = NULL;
    }

    assertFrameObject(frame_5e87828296183b5c36e65eb9aed06f63);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__6_data_points(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_bbe0148a3ac43066493426a04af103ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bbe0148a3ac43066493426a04af103ff = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bbe0148a3ac43066493426a04af103ff)) {
        Py_XDECREF(cache_frame_bbe0148a3ac43066493426a04af103ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bbe0148a3ac43066493426a04af103ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bbe0148a3ac43066493426a04af103ff = MAKE_FUNCTION_FRAME(codeobj_bbe0148a3ac43066493426a04af103ff, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bbe0148a3ac43066493426a04af103ff->m_type_description == NULL);
    frame_bbe0148a3ac43066493426a04af103ff = cache_frame_bbe0148a3ac43066493426a04af103ff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bbe0148a3ac43066493426a04af103ff);
    assert(Py_REFCNT(frame_bbe0148a3ac43066493426a04af103ff) == 2);

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
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[42], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bbe0148a3ac43066493426a04af103ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbe0148a3ac43066493426a04af103ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbe0148a3ac43066493426a04af103ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bbe0148a3ac43066493426a04af103ff,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_bbe0148a3ac43066493426a04af103ff == cache_frame_bbe0148a3ac43066493426a04af103ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bbe0148a3ac43066493426a04af103ff);
        cache_frame_bbe0148a3ac43066493426a04af103ff = NULL;
    }

    assertFrameObject(frame_bbe0148a3ac43066493426a04af103ff);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__7_stroke_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6337d17b8393e5f42e66d401d580d399;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6337d17b8393e5f42e66d401d580d399 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6337d17b8393e5f42e66d401d580d399)) {
        Py_XDECREF(cache_frame_6337d17b8393e5f42e66d401d580d399);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6337d17b8393e5f42e66d401d580d399 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6337d17b8393e5f42e66d401d580d399 = MAKE_FUNCTION_FRAME(codeobj_6337d17b8393e5f42e66d401d580d399, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6337d17b8393e5f42e66d401d580d399->m_type_description == NULL);
    frame_6337d17b8393e5f42e66d401d580d399 = cache_frame_6337d17b8393e5f42e66d401d580d399;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6337d17b8393e5f42e66d401d580d399);
    assert(Py_REFCNT(frame_6337d17b8393e5f42e66d401d580d399) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6337d17b8393e5f42e66d401d580d399->m_frame.f_lineno = 102;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[44], 0), mod_consts[45]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
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
        exception_tb = MAKE_TRACEBACK(frame_6337d17b8393e5f42e66d401d580d399, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6337d17b8393e5f42e66d401d580d399->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6337d17b8393e5f42e66d401d580d399, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6337d17b8393e5f42e66d401d580d399,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6337d17b8393e5f42e66d401d580d399 == cache_frame_6337d17b8393e5f42e66d401d580d399) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6337d17b8393e5f42e66d401d580d399);
        cache_frame_6337d17b8393e5f42e66d401d580d399 = NULL;
    }

    assertFrameObject(frame_6337d17b8393e5f42e66d401d580d399);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__8_stroke_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_27e8943a284b450521fbb6540b680a44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_27e8943a284b450521fbb6540b680a44 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_27e8943a284b450521fbb6540b680a44)) {
        Py_XDECREF(cache_frame_27e8943a284b450521fbb6540b680a44);

#if _DEBUG_REFCOUNTS
        if (cache_frame_27e8943a284b450521fbb6540b680a44 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_27e8943a284b450521fbb6540b680a44 = MAKE_FUNCTION_FRAME(codeobj_27e8943a284b450521fbb6540b680a44, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_27e8943a284b450521fbb6540b680a44->m_type_description == NULL);
    frame_27e8943a284b450521fbb6540b680a44 = cache_frame_27e8943a284b450521fbb6540b680a44;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_27e8943a284b450521fbb6540b680a44);
    assert(Py_REFCNT(frame_27e8943a284b450521fbb6540b680a44) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[47];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_27e8943a284b450521fbb6540b680a44->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
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
        exception_tb = MAKE_TRACEBACK(frame_27e8943a284b450521fbb6540b680a44, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27e8943a284b450521fbb6540b680a44->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27e8943a284b450521fbb6540b680a44, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_27e8943a284b450521fbb6540b680a44,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_27e8943a284b450521fbb6540b680a44 == cache_frame_27e8943a284b450521fbb6540b680a44) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_27e8943a284b450521fbb6540b680a44);
        cache_frame_27e8943a284b450521fbb6540b680a44 = NULL;
    }

    assertFrameObject(frame_27e8943a284b450521fbb6540b680a44);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__9_curved(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0bcd1f5452897415d3e13d41fc719323;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0bcd1f5452897415d3e13d41fc719323 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0bcd1f5452897415d3e13d41fc719323)) {
        Py_XDECREF(cache_frame_0bcd1f5452897415d3e13d41fc719323);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0bcd1f5452897415d3e13d41fc719323 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0bcd1f5452897415d3e13d41fc719323 = MAKE_FUNCTION_FRAME(codeobj_0bcd1f5452897415d3e13d41fc719323, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0bcd1f5452897415d3e13d41fc719323->m_type_description == NULL);
    frame_0bcd1f5452897415d3e13d41fc719323 = cache_frame_0bcd1f5452897415d3e13d41fc719323;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0bcd1f5452897415d3e13d41fc719323);
    assert(Py_REFCNT(frame_0bcd1f5452897415d3e13d41fc719323) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0bcd1f5452897415d3e13d41fc719323->m_frame.f_lineno = 111;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[48], 0), mod_consts[45]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
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
        exception_tb = MAKE_TRACEBACK(frame_0bcd1f5452897415d3e13d41fc719323, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0bcd1f5452897415d3e13d41fc719323->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0bcd1f5452897415d3e13d41fc719323, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0bcd1f5452897415d3e13d41fc719323,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0bcd1f5452897415d3e13d41fc719323 == cache_frame_0bcd1f5452897415d3e13d41fc719323) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0bcd1f5452897415d3e13d41fc719323);
        cache_frame_0bcd1f5452897415d3e13d41fc719323 = NULL;
    }

    assertFrameObject(frame_0bcd1f5452897415d3e13d41fc719323);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__10_curved(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_414983331721fa6a70b062c4a08b6d85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_414983331721fa6a70b062c4a08b6d85 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_414983331721fa6a70b062c4a08b6d85)) {
        Py_XDECREF(cache_frame_414983331721fa6a70b062c4a08b6d85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_414983331721fa6a70b062c4a08b6d85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_414983331721fa6a70b062c4a08b6d85 = MAKE_FUNCTION_FRAME(codeobj_414983331721fa6a70b062c4a08b6d85, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_414983331721fa6a70b062c4a08b6d85->m_type_description == NULL);
    frame_414983331721fa6a70b062c4a08b6d85 = cache_frame_414983331721fa6a70b062c4a08b6d85;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_414983331721fa6a70b062c4a08b6d85);
    assert(Py_REFCNT(frame_414983331721fa6a70b062c4a08b6d85) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[4];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_414983331721fa6a70b062c4a08b6d85->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
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
        exception_tb = MAKE_TRACEBACK(frame_414983331721fa6a70b062c4a08b6d85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_414983331721fa6a70b062c4a08b6d85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_414983331721fa6a70b062c4a08b6d85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_414983331721fa6a70b062c4a08b6d85,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_414983331721fa6a70b062c4a08b6d85 == cache_frame_414983331721fa6a70b062c4a08b6d85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_414983331721fa6a70b062c4a08b6d85);
        cache_frame_414983331721fa6a70b062c4a08b6d85 = NULL;
    }

    assertFrameObject(frame_414983331721fa6a70b062c4a08b6d85);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__11_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3e7a271e4581243550b5fe052b1e89f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3e7a271e4581243550b5fe052b1e89f7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3e7a271e4581243550b5fe052b1e89f7)) {
        Py_XDECREF(cache_frame_3e7a271e4581243550b5fe052b1e89f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e7a271e4581243550b5fe052b1e89f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e7a271e4581243550b5fe052b1e89f7 = MAKE_FUNCTION_FRAME(codeobj_3e7a271e4581243550b5fe052b1e89f7, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e7a271e4581243550b5fe052b1e89f7->m_type_description == NULL);
    frame_3e7a271e4581243550b5fe052b1e89f7 = cache_frame_3e7a271e4581243550b5fe052b1e89f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3e7a271e4581243550b5fe052b1e89f7);
    assert(Py_REFCNT(frame_3e7a271e4581243550b5fe052b1e89f7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_3e7a271e4581243550b5fe052b1e89f7->m_frame.f_lineno = 120;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[43],
            PyTuple_GET_ITEM(mod_consts[49], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
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
        exception_tb = MAKE_TRACEBACK(frame_3e7a271e4581243550b5fe052b1e89f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e7a271e4581243550b5fe052b1e89f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e7a271e4581243550b5fe052b1e89f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e7a271e4581243550b5fe052b1e89f7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3e7a271e4581243550b5fe052b1e89f7 == cache_frame_3e7a271e4581243550b5fe052b1e89f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e7a271e4581243550b5fe052b1e89f7);
        cache_frame_3e7a271e4581243550b5fe052b1e89f7 = NULL;
    }

    assertFrameObject(frame_3e7a271e4581243550b5fe052b1e89f7);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__12_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b749468102a28f0837239fac755b4425;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b749468102a28f0837239fac755b4425 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b749468102a28f0837239fac755b4425)) {
        Py_XDECREF(cache_frame_b749468102a28f0837239fac755b4425);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b749468102a28f0837239fac755b4425 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b749468102a28f0837239fac755b4425 = MAKE_FUNCTION_FRAME(codeobj_b749468102a28f0837239fac755b4425, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b749468102a28f0837239fac755b4425->m_type_description == NULL);
    frame_b749468102a28f0837239fac755b4425 = cache_frame_b749468102a28f0837239fac755b4425;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b749468102a28f0837239fac755b4425);
    assert(Py_REFCNT(frame_b749468102a28f0837239fac755b4425) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[5];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_b749468102a28f0837239fac755b4425->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
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
        exception_tb = MAKE_TRACEBACK(frame_b749468102a28f0837239fac755b4425, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b749468102a28f0837239fac755b4425->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b749468102a28f0837239fac755b4425, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b749468102a28f0837239fac755b4425,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b749468102a28f0837239fac755b4425 == cache_frame_b749468102a28f0837239fac755b4425) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b749468102a28f0837239fac755b4425);
        cache_frame_b749468102a28f0837239fac755b4425 = NULL;
    }

    assertFrameObject(frame_b749468102a28f0837239fac755b4425);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__13_gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b0b15a24f83759e6414106bdd164eae8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b0b15a24f83759e6414106bdd164eae8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b0b15a24f83759e6414106bdd164eae8)) {
        Py_XDECREF(cache_frame_b0b15a24f83759e6414106bdd164eae8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0b15a24f83759e6414106bdd164eae8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0b15a24f83759e6414106bdd164eae8 = MAKE_FUNCTION_FRAME(codeobj_b0b15a24f83759e6414106bdd164eae8, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0b15a24f83759e6414106bdd164eae8->m_type_description == NULL);
    frame_b0b15a24f83759e6414106bdd164eae8 = cache_frame_b0b15a24f83759e6414106bdd164eae8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b0b15a24f83759e6414106bdd164eae8);
    assert(Py_REFCNT(frame_b0b15a24f83759e6414106bdd164eae8) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
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
        exception_tb = MAKE_TRACEBACK(frame_b0b15a24f83759e6414106bdd164eae8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0b15a24f83759e6414106bdd164eae8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0b15a24f83759e6414106bdd164eae8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0b15a24f83759e6414106bdd164eae8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b0b15a24f83759e6414106bdd164eae8 == cache_frame_b0b15a24f83759e6414106bdd164eae8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0b15a24f83759e6414106bdd164eae8);
        cache_frame_b0b15a24f83759e6414106bdd164eae8 = NULL;
    }

    assertFrameObject(frame_b0b15a24f83759e6414106bdd164eae8);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__14_gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a06ed3846154dad5a58b4ca9742f9d3b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a06ed3846154dad5a58b4ca9742f9d3b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a06ed3846154dad5a58b4ca9742f9d3b)) {
        Py_XDECREF(cache_frame_a06ed3846154dad5a58b4ca9742f9d3b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a06ed3846154dad5a58b4ca9742f9d3b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a06ed3846154dad5a58b4ca9742f9d3b = MAKE_FUNCTION_FRAME(codeobj_a06ed3846154dad5a58b4ca9742f9d3b, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a06ed3846154dad5a58b4ca9742f9d3b->m_type_description == NULL);
    frame_a06ed3846154dad5a58b4ca9742f9d3b = cache_frame_a06ed3846154dad5a58b4ca9742f9d3b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a06ed3846154dad5a58b4ca9742f9d3b);
    assert(Py_REFCNT(frame_a06ed3846154dad5a58b4ca9742f9d3b) == 2);

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


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a06ed3846154dad5a58b4ca9742f9d3b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a06ed3846154dad5a58b4ca9742f9d3b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a06ed3846154dad5a58b4ca9742f9d3b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a06ed3846154dad5a58b4ca9742f9d3b,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a06ed3846154dad5a58b4ca9742f9d3b == cache_frame_a06ed3846154dad5a58b4ca9742f9d3b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a06ed3846154dad5a58b4ca9742f9d3b);
        cache_frame_a06ed3846154dad5a58b4ca9742f9d3b = NULL;
    }

    assertFrameObject(frame_a06ed3846154dad5a58b4ca9742f9d3b);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__15_stroke_cap_round(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c696f88757177f53ea2f6f69e1d7dc91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c696f88757177f53ea2f6f69e1d7dc91 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c696f88757177f53ea2f6f69e1d7dc91)) {
        Py_XDECREF(cache_frame_c696f88757177f53ea2f6f69e1d7dc91);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c696f88757177f53ea2f6f69e1d7dc91 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c696f88757177f53ea2f6f69e1d7dc91 = MAKE_FUNCTION_FRAME(codeobj_c696f88757177f53ea2f6f69e1d7dc91, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c696f88757177f53ea2f6f69e1d7dc91->m_type_description == NULL);
    frame_c696f88757177f53ea2f6f69e1d7dc91 = cache_frame_c696f88757177f53ea2f6f69e1d7dc91;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c696f88757177f53ea2f6f69e1d7dc91);
    assert(Py_REFCNT(frame_c696f88757177f53ea2f6f69e1d7dc91) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c696f88757177f53ea2f6f69e1d7dc91->m_frame.f_lineno = 138;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[50], 0), mod_consts[45]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
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
        exception_tb = MAKE_TRACEBACK(frame_c696f88757177f53ea2f6f69e1d7dc91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c696f88757177f53ea2f6f69e1d7dc91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c696f88757177f53ea2f6f69e1d7dc91, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c696f88757177f53ea2f6f69e1d7dc91,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c696f88757177f53ea2f6f69e1d7dc91 == cache_frame_c696f88757177f53ea2f6f69e1d7dc91) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c696f88757177f53ea2f6f69e1d7dc91);
        cache_frame_c696f88757177f53ea2f6f69e1d7dc91 = NULL;
    }

    assertFrameObject(frame_c696f88757177f53ea2f6f69e1d7dc91);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__16_stroke_cap_round(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6756e7db04da8f5445329f1db3cfded4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6756e7db04da8f5445329f1db3cfded4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6756e7db04da8f5445329f1db3cfded4)) {
        Py_XDECREF(cache_frame_6756e7db04da8f5445329f1db3cfded4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6756e7db04da8f5445329f1db3cfded4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6756e7db04da8f5445329f1db3cfded4 = MAKE_FUNCTION_FRAME(codeobj_6756e7db04da8f5445329f1db3cfded4, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6756e7db04da8f5445329f1db3cfded4->m_type_description == NULL);
    frame_6756e7db04da8f5445329f1db3cfded4 = cache_frame_6756e7db04da8f5445329f1db3cfded4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6756e7db04da8f5445329f1db3cfded4);
    assert(Py_REFCNT(frame_6756e7db04da8f5445329f1db3cfded4) == 2);

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
        frame_6756e7db04da8f5445329f1db3cfded4->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
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
        exception_tb = MAKE_TRACEBACK(frame_6756e7db04da8f5445329f1db3cfded4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6756e7db04da8f5445329f1db3cfded4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6756e7db04da8f5445329f1db3cfded4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6756e7db04da8f5445329f1db3cfded4,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6756e7db04da8f5445329f1db3cfded4 == cache_frame_6756e7db04da8f5445329f1db3cfded4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6756e7db04da8f5445329f1db3cfded4);
        cache_frame_6756e7db04da8f5445329f1db3cfded4 = NULL;
    }

    assertFrameObject(frame_6756e7db04da8f5445329f1db3cfded4);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__17_dash_pattern(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_21ffc4587192eaa0cd52cd94feca7a5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_21ffc4587192eaa0cd52cd94feca7a5b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21ffc4587192eaa0cd52cd94feca7a5b)) {
        Py_XDECREF(cache_frame_21ffc4587192eaa0cd52cd94feca7a5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21ffc4587192eaa0cd52cd94feca7a5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21ffc4587192eaa0cd52cd94feca7a5b = MAKE_FUNCTION_FRAME(codeobj_21ffc4587192eaa0cd52cd94feca7a5b, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21ffc4587192eaa0cd52cd94feca7a5b->m_type_description == NULL);
    frame_21ffc4587192eaa0cd52cd94feca7a5b = cache_frame_21ffc4587192eaa0cd52cd94feca7a5b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21ffc4587192eaa0cd52cd94feca7a5b);
    assert(Py_REFCNT(frame_21ffc4587192eaa0cd52cd94feca7a5b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
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
        exception_tb = MAKE_TRACEBACK(frame_21ffc4587192eaa0cd52cd94feca7a5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21ffc4587192eaa0cd52cd94feca7a5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21ffc4587192eaa0cd52cd94feca7a5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21ffc4587192eaa0cd52cd94feca7a5b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_21ffc4587192eaa0cd52cd94feca7a5b == cache_frame_21ffc4587192eaa0cd52cd94feca7a5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21ffc4587192eaa0cd52cd94feca7a5b);
        cache_frame_21ffc4587192eaa0cd52cd94feca7a5b = NULL;
    }

    assertFrameObject(frame_21ffc4587192eaa0cd52cd94feca7a5b);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__18_dash_pattern(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_1da694f5379e8aa27d43d0e3ad37233f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1da694f5379e8aa27d43d0e3ad37233f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1da694f5379e8aa27d43d0e3ad37233f)) {
        Py_XDECREF(cache_frame_1da694f5379e8aa27d43d0e3ad37233f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1da694f5379e8aa27d43d0e3ad37233f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1da694f5379e8aa27d43d0e3ad37233f = MAKE_FUNCTION_FRAME(codeobj_1da694f5379e8aa27d43d0e3ad37233f, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1da694f5379e8aa27d43d0e3ad37233f->m_type_description == NULL);
    frame_1da694f5379e8aa27d43d0e3ad37233f = cache_frame_1da694f5379e8aa27d43d0e3ad37233f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1da694f5379e8aa27d43d0e3ad37233f);
    assert(Py_REFCNT(frame_1da694f5379e8aa27d43d0e3ad37233f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1da694f5379e8aa27d43d0e3ad37233f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1da694f5379e8aa27d43d0e3ad37233f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1da694f5379e8aa27d43d0e3ad37233f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1da694f5379e8aa27d43d0e3ad37233f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_1da694f5379e8aa27d43d0e3ad37233f == cache_frame_1da694f5379e8aa27d43d0e3ad37233f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1da694f5379e8aa27d43d0e3ad37233f);
        cache_frame_1da694f5379e8aa27d43d0e3ad37233f = NULL;
    }

    assertFrameObject(frame_1da694f5379e8aa27d43d0e3ad37233f);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__19_shadow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ce145a3b96449543ebdadcea13285f9b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ce145a3b96449543ebdadcea13285f9b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ce145a3b96449543ebdadcea13285f9b)) {
        Py_XDECREF(cache_frame_ce145a3b96449543ebdadcea13285f9b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce145a3b96449543ebdadcea13285f9b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce145a3b96449543ebdadcea13285f9b = MAKE_FUNCTION_FRAME(codeobj_ce145a3b96449543ebdadcea13285f9b, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ce145a3b96449543ebdadcea13285f9b->m_type_description == NULL);
    frame_ce145a3b96449543ebdadcea13285f9b = cache_frame_ce145a3b96449543ebdadcea13285f9b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ce145a3b96449543ebdadcea13285f9b);
    assert(Py_REFCNT(frame_ce145a3b96449543ebdadcea13285f9b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
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
        exception_tb = MAKE_TRACEBACK(frame_ce145a3b96449543ebdadcea13285f9b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce145a3b96449543ebdadcea13285f9b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce145a3b96449543ebdadcea13285f9b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce145a3b96449543ebdadcea13285f9b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ce145a3b96449543ebdadcea13285f9b == cache_frame_ce145a3b96449543ebdadcea13285f9b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ce145a3b96449543ebdadcea13285f9b);
        cache_frame_ce145a3b96449543ebdadcea13285f9b = NULL;
    }

    assertFrameObject(frame_ce145a3b96449543ebdadcea13285f9b);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__20_shadow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6d8f3bb780c8fe3eb3a2a76af4e10576;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6d8f3bb780c8fe3eb3a2a76af4e10576 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6d8f3bb780c8fe3eb3a2a76af4e10576)) {
        Py_XDECREF(cache_frame_6d8f3bb780c8fe3eb3a2a76af4e10576);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d8f3bb780c8fe3eb3a2a76af4e10576 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d8f3bb780c8fe3eb3a2a76af4e10576 = MAKE_FUNCTION_FRAME(codeobj_6d8f3bb780c8fe3eb3a2a76af4e10576, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6d8f3bb780c8fe3eb3a2a76af4e10576->m_type_description == NULL);
    frame_6d8f3bb780c8fe3eb3a2a76af4e10576 = cache_frame_6d8f3bb780c8fe3eb3a2a76af4e10576;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6d8f3bb780c8fe3eb3a2a76af4e10576);
    assert(Py_REFCNT(frame_6d8f3bb780c8fe3eb3a2a76af4e10576) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d8f3bb780c8fe3eb3a2a76af4e10576, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d8f3bb780c8fe3eb3a2a76af4e10576->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d8f3bb780c8fe3eb3a2a76af4e10576, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d8f3bb780c8fe3eb3a2a76af4e10576,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6d8f3bb780c8fe3eb3a2a76af4e10576 == cache_frame_6d8f3bb780c8fe3eb3a2a76af4e10576) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6d8f3bb780c8fe3eb3a2a76af4e10576);
        cache_frame_6d8f3bb780c8fe3eb3a2a76af4e10576 = NULL;
    }

    assertFrameObject(frame_6d8f3bb780c8fe3eb3a2a76af4e10576);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__21_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_28fd55de5ef589110bfaa4d97ad22e6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_28fd55de5ef589110bfaa4d97ad22e6a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_28fd55de5ef589110bfaa4d97ad22e6a)) {
        Py_XDECREF(cache_frame_28fd55de5ef589110bfaa4d97ad22e6a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28fd55de5ef589110bfaa4d97ad22e6a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28fd55de5ef589110bfaa4d97ad22e6a = MAKE_FUNCTION_FRAME(codeobj_28fd55de5ef589110bfaa4d97ad22e6a, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_28fd55de5ef589110bfaa4d97ad22e6a->m_type_description == NULL);
    frame_28fd55de5ef589110bfaa4d97ad22e6a = cache_frame_28fd55de5ef589110bfaa4d97ad22e6a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_28fd55de5ef589110bfaa4d97ad22e6a);
    assert(Py_REFCNT(frame_28fd55de5ef589110bfaa4d97ad22e6a) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
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
        exception_tb = MAKE_TRACEBACK(frame_28fd55de5ef589110bfaa4d97ad22e6a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28fd55de5ef589110bfaa4d97ad22e6a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28fd55de5ef589110bfaa4d97ad22e6a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28fd55de5ef589110bfaa4d97ad22e6a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_28fd55de5ef589110bfaa4d97ad22e6a == cache_frame_28fd55de5ef589110bfaa4d97ad22e6a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_28fd55de5ef589110bfaa4d97ad22e6a);
        cache_frame_28fd55de5ef589110bfaa4d97ad22e6a = NULL;
    }

    assertFrameObject(frame_28fd55de5ef589110bfaa4d97ad22e6a);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__22_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_db227a51423932ab5c1a2325c21adaed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_db227a51423932ab5c1a2325c21adaed = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_db227a51423932ab5c1a2325c21adaed)) {
        Py_XDECREF(cache_frame_db227a51423932ab5c1a2325c21adaed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db227a51423932ab5c1a2325c21adaed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db227a51423932ab5c1a2325c21adaed = MAKE_FUNCTION_FRAME(codeobj_db227a51423932ab5c1a2325c21adaed, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_db227a51423932ab5c1a2325c21adaed->m_type_description == NULL);
    frame_db227a51423932ab5c1a2325c21adaed = cache_frame_db227a51423932ab5c1a2325c21adaed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_db227a51423932ab5c1a2325c21adaed);
    assert(Py_REFCNT(frame_db227a51423932ab5c1a2325c21adaed) == 2);

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


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_db227a51423932ab5c1a2325c21adaed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db227a51423932ab5c1a2325c21adaed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db227a51423932ab5c1a2325c21adaed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db227a51423932ab5c1a2325c21adaed,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_db227a51423932ab5c1a2325c21adaed == cache_frame_db227a51423932ab5c1a2325c21adaed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_db227a51423932ab5c1a2325c21adaed);
        cache_frame_db227a51423932ab5c1a2325c21adaed = NULL;
    }

    assertFrameObject(frame_db227a51423932ab5c1a2325c21adaed);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__23_selected_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_58dd1b6900a7f319b9e20a37e20a8815;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_58dd1b6900a7f319b9e20a37e20a8815 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_58dd1b6900a7f319b9e20a37e20a8815)) {
        Py_XDECREF(cache_frame_58dd1b6900a7f319b9e20a37e20a8815);

#if _DEBUG_REFCOUNTS
        if (cache_frame_58dd1b6900a7f319b9e20a37e20a8815 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_58dd1b6900a7f319b9e20a37e20a8815 = MAKE_FUNCTION_FRAME(codeobj_58dd1b6900a7f319b9e20a37e20a8815, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_58dd1b6900a7f319b9e20a37e20a8815->m_type_description == NULL);
    frame_58dd1b6900a7f319b9e20a37e20a8815 = cache_frame_58dd1b6900a7f319b9e20a37e20a8815;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_58dd1b6900a7f319b9e20a37e20a8815);
    assert(Py_REFCNT(frame_58dd1b6900a7f319b9e20a37e20a8815) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_58dd1b6900a7f319b9e20a37e20a8815, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_58dd1b6900a7f319b9e20a37e20a8815->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_58dd1b6900a7f319b9e20a37e20a8815, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_58dd1b6900a7f319b9e20a37e20a8815,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_58dd1b6900a7f319b9e20a37e20a8815 == cache_frame_58dd1b6900a7f319b9e20a37e20a8815) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_58dd1b6900a7f319b9e20a37e20a8815);
        cache_frame_58dd1b6900a7f319b9e20a37e20a8815 = NULL;
    }

    assertFrameObject(frame_58dd1b6900a7f319b9e20a37e20a8815);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__24_selected_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f61ab04cb780a6bd86ddc5d037afa558;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f61ab04cb780a6bd86ddc5d037afa558 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f61ab04cb780a6bd86ddc5d037afa558)) {
        Py_XDECREF(cache_frame_f61ab04cb780a6bd86ddc5d037afa558);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f61ab04cb780a6bd86ddc5d037afa558 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f61ab04cb780a6bd86ddc5d037afa558 = MAKE_FUNCTION_FRAME(codeobj_f61ab04cb780a6bd86ddc5d037afa558, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f61ab04cb780a6bd86ddc5d037afa558->m_type_description == NULL);
    frame_f61ab04cb780a6bd86ddc5d037afa558 = cache_frame_f61ab04cb780a6bd86ddc5d037afa558;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f61ab04cb780a6bd86ddc5d037afa558);
    assert(Py_REFCNT(frame_f61ab04cb780a6bd86ddc5d037afa558) == 2);

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


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f61ab04cb780a6bd86ddc5d037afa558, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f61ab04cb780a6bd86ddc5d037afa558->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f61ab04cb780a6bd86ddc5d037afa558, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f61ab04cb780a6bd86ddc5d037afa558,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f61ab04cb780a6bd86ddc5d037afa558 == cache_frame_f61ab04cb780a6bd86ddc5d037afa558) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f61ab04cb780a6bd86ddc5d037afa558);
        cache_frame_f61ab04cb780a6bd86ddc5d037afa558 = NULL;
    }

    assertFrameObject(frame_f61ab04cb780a6bd86ddc5d037afa558);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__25_above_line_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_db213bfb10296d2a6a587f2cfc6ba4f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_db213bfb10296d2a6a587f2cfc6ba4f0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_db213bfb10296d2a6a587f2cfc6ba4f0)) {
        Py_XDECREF(cache_frame_db213bfb10296d2a6a587f2cfc6ba4f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db213bfb10296d2a6a587f2cfc6ba4f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db213bfb10296d2a6a587f2cfc6ba4f0 = MAKE_FUNCTION_FRAME(codeobj_db213bfb10296d2a6a587f2cfc6ba4f0, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_db213bfb10296d2a6a587f2cfc6ba4f0->m_type_description == NULL);
    frame_db213bfb10296d2a6a587f2cfc6ba4f0 = cache_frame_db213bfb10296d2a6a587f2cfc6ba4f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_db213bfb10296d2a6a587f2cfc6ba4f0);
    assert(Py_REFCNT(frame_db213bfb10296d2a6a587f2cfc6ba4f0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_db213bfb10296d2a6a587f2cfc6ba4f0->m_frame.f_lineno = 183;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[43],
            PyTuple_GET_ITEM(mod_consts[52], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
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
        exception_tb = MAKE_TRACEBACK(frame_db213bfb10296d2a6a587f2cfc6ba4f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db213bfb10296d2a6a587f2cfc6ba4f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db213bfb10296d2a6a587f2cfc6ba4f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db213bfb10296d2a6a587f2cfc6ba4f0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_db213bfb10296d2a6a587f2cfc6ba4f0 == cache_frame_db213bfb10296d2a6a587f2cfc6ba4f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_db213bfb10296d2a6a587f2cfc6ba4f0);
        cache_frame_db213bfb10296d2a6a587f2cfc6ba4f0 = NULL;
    }

    assertFrameObject(frame_db213bfb10296d2a6a587f2cfc6ba4f0);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__26_above_line_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6c721688db080eed99b62d97431affd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6c721688db080eed99b62d97431affd6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6c721688db080eed99b62d97431affd6)) {
        Py_XDECREF(cache_frame_6c721688db080eed99b62d97431affd6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c721688db080eed99b62d97431affd6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c721688db080eed99b62d97431affd6 = MAKE_FUNCTION_FRAME(codeobj_6c721688db080eed99b62d97431affd6, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c721688db080eed99b62d97431affd6->m_type_description == NULL);
    frame_6c721688db080eed99b62d97431affd6 = cache_frame_6c721688db080eed99b62d97431affd6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6c721688db080eed99b62d97431affd6);
    assert(Py_REFCNT(frame_6c721688db080eed99b62d97431affd6) == 2);

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
        frame_6c721688db080eed99b62d97431affd6->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
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
        exception_tb = MAKE_TRACEBACK(frame_6c721688db080eed99b62d97431affd6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c721688db080eed99b62d97431affd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c721688db080eed99b62d97431affd6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c721688db080eed99b62d97431affd6,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6c721688db080eed99b62d97431affd6 == cache_frame_6c721688db080eed99b62d97431affd6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c721688db080eed99b62d97431affd6);
        cache_frame_6c721688db080eed99b62d97431affd6 = NULL;
    }

    assertFrameObject(frame_6c721688db080eed99b62d97431affd6);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__27_above_line_gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_135393193e9f44497b4b36449a7190ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_135393193e9f44497b4b36449a7190ad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_135393193e9f44497b4b36449a7190ad)) {
        Py_XDECREF(cache_frame_135393193e9f44497b4b36449a7190ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_135393193e9f44497b4b36449a7190ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_135393193e9f44497b4b36449a7190ad = MAKE_FUNCTION_FRAME(codeobj_135393193e9f44497b4b36449a7190ad, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_135393193e9f44497b4b36449a7190ad->m_type_description == NULL);
    frame_135393193e9f44497b4b36449a7190ad = cache_frame_135393193e9f44497b4b36449a7190ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_135393193e9f44497b4b36449a7190ad);
    assert(Py_REFCNT(frame_135393193e9f44497b4b36449a7190ad) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
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
        exception_tb = MAKE_TRACEBACK(frame_135393193e9f44497b4b36449a7190ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_135393193e9f44497b4b36449a7190ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_135393193e9f44497b4b36449a7190ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_135393193e9f44497b4b36449a7190ad,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_135393193e9f44497b4b36449a7190ad == cache_frame_135393193e9f44497b4b36449a7190ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_135393193e9f44497b4b36449a7190ad);
        cache_frame_135393193e9f44497b4b36449a7190ad = NULL;
    }

    assertFrameObject(frame_135393193e9f44497b4b36449a7190ad);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__28_above_line_gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_dceac9e8245fc5893c7b4dbdc8e5c418;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dceac9e8245fc5893c7b4dbdc8e5c418 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dceac9e8245fc5893c7b4dbdc8e5c418)) {
        Py_XDECREF(cache_frame_dceac9e8245fc5893c7b4dbdc8e5c418);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dceac9e8245fc5893c7b4dbdc8e5c418 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dceac9e8245fc5893c7b4dbdc8e5c418 = MAKE_FUNCTION_FRAME(codeobj_dceac9e8245fc5893c7b4dbdc8e5c418, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dceac9e8245fc5893c7b4dbdc8e5c418->m_type_description == NULL);
    frame_dceac9e8245fc5893c7b4dbdc8e5c418 = cache_frame_dceac9e8245fc5893c7b4dbdc8e5c418;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dceac9e8245fc5893c7b4dbdc8e5c418);
    assert(Py_REFCNT(frame_dceac9e8245fc5893c7b4dbdc8e5c418) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[33], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dceac9e8245fc5893c7b4dbdc8e5c418, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dceac9e8245fc5893c7b4dbdc8e5c418->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dceac9e8245fc5893c7b4dbdc8e5c418, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dceac9e8245fc5893c7b4dbdc8e5c418,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_dceac9e8245fc5893c7b4dbdc8e5c418 == cache_frame_dceac9e8245fc5893c7b4dbdc8e5c418) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dceac9e8245fc5893c7b4dbdc8e5c418);
        cache_frame_dceac9e8245fc5893c7b4dbdc8e5c418 = NULL;
    }

    assertFrameObject(frame_dceac9e8245fc5893c7b4dbdc8e5c418);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__29_above_line_cutoff_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ccfaf703db00ac5cb780bfcc1f52e593;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ccfaf703db00ac5cb780bfcc1f52e593 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ccfaf703db00ac5cb780bfcc1f52e593)) {
        Py_XDECREF(cache_frame_ccfaf703db00ac5cb780bfcc1f52e593);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ccfaf703db00ac5cb780bfcc1f52e593 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ccfaf703db00ac5cb780bfcc1f52e593 = MAKE_FUNCTION_FRAME(codeobj_ccfaf703db00ac5cb780bfcc1f52e593, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ccfaf703db00ac5cb780bfcc1f52e593->m_type_description == NULL);
    frame_ccfaf703db00ac5cb780bfcc1f52e593 = cache_frame_ccfaf703db00ac5cb780bfcc1f52e593;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ccfaf703db00ac5cb780bfcc1f52e593);
    assert(Py_REFCNT(frame_ccfaf703db00ac5cb780bfcc1f52e593) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ccfaf703db00ac5cb780bfcc1f52e593->m_frame.f_lineno = 201;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[54], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
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
        exception_tb = MAKE_TRACEBACK(frame_ccfaf703db00ac5cb780bfcc1f52e593, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ccfaf703db00ac5cb780bfcc1f52e593->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ccfaf703db00ac5cb780bfcc1f52e593, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ccfaf703db00ac5cb780bfcc1f52e593,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ccfaf703db00ac5cb780bfcc1f52e593 == cache_frame_ccfaf703db00ac5cb780bfcc1f52e593) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ccfaf703db00ac5cb780bfcc1f52e593);
        cache_frame_ccfaf703db00ac5cb780bfcc1f52e593 = NULL;
    }

    assertFrameObject(frame_ccfaf703db00ac5cb780bfcc1f52e593);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__30_above_line_cutoff_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_cdccceb6d0f2548ab25237efaf2c833a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cdccceb6d0f2548ab25237efaf2c833a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cdccceb6d0f2548ab25237efaf2c833a)) {
        Py_XDECREF(cache_frame_cdccceb6d0f2548ab25237efaf2c833a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cdccceb6d0f2548ab25237efaf2c833a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cdccceb6d0f2548ab25237efaf2c833a = MAKE_FUNCTION_FRAME(codeobj_cdccceb6d0f2548ab25237efaf2c833a, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cdccceb6d0f2548ab25237efaf2c833a->m_type_description == NULL);
    frame_cdccceb6d0f2548ab25237efaf2c833a = cache_frame_cdccceb6d0f2548ab25237efaf2c833a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cdccceb6d0f2548ab25237efaf2c833a);
    assert(Py_REFCNT(frame_cdccceb6d0f2548ab25237efaf2c833a) == 2);

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
        frame_cdccceb6d0f2548ab25237efaf2c833a->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
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
        exception_tb = MAKE_TRACEBACK(frame_cdccceb6d0f2548ab25237efaf2c833a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cdccceb6d0f2548ab25237efaf2c833a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cdccceb6d0f2548ab25237efaf2c833a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cdccceb6d0f2548ab25237efaf2c833a,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_cdccceb6d0f2548ab25237efaf2c833a == cache_frame_cdccceb6d0f2548ab25237efaf2c833a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cdccceb6d0f2548ab25237efaf2c833a);
        cache_frame_cdccceb6d0f2548ab25237efaf2c833a = NULL;
    }

    assertFrameObject(frame_cdccceb6d0f2548ab25237efaf2c833a);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__31_above_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_be0fb7a41cb224fa27871a4d772b6c59;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be0fb7a41cb224fa27871a4d772b6c59 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_be0fb7a41cb224fa27871a4d772b6c59)) {
        Py_XDECREF(cache_frame_be0fb7a41cb224fa27871a4d772b6c59);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be0fb7a41cb224fa27871a4d772b6c59 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be0fb7a41cb224fa27871a4d772b6c59 = MAKE_FUNCTION_FRAME(codeobj_be0fb7a41cb224fa27871a4d772b6c59, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be0fb7a41cb224fa27871a4d772b6c59->m_type_description == NULL);
    frame_be0fb7a41cb224fa27871a4d772b6c59 = cache_frame_be0fb7a41cb224fa27871a4d772b6c59;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be0fb7a41cb224fa27871a4d772b6c59);
    assert(Py_REFCNT(frame_be0fb7a41cb224fa27871a4d772b6c59) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
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
        exception_tb = MAKE_TRACEBACK(frame_be0fb7a41cb224fa27871a4d772b6c59, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be0fb7a41cb224fa27871a4d772b6c59->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be0fb7a41cb224fa27871a4d772b6c59, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be0fb7a41cb224fa27871a4d772b6c59,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_be0fb7a41cb224fa27871a4d772b6c59 == cache_frame_be0fb7a41cb224fa27871a4d772b6c59) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be0fb7a41cb224fa27871a4d772b6c59);
        cache_frame_be0fb7a41cb224fa27871a4d772b6c59 = NULL;
    }

    assertFrameObject(frame_be0fb7a41cb224fa27871a4d772b6c59);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__32_above_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_67a63f7a5a674f3c53d33f5a353b473b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_67a63f7a5a674f3c53d33f5a353b473b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_67a63f7a5a674f3c53d33f5a353b473b)) {
        Py_XDECREF(cache_frame_67a63f7a5a674f3c53d33f5a353b473b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_67a63f7a5a674f3c53d33f5a353b473b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_67a63f7a5a674f3c53d33f5a353b473b = MAKE_FUNCTION_FRAME(codeobj_67a63f7a5a674f3c53d33f5a353b473b, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_67a63f7a5a674f3c53d33f5a353b473b->m_type_description == NULL);
    frame_67a63f7a5a674f3c53d33f5a353b473b = cache_frame_67a63f7a5a674f3c53d33f5a353b473b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_67a63f7a5a674f3c53d33f5a353b473b);
    assert(Py_REFCNT(frame_67a63f7a5a674f3c53d33f5a353b473b) == 2);

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


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_67a63f7a5a674f3c53d33f5a353b473b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_67a63f7a5a674f3c53d33f5a353b473b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_67a63f7a5a674f3c53d33f5a353b473b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_67a63f7a5a674f3c53d33f5a353b473b,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_67a63f7a5a674f3c53d33f5a353b473b == cache_frame_67a63f7a5a674f3c53d33f5a353b473b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_67a63f7a5a674f3c53d33f5a353b473b);
        cache_frame_67a63f7a5a674f3c53d33f5a353b473b = NULL;
    }

    assertFrameObject(frame_67a63f7a5a674f3c53d33f5a353b473b);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__33_below_line_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c161ab30bda28144c6bd33163a6648a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c161ab30bda28144c6bd33163a6648a8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c161ab30bda28144c6bd33163a6648a8)) {
        Py_XDECREF(cache_frame_c161ab30bda28144c6bd33163a6648a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c161ab30bda28144c6bd33163a6648a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c161ab30bda28144c6bd33163a6648a8 = MAKE_FUNCTION_FRAME(codeobj_c161ab30bda28144c6bd33163a6648a8, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c161ab30bda28144c6bd33163a6648a8->m_type_description == NULL);
    frame_c161ab30bda28144c6bd33163a6648a8 = cache_frame_c161ab30bda28144c6bd33163a6648a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c161ab30bda28144c6bd33163a6648a8);
    assert(Py_REFCNT(frame_c161ab30bda28144c6bd33163a6648a8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_c161ab30bda28144c6bd33163a6648a8->m_frame.f_lineno = 219;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[43],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
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
        exception_tb = MAKE_TRACEBACK(frame_c161ab30bda28144c6bd33163a6648a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c161ab30bda28144c6bd33163a6648a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c161ab30bda28144c6bd33163a6648a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c161ab30bda28144c6bd33163a6648a8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c161ab30bda28144c6bd33163a6648a8 == cache_frame_c161ab30bda28144c6bd33163a6648a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c161ab30bda28144c6bd33163a6648a8);
        cache_frame_c161ab30bda28144c6bd33163a6648a8 = NULL;
    }

    assertFrameObject(frame_c161ab30bda28144c6bd33163a6648a8);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__34_below_line_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ea282f5703d71d4fa928590a9b45bd99;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ea282f5703d71d4fa928590a9b45bd99 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ea282f5703d71d4fa928590a9b45bd99)) {
        Py_XDECREF(cache_frame_ea282f5703d71d4fa928590a9b45bd99);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea282f5703d71d4fa928590a9b45bd99 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea282f5703d71d4fa928590a9b45bd99 = MAKE_FUNCTION_FRAME(codeobj_ea282f5703d71d4fa928590a9b45bd99, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea282f5703d71d4fa928590a9b45bd99->m_type_description == NULL);
    frame_ea282f5703d71d4fa928590a9b45bd99 = cache_frame_ea282f5703d71d4fa928590a9b45bd99;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ea282f5703d71d4fa928590a9b45bd99);
    assert(Py_REFCNT(frame_ea282f5703d71d4fa928590a9b45bd99) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[58];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_ea282f5703d71d4fa928590a9b45bd99->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
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
        exception_tb = MAKE_TRACEBACK(frame_ea282f5703d71d4fa928590a9b45bd99, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea282f5703d71d4fa928590a9b45bd99->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea282f5703d71d4fa928590a9b45bd99, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea282f5703d71d4fa928590a9b45bd99,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ea282f5703d71d4fa928590a9b45bd99 == cache_frame_ea282f5703d71d4fa928590a9b45bd99) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea282f5703d71d4fa928590a9b45bd99);
        cache_frame_ea282f5703d71d4fa928590a9b45bd99 = NULL;
    }

    assertFrameObject(frame_ea282f5703d71d4fa928590a9b45bd99);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__35_below_line_gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f567253af3cf3570cbcf31f4addfe9d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f567253af3cf3570cbcf31f4addfe9d0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f567253af3cf3570cbcf31f4addfe9d0)) {
        Py_XDECREF(cache_frame_f567253af3cf3570cbcf31f4addfe9d0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f567253af3cf3570cbcf31f4addfe9d0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f567253af3cf3570cbcf31f4addfe9d0 = MAKE_FUNCTION_FRAME(codeobj_f567253af3cf3570cbcf31f4addfe9d0, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f567253af3cf3570cbcf31f4addfe9d0->m_type_description == NULL);
    frame_f567253af3cf3570cbcf31f4addfe9d0 = cache_frame_f567253af3cf3570cbcf31f4addfe9d0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f567253af3cf3570cbcf31f4addfe9d0);
    assert(Py_REFCNT(frame_f567253af3cf3570cbcf31f4addfe9d0) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
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
        exception_tb = MAKE_TRACEBACK(frame_f567253af3cf3570cbcf31f4addfe9d0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f567253af3cf3570cbcf31f4addfe9d0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f567253af3cf3570cbcf31f4addfe9d0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f567253af3cf3570cbcf31f4addfe9d0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f567253af3cf3570cbcf31f4addfe9d0 == cache_frame_f567253af3cf3570cbcf31f4addfe9d0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f567253af3cf3570cbcf31f4addfe9d0);
        cache_frame_f567253af3cf3570cbcf31f4addfe9d0 = NULL;
    }

    assertFrameObject(frame_f567253af3cf3570cbcf31f4addfe9d0);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__36_below_line_gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_fc61de8832201598a8c55c0c5d9f2116;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc61de8832201598a8c55c0c5d9f2116 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc61de8832201598a8c55c0c5d9f2116)) {
        Py_XDECREF(cache_frame_fc61de8832201598a8c55c0c5d9f2116);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc61de8832201598a8c55c0c5d9f2116 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc61de8832201598a8c55c0c5d9f2116 = MAKE_FUNCTION_FRAME(codeobj_fc61de8832201598a8c55c0c5d9f2116, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc61de8832201598a8c55c0c5d9f2116->m_type_description == NULL);
    frame_fc61de8832201598a8c55c0c5d9f2116 = cache_frame_fc61de8832201598a8c55c0c5d9f2116;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fc61de8832201598a8c55c0c5d9f2116);
    assert(Py_REFCNT(frame_fc61de8832201598a8c55c0c5d9f2116) == 2);

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


            exception_lineno = 232;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc61de8832201598a8c55c0c5d9f2116, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc61de8832201598a8c55c0c5d9f2116->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc61de8832201598a8c55c0c5d9f2116, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc61de8832201598a8c55c0c5d9f2116,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_fc61de8832201598a8c55c0c5d9f2116 == cache_frame_fc61de8832201598a8c55c0c5d9f2116) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc61de8832201598a8c55c0c5d9f2116);
        cache_frame_fc61de8832201598a8c55c0c5d9f2116 = NULL;
    }

    assertFrameObject(frame_fc61de8832201598a8c55c0c5d9f2116);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__37_below_line_cutoff_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d94e6f179e0198aa1f5c02df200d436b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d94e6f179e0198aa1f5c02df200d436b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d94e6f179e0198aa1f5c02df200d436b)) {
        Py_XDECREF(cache_frame_d94e6f179e0198aa1f5c02df200d436b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d94e6f179e0198aa1f5c02df200d436b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d94e6f179e0198aa1f5c02df200d436b = MAKE_FUNCTION_FRAME(codeobj_d94e6f179e0198aa1f5c02df200d436b, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d94e6f179e0198aa1f5c02df200d436b->m_type_description == NULL);
    frame_d94e6f179e0198aa1f5c02df200d436b = cache_frame_d94e6f179e0198aa1f5c02df200d436b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d94e6f179e0198aa1f5c02df200d436b);
    assert(Py_REFCNT(frame_d94e6f179e0198aa1f5c02df200d436b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d94e6f179e0198aa1f5c02df200d436b->m_frame.f_lineno = 237;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[55]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
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
        exception_tb = MAKE_TRACEBACK(frame_d94e6f179e0198aa1f5c02df200d436b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d94e6f179e0198aa1f5c02df200d436b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d94e6f179e0198aa1f5c02df200d436b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d94e6f179e0198aa1f5c02df200d436b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d94e6f179e0198aa1f5c02df200d436b == cache_frame_d94e6f179e0198aa1f5c02df200d436b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d94e6f179e0198aa1f5c02df200d436b);
        cache_frame_d94e6f179e0198aa1f5c02df200d436b = NULL;
    }

    assertFrameObject(frame_d94e6f179e0198aa1f5c02df200d436b);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__38_below_line_cutoff_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_79ec31e8a345e234293c1dfc1dd062f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_79ec31e8a345e234293c1dfc1dd062f7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_79ec31e8a345e234293c1dfc1dd062f7)) {
        Py_XDECREF(cache_frame_79ec31e8a345e234293c1dfc1dd062f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79ec31e8a345e234293c1dfc1dd062f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79ec31e8a345e234293c1dfc1dd062f7 = MAKE_FUNCTION_FRAME(codeobj_79ec31e8a345e234293c1dfc1dd062f7, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_79ec31e8a345e234293c1dfc1dd062f7->m_type_description == NULL);
    frame_79ec31e8a345e234293c1dfc1dd062f7 = cache_frame_79ec31e8a345e234293c1dfc1dd062f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_79ec31e8a345e234293c1dfc1dd062f7);
    assert(Py_REFCNT(frame_79ec31e8a345e234293c1dfc1dd062f7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[60];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_79ec31e8a345e234293c1dfc1dd062f7->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[46],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
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
        exception_tb = MAKE_TRACEBACK(frame_79ec31e8a345e234293c1dfc1dd062f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79ec31e8a345e234293c1dfc1dd062f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79ec31e8a345e234293c1dfc1dd062f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79ec31e8a345e234293c1dfc1dd062f7,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_79ec31e8a345e234293c1dfc1dd062f7 == cache_frame_79ec31e8a345e234293c1dfc1dd062f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_79ec31e8a345e234293c1dfc1dd062f7);
        cache_frame_79ec31e8a345e234293c1dfc1dd062f7 = NULL;
    }

    assertFrameObject(frame_79ec31e8a345e234293c1dfc1dd062f7);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__39_below_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_665df66bfe60f9b5013c90e5a33a045b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_665df66bfe60f9b5013c90e5a33a045b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_665df66bfe60f9b5013c90e5a33a045b)) {
        Py_XDECREF(cache_frame_665df66bfe60f9b5013c90e5a33a045b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_665df66bfe60f9b5013c90e5a33a045b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_665df66bfe60f9b5013c90e5a33a045b = MAKE_FUNCTION_FRAME(codeobj_665df66bfe60f9b5013c90e5a33a045b, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_665df66bfe60f9b5013c90e5a33a045b->m_type_description == NULL);
    frame_665df66bfe60f9b5013c90e5a33a045b = cache_frame_665df66bfe60f9b5013c90e5a33a045b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_665df66bfe60f9b5013c90e5a33a045b);
    assert(Py_REFCNT(frame_665df66bfe60f9b5013c90e5a33a045b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
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
        exception_tb = MAKE_TRACEBACK(frame_665df66bfe60f9b5013c90e5a33a045b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_665df66bfe60f9b5013c90e5a33a045b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_665df66bfe60f9b5013c90e5a33a045b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_665df66bfe60f9b5013c90e5a33a045b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_665df66bfe60f9b5013c90e5a33a045b == cache_frame_665df66bfe60f9b5013c90e5a33a045b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_665df66bfe60f9b5013c90e5a33a045b);
        cache_frame_665df66bfe60f9b5013c90e5a33a045b = NULL;
    }

    assertFrameObject(frame_665df66bfe60f9b5013c90e5a33a045b);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__40_below_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_5b1d54baa3c2d9016a30c6405139d90c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5b1d54baa3c2d9016a30c6405139d90c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5b1d54baa3c2d9016a30c6405139d90c)) {
        Py_XDECREF(cache_frame_5b1d54baa3c2d9016a30c6405139d90c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b1d54baa3c2d9016a30c6405139d90c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b1d54baa3c2d9016a30c6405139d90c = MAKE_FUNCTION_FRAME(codeobj_5b1d54baa3c2d9016a30c6405139d90c, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b1d54baa3c2d9016a30c6405139d90c->m_type_description == NULL);
    frame_5b1d54baa3c2d9016a30c6405139d90c = cache_frame_5b1d54baa3c2d9016a30c6405139d90c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5b1d54baa3c2d9016a30c6405139d90c);
    assert(Py_REFCNT(frame_5b1d54baa3c2d9016a30c6405139d90c) == 2);

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


            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b1d54baa3c2d9016a30c6405139d90c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b1d54baa3c2d9016a30c6405139d90c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b1d54baa3c2d9016a30c6405139d90c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b1d54baa3c2d9016a30c6405139d90c,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_5b1d54baa3c2d9016a30c6405139d90c == cache_frame_5b1d54baa3c2d9016a30c6405139d90c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b1d54baa3c2d9016a30c6405139d90c);
        cache_frame_5b1d54baa3c2d9016a30c6405139d90c = NULL;
    }

    assertFrameObject(frame_5b1d54baa3c2d9016a30c6405139d90c);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__41_selected_below_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_48ef4ea2e744bc07a8cdc04fb900222b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_48ef4ea2e744bc07a8cdc04fb900222b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_48ef4ea2e744bc07a8cdc04fb900222b)) {
        Py_XDECREF(cache_frame_48ef4ea2e744bc07a8cdc04fb900222b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_48ef4ea2e744bc07a8cdc04fb900222b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_48ef4ea2e744bc07a8cdc04fb900222b = MAKE_FUNCTION_FRAME(codeobj_48ef4ea2e744bc07a8cdc04fb900222b, module_flet_core$charts$line_chart_data, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_48ef4ea2e744bc07a8cdc04fb900222b->m_type_description == NULL);
    frame_48ef4ea2e744bc07a8cdc04fb900222b = cache_frame_48ef4ea2e744bc07a8cdc04fb900222b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_48ef4ea2e744bc07a8cdc04fb900222b);
    assert(Py_REFCNT(frame_48ef4ea2e744bc07a8cdc04fb900222b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
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
        exception_tb = MAKE_TRACEBACK(frame_48ef4ea2e744bc07a8cdc04fb900222b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48ef4ea2e744bc07a8cdc04fb900222b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48ef4ea2e744bc07a8cdc04fb900222b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_48ef4ea2e744bc07a8cdc04fb900222b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_48ef4ea2e744bc07a8cdc04fb900222b == cache_frame_48ef4ea2e744bc07a8cdc04fb900222b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_48ef4ea2e744bc07a8cdc04fb900222b);
        cache_frame_48ef4ea2e744bc07a8cdc04fb900222b = NULL;
    }

    assertFrameObject(frame_48ef4ea2e744bc07a8cdc04fb900222b);

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


static PyObject *impl_flet_core$charts$line_chart_data$$$function__42_selected_below_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ef715ded065c515e2891a35cbc7ed8a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef715ded065c515e2891a35cbc7ed8a1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ef715ded065c515e2891a35cbc7ed8a1)) {
        Py_XDECREF(cache_frame_ef715ded065c515e2891a35cbc7ed8a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef715ded065c515e2891a35cbc7ed8a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef715ded065c515e2891a35cbc7ed8a1 = MAKE_FUNCTION_FRAME(codeobj_ef715ded065c515e2891a35cbc7ed8a1, module_flet_core$charts$line_chart_data, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef715ded065c515e2891a35cbc7ed8a1->m_type_description == NULL);
    frame_ef715ded065c515e2891a35cbc7ed8a1 = cache_frame_ef715ded065c515e2891a35cbc7ed8a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ef715ded065c515e2891a35cbc7ed8a1);
    assert(Py_REFCNT(frame_ef715ded065c515e2891a35cbc7ed8a1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[41], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef715ded065c515e2891a35cbc7ed8a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef715ded065c515e2891a35cbc7ed8a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef715ded065c515e2891a35cbc7ed8a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef715ded065c515e2891a35cbc7ed8a1,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ef715ded065c515e2891a35cbc7ed8a1 == cache_frame_ef715ded065c515e2891a35cbc7ed8a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef715ded065c515e2891a35cbc7ed8a1);
        cache_frame_ef715ded065c515e2891a35cbc7ed8a1 = NULL;
    }

    assertFrameObject(frame_ef715ded065c515e2891a35cbc7ed8a1);

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



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__10_curved(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__10_curved,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_414983331721fa6a70b062c4a08b6d85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__11_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__11_color,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_3e7a271e4581243550b5fe052b1e89f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__12_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__12_color,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_b749468102a28f0837239fac755b4425,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__13_gradient(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__13_gradient,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_b0b15a24f83759e6414106bdd164eae8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__14_gradient(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__14_gradient,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_a06ed3846154dad5a58b4ca9742f9d3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__15_stroke_cap_round(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__15_stroke_cap_round,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_c696f88757177f53ea2f6f69e1d7dc91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__16_stroke_cap_round(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__16_stroke_cap_round,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_6756e7db04da8f5445329f1db3cfded4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__17_dash_pattern() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__17_dash_pattern,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_21ffc4587192eaa0cd52cd94feca7a5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__18_dash_pattern(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__18_dash_pattern,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_1da694f5379e8aa27d43d0e3ad37233f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__19_shadow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__19_shadow,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_ce145a3b96449543ebdadcea13285f9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_1811d78554fb28f8b7b22542ae4fe4a5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__20_shadow(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__20_shadow,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_6d8f3bb780c8fe3eb3a2a76af4e10576,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__21_point() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__21_point,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_28fd55de5ef589110bfaa4d97ad22e6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__22_point(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__22_point,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_db227a51423932ab5c1a2325c21adaed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__23_selected_point() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__23_selected_point,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_58dd1b6900a7f319b9e20a37e20a8815,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__24_selected_point(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__24_selected_point,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_f61ab04cb780a6bd86ddc5d037afa558,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__25_above_line_bgcolor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__25_above_line_bgcolor,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_db213bfb10296d2a6a587f2cfc6ba4f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__26_above_line_bgcolor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__26_above_line_bgcolor,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_6c721688db080eed99b62d97431affd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__27_above_line_gradient(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__27_above_line_gradient,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_135393193e9f44497b4b36449a7190ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__28_above_line_gradient(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__28_above_line_gradient,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_dceac9e8245fc5893c7b4dbdc8e5c418,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__29_above_line_cutoff_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__29_above_line_cutoff_y,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_ccfaf703db00ac5cb780bfcc1f52e593,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_4a3261cc85091dbdd78843d3acf0dd60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[108]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__30_above_line_cutoff_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__30_above_line_cutoff_y,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_cdccceb6d0f2548ab25237efaf2c833a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__31_above_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__31_above_line,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_be0fb7a41cb224fa27871a4d772b6c59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__32_above_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__32_above_line,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_67a63f7a5a674f3c53d33f5a353b473b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__33_below_line_bgcolor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__33_below_line_bgcolor,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_c161ab30bda28144c6bd33163a6648a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__34_below_line_bgcolor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__34_below_line_bgcolor,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_ea282f5703d71d4fa928590a9b45bd99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__35_below_line_gradient(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__35_below_line_gradient,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_f567253af3cf3570cbcf31f4addfe9d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__36_below_line_gradient(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__36_below_line_gradient,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_fc61de8832201598a8c55c0c5d9f2116,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__37_below_line_cutoff_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__37_below_line_cutoff_y,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_d94e6f179e0198aa1f5c02df200d436b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__38_below_line_cutoff_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__38_below_line_cutoff_y,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_79ec31e8a345e234293c1dfc1dd062f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__39_below_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__39_below_line,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_665df66bfe60f9b5013c90e5a33a045b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__3__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__3__before_build_command,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_06b71866344d09d0bf49862b11a87983,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__40_below_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__40_below_line,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_5b1d54baa3c2d9016a30c6405139d90c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__41_selected_below_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__41_selected_below_line,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_48ef4ea2e744bc07a8cdc04fb900222b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__42_selected_below_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__42_selected_below_line,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_ef715ded065c515e2891a35cbc7ed8a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__4__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__4__get_children,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_5ecd0d21c64934cc34b7350f375f0a11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__5_data_points() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__5_data_points,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_5e87828296183b5c36e65eb9aed06f63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__6_data_points() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__6_data_points,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_bbe0148a3ac43066493426a04af103ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__7_stroke_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__7_stroke_width,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_6337d17b8393e5f42e66d401d580d399,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__8_stroke_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__8_stroke_width,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_27e8943a284b450521fbb6540b680a44,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__9_curved(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data$$$function__9_curved,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_0bcd1f5452897415d3e13d41fc719323,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data,
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

function_impl_code functable_flet_core$charts$line_chart_data[] = {
    impl_flet_core$charts$line_chart_data$$$function__1___init__,
    NULL,
    impl_flet_core$charts$line_chart_data$$$function__3__before_build_command,
    impl_flet_core$charts$line_chart_data$$$function__4__get_children,
    impl_flet_core$charts$line_chart_data$$$function__5_data_points,
    impl_flet_core$charts$line_chart_data$$$function__6_data_points,
    impl_flet_core$charts$line_chart_data$$$function__7_stroke_width,
    impl_flet_core$charts$line_chart_data$$$function__8_stroke_width,
    impl_flet_core$charts$line_chart_data$$$function__9_curved,
    impl_flet_core$charts$line_chart_data$$$function__10_curved,
    impl_flet_core$charts$line_chart_data$$$function__11_color,
    impl_flet_core$charts$line_chart_data$$$function__12_color,
    impl_flet_core$charts$line_chart_data$$$function__13_gradient,
    impl_flet_core$charts$line_chart_data$$$function__14_gradient,
    impl_flet_core$charts$line_chart_data$$$function__15_stroke_cap_round,
    impl_flet_core$charts$line_chart_data$$$function__16_stroke_cap_round,
    impl_flet_core$charts$line_chart_data$$$function__17_dash_pattern,
    impl_flet_core$charts$line_chart_data$$$function__18_dash_pattern,
    impl_flet_core$charts$line_chart_data$$$function__19_shadow,
    impl_flet_core$charts$line_chart_data$$$function__20_shadow,
    impl_flet_core$charts$line_chart_data$$$function__21_point,
    impl_flet_core$charts$line_chart_data$$$function__22_point,
    impl_flet_core$charts$line_chart_data$$$function__23_selected_point,
    impl_flet_core$charts$line_chart_data$$$function__24_selected_point,
    impl_flet_core$charts$line_chart_data$$$function__25_above_line_bgcolor,
    impl_flet_core$charts$line_chart_data$$$function__26_above_line_bgcolor,
    impl_flet_core$charts$line_chart_data$$$function__27_above_line_gradient,
    impl_flet_core$charts$line_chart_data$$$function__28_above_line_gradient,
    impl_flet_core$charts$line_chart_data$$$function__29_above_line_cutoff_y,
    impl_flet_core$charts$line_chart_data$$$function__30_above_line_cutoff_y,
    impl_flet_core$charts$line_chart_data$$$function__31_above_line,
    impl_flet_core$charts$line_chart_data$$$function__32_above_line,
    impl_flet_core$charts$line_chart_data$$$function__33_below_line_bgcolor,
    impl_flet_core$charts$line_chart_data$$$function__34_below_line_bgcolor,
    impl_flet_core$charts$line_chart_data$$$function__35_below_line_gradient,
    impl_flet_core$charts$line_chart_data$$$function__36_below_line_gradient,
    impl_flet_core$charts$line_chart_data$$$function__37_below_line_cutoff_y,
    impl_flet_core$charts$line_chart_data$$$function__38_below_line_cutoff_y,
    impl_flet_core$charts$line_chart_data$$$function__39_below_line,
    impl_flet_core$charts$line_chart_data$$$function__40_below_line,
    impl_flet_core$charts$line_chart_data$$$function__41_selected_below_line,
    impl_flet_core$charts$line_chart_data$$$function__42_selected_below_line,
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

    function_impl_code *current = functable_flet_core$charts$line_chart_data;
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

    if (offset > sizeof(functable_flet_core$charts$line_chart_data) || offset < 0) {
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
        functable_flet_core$charts$line_chart_data[offset],
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
        module_flet_core$charts$line_chart_data,
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
PyObject *modulecode_flet_core$charts$line_chart_data(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.charts.line_chart_data");

    // Store the module for future use.
    module_flet_core$charts$line_chart_data = module;

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
        PRINT_STRING("flet_core.charts.line_chart_data: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.charts.line_chart_data: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.charts.line_chart_data: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$charts$line_chart_data\n");

    moduledict_flet_core$charts$line_chart_data = MODULE_DICT(module_flet_core$charts$line_chart_data);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$charts$line_chart_data,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$charts$line_chart_data,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[147]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$charts$line_chart_data,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$charts$line_chart_data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$charts$line_chart_data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$charts$line_chart_data);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$charts$line_chart_data);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_17e5491542bcc9101c2829a32e5ab835;
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
    PyObject *locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_70e14b9738a806133ed5e66936aabe15_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_2);
    }
    frame_17e5491542bcc9101c2829a32e5ab835 = MAKE_MODULE_FRAME(codeobj_17e5491542bcc9101c2829a32e5ab835, module_flet_core$charts$line_chart_data);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_17e5491542bcc9101c2829a32e5ab835);
    assert(Py_REFCNT(frame_17e5491542bcc9101c2829a32e5ab835) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[62];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[65], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[66], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_3);
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
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[68],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[68]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[70],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[70]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[71],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[71]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[72],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[72]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_8);
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
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[73];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$charts$line_chart_data;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[74];
        tmp_level_value_1 = mod_consts[69];
        frame_17e5491542bcc9101c2829a32e5ab835->m_frame.f_lineno = 3;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[75],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[75]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[76];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$charts$line_chart_data;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[77];
        tmp_level_value_2 = mod_consts[69];
        frame_17e5491542bcc9101c2829a32e5ab835->m_frame.f_lineno = 4;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[78],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[78]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[79];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$charts$line_chart_data;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[80];
        tmp_level_value_3 = mod_consts[69];
        frame_17e5491542bcc9101c2829a32e5ab835->m_frame.f_lineno = 5;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[81],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[81]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[82];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$charts$line_chart_data;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[83];
        tmp_level_value_4 = mod_consts[69];
        frame_17e5491542bcc9101c2829a32e5ab835->m_frame.f_lineno = 6;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[0],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[0]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[84],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[84]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[85];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$charts$line_chart_data;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[86];
        tmp_level_value_5 = mod_consts[69];
        frame_17e5491542bcc9101c2829a32e5ab835->m_frame.f_lineno = 7;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[87],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[88];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$charts$line_chart_data;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[89];
        tmp_level_value_6 = mod_consts[69];
        frame_17e5491542bcc9101c2829a32e5ab835->m_frame.f_lineno = 8;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[90],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[91];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core$charts$line_chart_data;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[92];
        tmp_level_value_7 = mod_consts[69];
        frame_17e5491542bcc9101c2829a32e5ab835->m_frame.f_lineno = 9;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$charts$line_chart_data,
                mod_consts[93],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[93]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_assign_source_18 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_19 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
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
        tmp_subscript_value_1 = mod_consts[69];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_21 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[94]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[94]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[95];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_17e5491542bcc9101c2829a32e5ab835->m_frame.f_lineno = 12;
        tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[96]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

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
        tmp_mod_expr_left_1 = mod_consts[97];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[98];
        tmp_getattr_default_1 = mod_consts[99];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[98]);
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
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 12;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[101], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[102], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        frame_70e14b9738a806133ed5e66936aabe15_2 = MAKE_CLASS_FRAME(codeobj_70e14b9738a806133ed5e66936aabe15, module_flet_core$charts$line_chart_data, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_70e14b9738a806133ed5e66936aabe15_2);
        assert(Py_REFCNT(frame_70e14b9738a806133ed5e66936aabe15_2) == 2);

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
            tmp_defaults_1 = mod_consts[103];
            tmp_dict_key_1 = mod_consts[3];
            tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 15;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[70]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_6);

                        exception_lineno = 15;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[81]);

            if (tmp_subscript_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_subscript_value_3 == NULL)) {
                        tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                    }

                    if (tmp_subscript_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_6);
                        Py_DECREF(tmp_expression_value_7);

                        exception_lineno = 15;
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

                exception_lineno = 15;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_6);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 23 );
            {
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_5;
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
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_tuple_element_6;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[104];
                tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 16;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[90]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[90]);

                        if (unlikely(tmp_subscript_value_4 == NULL)) {
                            tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
                        }

                        if (tmp_subscript_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_8);

                            exception_lineno = 16;
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


                    exception_lineno = 16;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[105];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 17;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

                if (tmp_subscript_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_5 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_5);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_9);
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
                tmp_dict_key_1 = mod_consts[107];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 18;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 18;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[108];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[68]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
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
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 23;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 23;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[5];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 24;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 24;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[6];
                tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 25;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                        if (unlikely(tmp_subscript_value_9 == NULL)) {
                            tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                        }

                        if (tmp_subscript_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_13);

                            exception_lineno = 25;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 25;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 26;
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
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 27;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

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


                    exception_lineno = 27;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[10];
                tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 28;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[70]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_15);

                            exception_lineno = 28;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[110]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_subscript_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_15);

                    exception_lineno = 28;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 29;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[93]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[93]);

                        if (unlikely(tmp_subscript_value_13 == NULL)) {
                            tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
                        }

                        if (tmp_subscript_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_17);

                            exception_lineno = 29;
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


                    exception_lineno = 29;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[11];
                tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 30;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

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


                    exception_lineno = 30;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[12];
                tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 31;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                        if (unlikely(tmp_subscript_value_15 == NULL)) {
                            tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                        }

                        if (tmp_subscript_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_19);

                            exception_lineno = 31;
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


                    exception_lineno = 31;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[13];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
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
                tmp_dict_key_1 = mod_consts[14];
                tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 33;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

                if (tmp_subscript_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                        if (unlikely(tmp_subscript_value_16 == NULL)) {
                            tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                        }

                        if (tmp_subscript_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_20);

                            exception_lineno = 33;
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


                    exception_lineno = 33;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[15];
                tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 34;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[16];
                tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                        if (unlikely(tmp_subscript_value_18 == NULL)) {
                            tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                        }

                        if (tmp_subscript_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_22);

                            exception_lineno = 35;
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


                    exception_lineno = 35;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[17];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
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
                tmp_dict_key_1 = mod_consts[18];
                tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 37;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                        if (unlikely(tmp_subscript_value_19 == NULL)) {
                            tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                        }

                        if (tmp_subscript_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_23);

                            exception_lineno = 37;
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


                    exception_lineno = 37;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[19];
                tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[72]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[72]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_4 = Py_None;
                tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_20, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                        if (unlikely(tmp_tuple_element_4 == NULL)) {
                            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                        }

                        if (tmp_tuple_element_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_20, 2, tmp_tuple_element_4);
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_2:;
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_20);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[20];
                tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[72]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[72]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 39;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_5 = Py_None;
                tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_21, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_21, 1, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[78]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[78]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 39;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_21, 2, tmp_tuple_element_5);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_21);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[21];
                tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[72]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[72]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 40;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_6 = Py_None;
                tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_22, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[78]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[78]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 40;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_22, 2, tmp_tuple_element_6);
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_22);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[112], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__3__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__4__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[115], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
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
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__5_data_points();

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 91;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__5_data_points();

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 91;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[3]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__6_data_points();

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 95;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[119], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
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
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
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
            tmp_called_value_4 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 100;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[120];
            tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_dict_value_2 == NULL)) {
                        tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_dict_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 101;
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


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__7_stroke_width(tmp_annotations_2);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 100;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[120];
            tmp_dict_value_3 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 101;
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


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__7_stroke_width(tmp_annotations_3);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 100;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[7]);

            if (unlikely(tmp_expression_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[119]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[122];
            tmp_dict_value_4 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 105;
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


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__8_stroke_width(tmp_annotations_4);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 104;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
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
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_24;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
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
            tmp_called_value_7 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 109;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[120];
            tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 110;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

            if (tmp_subscript_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_23 = (PyObject *)&PyBool_Type;
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
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 110;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__9_curved(tmp_annotations_5);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 109;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[120];
            tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 110;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_24 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

            if (tmp_subscript_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_24 = (PyObject *)&PyBool_Type;
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


                exception_lineno = 110;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__9_curved(tmp_annotations_6);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 109;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_25;
            tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[4]);

            if (unlikely(tmp_expression_value_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 113;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[119]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[122];
            tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);

                        exception_lineno = 114;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_25 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

            if (tmp_subscript_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_25 = (PyObject *)&PyBool_Type;
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
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 114;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__10_curved(tmp_annotations_7);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 113;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
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
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_27;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
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
            tmp_called_value_10 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 118;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[120];
            tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 119;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_26 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

            if (tmp_subscript_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
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
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 119;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__11_color(tmp_annotations_8);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 118;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[120];
            tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 119;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

            if (tmp_subscript_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_27 = (PyObject *)&PyUnicode_Type;
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


                exception_lineno = 119;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__11_color(tmp_annotations_9);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 118;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_28;
            tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[5]);

            if (unlikely(tmp_expression_value_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[119]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[122];
            tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 123;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

            if (tmp_subscript_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
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
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 123;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__12_color(tmp_annotations_10);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
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
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_30;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
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
            tmp_called_value_13 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[120];
            tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 128;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_36);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_29 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

            if (tmp_subscript_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_subscript_value_29 == NULL)) {
                        tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_subscript_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);
                        Py_DECREF(tmp_expression_value_36);

                        exception_lineno = 128;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
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
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 128;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__13_gradient(tmp_annotations_11);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 127;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[120];
            tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 128;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_30 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

            if (tmp_subscript_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_subscript_value_30 == NULL)) {
                        tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_subscript_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_37);

                        exception_lineno = 128;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
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


                exception_lineno = 128;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__13_gradient(tmp_annotations_12);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 127;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_31;
            tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[6]);

            if (unlikely(tmp_expression_value_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[119]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_13 = mod_consts[122];
            tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 132;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_31 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

            if (tmp_subscript_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_subscript_value_31 == NULL)) {
                        tmp_subscript_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_subscript_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_expression_value_39);

                        exception_lineno = 132;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
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
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 132;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__14_gradient(tmp_annotations_13);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 131;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
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
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_33;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
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
            tmp_called_value_16 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_14 = mod_consts[120];
            tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_40 == NULL)) {
                        tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 137;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_32 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

            if (tmp_subscript_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_32 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_40);
            Py_DECREF(tmp_subscript_value_32);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 137;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__15_stroke_cap_round(tmp_annotations_14);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 136;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_17 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_15 = mod_consts[120];
            tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 137;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_33 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

            if (tmp_subscript_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_33 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_41);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__15_stroke_cap_round(tmp_annotations_15);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 136;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_34;
            tmp_expression_value_42 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[8]);

            if (unlikely(tmp_expression_value_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 140;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[119]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_16 = mod_consts[122];
            tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_43 == NULL)) {
                        tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 141;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_34 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

            if (tmp_subscript_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_34 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_43);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);

                exception_lineno = 141;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__16_stroke_cap_round(tmp_annotations_16);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 140;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_20;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
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
            tmp_called_value_19 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__17_dash_pattern();

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 145;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_20 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__17_dash_pattern();

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 145;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_36;
            tmp_expression_value_44 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[10]);

            if (unlikely(tmp_expression_value_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 149;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[119]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_17 = mod_consts[122];
            tmp_expression_value_45 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);

                        exception_lineno = 150;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_46 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[70]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_expression_value_45);

                        exception_lineno = 150;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_36 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[110]);

            if (tmp_subscript_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_36 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_36);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_36);
            Py_DECREF(tmp_expression_value_46);
            Py_DECREF(tmp_subscript_value_36);
            if (tmp_subscript_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_expression_value_45);

                exception_lineno = 150;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_35);
            Py_DECREF(tmp_expression_value_45);
            Py_DECREF(tmp_subscript_value_35);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 150;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__18_dash_pattern(tmp_annotations_17);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 149;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_23;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
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
            tmp_called_value_22 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__19_shadow();

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_23 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__19_shadow();

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_37;
            tmp_expression_value_47 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[9]);

            if (unlikely(tmp_expression_value_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 158;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[119]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_18 = mod_consts[122];
            tmp_expression_value_48 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);

                        exception_lineno = 159;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_48);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_37 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[93]);

            if (tmp_subscript_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[93]);

                    if (unlikely(tmp_subscript_value_37 == NULL)) {
                        tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
                    }

                    if (tmp_subscript_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);
                        Py_DECREF(tmp_expression_value_48);

                        exception_lineno = 159;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_48);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);

                exception_lineno = 159;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__20_shadow(tmp_annotations_18);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 158;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_26;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
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
            tmp_called_value_25 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 163;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__21_point();

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 163;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_26 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__21_point();

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 163;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_tuple_element_7;
            tmp_expression_value_49 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[20]);

            if (unlikely(tmp_expression_value_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[20]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 167;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[119]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_19 = mod_consts[122];
            tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[72]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);

                        exception_lineno = 168;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_7 = Py_None;
            tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_38, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_7 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_tuple_element_7);
                } else {
                    goto tuple_build_exception_5;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_38, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[78]);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_tuple_element_7 == NULL)) {
                        tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_tuple_element_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 168;
                        type_description_2 = "c";
                        goto tuple_build_exception_5;
                    }
                    Py_INCREF(tmp_tuple_element_7);
                } else {
                    goto tuple_build_exception_5;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_38, 2, tmp_tuple_element_7);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_38);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__22_point(tmp_annotations_19);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 167;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_29;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
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
            tmp_called_value_28 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__23_selected_point();

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 172;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_29 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__23_selected_point();

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 172;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_39;
            PyObject *tmp_tuple_element_8;
            tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[21]);

            if (unlikely(tmp_expression_value_51 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[21]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 176;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[119]);
            Py_DECREF(tmp_expression_value_51);
            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_20 = mod_consts[122];
            tmp_expression_value_52 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[72]);

            if (tmp_expression_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_expression_value_52 == NULL)) {
                        tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                    }

                    if (tmp_expression_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_30);

                        exception_lineno = 177;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_52);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_8 = Py_None;
            tmp_subscript_value_39 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_39, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_8 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto tuple_build_exception_6;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_39, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[78]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 177;
                        type_description_2 = "c";
                        goto tuple_build_exception_6;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto tuple_build_exception_6;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_39, 2, tmp_tuple_element_8);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_expression_value_52);
            Py_DECREF(tmp_subscript_value_39);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_39);
            Py_DECREF(tmp_expression_value_52);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_30);

                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__24_selected_point(tmp_annotations_20);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 176;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_41;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
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
            tmp_called_value_31 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_21 = mod_consts[120];
            tmp_expression_value_53 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 182;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_53);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_40 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

            if (tmp_subscript_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_40 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_53);
            Py_DECREF(tmp_subscript_value_40);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__25_above_line_bgcolor(tmp_annotations_21);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 181;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_32 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_22 = mod_consts[120];
            tmp_expression_value_54 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 182;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_54);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_41 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

            if (tmp_subscript_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_41 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_54);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__25_above_line_bgcolor(tmp_annotations_22);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 181;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_42;
            tmp_expression_value_55 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[11]);

            if (unlikely(tmp_expression_value_55 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 185;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[119]);
            Py_DECREF(tmp_expression_value_55);
            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_23 = mod_consts[122];
            tmp_expression_value_56 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_56 == NULL)) {
                        tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);

                        exception_lineno = 186;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_56);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_42 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

            if (tmp_subscript_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_42 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_56);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);

                exception_lineno = 186;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_value_33 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__26_above_line_bgcolor(tmp_annotations_23);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 185;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_43;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_44;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
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
            tmp_called_value_34 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 190;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_24 = mod_consts[120];
            tmp_expression_value_57 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);

                        exception_lineno = 191;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_57);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_43 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

            if (tmp_subscript_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_subscript_value_43 == NULL)) {
                        tmp_subscript_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_subscript_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);
                        Py_DECREF(tmp_expression_value_57);

                        exception_lineno = 191;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_57);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_34);

                exception_lineno = 191;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_args_element_value_34 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__27_above_line_gradient(tmp_annotations_24);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 190;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_35 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_25 = mod_consts[120];
            tmp_expression_value_58 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 191;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_58);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_44 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

            if (tmp_subscript_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_subscript_value_44 == NULL)) {
                        tmp_subscript_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_subscript_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_58);

                        exception_lineno = 191;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_44);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_44);
            Py_DECREF(tmp_expression_value_58);
            Py_DECREF(tmp_subscript_value_44);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_args_element_value_35 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__27_above_line_gradient(tmp_annotations_25);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 190;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_36;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_45;
            tmp_expression_value_59 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[12]);

            if (unlikely(tmp_expression_value_59 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 194;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[119]);
            Py_DECREF(tmp_expression_value_59);
            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_26 = mod_consts[122];
            tmp_expression_value_60 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_60 == NULL)) {
                        tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);

                        exception_lineno = 195;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_60);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_45 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

            if (tmp_subscript_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_subscript_value_45 == NULL)) {
                        tmp_subscript_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_subscript_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);
                        Py_DECREF(tmp_expression_value_60);

                        exception_lineno = 195;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_45);
            Py_DECREF(tmp_expression_value_60);
            Py_DECREF(tmp_subscript_value_45);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);

                exception_lineno = 195;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_value_36 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__28_above_line_gradient(tmp_annotations_26);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 194;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
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
            tmp_called_value_37 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 199;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_27 = mod_consts[120];
            tmp_dict_value_27 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

            if (tmp_dict_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_dict_value_27 == NULL)) {
                        tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_dict_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 200;
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


            tmp_args_element_value_37 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__29_above_line_cutoff_y(tmp_annotations_27);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 199;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_38 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_28 = mod_consts[120];
            tmp_dict_value_28 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

            if (tmp_dict_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_dict_value_28 == NULL)) {
                        tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_dict_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 200;
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


            tmp_args_element_value_38 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__29_above_line_cutoff_y(tmp_annotations_28);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 199;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            tmp_expression_value_61 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[13]);

            if (unlikely(tmp_expression_value_61 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[13]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 203;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[119]);
            Py_DECREF(tmp_expression_value_61);
            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_29 = mod_consts[122];
            tmp_dict_value_29 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

            if (tmp_dict_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_dict_value_29 == NULL)) {
                        tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_dict_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_39);

                        exception_lineno = 204;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_29 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_args_element_value_39 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__30_above_line_cutoff_y(tmp_annotations_29);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 203;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_47;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
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
            tmp_called_value_40 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_30 = mod_consts[120];
            tmp_expression_value_62 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_62 == NULL)) {
                        tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);

                        exception_lineno = 209;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_62);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_46 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

            if (tmp_subscript_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_subscript_value_46 == NULL)) {
                        tmp_subscript_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_subscript_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);
                        Py_DECREF(tmp_expression_value_62);

                        exception_lineno = 209;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_62);
            Py_DECREF(tmp_subscript_value_46);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_40);

                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_value_40 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__31_above_line(tmp_annotations_30);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 208;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_41 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_31 = mod_consts[120];
            tmp_expression_value_63 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 209;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_63);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_47 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

            if (tmp_subscript_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_subscript_value_47 == NULL)) {
                        tmp_subscript_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_subscript_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_63);

                        exception_lineno = 209;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_47);
            Py_DECREF(tmp_expression_value_63);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_args_element_value_41 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__31_above_line(tmp_annotations_31);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 208;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_42;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_48;
            tmp_expression_value_64 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[14]);

            if (unlikely(tmp_expression_value_64 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 212;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[119]);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_32 = mod_consts[122];
            tmp_expression_value_65 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);

                        exception_lineno = 213;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_65);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_48 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

            if (tmp_subscript_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_subscript_value_48 == NULL)) {
                        tmp_subscript_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_subscript_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);
                        Py_DECREF(tmp_expression_value_65);

                        exception_lineno = 213;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_48);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_48);
            Py_DECREF(tmp_expression_value_65);
            Py_DECREF(tmp_subscript_value_48);
            if (tmp_dict_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_42);

                exception_lineno = 213;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));


            tmp_args_element_value_42 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__32_above_line(tmp_annotations_32);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 212;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_subscript_value_49;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_annotations_34;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_50;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
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
            tmp_called_value_43 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 217;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_33 = mod_consts[120];
            tmp_expression_value_66 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_66 == NULL)) {
                        tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_43);

                        exception_lineno = 218;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_66);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_49 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

            if (tmp_subscript_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_49 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_49);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_49);
            Py_DECREF(tmp_expression_value_66);
            Py_DECREF(tmp_subscript_value_49);
            if (tmp_dict_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_43);

                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));


            tmp_args_element_value_43 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__33_below_line_bgcolor(tmp_annotations_33);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 217;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_44 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_34 = mod_consts[120];
            tmp_expression_value_67 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_67 == NULL)) {
                        tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 218;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_67);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_50 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

            if (tmp_subscript_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_50 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_50);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_50);
            Py_DECREF(tmp_expression_value_67);
            Py_DECREF(tmp_subscript_value_50);
            if (tmp_dict_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_34 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));


            tmp_args_element_value_44 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__33_below_line_bgcolor(tmp_annotations_34);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 217;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_annotations_35;
            PyObject *tmp_dict_key_35;
            PyObject *tmp_dict_value_35;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_51;
            tmp_expression_value_68 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[15]);

            if (unlikely(tmp_expression_value_68 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 221;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[119]);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_35 = mod_consts[122];
            tmp_expression_value_69 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_69 == NULL)) {
                        tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);

                        exception_lineno = 222;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_69);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_51 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[109]);

            if (tmp_subscript_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_51 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_51);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_51);
            Py_DECREF(tmp_expression_value_69);
            Py_DECREF(tmp_subscript_value_51);
            if (tmp_dict_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);

                exception_lineno = 222;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_35 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
            Py_DECREF(tmp_dict_value_35);
            assert(!(tmp_res != 0));


            tmp_args_element_value_45 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__34_below_line_bgcolor(tmp_annotations_35);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 221;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_45);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_36;
            PyObject *tmp_dict_value_36;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_52;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_annotations_37;
            PyObject *tmp_dict_key_37;
            PyObject *tmp_dict_value_37;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_subscript_value_53;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
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
            tmp_called_value_46 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 226;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_36 = mod_consts[120];
            tmp_expression_value_70 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_70 == NULL)) {
                        tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);

                        exception_lineno = 227;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_70);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_52 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

            if (tmp_subscript_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_subscript_value_52 == NULL)) {
                        tmp_subscript_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_subscript_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);
                        Py_DECREF(tmp_expression_value_70);

                        exception_lineno = 227;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_52);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_52);
            Py_DECREF(tmp_expression_value_70);
            Py_DECREF(tmp_subscript_value_52);
            if (tmp_dict_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_46);

                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_36 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));


            tmp_args_element_value_46 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__35_below_line_gradient(tmp_annotations_36);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 226;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_47 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_37 = mod_consts[120];
            tmp_expression_value_71 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_71 == NULL)) {
                        tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_71 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 227;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_71);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_53 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

            if (tmp_subscript_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_subscript_value_53 == NULL)) {
                        tmp_subscript_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_subscript_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_71);

                        exception_lineno = 227;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_53);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_53);
            Py_DECREF(tmp_expression_value_71);
            Py_DECREF(tmp_subscript_value_53);
            if (tmp_dict_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_37 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));


            tmp_args_element_value_47 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__35_below_line_gradient(tmp_annotations_37);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 226;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_annotations_38;
            PyObject *tmp_dict_key_38;
            PyObject *tmp_dict_value_38;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_54;
            tmp_expression_value_72 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[16]);

            if (unlikely(tmp_expression_value_72 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[16]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 230;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[119]);
            Py_DECREF(tmp_expression_value_72);
            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_38 = mod_consts[122];
            tmp_expression_value_73 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_73 == NULL)) {
                        tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);

                        exception_lineno = 231;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_73);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_54 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[87]);

            if (tmp_subscript_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_subscript_value_54 == NULL)) {
                        tmp_subscript_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_subscript_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);
                        Py_DECREF(tmp_expression_value_73);

                        exception_lineno = 231;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_54);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_54);
            Py_DECREF(tmp_expression_value_73);
            Py_DECREF(tmp_subscript_value_54);
            if (tmp_dict_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);

                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_38 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_38, tmp_dict_value_38);
            Py_DECREF(tmp_dict_value_38);
            assert(!(tmp_res != 0));


            tmp_args_element_value_48 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__36_below_line_gradient(tmp_annotations_38);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 230;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_48);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_annotations_39;
            PyObject *tmp_dict_key_39;
            PyObject *tmp_dict_value_39;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_annotations_40;
            PyObject *tmp_dict_key_40;
            PyObject *tmp_dict_value_40;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
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
            tmp_called_value_49 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_39 = mod_consts[120];
            tmp_dict_value_39 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

            if (tmp_dict_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_dict_value_39 == NULL)) {
                        tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_dict_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_49);

                        exception_lineno = 236;
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


            tmp_args_element_value_49 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__37_below_line_cutoff_y(tmp_annotations_39);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 235;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_49);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_50 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_40 = mod_consts[120];
            tmp_dict_value_40 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

            if (tmp_dict_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_dict_value_40 == NULL)) {
                        tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_dict_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 236;
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


            tmp_args_element_value_50 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__37_below_line_cutoff_y(tmp_annotations_40);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 235;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_51;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_annotations_41;
            PyObject *tmp_dict_key_41;
            PyObject *tmp_dict_value_41;
            tmp_expression_value_74 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[17]);

            if (unlikely(tmp_expression_value_74 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[17]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 239;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[119]);
            Py_DECREF(tmp_expression_value_74);
            if (tmp_called_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_41 = mod_consts[122];
            tmp_dict_value_41 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[84]);

            if (tmp_dict_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_dict_value_41 == NULL)) {
                        tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_dict_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_51);

                        exception_lineno = 240;
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


            tmp_args_element_value_51 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__38_below_line_cutoff_y(tmp_annotations_41);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 239;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_51);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_annotations_42;
            PyObject *tmp_dict_key_42;
            PyObject *tmp_dict_value_42;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_subscript_value_55;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_annotations_43;
            PyObject *tmp_dict_key_43;
            PyObject *tmp_dict_value_43;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_56;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_21 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_19;
            } else {
                goto condexpr_false_19;
            }
            condexpr_true_19:;
            tmp_called_value_52 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_42 = mod_consts[120];
            tmp_expression_value_75 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_75 == NULL)) {
                        tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_52);

                        exception_lineno = 245;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_75);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_55 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

            if (tmp_subscript_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_55 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_subscript_value_55 == NULL)) {
                        tmp_subscript_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_subscript_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_52);
                        Py_DECREF(tmp_expression_value_75);

                        exception_lineno = 245;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_55);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_55);
            Py_DECREF(tmp_expression_value_75);
            Py_DECREF(tmp_subscript_value_55);
            if (tmp_dict_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_52);

                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_42 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_42, tmp_dict_value_42);
            Py_DECREF(tmp_dict_value_42);
            assert(!(tmp_res != 0));


            tmp_args_element_value_52 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__39_below_line(tmp_annotations_42);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 244;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_52);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_19;
            condexpr_false_19:;
            tmp_called_value_53 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_43 = mod_consts[120];
            tmp_expression_value_76 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_76 == NULL)) {
                        tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 245;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_76);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_56 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

            if (tmp_subscript_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_56 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_subscript_value_56 == NULL)) {
                        tmp_subscript_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_subscript_value_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_76);

                        exception_lineno = 245;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_56);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_43 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_56);
            Py_DECREF(tmp_expression_value_76);
            Py_DECREF(tmp_subscript_value_56);
            if (tmp_dict_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_43 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_43, tmp_dict_value_43);
            Py_DECREF(tmp_dict_value_43);
            assert(!(tmp_res != 0));


            tmp_args_element_value_53 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__39_below_line(tmp_annotations_43);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 244;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_19:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_54;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_annotations_44;
            PyObject *tmp_dict_key_44;
            PyObject *tmp_dict_value_44;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_57;
            tmp_expression_value_77 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[18]);

            if (unlikely(tmp_expression_value_77 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[18]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[119]);
            Py_DECREF(tmp_expression_value_77);
            if (tmp_called_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_44 = mod_consts[122];
            tmp_expression_value_78 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[71]);

            if (tmp_expression_value_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_78 == NULL)) {
                        tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_78 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_54);

                        exception_lineno = 249;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_78);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_57 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

            if (tmp_subscript_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_57 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_subscript_value_57 == NULL)) {
                        tmp_subscript_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_subscript_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_54);
                        Py_DECREF(tmp_expression_value_78);

                        exception_lineno = 249;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_57);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_44 = LOOKUP_SUBSCRIPT(tmp_expression_value_78, tmp_subscript_value_57);
            Py_DECREF(tmp_expression_value_78);
            Py_DECREF(tmp_subscript_value_57);
            if (tmp_dict_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_54);

                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_44 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_44, tmp_dict_value_44);
            Py_DECREF(tmp_dict_value_44);
            assert(!(tmp_res != 0));


            tmp_args_element_value_54 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__40_below_line(tmp_annotations_44);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 248;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_54);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_args_element_value_54);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_annotations_45;
            PyObject *tmp_dict_key_45;
            PyObject *tmp_dict_value_45;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_58;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_annotations_46;
            PyObject *tmp_dict_key_46;
            PyObject *tmp_dict_value_46;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_59;
            PyObject *tmp_tuple_element_10;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_20;
            } else {
                goto condexpr_false_20;
            }
            condexpr_true_20:;
            tmp_called_value_55 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[117]);

            if (unlikely(tmp_called_value_55 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_45 = mod_consts[120];
            tmp_expression_value_79 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[72]);

            if (tmp_expression_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_expression_value_79 == NULL)) {
                        tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                    }

                    if (tmp_expression_value_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_55);

                        exception_lineno = 254;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_79);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_9 = Py_None;
            tmp_subscript_value_58 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_58, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_9 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto tuple_build_exception_7;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_58, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_tuple_element_9 == NULL)) {
                        tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_tuple_element_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_2 = "c";
                        goto tuple_build_exception_7;
                    }
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto tuple_build_exception_7;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_58, 2, tmp_tuple_element_9);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_expression_value_79);
            Py_DECREF(tmp_subscript_value_58);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_dict_value_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_58);
            Py_DECREF(tmp_expression_value_79);
            Py_DECREF(tmp_subscript_value_58);
            if (tmp_dict_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_55);

                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_45 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_45, tmp_dict_value_45);
            Py_DECREF(tmp_dict_value_45);
            assert(!(tmp_res != 0));


            tmp_args_element_value_55 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__41_selected_below_line(tmp_annotations_45);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 253;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_55);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_55);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_20;
            condexpr_false_20:;
            tmp_called_value_56 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_46 = mod_consts[120];
            tmp_expression_value_80 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[72]);

            if (tmp_expression_value_80 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_expression_value_80 == NULL)) {
                        tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                    }

                    if (tmp_expression_value_80 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_80);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_10 = Py_None;
            tmp_subscript_value_59 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_59, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_10 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_tuple_element_10);
                } else {
                    goto tuple_build_exception_8;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_59, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_tuple_element_10 == NULL)) {
                        tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_2 = "c";
                        goto tuple_build_exception_8;
                    }
                    Py_INCREF(tmp_tuple_element_10);
                } else {
                    goto tuple_build_exception_8;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_59, 2, tmp_tuple_element_10);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_expression_value_80);
            Py_DECREF(tmp_subscript_value_59);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_dict_value_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_59);
            Py_DECREF(tmp_expression_value_80);
            Py_DECREF(tmp_subscript_value_59);
            if (tmp_dict_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_46 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_46, tmp_dict_value_46);
            Py_DECREF(tmp_dict_value_46);
            assert(!(tmp_res != 0));


            tmp_args_element_value_56 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__41_selected_below_line(tmp_annotations_46);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 253;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_56);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_20:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_57;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_args_element_value_57;
            PyObject *tmp_annotations_47;
            PyObject *tmp_dict_key_47;
            PyObject *tmp_dict_value_47;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_60;
            PyObject *tmp_tuple_element_11;
            tmp_expression_value_81 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[19]);

            if (unlikely(tmp_expression_value_81 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[19]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[119]);
            Py_DECREF(tmp_expression_value_81);
            if (tmp_called_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_47 = mod_consts[122];
            tmp_expression_value_82 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[72]);

            if (tmp_expression_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                    }

                    if (tmp_expression_value_82 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_57);

                        exception_lineno = 258;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_82);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_11 = Py_None;
            tmp_subscript_value_60 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_60, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[106]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_11 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_tuple_element_11);
                } else {
                    goto tuple_build_exception_9;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_60, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = PyObject_GetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[75]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_tuple_element_11 == NULL)) {
                        tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_tuple_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 258;
                        type_description_2 = "c";
                        goto tuple_build_exception_9;
                    }
                    Py_INCREF(tmp_tuple_element_11);
                } else {
                    goto tuple_build_exception_9;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_60, 2, tmp_tuple_element_11);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_expression_value_82);
            Py_DECREF(tmp_subscript_value_60);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_dict_value_47 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_60);
            Py_DECREF(tmp_expression_value_82);
            Py_DECREF(tmp_subscript_value_60);
            if (tmp_dict_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_57);

                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_47 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_47, tmp_dict_key_47, tmp_dict_value_47);
            Py_DECREF(tmp_dict_value_47);
            assert(!(tmp_res != 0));


            tmp_args_element_value_57 = MAKE_FUNCTION_flet_core$charts$line_chart_data$$$function__42_selected_below_line(tmp_annotations_47);

            frame_70e14b9738a806133ed5e66936aabe15_2->m_frame.f_lineno = 257;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_57);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_args_element_value_57);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_70e14b9738a806133ed5e66936aabe15_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_70e14b9738a806133ed5e66936aabe15_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_70e14b9738a806133ed5e66936aabe15_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_70e14b9738a806133ed5e66936aabe15_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_70e14b9738a806133ed5e66936aabe15_2);

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
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_58 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_12 = mod_consts[95];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_12 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_17e5491542bcc9101c2829a32e5ab835->m_frame.f_lineno = 12;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_58, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_5;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_25);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_24 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12);
        locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12 = NULL;
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

        Py_DECREF(locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12);
        locals_flet_core$charts$line_chart_data$$$class__1_LineChartData_12 = NULL;
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
        exception_lineno = 12;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_24);
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_17e5491542bcc9101c2829a32e5ab835, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_17e5491542bcc9101c2829a32e5ab835->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17e5491542bcc9101c2829a32e5ab835, exception_lineno);
    }



    assertFrameObject(frame_17e5491542bcc9101c2829a32e5ab835);

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
    PGO_onModuleExit("flet_core.charts.line_chart_data", false);

    Py_INCREF(module_flet_core$charts$line_chart_data);
    return module_flet_core$charts$line_chart_data;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$charts$line_chart_data", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
