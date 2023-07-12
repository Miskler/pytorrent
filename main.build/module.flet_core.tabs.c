/* Generated code for Python module 'flet_core.tabs'
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

/* The "module_flet_core$tabs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$tabs;
PyDictObject *moduledict_flet_core$tabs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[185];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[185];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.tabs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 185; i++) {
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
void checkModuleConstants_flet_core$tabs(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 185; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5bd3f3d395bd8af5531bbbf7f1fcb564;
static PyCodeObject *codeobj_bc7e9116f603136b67ace901d512ef70;
static PyCodeObject *codeobj_e914e048a6b997f074a75187e7595825;
static PyCodeObject *codeobj_0e2a650d63e1349f8b8af8f73a584fab;
static PyCodeObject *codeobj_2c6b6fea802a3274432893ccc520576c;
static PyCodeObject *codeobj_0706cb7db125bff6ef3b0f3cb9b80f1e;
static PyCodeObject *codeobj_1293418b3b15f38e1a9dc9b78a686c15;
static PyCodeObject *codeobj_25e9fc2418c3941340e7b649ee6a6ae3;
static PyCodeObject *codeobj_570bde0833e3952460e62316287126e6;
static PyCodeObject *codeobj_e88c48b57f9e31926322cf55453c9c22;
static PyCodeObject *codeobj_38f5dc724fedef1c5f99992201393c10;
static PyCodeObject *codeobj_6965f47488f758a2d8a73184bb511623;
static PyCodeObject *codeobj_94f6e7abb37a787baf8c01f44f8c8cda;
static PyCodeObject *codeobj_114937a058c0b855573601fc3c6542f7;
static PyCodeObject *codeobj_cdb0d59736664bd1f98443b11e5d7218;
static PyCodeObject *codeobj_f3c98bce9c89c45b6691f6180fe89ea9;
static PyCodeObject *codeobj_22e27fc815c732483330f2d339ff42af;
static PyCodeObject *codeobj_c5af5455e1ab192fa4ffc5252ac1be12;
static PyCodeObject *codeobj_548f3ed69f0c965a68b20426d74d15cc;
static PyCodeObject *codeobj_d099a626f6f09f91f9b34e70eb9622ef;
static PyCodeObject *codeobj_0086221d3f4eb3e60be4eb39be314bfe;
static PyCodeObject *codeobj_30513792668eebb8b1a9986041a868b1;
static PyCodeObject *codeobj_a7f3973f26ba7e38d22551b1cffe091d;
static PyCodeObject *codeobj_ac58d405cf75ceee570aeca1e8470fed;
static PyCodeObject *codeobj_fd6ac1454c037430a745dc3fdafe8047;
static PyCodeObject *codeobj_6448f9d1fa4c3dc15fcf1e73eac24222;
static PyCodeObject *codeobj_5a5a9a9936fec2e4eab78f9d5d26bc59;
static PyCodeObject *codeobj_037d380761bc7686312f465ecad9651b;
static PyCodeObject *codeobj_4c344b50fc50b2d32544f7bd0eb51230;
static PyCodeObject *codeobj_0c9f575b6457684fb036bc898477c305;
static PyCodeObject *codeobj_e70a703f9588b4080a6d7ec4f556db49;
static PyCodeObject *codeobj_18434106a8e4d6ab2eccedd3cf9f1547;
static PyCodeObject *codeobj_b2abc78098f2afbcb56c929cb9a788e1;
static PyCodeObject *codeobj_0ea572ab68cbbdfe3e0c2b5397b4351c;
static PyCodeObject *codeobj_7f3635b6d9da14e59ab765116bd8518c;
static PyCodeObject *codeobj_9f311691b41cd1bda9ad5ee8925dcb37;
static PyCodeObject *codeobj_ea30aadf3567807668e8b8aaea4f7edc;
static PyCodeObject *codeobj_4a722c778c448963aecc8aee68ca8310;
static PyCodeObject *codeobj_db664b9ee54032a7cedc60fd99ac2b0d;
static PyCodeObject *codeobj_492b72116ceeec26ce1797cfe3359e92;
static PyCodeObject *codeobj_6e4b86162d5d35ea61f25aed4de367c4;
static PyCodeObject *codeobj_132c569b6544f46354fdf5d53d5954cd;
static PyCodeObject *codeobj_126e98d5dcf2184b5988d713b62bfa64;
static PyCodeObject *codeobj_8bc1cbea08c0bbfe15d8e84dfed63139;
static PyCodeObject *codeobj_70c3bbc5591293114987b61a1225f6c9;
static PyCodeObject *codeobj_1d7d8d659e3e88d4751eb88943c071dd;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[66]; CHECK_OBJECT(module_filename_obj);
    codeobj_5bd3f3d395bd8af5531bbbf7f1fcb564 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[175], mod_consts[175], NULL, NULL, 0, 0, 0);
    codeobj_bc7e9116f603136b67ace901d512ef70 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[176], NULL, 0, 0, 0);
    codeobj_e914e048a6b997f074a75187e7595825 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[176], NULL, 0, 0, 0);
    codeobj_0e2a650d63e1349f8b8af8f73a584fab = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[177], NULL, 40, 0, 0);
    codeobj_2c6b6fea802a3274432893ccc520576c = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[178], NULL, 6, 0, 0);
    codeobj_0706cb7db125bff6ef3b0f3cb9b80f1e = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[34], mod_consts[34], mod_consts[179], mod_consts[176], 1, 0, 0);
    codeobj_1293418b3b15f38e1a9dc9b78a686c15 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[180], NULL, 1, 0, 0);
    codeobj_25e9fc2418c3941340e7b649ee6a6ae3 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[181], NULL, 1, 0, 0);
    codeobj_570bde0833e3952460e62316287126e6 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[180], NULL, 1, 0, 0);
    codeobj_e88c48b57f9e31926322cf55453c9c22 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[180], NULL, 1, 0, 0);
    codeobj_38f5dc724fedef1c5f99992201393c10 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[180], NULL, 1, 0, 0);
    codeobj_6965f47488f758a2d8a73184bb511623 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[182], NULL, 2, 0, 0);
    codeobj_94f6e7abb37a787baf8c01f44f8c8cda = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[180], NULL, 1, 0, 0);
    codeobj_114937a058c0b855573601fc3c6542f7 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[182], NULL, 2, 0, 0);
    codeobj_cdb0d59736664bd1f98443b11e5d7218 = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[180], NULL, 1, 0, 0);
    codeobj_f3c98bce9c89c45b6691f6180fe89ea9 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[182], NULL, 2, 0, 0);
    codeobj_22e27fc815c732483330f2d339ff42af = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[180], NULL, 1, 0, 0);
    codeobj_c5af5455e1ab192fa4ffc5252ac1be12 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[182], NULL, 2, 0, 0);
    codeobj_548f3ed69f0c965a68b20426d74d15cc = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[180], NULL, 1, 0, 0);
    codeobj_d099a626f6f09f91f9b34e70eb9622ef = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[182], NULL, 2, 0, 0);
    codeobj_0086221d3f4eb3e60be4eb39be314bfe = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[180], NULL, 1, 0, 0);
    codeobj_30513792668eebb8b1a9986041a868b1 = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[182], NULL, 2, 0, 0);
    codeobj_a7f3973f26ba7e38d22551b1cffe091d = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[180], NULL, 1, 0, 0);
    codeobj_ac58d405cf75ceee570aeca1e8470fed = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[182], NULL, 2, 0, 0);
    codeobj_fd6ac1454c037430a745dc3fdafe8047 = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[180], NULL, 1, 0, 0);
    codeobj_6448f9d1fa4c3dc15fcf1e73eac24222 = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[182], NULL, 2, 0, 0);
    codeobj_5a5a9a9936fec2e4eab78f9d5d26bc59 = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[180], NULL, 1, 0, 0);
    codeobj_037d380761bc7686312f465ecad9651b = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[182], NULL, 2, 0, 0);
    codeobj_4c344b50fc50b2d32544f7bd0eb51230 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[180], NULL, 1, 0, 0);
    codeobj_0c9f575b6457684fb036bc898477c305 = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[182], NULL, 2, 0, 0);
    codeobj_e70a703f9588b4080a6d7ec4f556db49 = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[180], NULL, 1, 0, 0);
    codeobj_18434106a8e4d6ab2eccedd3cf9f1547 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[183], NULL, 2, 0, 0);
    codeobj_b2abc78098f2afbcb56c929cb9a788e1 = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[180], NULL, 1, 0, 0);
    codeobj_0ea572ab68cbbdfe3e0c2b5397b4351c = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[182], NULL, 2, 0, 0);
    codeobj_7f3635b6d9da14e59ab765116bd8518c = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[180], NULL, 1, 0, 0);
    codeobj_9f311691b41cd1bda9ad5ee8925dcb37 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[182], NULL, 2, 0, 0);
    codeobj_ea30aadf3567807668e8b8aaea4f7edc = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[180], NULL, 1, 0, 0);
    codeobj_4a722c778c448963aecc8aee68ca8310 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[182], NULL, 2, 0, 0);
    codeobj_db664b9ee54032a7cedc60fd99ac2b0d = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[180], NULL, 1, 0, 0);
    codeobj_492b72116ceeec26ce1797cfe3359e92 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[182], NULL, 2, 0, 0);
    codeobj_6e4b86162d5d35ea61f25aed4de367c4 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[180], NULL, 1, 0, 0);
    codeobj_132c569b6544f46354fdf5d53d5954cd = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[182], NULL, 2, 0, 0);
    codeobj_126e98d5dcf2184b5988d713b62bfa64 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[180], NULL, 1, 0, 0);
    codeobj_8bc1cbea08c0bbfe15d8e84dfed63139 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[182], NULL, 2, 0, 0);
    codeobj_70c3bbc5591293114987b61a1225f6c9 = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[180], NULL, 1, 0, 0);
    codeobj_1d7d8d659e3e88d4751eb88943c071dd = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[182], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__10_content();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__11_content();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__12___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__13__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__14__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__15__get_children();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__16_tabs(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__17_tabs(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__18_on_change();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__19_on_change();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__20_selected_index(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__21_selected_index(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__22_scrollable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__23_scrollable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__24_animation_duration(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__25_animation_duration(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__26_divider_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__27_divider_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__28_indicator_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__29_indicator_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__30_indicator_border_radius(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__31_indicator_border_radius(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__32_indicator_border_side(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__33_indicator_border_side(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__34_indicator_padding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__35_indicator_padding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__36_indicator_tab_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__37_indicator_tab_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__38_label_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__39_label_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__3__get_children();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__40_unselected_label_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__41_unselected_label_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__42_overlay_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__43_overlay_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__4_text();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__5_text();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__6_icon();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__7_icon();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__8_tab_content();


static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__9_tab_content();


// The module function definitions.
static PyObject *impl_flet_core$tabs$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *par_content = python_pars[2];
    PyObject *par_tab_content = python_pars[3];
    PyObject *par_ref = python_pars[4];
    PyObject *par_icon = python_pars[5];
    struct Nuitka_FrameObject *frame_2c6b6fea802a3274432893ccc520576c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2c6b6fea802a3274432893ccc520576c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c6b6fea802a3274432893ccc520576c)) {
        Py_XDECREF(cache_frame_2c6b6fea802a3274432893ccc520576c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c6b6fea802a3274432893ccc520576c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c6b6fea802a3274432893ccc520576c = MAKE_FUNCTION_FRAME(codeobj_2c6b6fea802a3274432893ccc520576c, module_flet_core$tabs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c6b6fea802a3274432893ccc520576c->m_type_description == NULL);
    frame_2c6b6fea802a3274432893ccc520576c = cache_frame_2c6b6fea802a3274432893ccc520576c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2c6b6fea802a3274432893ccc520576c);
    assert(Py_REFCNT(frame_2c6b6fea802a3274432893ccc520576c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        frame_2c6b6fea802a3274432893ccc520576c->m_frame.f_lineno = 29;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_text);
        tmp_assattr_value_1 = par_text;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_icon);
        tmp_assattr_value_2 = par_icon;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_content);
        tmp_assattr_value_4 = par_content;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_tab_content);
        tmp_assattr_value_6 = par_tab_content;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c6b6fea802a3274432893ccc520576c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c6b6fea802a3274432893ccc520576c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c6b6fea802a3274432893ccc520576c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c6b6fea802a3274432893ccc520576c,
        type_description_1,
        par_self,
        par_text,
        par_content,
        par_tab_content,
        par_ref,
        par_icon
    );


    // Release cached frame if used for exception.
    if (frame_2c6b6fea802a3274432893ccc520576c == cache_frame_2c6b6fea802a3274432893ccc520576c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c6b6fea802a3274432893ccc520576c);
        cache_frame_2c6b6fea802a3274432893ccc520576c = NULL;
    }

    assertFrameObject(frame_2c6b6fea802a3274432893ccc520576c);

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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_tab_content);
    Py_DECREF(par_tab_content);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_tab_content);
    Py_DECREF(par_tab_content);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$tabs$$$function__3__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_children = NULL;
    struct Nuitka_FrameObject *frame_25e9fc2418c3941340e7b649ee6a6ae3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_25e9fc2418c3941340e7b649ee6a6ae3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_children == NULL);
        var_children = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_25e9fc2418c3941340e7b649ee6a6ae3)) {
        Py_XDECREF(cache_frame_25e9fc2418c3941340e7b649ee6a6ae3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_25e9fc2418c3941340e7b649ee6a6ae3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_25e9fc2418c3941340e7b649ee6a6ae3 = MAKE_FUNCTION_FRAME(codeobj_25e9fc2418c3941340e7b649ee6a6ae3, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_25e9fc2418c3941340e7b649ee6a6ae3->m_type_description == NULL);
    frame_25e9fc2418c3941340e7b649ee6a6ae3 = cache_frame_25e9fc2418c3941340e7b649ee6a6ae3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_25e9fc2418c3941340e7b649ee6a6ae3);
    assert(Py_REFCNT(frame_25e9fc2418c3941340e7b649ee6a6ae3) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 42;
            type_description_1 = "oo";
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_25e9fc2418c3941340e7b649ee6a6ae3->m_frame.f_lineno = 43;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[9],
            &PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_children);
        tmp_list_arg_value_1 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_item_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 45;
            type_description_1 = "oo";
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
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[5]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_25e9fc2418c3941340e7b649ee6a6ae3->m_frame.f_lineno = 46;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[9],
            &PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        PyObject *tmp_expression_value_6;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_2 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_item_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[5]);
        if (tmp_item_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_2:;
    if (var_children == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 48;
        type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_25e9fc2418c3941340e7b649ee6a6ae3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25e9fc2418c3941340e7b649ee6a6ae3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25e9fc2418c3941340e7b649ee6a6ae3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_25e9fc2418c3941340e7b649ee6a6ae3,
        type_description_1,
        par_self,
        var_children
    );


    // Release cached frame if used for exception.
    if (frame_25e9fc2418c3941340e7b649ee6a6ae3 == cache_frame_25e9fc2418c3941340e7b649ee6a6ae3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_25e9fc2418c3941340e7b649ee6a6ae3);
        cache_frame_25e9fc2418c3941340e7b649ee6a6ae3 = NULL;
    }

    assertFrameObject(frame_25e9fc2418c3941340e7b649ee6a6ae3);

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

    Py_XDECREF(var_children);
    var_children = NULL;
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


static PyObject *impl_flet_core$tabs$$$function__4_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_126e98d5dcf2184b5988d713b62bfa64;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_126e98d5dcf2184b5988d713b62bfa64 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_126e98d5dcf2184b5988d713b62bfa64)) {
        Py_XDECREF(cache_frame_126e98d5dcf2184b5988d713b62bfa64);

#if _DEBUG_REFCOUNTS
        if (cache_frame_126e98d5dcf2184b5988d713b62bfa64 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_126e98d5dcf2184b5988d713b62bfa64 = MAKE_FUNCTION_FRAME(codeobj_126e98d5dcf2184b5988d713b62bfa64, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_126e98d5dcf2184b5988d713b62bfa64->m_type_description == NULL);
    frame_126e98d5dcf2184b5988d713b62bfa64 = cache_frame_126e98d5dcf2184b5988d713b62bfa64;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_126e98d5dcf2184b5988d713b62bfa64);
    assert(Py_REFCNT(frame_126e98d5dcf2184b5988d713b62bfa64) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_126e98d5dcf2184b5988d713b62bfa64->m_frame.f_lineno = 53;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[14], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
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
        exception_tb = MAKE_TRACEBACK(frame_126e98d5dcf2184b5988d713b62bfa64, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_126e98d5dcf2184b5988d713b62bfa64->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_126e98d5dcf2184b5988d713b62bfa64, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_126e98d5dcf2184b5988d713b62bfa64,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_126e98d5dcf2184b5988d713b62bfa64 == cache_frame_126e98d5dcf2184b5988d713b62bfa64) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_126e98d5dcf2184b5988d713b62bfa64);
        cache_frame_126e98d5dcf2184b5988d713b62bfa64 = NULL;
    }

    assertFrameObject(frame_126e98d5dcf2184b5988d713b62bfa64);

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


static PyObject *impl_flet_core$tabs$$$function__5_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_8bc1cbea08c0bbfe15d8e84dfed63139;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8bc1cbea08c0bbfe15d8e84dfed63139 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8bc1cbea08c0bbfe15d8e84dfed63139)) {
        Py_XDECREF(cache_frame_8bc1cbea08c0bbfe15d8e84dfed63139);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8bc1cbea08c0bbfe15d8e84dfed63139 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8bc1cbea08c0bbfe15d8e84dfed63139 = MAKE_FUNCTION_FRAME(codeobj_8bc1cbea08c0bbfe15d8e84dfed63139, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8bc1cbea08c0bbfe15d8e84dfed63139->m_type_description == NULL);
    frame_8bc1cbea08c0bbfe15d8e84dfed63139 = cache_frame_8bc1cbea08c0bbfe15d8e84dfed63139;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8bc1cbea08c0bbfe15d8e84dfed63139);
    assert(Py_REFCNT(frame_8bc1cbea08c0bbfe15d8e84dfed63139) == 2);

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
        frame_8bc1cbea08c0bbfe15d8e84dfed63139->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
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
        exception_tb = MAKE_TRACEBACK(frame_8bc1cbea08c0bbfe15d8e84dfed63139, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8bc1cbea08c0bbfe15d8e84dfed63139->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8bc1cbea08c0bbfe15d8e84dfed63139, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8bc1cbea08c0bbfe15d8e84dfed63139,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8bc1cbea08c0bbfe15d8e84dfed63139 == cache_frame_8bc1cbea08c0bbfe15d8e84dfed63139) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8bc1cbea08c0bbfe15d8e84dfed63139);
        cache_frame_8bc1cbea08c0bbfe15d8e84dfed63139 = NULL;
    }

    assertFrameObject(frame_8bc1cbea08c0bbfe15d8e84dfed63139);

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


static PyObject *impl_flet_core$tabs$$$function__6_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_22e27fc815c732483330f2d339ff42af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_22e27fc815c732483330f2d339ff42af = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_22e27fc815c732483330f2d339ff42af)) {
        Py_XDECREF(cache_frame_22e27fc815c732483330f2d339ff42af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_22e27fc815c732483330f2d339ff42af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_22e27fc815c732483330f2d339ff42af = MAKE_FUNCTION_FRAME(codeobj_22e27fc815c732483330f2d339ff42af, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_22e27fc815c732483330f2d339ff42af->m_type_description == NULL);
    frame_22e27fc815c732483330f2d339ff42af = cache_frame_22e27fc815c732483330f2d339ff42af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_22e27fc815c732483330f2d339ff42af);
    assert(Py_REFCNT(frame_22e27fc815c732483330f2d339ff42af) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_22e27fc815c732483330f2d339ff42af->m_frame.f_lineno = 62;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
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
        exception_tb = MAKE_TRACEBACK(frame_22e27fc815c732483330f2d339ff42af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_22e27fc815c732483330f2d339ff42af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_22e27fc815c732483330f2d339ff42af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_22e27fc815c732483330f2d339ff42af,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_22e27fc815c732483330f2d339ff42af == cache_frame_22e27fc815c732483330f2d339ff42af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_22e27fc815c732483330f2d339ff42af);
        cache_frame_22e27fc815c732483330f2d339ff42af = NULL;
    }

    assertFrameObject(frame_22e27fc815c732483330f2d339ff42af);

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


static PyObject *impl_flet_core$tabs$$$function__7_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_c5af5455e1ab192fa4ffc5252ac1be12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c5af5455e1ab192fa4ffc5252ac1be12 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c5af5455e1ab192fa4ffc5252ac1be12)) {
        Py_XDECREF(cache_frame_c5af5455e1ab192fa4ffc5252ac1be12);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5af5455e1ab192fa4ffc5252ac1be12 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5af5455e1ab192fa4ffc5252ac1be12 = MAKE_FUNCTION_FRAME(codeobj_c5af5455e1ab192fa4ffc5252ac1be12, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5af5455e1ab192fa4ffc5252ac1be12->m_type_description == NULL);
    frame_c5af5455e1ab192fa4ffc5252ac1be12 = cache_frame_c5af5455e1ab192fa4ffc5252ac1be12;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c5af5455e1ab192fa4ffc5252ac1be12);
    assert(Py_REFCNT(frame_c5af5455e1ab192fa4ffc5252ac1be12) == 2);

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
        frame_c5af5455e1ab192fa4ffc5252ac1be12->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
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
        exception_tb = MAKE_TRACEBACK(frame_c5af5455e1ab192fa4ffc5252ac1be12, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5af5455e1ab192fa4ffc5252ac1be12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5af5455e1ab192fa4ffc5252ac1be12, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5af5455e1ab192fa4ffc5252ac1be12,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c5af5455e1ab192fa4ffc5252ac1be12 == cache_frame_c5af5455e1ab192fa4ffc5252ac1be12) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5af5455e1ab192fa4ffc5252ac1be12);
        cache_frame_c5af5455e1ab192fa4ffc5252ac1be12 = NULL;
    }

    assertFrameObject(frame_c5af5455e1ab192fa4ffc5252ac1be12);

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


static PyObject *impl_flet_core$tabs$$$function__8_tab_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_db664b9ee54032a7cedc60fd99ac2b0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_db664b9ee54032a7cedc60fd99ac2b0d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_db664b9ee54032a7cedc60fd99ac2b0d)) {
        Py_XDECREF(cache_frame_db664b9ee54032a7cedc60fd99ac2b0d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db664b9ee54032a7cedc60fd99ac2b0d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db664b9ee54032a7cedc60fd99ac2b0d = MAKE_FUNCTION_FRAME(codeobj_db664b9ee54032a7cedc60fd99ac2b0d, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_db664b9ee54032a7cedc60fd99ac2b0d->m_type_description == NULL);
    frame_db664b9ee54032a7cedc60fd99ac2b0d = cache_frame_db664b9ee54032a7cedc60fd99ac2b0d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_db664b9ee54032a7cedc60fd99ac2b0d);
    assert(Py_REFCNT(frame_db664b9ee54032a7cedc60fd99ac2b0d) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_db664b9ee54032a7cedc60fd99ac2b0d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db664b9ee54032a7cedc60fd99ac2b0d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db664b9ee54032a7cedc60fd99ac2b0d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db664b9ee54032a7cedc60fd99ac2b0d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_db664b9ee54032a7cedc60fd99ac2b0d == cache_frame_db664b9ee54032a7cedc60fd99ac2b0d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_db664b9ee54032a7cedc60fd99ac2b0d);
        cache_frame_db664b9ee54032a7cedc60fd99ac2b0d = NULL;
    }

    assertFrameObject(frame_db664b9ee54032a7cedc60fd99ac2b0d);

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


static PyObject *impl_flet_core$tabs$$$function__9_tab_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_492b72116ceeec26ce1797cfe3359e92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_492b72116ceeec26ce1797cfe3359e92 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_492b72116ceeec26ce1797cfe3359e92)) {
        Py_XDECREF(cache_frame_492b72116ceeec26ce1797cfe3359e92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_492b72116ceeec26ce1797cfe3359e92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_492b72116ceeec26ce1797cfe3359e92 = MAKE_FUNCTION_FRAME(codeobj_492b72116ceeec26ce1797cfe3359e92, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_492b72116ceeec26ce1797cfe3359e92->m_type_description == NULL);
    frame_492b72116ceeec26ce1797cfe3359e92 = cache_frame_492b72116ceeec26ce1797cfe3359e92;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_492b72116ceeec26ce1797cfe3359e92);
    assert(Py_REFCNT(frame_492b72116ceeec26ce1797cfe3359e92) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_492b72116ceeec26ce1797cfe3359e92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_492b72116ceeec26ce1797cfe3359e92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_492b72116ceeec26ce1797cfe3359e92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_492b72116ceeec26ce1797cfe3359e92,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_492b72116ceeec26ce1797cfe3359e92 == cache_frame_492b72116ceeec26ce1797cfe3359e92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_492b72116ceeec26ce1797cfe3359e92);
        cache_frame_492b72116ceeec26ce1797cfe3359e92 = NULL;
    }

    assertFrameObject(frame_492b72116ceeec26ce1797cfe3359e92);

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


static PyObject *impl_flet_core$tabs$$$function__10_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_94f6e7abb37a787baf8c01f44f8c8cda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94f6e7abb37a787baf8c01f44f8c8cda = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94f6e7abb37a787baf8c01f44f8c8cda)) {
        Py_XDECREF(cache_frame_94f6e7abb37a787baf8c01f44f8c8cda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94f6e7abb37a787baf8c01f44f8c8cda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94f6e7abb37a787baf8c01f44f8c8cda = MAKE_FUNCTION_FRAME(codeobj_94f6e7abb37a787baf8c01f44f8c8cda, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94f6e7abb37a787baf8c01f44f8c8cda->m_type_description == NULL);
    frame_94f6e7abb37a787baf8c01f44f8c8cda = cache_frame_94f6e7abb37a787baf8c01f44f8c8cda;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_94f6e7abb37a787baf8c01f44f8c8cda);
    assert(Py_REFCNT(frame_94f6e7abb37a787baf8c01f44f8c8cda) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
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
        exception_tb = MAKE_TRACEBACK(frame_94f6e7abb37a787baf8c01f44f8c8cda, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94f6e7abb37a787baf8c01f44f8c8cda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94f6e7abb37a787baf8c01f44f8c8cda, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94f6e7abb37a787baf8c01f44f8c8cda,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_94f6e7abb37a787baf8c01f44f8c8cda == cache_frame_94f6e7abb37a787baf8c01f44f8c8cda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94f6e7abb37a787baf8c01f44f8c8cda);
        cache_frame_94f6e7abb37a787baf8c01f44f8c8cda = NULL;
    }

    assertFrameObject(frame_94f6e7abb37a787baf8c01f44f8c8cda);

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


static PyObject *impl_flet_core$tabs$$$function__11_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_114937a058c0b855573601fc3c6542f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_114937a058c0b855573601fc3c6542f7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_114937a058c0b855573601fc3c6542f7)) {
        Py_XDECREF(cache_frame_114937a058c0b855573601fc3c6542f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_114937a058c0b855573601fc3c6542f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_114937a058c0b855573601fc3c6542f7 = MAKE_FUNCTION_FRAME(codeobj_114937a058c0b855573601fc3c6542f7, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_114937a058c0b855573601fc3c6542f7->m_type_description == NULL);
    frame_114937a058c0b855573601fc3c6542f7 = cache_frame_114937a058c0b855573601fc3c6542f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_114937a058c0b855573601fc3c6542f7);
    assert(Py_REFCNT(frame_114937a058c0b855573601fc3c6542f7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_114937a058c0b855573601fc3c6542f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_114937a058c0b855573601fc3c6542f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_114937a058c0b855573601fc3c6542f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_114937a058c0b855573601fc3c6542f7,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_114937a058c0b855573601fc3c6542f7 == cache_frame_114937a058c0b855573601fc3c6542f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_114937a058c0b855573601fc3c6542f7);
        cache_frame_114937a058c0b855573601fc3c6542f7 = NULL;
    }

    assertFrameObject(frame_114937a058c0b855573601fc3c6542f7);

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


static PyObject *impl_flet_core$tabs$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ref = python_pars[1];
    PyObject *par_key = python_pars[2];
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
    PyObject *par_visible = python_pars[23];
    PyObject *par_disabled = python_pars[24];
    PyObject *par_data = python_pars[25];
    PyObject *par_tabs = python_pars[26];
    PyObject *par_selected_index = python_pars[27];
    PyObject *par_scrollable = python_pars[28];
    PyObject *par_animation_duration = python_pars[29];
    PyObject *par_divider_color = python_pars[30];
    PyObject *par_indicator_color = python_pars[31];
    PyObject *par_indicator_border_radius = python_pars[32];
    PyObject *par_indicator_border_side = python_pars[33];
    PyObject *par_indicator_padding = python_pars[34];
    PyObject *par_indicator_tab_size = python_pars[35];
    PyObject *par_label_color = python_pars[36];
    PyObject *par_unselected_label_color = python_pars[37];
    PyObject *par_overlay_color = python_pars[38];
    PyObject *par_on_change = python_pars[39];
    struct Nuitka_FrameObject *frame_0e2a650d63e1349f8b8af8f73a584fab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0e2a650d63e1349f8b8af8f73a584fab = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0e2a650d63e1349f8b8af8f73a584fab)) {
        Py_XDECREF(cache_frame_0e2a650d63e1349f8b8af8f73a584fab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e2a650d63e1349f8b8af8f73a584fab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e2a650d63e1349f8b8af8f73a584fab = MAKE_FUNCTION_FRAME(codeobj_0e2a650d63e1349f8b8af8f73a584fab, module_flet_core$tabs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0e2a650d63e1349f8b8af8f73a584fab->m_type_description == NULL);
    frame_0e2a650d63e1349f8b8af8f73a584fab = cache_frame_0e2a650d63e1349f8b8af8f73a584fab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0e2a650d63e1349f8b8af8f73a584fab);
    assert(Py_REFCNT(frame_0e2a650d63e1349f8b8af8f73a584fab) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT(par_visible);
        tmp_kw_call_dict_value_22_1 = par_visible;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_23_1 = par_disabled;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_24_1 = par_data;
        frame_0e2a650d63e1349f8b8af8f73a584fab->m_frame.f_lineno = 177;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[25] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[18]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_tabs);
        tmp_assattr_value_1 = par_tabs;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_selected_index);
        tmp_assattr_value_2 = par_selected_index;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[20], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_scrollable);
        tmp_assattr_value_3 = par_scrollable;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[21], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_animation_duration);
        tmp_assattr_value_4 = par_animation_duration;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[22], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_divider_color);
        tmp_assattr_value_5 = par_divider_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[23], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_label_color);
        tmp_assattr_value_6 = par_label_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[24], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_unselected_label_color);
        tmp_assattr_value_7 = par_unselected_label_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[25], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_indicator_color);
        tmp_assattr_value_8 = par_indicator_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[26], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_indicator_border_radius);
        tmp_assattr_value_9 = par_indicator_border_radius;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[27], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_indicator_border_side);
        tmp_assattr_value_10 = par_indicator_border_side;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[28], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_indicator_padding);
        tmp_assattr_value_11 = par_indicator_padding;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[29], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_indicator_tab_size);
        tmp_assattr_value_12 = par_indicator_tab_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[30], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_overlay_color);
        tmp_assattr_value_13 = par_overlay_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[31], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(par_on_change);
        tmp_assattr_value_14 = par_on_change;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[32], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e2a650d63e1349f8b8af8f73a584fab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e2a650d63e1349f8b8af8f73a584fab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e2a650d63e1349f8b8af8f73a584fab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e2a650d63e1349f8b8af8f73a584fab,
        type_description_1,
        par_self,
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
        par_visible,
        par_disabled,
        par_data,
        par_tabs,
        par_selected_index,
        par_scrollable,
        par_animation_duration,
        par_divider_color,
        par_indicator_color,
        par_indicator_border_radius,
        par_indicator_border_side,
        par_indicator_padding,
        par_indicator_tab_size,
        par_label_color,
        par_unselected_label_color,
        par_overlay_color,
        par_on_change
    );


    // Release cached frame if used for exception.
    if (frame_0e2a650d63e1349f8b8af8f73a584fab == cache_frame_0e2a650d63e1349f8b8af8f73a584fab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0e2a650d63e1349f8b8af8f73a584fab);
        cache_frame_0e2a650d63e1349f8b8af8f73a584fab = NULL;
    }

    assertFrameObject(frame_0e2a650d63e1349f8b8af8f73a584fab);

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
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_tabs);
    Py_DECREF(par_tabs);
    CHECK_OBJECT(par_selected_index);
    Py_DECREF(par_selected_index);
    CHECK_OBJECT(par_scrollable);
    Py_DECREF(par_scrollable);
    CHECK_OBJECT(par_animation_duration);
    Py_DECREF(par_animation_duration);
    CHECK_OBJECT(par_divider_color);
    Py_DECREF(par_divider_color);
    CHECK_OBJECT(par_indicator_color);
    Py_DECREF(par_indicator_color);
    CHECK_OBJECT(par_indicator_border_radius);
    Py_DECREF(par_indicator_border_radius);
    CHECK_OBJECT(par_indicator_border_side);
    Py_DECREF(par_indicator_border_side);
    CHECK_OBJECT(par_indicator_padding);
    Py_DECREF(par_indicator_padding);
    CHECK_OBJECT(par_indicator_tab_size);
    Py_DECREF(par_indicator_tab_size);
    CHECK_OBJECT(par_label_color);
    Py_DECREF(par_label_color);
    CHECK_OBJECT(par_unselected_label_color);
    Py_DECREF(par_unselected_label_color);
    CHECK_OBJECT(par_overlay_color);
    Py_DECREF(par_overlay_color);
    CHECK_OBJECT(par_on_change);
    Py_DECREF(par_on_change);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
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
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_tabs);
    Py_DECREF(par_tabs);
    CHECK_OBJECT(par_selected_index);
    Py_DECREF(par_selected_index);
    CHECK_OBJECT(par_scrollable);
    Py_DECREF(par_scrollable);
    CHECK_OBJECT(par_animation_duration);
    Py_DECREF(par_animation_duration);
    CHECK_OBJECT(par_divider_color);
    Py_DECREF(par_divider_color);
    CHECK_OBJECT(par_indicator_color);
    Py_DECREF(par_indicator_color);
    CHECK_OBJECT(par_indicator_border_radius);
    Py_DECREF(par_indicator_border_radius);
    CHECK_OBJECT(par_indicator_border_side);
    Py_DECREF(par_indicator_border_side);
    CHECK_OBJECT(par_indicator_padding);
    Py_DECREF(par_indicator_padding);
    CHECK_OBJECT(par_indicator_tab_size);
    Py_DECREF(par_indicator_tab_size);
    CHECK_OBJECT(par_label_color);
    Py_DECREF(par_label_color);
    CHECK_OBJECT(par_unselected_label_color);
    Py_DECREF(par_unselected_label_color);
    CHECK_OBJECT(par_overlay_color);
    Py_DECREF(par_overlay_color);
    CHECK_OBJECT(par_on_change);
    Py_DECREF(par_on_change);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$tabs$$$function__14__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0706cb7db125bff6ef3b0f3cb9b80f1e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0706cb7db125bff6ef3b0f3cb9b80f1e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0706cb7db125bff6ef3b0f3cb9b80f1e)) {
        Py_XDECREF(cache_frame_0706cb7db125bff6ef3b0f3cb9b80f1e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0706cb7db125bff6ef3b0f3cb9b80f1e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0706cb7db125bff6ef3b0f3cb9b80f1e = MAKE_FUNCTION_FRAME(codeobj_0706cb7db125bff6ef3b0f3cb9b80f1e, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0706cb7db125bff6ef3b0f3cb9b80f1e->m_type_description == NULL);
    frame_0706cb7db125bff6ef3b0f3cb9b80f1e = cache_frame_0706cb7db125bff6ef3b0f3cb9b80f1e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0706cb7db125bff6ef3b0f3cb9b80f1e);
    assert(Py_REFCNT(frame_0706cb7db125bff6ef3b0f3cb9b80f1e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$tabs, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0706cb7db125bff6ef3b0f3cb9b80f1e->m_frame.f_lineno = 225;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[34]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[36];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[37]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 226;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0706cb7db125bff6ef3b0f3cb9b80f1e->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
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
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[35]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[38];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[39]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 227;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0706cb7db125bff6ef3b0f3cb9b80f1e->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
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
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[35]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[40];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[41]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 228;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0706cb7db125bff6ef3b0f3cb9b80f1e->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
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
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[35]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[42];
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[43]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 229;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_0706cb7db125bff6ef3b0f3cb9b80f1e->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_0706cb7db125bff6ef3b0f3cb9b80f1e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0706cb7db125bff6ef3b0f3cb9b80f1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0706cb7db125bff6ef3b0f3cb9b80f1e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0706cb7db125bff6ef3b0f3cb9b80f1e,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0706cb7db125bff6ef3b0f3cb9b80f1e == cache_frame_0706cb7db125bff6ef3b0f3cb9b80f1e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0706cb7db125bff6ef3b0f3cb9b80f1e);
        cache_frame_0706cb7db125bff6ef3b0f3cb9b80f1e = NULL;
    }

    assertFrameObject(frame_0706cb7db125bff6ef3b0f3cb9b80f1e);

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


static PyObject *impl_flet_core$tabs$$$function__15__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1293418b3b15f38e1a9dc9b78a686c15;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1293418b3b15f38e1a9dc9b78a686c15 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1293418b3b15f38e1a9dc9b78a686c15)) {
        Py_XDECREF(cache_frame_1293418b3b15f38e1a9dc9b78a686c15);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1293418b3b15f38e1a9dc9b78a686c15 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1293418b3b15f38e1a9dc9b78a686c15 = MAKE_FUNCTION_FRAME(codeobj_1293418b3b15f38e1a9dc9b78a686c15, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1293418b3b15f38e1a9dc9b78a686c15->m_type_description == NULL);
    frame_1293418b3b15f38e1a9dc9b78a686c15 = cache_frame_1293418b3b15f38e1a9dc9b78a686c15;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1293418b3b15f38e1a9dc9b78a686c15);
    assert(Py_REFCNT(frame_1293418b3b15f38e1a9dc9b78a686c15) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
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
        exception_tb = MAKE_TRACEBACK(frame_1293418b3b15f38e1a9dc9b78a686c15, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1293418b3b15f38e1a9dc9b78a686c15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1293418b3b15f38e1a9dc9b78a686c15, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1293418b3b15f38e1a9dc9b78a686c15,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1293418b3b15f38e1a9dc9b78a686c15 == cache_frame_1293418b3b15f38e1a9dc9b78a686c15) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1293418b3b15f38e1a9dc9b78a686c15);
        cache_frame_1293418b3b15f38e1a9dc9b78a686c15 = NULL;
    }

    assertFrameObject(frame_1293418b3b15f38e1a9dc9b78a686c15);

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


static PyObject *impl_flet_core$tabs$$$function__16_tabs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6e4b86162d5d35ea61f25aed4de367c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e4b86162d5d35ea61f25aed4de367c4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e4b86162d5d35ea61f25aed4de367c4)) {
        Py_XDECREF(cache_frame_6e4b86162d5d35ea61f25aed4de367c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e4b86162d5d35ea61f25aed4de367c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e4b86162d5d35ea61f25aed4de367c4 = MAKE_FUNCTION_FRAME(codeobj_6e4b86162d5d35ea61f25aed4de367c4, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e4b86162d5d35ea61f25aed4de367c4->m_type_description == NULL);
    frame_6e4b86162d5d35ea61f25aed4de367c4 = cache_frame_6e4b86162d5d35ea61f25aed4de367c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e4b86162d5d35ea61f25aed4de367c4);
    assert(Py_REFCNT(frame_6e4b86162d5d35ea61f25aed4de367c4) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
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
        exception_tb = MAKE_TRACEBACK(frame_6e4b86162d5d35ea61f25aed4de367c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e4b86162d5d35ea61f25aed4de367c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e4b86162d5d35ea61f25aed4de367c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e4b86162d5d35ea61f25aed4de367c4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6e4b86162d5d35ea61f25aed4de367c4 == cache_frame_6e4b86162d5d35ea61f25aed4de367c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e4b86162d5d35ea61f25aed4de367c4);
        cache_frame_6e4b86162d5d35ea61f25aed4de367c4 = NULL;
    }

    assertFrameObject(frame_6e4b86162d5d35ea61f25aed4de367c4);

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


static PyObject *impl_flet_core$tabs$$$function__17_tabs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_132c569b6544f46354fdf5d53d5954cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_132c569b6544f46354fdf5d53d5954cd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_132c569b6544f46354fdf5d53d5954cd)) {
        Py_XDECREF(cache_frame_132c569b6544f46354fdf5d53d5954cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_132c569b6544f46354fdf5d53d5954cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_132c569b6544f46354fdf5d53d5954cd = MAKE_FUNCTION_FRAME(codeobj_132c569b6544f46354fdf5d53d5954cd, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_132c569b6544f46354fdf5d53d5954cd->m_type_description == NULL);
    frame_132c569b6544f46354fdf5d53d5954cd = cache_frame_132c569b6544f46354fdf5d53d5954cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_132c569b6544f46354fdf5d53d5954cd);
    assert(Py_REFCNT(frame_132c569b6544f46354fdf5d53d5954cd) == 2);

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
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[44], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_132c569b6544f46354fdf5d53d5954cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_132c569b6544f46354fdf5d53d5954cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_132c569b6544f46354fdf5d53d5954cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_132c569b6544f46354fdf5d53d5954cd,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_132c569b6544f46354fdf5d53d5954cd == cache_frame_132c569b6544f46354fdf5d53d5954cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_132c569b6544f46354fdf5d53d5954cd);
        cache_frame_132c569b6544f46354fdf5d53d5954cd = NULL;
    }

    assertFrameObject(frame_132c569b6544f46354fdf5d53d5954cd);

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


static PyObject *impl_flet_core$tabs$$$function__18_on_change(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e70a703f9588b4080a6d7ec4f556db49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e70a703f9588b4080a6d7ec4f556db49 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e70a703f9588b4080a6d7ec4f556db49)) {
        Py_XDECREF(cache_frame_e70a703f9588b4080a6d7ec4f556db49);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e70a703f9588b4080a6d7ec4f556db49 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e70a703f9588b4080a6d7ec4f556db49 = MAKE_FUNCTION_FRAME(codeobj_e70a703f9588b4080a6d7ec4f556db49, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e70a703f9588b4080a6d7ec4f556db49->m_type_description == NULL);
    frame_e70a703f9588b4080a6d7ec4f556db49 = cache_frame_e70a703f9588b4080a6d7ec4f556db49;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e70a703f9588b4080a6d7ec4f556db49);
    assert(Py_REFCNT(frame_e70a703f9588b4080a6d7ec4f556db49) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e70a703f9588b4080a6d7ec4f556db49->m_frame.f_lineno = 246;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[45],
            PyTuple_GET_ITEM(mod_consts[46], 0)
        );

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
        exception_tb = MAKE_TRACEBACK(frame_e70a703f9588b4080a6d7ec4f556db49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e70a703f9588b4080a6d7ec4f556db49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e70a703f9588b4080a6d7ec4f556db49, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e70a703f9588b4080a6d7ec4f556db49,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e70a703f9588b4080a6d7ec4f556db49 == cache_frame_e70a703f9588b4080a6d7ec4f556db49) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e70a703f9588b4080a6d7ec4f556db49);
        cache_frame_e70a703f9588b4080a6d7ec4f556db49 = NULL;
    }

    assertFrameObject(frame_e70a703f9588b4080a6d7ec4f556db49);

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


static PyObject *impl_flet_core$tabs$$$function__19_on_change(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_18434106a8e4d6ab2eccedd3cf9f1547;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18434106a8e4d6ab2eccedd3cf9f1547 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_18434106a8e4d6ab2eccedd3cf9f1547)) {
        Py_XDECREF(cache_frame_18434106a8e4d6ab2eccedd3cf9f1547);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18434106a8e4d6ab2eccedd3cf9f1547 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18434106a8e4d6ab2eccedd3cf9f1547 = MAKE_FUNCTION_FRAME(codeobj_18434106a8e4d6ab2eccedd3cf9f1547, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18434106a8e4d6ab2eccedd3cf9f1547->m_type_description == NULL);
    frame_18434106a8e4d6ab2eccedd3cf9f1547 = cache_frame_18434106a8e4d6ab2eccedd3cf9f1547;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_18434106a8e4d6ab2eccedd3cf9f1547);
    assert(Py_REFCNT(frame_18434106a8e4d6ab2eccedd3cf9f1547) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[48];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_18434106a8e4d6ab2eccedd3cf9f1547->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[47],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
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
        exception_tb = MAKE_TRACEBACK(frame_18434106a8e4d6ab2eccedd3cf9f1547, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18434106a8e4d6ab2eccedd3cf9f1547->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18434106a8e4d6ab2eccedd3cf9f1547, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18434106a8e4d6ab2eccedd3cf9f1547,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_18434106a8e4d6ab2eccedd3cf9f1547 == cache_frame_18434106a8e4d6ab2eccedd3cf9f1547) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18434106a8e4d6ab2eccedd3cf9f1547);
        cache_frame_18434106a8e4d6ab2eccedd3cf9f1547 = NULL;
    }

    assertFrameObject(frame_18434106a8e4d6ab2eccedd3cf9f1547);

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


static PyObject *impl_flet_core$tabs$$$function__20_selected_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ea30aadf3567807668e8b8aaea4f7edc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ea30aadf3567807668e8b8aaea4f7edc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ea30aadf3567807668e8b8aaea4f7edc)) {
        Py_XDECREF(cache_frame_ea30aadf3567807668e8b8aaea4f7edc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea30aadf3567807668e8b8aaea4f7edc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea30aadf3567807668e8b8aaea4f7edc = MAKE_FUNCTION_FRAME(codeobj_ea30aadf3567807668e8b8aaea4f7edc, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea30aadf3567807668e8b8aaea4f7edc->m_type_description == NULL);
    frame_ea30aadf3567807668e8b8aaea4f7edc = cache_frame_ea30aadf3567807668e8b8aaea4f7edc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ea30aadf3567807668e8b8aaea4f7edc);
    assert(Py_REFCNT(frame_ea30aadf3567807668e8b8aaea4f7edc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ea30aadf3567807668e8b8aaea4f7edc->m_frame.f_lineno = 255;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[49], 0), mod_consts[50]);
        Py_DECREF(tmp_called_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_ea30aadf3567807668e8b8aaea4f7edc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea30aadf3567807668e8b8aaea4f7edc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea30aadf3567807668e8b8aaea4f7edc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea30aadf3567807668e8b8aaea4f7edc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ea30aadf3567807668e8b8aaea4f7edc == cache_frame_ea30aadf3567807668e8b8aaea4f7edc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea30aadf3567807668e8b8aaea4f7edc);
        cache_frame_ea30aadf3567807668e8b8aaea4f7edc = NULL;
    }

    assertFrameObject(frame_ea30aadf3567807668e8b8aaea4f7edc);

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


static PyObject *impl_flet_core$tabs$$$function__21_selected_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_4a722c778c448963aecc8aee68ca8310;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4a722c778c448963aecc8aee68ca8310 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4a722c778c448963aecc8aee68ca8310)) {
        Py_XDECREF(cache_frame_4a722c778c448963aecc8aee68ca8310);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a722c778c448963aecc8aee68ca8310 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a722c778c448963aecc8aee68ca8310 = MAKE_FUNCTION_FRAME(codeobj_4a722c778c448963aecc8aee68ca8310, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a722c778c448963aecc8aee68ca8310->m_type_description == NULL);
    frame_4a722c778c448963aecc8aee68ca8310 = cache_frame_4a722c778c448963aecc8aee68ca8310;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4a722c778c448963aecc8aee68ca8310);
    assert(Py_REFCNT(frame_4a722c778c448963aecc8aee68ca8310) == 2);

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
        frame_4a722c778c448963aecc8aee68ca8310->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
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
        exception_tb = MAKE_TRACEBACK(frame_4a722c778c448963aecc8aee68ca8310, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a722c778c448963aecc8aee68ca8310->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a722c778c448963aecc8aee68ca8310, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a722c778c448963aecc8aee68ca8310,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_4a722c778c448963aecc8aee68ca8310 == cache_frame_4a722c778c448963aecc8aee68ca8310) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a722c778c448963aecc8aee68ca8310);
        cache_frame_4a722c778c448963aecc8aee68ca8310 = NULL;
    }

    assertFrameObject(frame_4a722c778c448963aecc8aee68ca8310);

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


static PyObject *impl_flet_core$tabs$$$function__22_scrollable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7f3635b6d9da14e59ab765116bd8518c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f3635b6d9da14e59ab765116bd8518c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f3635b6d9da14e59ab765116bd8518c)) {
        Py_XDECREF(cache_frame_7f3635b6d9da14e59ab765116bd8518c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f3635b6d9da14e59ab765116bd8518c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f3635b6d9da14e59ab765116bd8518c = MAKE_FUNCTION_FRAME(codeobj_7f3635b6d9da14e59ab765116bd8518c, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f3635b6d9da14e59ab765116bd8518c->m_type_description == NULL);
    frame_7f3635b6d9da14e59ab765116bd8518c = cache_frame_7f3635b6d9da14e59ab765116bd8518c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7f3635b6d9da14e59ab765116bd8518c);
    assert(Py_REFCNT(frame_7f3635b6d9da14e59ab765116bd8518c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7f3635b6d9da14e59ab765116bd8518c->m_frame.f_lineno = 264;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[52], 0), mod_consts[50]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
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
        exception_tb = MAKE_TRACEBACK(frame_7f3635b6d9da14e59ab765116bd8518c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f3635b6d9da14e59ab765116bd8518c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f3635b6d9da14e59ab765116bd8518c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f3635b6d9da14e59ab765116bd8518c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7f3635b6d9da14e59ab765116bd8518c == cache_frame_7f3635b6d9da14e59ab765116bd8518c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f3635b6d9da14e59ab765116bd8518c);
        cache_frame_7f3635b6d9da14e59ab765116bd8518c = NULL;
    }

    assertFrameObject(frame_7f3635b6d9da14e59ab765116bd8518c);

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


static PyObject *impl_flet_core$tabs$$$function__23_scrollable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_9f311691b41cd1bda9ad5ee8925dcb37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f311691b41cd1bda9ad5ee8925dcb37 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f311691b41cd1bda9ad5ee8925dcb37)) {
        Py_XDECREF(cache_frame_9f311691b41cd1bda9ad5ee8925dcb37);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f311691b41cd1bda9ad5ee8925dcb37 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f311691b41cd1bda9ad5ee8925dcb37 = MAKE_FUNCTION_FRAME(codeobj_9f311691b41cd1bda9ad5ee8925dcb37, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f311691b41cd1bda9ad5ee8925dcb37->m_type_description == NULL);
    frame_9f311691b41cd1bda9ad5ee8925dcb37 = cache_frame_9f311691b41cd1bda9ad5ee8925dcb37;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9f311691b41cd1bda9ad5ee8925dcb37);
    assert(Py_REFCNT(frame_9f311691b41cd1bda9ad5ee8925dcb37) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[21];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_9f311691b41cd1bda9ad5ee8925dcb37->m_frame.f_lineno = 268;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
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
        exception_tb = MAKE_TRACEBACK(frame_9f311691b41cd1bda9ad5ee8925dcb37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f311691b41cd1bda9ad5ee8925dcb37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f311691b41cd1bda9ad5ee8925dcb37, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f311691b41cd1bda9ad5ee8925dcb37,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_9f311691b41cd1bda9ad5ee8925dcb37 == cache_frame_9f311691b41cd1bda9ad5ee8925dcb37) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f311691b41cd1bda9ad5ee8925dcb37);
        cache_frame_9f311691b41cd1bda9ad5ee8925dcb37 = NULL;
    }

    assertFrameObject(frame_9f311691b41cd1bda9ad5ee8925dcb37);

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


static PyObject *impl_flet_core$tabs$$$function__24_animation_duration(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_38f5dc724fedef1c5f99992201393c10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_38f5dc724fedef1c5f99992201393c10 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_38f5dc724fedef1c5f99992201393c10)) {
        Py_XDECREF(cache_frame_38f5dc724fedef1c5f99992201393c10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_38f5dc724fedef1c5f99992201393c10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_38f5dc724fedef1c5f99992201393c10 = MAKE_FUNCTION_FRAME(codeobj_38f5dc724fedef1c5f99992201393c10, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_38f5dc724fedef1c5f99992201393c10->m_type_description == NULL);
    frame_38f5dc724fedef1c5f99992201393c10 = cache_frame_38f5dc724fedef1c5f99992201393c10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_38f5dc724fedef1c5f99992201393c10);
    assert(Py_REFCNT(frame_38f5dc724fedef1c5f99992201393c10) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_38f5dc724fedef1c5f99992201393c10->m_frame.f_lineno = 273;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[53], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
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
        exception_tb = MAKE_TRACEBACK(frame_38f5dc724fedef1c5f99992201393c10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38f5dc724fedef1c5f99992201393c10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38f5dc724fedef1c5f99992201393c10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_38f5dc724fedef1c5f99992201393c10,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_38f5dc724fedef1c5f99992201393c10 == cache_frame_38f5dc724fedef1c5f99992201393c10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_38f5dc724fedef1c5f99992201393c10);
        cache_frame_38f5dc724fedef1c5f99992201393c10 = NULL;
    }

    assertFrameObject(frame_38f5dc724fedef1c5f99992201393c10);

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


static PyObject *impl_flet_core$tabs$$$function__25_animation_duration(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6965f47488f758a2d8a73184bb511623;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6965f47488f758a2d8a73184bb511623 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6965f47488f758a2d8a73184bb511623)) {
        Py_XDECREF(cache_frame_6965f47488f758a2d8a73184bb511623);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6965f47488f758a2d8a73184bb511623 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6965f47488f758a2d8a73184bb511623 = MAKE_FUNCTION_FRAME(codeobj_6965f47488f758a2d8a73184bb511623, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6965f47488f758a2d8a73184bb511623->m_type_description == NULL);
    frame_6965f47488f758a2d8a73184bb511623 = cache_frame_6965f47488f758a2d8a73184bb511623;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6965f47488f758a2d8a73184bb511623);
    assert(Py_REFCNT(frame_6965f47488f758a2d8a73184bb511623) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[54];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_6965f47488f758a2d8a73184bb511623->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
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
        exception_tb = MAKE_TRACEBACK(frame_6965f47488f758a2d8a73184bb511623, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6965f47488f758a2d8a73184bb511623->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6965f47488f758a2d8a73184bb511623, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6965f47488f758a2d8a73184bb511623,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6965f47488f758a2d8a73184bb511623 == cache_frame_6965f47488f758a2d8a73184bb511623) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6965f47488f758a2d8a73184bb511623);
        cache_frame_6965f47488f758a2d8a73184bb511623 = NULL;
    }

    assertFrameObject(frame_6965f47488f758a2d8a73184bb511623);

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


static PyObject *impl_flet_core$tabs$$$function__26_divider_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cdb0d59736664bd1f98443b11e5d7218;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cdb0d59736664bd1f98443b11e5d7218 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cdb0d59736664bd1f98443b11e5d7218)) {
        Py_XDECREF(cache_frame_cdb0d59736664bd1f98443b11e5d7218);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cdb0d59736664bd1f98443b11e5d7218 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cdb0d59736664bd1f98443b11e5d7218 = MAKE_FUNCTION_FRAME(codeobj_cdb0d59736664bd1f98443b11e5d7218, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cdb0d59736664bd1f98443b11e5d7218->m_type_description == NULL);
    frame_cdb0d59736664bd1f98443b11e5d7218 = cache_frame_cdb0d59736664bd1f98443b11e5d7218;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cdb0d59736664bd1f98443b11e5d7218);
    assert(Py_REFCNT(frame_cdb0d59736664bd1f98443b11e5d7218) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_cdb0d59736664bd1f98443b11e5d7218->m_frame.f_lineno = 282;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
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
        exception_tb = MAKE_TRACEBACK(frame_cdb0d59736664bd1f98443b11e5d7218, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cdb0d59736664bd1f98443b11e5d7218->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cdb0d59736664bd1f98443b11e5d7218, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cdb0d59736664bd1f98443b11e5d7218,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cdb0d59736664bd1f98443b11e5d7218 == cache_frame_cdb0d59736664bd1f98443b11e5d7218) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cdb0d59736664bd1f98443b11e5d7218);
        cache_frame_cdb0d59736664bd1f98443b11e5d7218 = NULL;
    }

    assertFrameObject(frame_cdb0d59736664bd1f98443b11e5d7218);

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


static PyObject *impl_flet_core$tabs$$$function__27_divider_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f3c98bce9c89c45b6691f6180fe89ea9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f3c98bce9c89c45b6691f6180fe89ea9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f3c98bce9c89c45b6691f6180fe89ea9)) {
        Py_XDECREF(cache_frame_f3c98bce9c89c45b6691f6180fe89ea9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3c98bce9c89c45b6691f6180fe89ea9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3c98bce9c89c45b6691f6180fe89ea9 = MAKE_FUNCTION_FRAME(codeobj_f3c98bce9c89c45b6691f6180fe89ea9, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3c98bce9c89c45b6691f6180fe89ea9->m_type_description == NULL);
    frame_f3c98bce9c89c45b6691f6180fe89ea9 = cache_frame_f3c98bce9c89c45b6691f6180fe89ea9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3c98bce9c89c45b6691f6180fe89ea9);
    assert(Py_REFCNT(frame_f3c98bce9c89c45b6691f6180fe89ea9) == 2);

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
        frame_f3c98bce9c89c45b6691f6180fe89ea9->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
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
        exception_tb = MAKE_TRACEBACK(frame_f3c98bce9c89c45b6691f6180fe89ea9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3c98bce9c89c45b6691f6180fe89ea9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3c98bce9c89c45b6691f6180fe89ea9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3c98bce9c89c45b6691f6180fe89ea9,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f3c98bce9c89c45b6691f6180fe89ea9 == cache_frame_f3c98bce9c89c45b6691f6180fe89ea9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3c98bce9c89c45b6691f6180fe89ea9);
        cache_frame_f3c98bce9c89c45b6691f6180fe89ea9 = NULL;
    }

    assertFrameObject(frame_f3c98bce9c89c45b6691f6180fe89ea9);

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


static PyObject *impl_flet_core$tabs$$$function__28_indicator_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a7f3973f26ba7e38d22551b1cffe091d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7f3973f26ba7e38d22551b1cffe091d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a7f3973f26ba7e38d22551b1cffe091d)) {
        Py_XDECREF(cache_frame_a7f3973f26ba7e38d22551b1cffe091d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7f3973f26ba7e38d22551b1cffe091d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7f3973f26ba7e38d22551b1cffe091d = MAKE_FUNCTION_FRAME(codeobj_a7f3973f26ba7e38d22551b1cffe091d, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a7f3973f26ba7e38d22551b1cffe091d->m_type_description == NULL);
    frame_a7f3973f26ba7e38d22551b1cffe091d = cache_frame_a7f3973f26ba7e38d22551b1cffe091d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a7f3973f26ba7e38d22551b1cffe091d);
    assert(Py_REFCNT(frame_a7f3973f26ba7e38d22551b1cffe091d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a7f3973f26ba7e38d22551b1cffe091d->m_frame.f_lineno = 291;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
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
        exception_tb = MAKE_TRACEBACK(frame_a7f3973f26ba7e38d22551b1cffe091d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7f3973f26ba7e38d22551b1cffe091d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7f3973f26ba7e38d22551b1cffe091d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7f3973f26ba7e38d22551b1cffe091d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a7f3973f26ba7e38d22551b1cffe091d == cache_frame_a7f3973f26ba7e38d22551b1cffe091d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a7f3973f26ba7e38d22551b1cffe091d);
        cache_frame_a7f3973f26ba7e38d22551b1cffe091d = NULL;
    }

    assertFrameObject(frame_a7f3973f26ba7e38d22551b1cffe091d);

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


static PyObject *impl_flet_core$tabs$$$function__29_indicator_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ac58d405cf75ceee570aeca1e8470fed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ac58d405cf75ceee570aeca1e8470fed = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ac58d405cf75ceee570aeca1e8470fed)) {
        Py_XDECREF(cache_frame_ac58d405cf75ceee570aeca1e8470fed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac58d405cf75ceee570aeca1e8470fed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac58d405cf75ceee570aeca1e8470fed = MAKE_FUNCTION_FRAME(codeobj_ac58d405cf75ceee570aeca1e8470fed, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ac58d405cf75ceee570aeca1e8470fed->m_type_description == NULL);
    frame_ac58d405cf75ceee570aeca1e8470fed = cache_frame_ac58d405cf75ceee570aeca1e8470fed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ac58d405cf75ceee570aeca1e8470fed);
    assert(Py_REFCNT(frame_ac58d405cf75ceee570aeca1e8470fed) == 2);

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
        frame_ac58d405cf75ceee570aeca1e8470fed->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
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
        exception_tb = MAKE_TRACEBACK(frame_ac58d405cf75ceee570aeca1e8470fed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac58d405cf75ceee570aeca1e8470fed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac58d405cf75ceee570aeca1e8470fed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac58d405cf75ceee570aeca1e8470fed,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ac58d405cf75ceee570aeca1e8470fed == cache_frame_ac58d405cf75ceee570aeca1e8470fed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ac58d405cf75ceee570aeca1e8470fed);
        cache_frame_ac58d405cf75ceee570aeca1e8470fed = NULL;
    }

    assertFrameObject(frame_ac58d405cf75ceee570aeca1e8470fed);

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


static PyObject *impl_flet_core$tabs$$$function__30_indicator_border_radius(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_548f3ed69f0c965a68b20426d74d15cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_548f3ed69f0c965a68b20426d74d15cc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_548f3ed69f0c965a68b20426d74d15cc)) {
        Py_XDECREF(cache_frame_548f3ed69f0c965a68b20426d74d15cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_548f3ed69f0c965a68b20426d74d15cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_548f3ed69f0c965a68b20426d74d15cc = MAKE_FUNCTION_FRAME(codeobj_548f3ed69f0c965a68b20426d74d15cc, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_548f3ed69f0c965a68b20426d74d15cc->m_type_description == NULL);
    frame_548f3ed69f0c965a68b20426d74d15cc = cache_frame_548f3ed69f0c965a68b20426d74d15cc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_548f3ed69f0c965a68b20426d74d15cc);
    assert(Py_REFCNT(frame_548f3ed69f0c965a68b20426d74d15cc) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
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
        exception_tb = MAKE_TRACEBACK(frame_548f3ed69f0c965a68b20426d74d15cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_548f3ed69f0c965a68b20426d74d15cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_548f3ed69f0c965a68b20426d74d15cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_548f3ed69f0c965a68b20426d74d15cc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_548f3ed69f0c965a68b20426d74d15cc == cache_frame_548f3ed69f0c965a68b20426d74d15cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_548f3ed69f0c965a68b20426d74d15cc);
        cache_frame_548f3ed69f0c965a68b20426d74d15cc = NULL;
    }

    assertFrameObject(frame_548f3ed69f0c965a68b20426d74d15cc);

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


static PyObject *impl_flet_core$tabs$$$function__31_indicator_border_radius(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d099a626f6f09f91f9b34e70eb9622ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d099a626f6f09f91f9b34e70eb9622ef = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d099a626f6f09f91f9b34e70eb9622ef)) {
        Py_XDECREF(cache_frame_d099a626f6f09f91f9b34e70eb9622ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d099a626f6f09f91f9b34e70eb9622ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d099a626f6f09f91f9b34e70eb9622ef = MAKE_FUNCTION_FRAME(codeobj_d099a626f6f09f91f9b34e70eb9622ef, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d099a626f6f09f91f9b34e70eb9622ef->m_type_description == NULL);
    frame_d099a626f6f09f91f9b34e70eb9622ef = cache_frame_d099a626f6f09f91f9b34e70eb9622ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d099a626f6f09f91f9b34e70eb9622ef);
    assert(Py_REFCNT(frame_d099a626f6f09f91f9b34e70eb9622ef) == 2);

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


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d099a626f6f09f91f9b34e70eb9622ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d099a626f6f09f91f9b34e70eb9622ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d099a626f6f09f91f9b34e70eb9622ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d099a626f6f09f91f9b34e70eb9622ef,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d099a626f6f09f91f9b34e70eb9622ef == cache_frame_d099a626f6f09f91f9b34e70eb9622ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d099a626f6f09f91f9b34e70eb9622ef);
        cache_frame_d099a626f6f09f91f9b34e70eb9622ef = NULL;
    }

    assertFrameObject(frame_d099a626f6f09f91f9b34e70eb9622ef);

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


static PyObject *impl_flet_core$tabs$$$function__32_indicator_border_side(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0086221d3f4eb3e60be4eb39be314bfe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0086221d3f4eb3e60be4eb39be314bfe = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0086221d3f4eb3e60be4eb39be314bfe)) {
        Py_XDECREF(cache_frame_0086221d3f4eb3e60be4eb39be314bfe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0086221d3f4eb3e60be4eb39be314bfe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0086221d3f4eb3e60be4eb39be314bfe = MAKE_FUNCTION_FRAME(codeobj_0086221d3f4eb3e60be4eb39be314bfe, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0086221d3f4eb3e60be4eb39be314bfe->m_type_description == NULL);
    frame_0086221d3f4eb3e60be4eb39be314bfe = cache_frame_0086221d3f4eb3e60be4eb39be314bfe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0086221d3f4eb3e60be4eb39be314bfe);
    assert(Py_REFCNT(frame_0086221d3f4eb3e60be4eb39be314bfe) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
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
        exception_tb = MAKE_TRACEBACK(frame_0086221d3f4eb3e60be4eb39be314bfe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0086221d3f4eb3e60be4eb39be314bfe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0086221d3f4eb3e60be4eb39be314bfe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0086221d3f4eb3e60be4eb39be314bfe,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0086221d3f4eb3e60be4eb39be314bfe == cache_frame_0086221d3f4eb3e60be4eb39be314bfe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0086221d3f4eb3e60be4eb39be314bfe);
        cache_frame_0086221d3f4eb3e60be4eb39be314bfe = NULL;
    }

    assertFrameObject(frame_0086221d3f4eb3e60be4eb39be314bfe);

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


static PyObject *impl_flet_core$tabs$$$function__33_indicator_border_side(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_30513792668eebb8b1a9986041a868b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30513792668eebb8b1a9986041a868b1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_30513792668eebb8b1a9986041a868b1)) {
        Py_XDECREF(cache_frame_30513792668eebb8b1a9986041a868b1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30513792668eebb8b1a9986041a868b1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30513792668eebb8b1a9986041a868b1 = MAKE_FUNCTION_FRAME(codeobj_30513792668eebb8b1a9986041a868b1, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30513792668eebb8b1a9986041a868b1->m_type_description == NULL);
    frame_30513792668eebb8b1a9986041a868b1 = cache_frame_30513792668eebb8b1a9986041a868b1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_30513792668eebb8b1a9986041a868b1);
    assert(Py_REFCNT(frame_30513792668eebb8b1a9986041a868b1) == 2);

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


            exception_lineno = 313;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_30513792668eebb8b1a9986041a868b1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30513792668eebb8b1a9986041a868b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30513792668eebb8b1a9986041a868b1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30513792668eebb8b1a9986041a868b1,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_30513792668eebb8b1a9986041a868b1 == cache_frame_30513792668eebb8b1a9986041a868b1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30513792668eebb8b1a9986041a868b1);
        cache_frame_30513792668eebb8b1a9986041a868b1 = NULL;
    }

    assertFrameObject(frame_30513792668eebb8b1a9986041a868b1);

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


static PyObject *impl_flet_core$tabs$$$function__34_indicator_padding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fd6ac1454c037430a745dc3fdafe8047;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd6ac1454c037430a745dc3fdafe8047 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd6ac1454c037430a745dc3fdafe8047)) {
        Py_XDECREF(cache_frame_fd6ac1454c037430a745dc3fdafe8047);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd6ac1454c037430a745dc3fdafe8047 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd6ac1454c037430a745dc3fdafe8047 = MAKE_FUNCTION_FRAME(codeobj_fd6ac1454c037430a745dc3fdafe8047, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd6ac1454c037430a745dc3fdafe8047->m_type_description == NULL);
    frame_fd6ac1454c037430a745dc3fdafe8047 = cache_frame_fd6ac1454c037430a745dc3fdafe8047;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fd6ac1454c037430a745dc3fdafe8047);
    assert(Py_REFCNT(frame_fd6ac1454c037430a745dc3fdafe8047) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
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
        exception_tb = MAKE_TRACEBACK(frame_fd6ac1454c037430a745dc3fdafe8047, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd6ac1454c037430a745dc3fdafe8047->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd6ac1454c037430a745dc3fdafe8047, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd6ac1454c037430a745dc3fdafe8047,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fd6ac1454c037430a745dc3fdafe8047 == cache_frame_fd6ac1454c037430a745dc3fdafe8047) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd6ac1454c037430a745dc3fdafe8047);
        cache_frame_fd6ac1454c037430a745dc3fdafe8047 = NULL;
    }

    assertFrameObject(frame_fd6ac1454c037430a745dc3fdafe8047);

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


static PyObject *impl_flet_core$tabs$$$function__35_indicator_padding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6448f9d1fa4c3dc15fcf1e73eac24222;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6448f9d1fa4c3dc15fcf1e73eac24222 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6448f9d1fa4c3dc15fcf1e73eac24222)) {
        Py_XDECREF(cache_frame_6448f9d1fa4c3dc15fcf1e73eac24222);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6448f9d1fa4c3dc15fcf1e73eac24222 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6448f9d1fa4c3dc15fcf1e73eac24222 = MAKE_FUNCTION_FRAME(codeobj_6448f9d1fa4c3dc15fcf1e73eac24222, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6448f9d1fa4c3dc15fcf1e73eac24222->m_type_description == NULL);
    frame_6448f9d1fa4c3dc15fcf1e73eac24222 = cache_frame_6448f9d1fa4c3dc15fcf1e73eac24222;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6448f9d1fa4c3dc15fcf1e73eac24222);
    assert(Py_REFCNT(frame_6448f9d1fa4c3dc15fcf1e73eac24222) == 2);

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


            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6448f9d1fa4c3dc15fcf1e73eac24222, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6448f9d1fa4c3dc15fcf1e73eac24222->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6448f9d1fa4c3dc15fcf1e73eac24222, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6448f9d1fa4c3dc15fcf1e73eac24222,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6448f9d1fa4c3dc15fcf1e73eac24222 == cache_frame_6448f9d1fa4c3dc15fcf1e73eac24222) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6448f9d1fa4c3dc15fcf1e73eac24222);
        cache_frame_6448f9d1fa4c3dc15fcf1e73eac24222 = NULL;
    }

    assertFrameObject(frame_6448f9d1fa4c3dc15fcf1e73eac24222);

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


static PyObject *impl_flet_core$tabs$$$function__36_indicator_tab_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5a5a9a9936fec2e4eab78f9d5d26bc59;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5a5a9a9936fec2e4eab78f9d5d26bc59 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5a5a9a9936fec2e4eab78f9d5d26bc59)) {
        Py_XDECREF(cache_frame_5a5a9a9936fec2e4eab78f9d5d26bc59);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5a5a9a9936fec2e4eab78f9d5d26bc59 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5a5a9a9936fec2e4eab78f9d5d26bc59 = MAKE_FUNCTION_FRAME(codeobj_5a5a9a9936fec2e4eab78f9d5d26bc59, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5a5a9a9936fec2e4eab78f9d5d26bc59->m_type_description == NULL);
    frame_5a5a9a9936fec2e4eab78f9d5d26bc59 = cache_frame_5a5a9a9936fec2e4eab78f9d5d26bc59;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5a5a9a9936fec2e4eab78f9d5d26bc59);
    assert(Py_REFCNT(frame_5a5a9a9936fec2e4eab78f9d5d26bc59) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5a5a9a9936fec2e4eab78f9d5d26bc59->m_frame.f_lineno = 327;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[50]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
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
        exception_tb = MAKE_TRACEBACK(frame_5a5a9a9936fec2e4eab78f9d5d26bc59, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5a5a9a9936fec2e4eab78f9d5d26bc59->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5a5a9a9936fec2e4eab78f9d5d26bc59, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5a5a9a9936fec2e4eab78f9d5d26bc59,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5a5a9a9936fec2e4eab78f9d5d26bc59 == cache_frame_5a5a9a9936fec2e4eab78f9d5d26bc59) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5a5a9a9936fec2e4eab78f9d5d26bc59);
        cache_frame_5a5a9a9936fec2e4eab78f9d5d26bc59 = NULL;
    }

    assertFrameObject(frame_5a5a9a9936fec2e4eab78f9d5d26bc59);

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


static PyObject *impl_flet_core$tabs$$$function__37_indicator_tab_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_037d380761bc7686312f465ecad9651b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_037d380761bc7686312f465ecad9651b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_037d380761bc7686312f465ecad9651b)) {
        Py_XDECREF(cache_frame_037d380761bc7686312f465ecad9651b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_037d380761bc7686312f465ecad9651b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_037d380761bc7686312f465ecad9651b = MAKE_FUNCTION_FRAME(codeobj_037d380761bc7686312f465ecad9651b, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_037d380761bc7686312f465ecad9651b->m_type_description == NULL);
    frame_037d380761bc7686312f465ecad9651b = cache_frame_037d380761bc7686312f465ecad9651b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_037d380761bc7686312f465ecad9651b);
    assert(Py_REFCNT(frame_037d380761bc7686312f465ecad9651b) == 2);

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
        frame_037d380761bc7686312f465ecad9651b->m_frame.f_lineno = 331;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
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
        exception_tb = MAKE_TRACEBACK(frame_037d380761bc7686312f465ecad9651b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_037d380761bc7686312f465ecad9651b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_037d380761bc7686312f465ecad9651b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_037d380761bc7686312f465ecad9651b,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_037d380761bc7686312f465ecad9651b == cache_frame_037d380761bc7686312f465ecad9651b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_037d380761bc7686312f465ecad9651b);
        cache_frame_037d380761bc7686312f465ecad9651b = NULL;
    }

    assertFrameObject(frame_037d380761bc7686312f465ecad9651b);

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


static PyObject *impl_flet_core$tabs$$$function__38_label_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4c344b50fc50b2d32544f7bd0eb51230;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c344b50fc50b2d32544f7bd0eb51230 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4c344b50fc50b2d32544f7bd0eb51230)) {
        Py_XDECREF(cache_frame_4c344b50fc50b2d32544f7bd0eb51230);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c344b50fc50b2d32544f7bd0eb51230 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c344b50fc50b2d32544f7bd0eb51230 = MAKE_FUNCTION_FRAME(codeobj_4c344b50fc50b2d32544f7bd0eb51230, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c344b50fc50b2d32544f7bd0eb51230->m_type_description == NULL);
    frame_4c344b50fc50b2d32544f7bd0eb51230 = cache_frame_4c344b50fc50b2d32544f7bd0eb51230;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c344b50fc50b2d32544f7bd0eb51230);
    assert(Py_REFCNT(frame_4c344b50fc50b2d32544f7bd0eb51230) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_4c344b50fc50b2d32544f7bd0eb51230->m_frame.f_lineno = 336;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
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
        exception_tb = MAKE_TRACEBACK(frame_4c344b50fc50b2d32544f7bd0eb51230, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c344b50fc50b2d32544f7bd0eb51230->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c344b50fc50b2d32544f7bd0eb51230, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c344b50fc50b2d32544f7bd0eb51230,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4c344b50fc50b2d32544f7bd0eb51230 == cache_frame_4c344b50fc50b2d32544f7bd0eb51230) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c344b50fc50b2d32544f7bd0eb51230);
        cache_frame_4c344b50fc50b2d32544f7bd0eb51230 = NULL;
    }

    assertFrameObject(frame_4c344b50fc50b2d32544f7bd0eb51230);

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


static PyObject *impl_flet_core$tabs$$$function__39_label_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_0c9f575b6457684fb036bc898477c305;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0c9f575b6457684fb036bc898477c305 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c9f575b6457684fb036bc898477c305)) {
        Py_XDECREF(cache_frame_0c9f575b6457684fb036bc898477c305);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c9f575b6457684fb036bc898477c305 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c9f575b6457684fb036bc898477c305 = MAKE_FUNCTION_FRAME(codeobj_0c9f575b6457684fb036bc898477c305, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c9f575b6457684fb036bc898477c305->m_type_description == NULL);
    frame_0c9f575b6457684fb036bc898477c305 = cache_frame_0c9f575b6457684fb036bc898477c305;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0c9f575b6457684fb036bc898477c305);
    assert(Py_REFCNT(frame_0c9f575b6457684fb036bc898477c305) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[62];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_0c9f575b6457684fb036bc898477c305->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
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
        exception_tb = MAKE_TRACEBACK(frame_0c9f575b6457684fb036bc898477c305, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c9f575b6457684fb036bc898477c305->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c9f575b6457684fb036bc898477c305, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c9f575b6457684fb036bc898477c305,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_0c9f575b6457684fb036bc898477c305 == cache_frame_0c9f575b6457684fb036bc898477c305) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c9f575b6457684fb036bc898477c305);
        cache_frame_0c9f575b6457684fb036bc898477c305 = NULL;
    }

    assertFrameObject(frame_0c9f575b6457684fb036bc898477c305);

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


static PyObject *impl_flet_core$tabs$$$function__40_unselected_label_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_70c3bbc5591293114987b61a1225f6c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_70c3bbc5591293114987b61a1225f6c9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_70c3bbc5591293114987b61a1225f6c9)) {
        Py_XDECREF(cache_frame_70c3bbc5591293114987b61a1225f6c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70c3bbc5591293114987b61a1225f6c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70c3bbc5591293114987b61a1225f6c9 = MAKE_FUNCTION_FRAME(codeobj_70c3bbc5591293114987b61a1225f6c9, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70c3bbc5591293114987b61a1225f6c9->m_type_description == NULL);
    frame_70c3bbc5591293114987b61a1225f6c9 = cache_frame_70c3bbc5591293114987b61a1225f6c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_70c3bbc5591293114987b61a1225f6c9);
    assert(Py_REFCNT(frame_70c3bbc5591293114987b61a1225f6c9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_70c3bbc5591293114987b61a1225f6c9->m_frame.f_lineno = 345;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
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
        exception_tb = MAKE_TRACEBACK(frame_70c3bbc5591293114987b61a1225f6c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70c3bbc5591293114987b61a1225f6c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70c3bbc5591293114987b61a1225f6c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70c3bbc5591293114987b61a1225f6c9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_70c3bbc5591293114987b61a1225f6c9 == cache_frame_70c3bbc5591293114987b61a1225f6c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70c3bbc5591293114987b61a1225f6c9);
        cache_frame_70c3bbc5591293114987b61a1225f6c9 = NULL;
    }

    assertFrameObject(frame_70c3bbc5591293114987b61a1225f6c9);

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


static PyObject *impl_flet_core$tabs$$$function__41_unselected_label_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_1d7d8d659e3e88d4751eb88943c071dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1d7d8d659e3e88d4751eb88943c071dd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1d7d8d659e3e88d4751eb88943c071dd)) {
        Py_XDECREF(cache_frame_1d7d8d659e3e88d4751eb88943c071dd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d7d8d659e3e88d4751eb88943c071dd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d7d8d659e3e88d4751eb88943c071dd = MAKE_FUNCTION_FRAME(codeobj_1d7d8d659e3e88d4751eb88943c071dd, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d7d8d659e3e88d4751eb88943c071dd->m_type_description == NULL);
    frame_1d7d8d659e3e88d4751eb88943c071dd = cache_frame_1d7d8d659e3e88d4751eb88943c071dd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1d7d8d659e3e88d4751eb88943c071dd);
    assert(Py_REFCNT(frame_1d7d8d659e3e88d4751eb88943c071dd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[64];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_1d7d8d659e3e88d4751eb88943c071dd->m_frame.f_lineno = 349;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
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
        exception_tb = MAKE_TRACEBACK(frame_1d7d8d659e3e88d4751eb88943c071dd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d7d8d659e3e88d4751eb88943c071dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d7d8d659e3e88d4751eb88943c071dd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d7d8d659e3e88d4751eb88943c071dd,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_1d7d8d659e3e88d4751eb88943c071dd == cache_frame_1d7d8d659e3e88d4751eb88943c071dd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d7d8d659e3e88d4751eb88943c071dd);
        cache_frame_1d7d8d659e3e88d4751eb88943c071dd = NULL;
    }

    assertFrameObject(frame_1d7d8d659e3e88d4751eb88943c071dd);

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


static PyObject *impl_flet_core$tabs$$$function__42_overlay_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b2abc78098f2afbcb56c929cb9a788e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b2abc78098f2afbcb56c929cb9a788e1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b2abc78098f2afbcb56c929cb9a788e1)) {
        Py_XDECREF(cache_frame_b2abc78098f2afbcb56c929cb9a788e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2abc78098f2afbcb56c929cb9a788e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2abc78098f2afbcb56c929cb9a788e1 = MAKE_FUNCTION_FRAME(codeobj_b2abc78098f2afbcb56c929cb9a788e1, module_flet_core$tabs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b2abc78098f2afbcb56c929cb9a788e1->m_type_description == NULL);
    frame_b2abc78098f2afbcb56c929cb9a788e1 = cache_frame_b2abc78098f2afbcb56c929cb9a788e1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b2abc78098f2afbcb56c929cb9a788e1);
    assert(Py_REFCNT(frame_b2abc78098f2afbcb56c929cb9a788e1) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
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
        exception_tb = MAKE_TRACEBACK(frame_b2abc78098f2afbcb56c929cb9a788e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2abc78098f2afbcb56c929cb9a788e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2abc78098f2afbcb56c929cb9a788e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2abc78098f2afbcb56c929cb9a788e1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b2abc78098f2afbcb56c929cb9a788e1 == cache_frame_b2abc78098f2afbcb56c929cb9a788e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b2abc78098f2afbcb56c929cb9a788e1);
        cache_frame_b2abc78098f2afbcb56c929cb9a788e1 = NULL;
    }

    assertFrameObject(frame_b2abc78098f2afbcb56c929cb9a788e1);

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


static PyObject *impl_flet_core$tabs$$$function__43_overlay_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_0ea572ab68cbbdfe3e0c2b5397b4351c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0ea572ab68cbbdfe3e0c2b5397b4351c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0ea572ab68cbbdfe3e0c2b5397b4351c)) {
        Py_XDECREF(cache_frame_0ea572ab68cbbdfe3e0c2b5397b4351c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ea572ab68cbbdfe3e0c2b5397b4351c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ea572ab68cbbdfe3e0c2b5397b4351c = MAKE_FUNCTION_FRAME(codeobj_0ea572ab68cbbdfe3e0c2b5397b4351c, module_flet_core$tabs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0ea572ab68cbbdfe3e0c2b5397b4351c->m_type_description == NULL);
    frame_0ea572ab68cbbdfe3e0c2b5397b4351c = cache_frame_0ea572ab68cbbdfe3e0c2b5397b4351c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0ea572ab68cbbdfe3e0c2b5397b4351c);
    assert(Py_REFCNT(frame_0ea572ab68cbbdfe3e0c2b5397b4351c) == 2);

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


            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ea572ab68cbbdfe3e0c2b5397b4351c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ea572ab68cbbdfe3e0c2b5397b4351c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ea572ab68cbbdfe3e0c2b5397b4351c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ea572ab68cbbdfe3e0c2b5397b4351c,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_0ea572ab68cbbdfe3e0c2b5397b4351c == cache_frame_0ea572ab68cbbdfe3e0c2b5397b4351c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0ea572ab68cbbdfe3e0c2b5397b4351c);
        cache_frame_0ea572ab68cbbdfe3e0c2b5397b4351c = NULL;
    }

    assertFrameObject(frame_0ea572ab68cbbdfe3e0c2b5397b4351c);

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



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__10_content() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__10_content,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_94f6e7abb37a787baf8c01f44f8c8cda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__11_content() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__11_content,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_114937a058c0b855573601fc3c6542f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__12___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__12___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_0e2a650d63e1349f8b8af8f73a584fab,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__13__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_e88c48b57f9e31926322cf55453c9c22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[19]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__14__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__14__before_build_command,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_0706cb7db125bff6ef3b0f3cb9b80f1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__15__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__15__get_children,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_1293418b3b15f38e1a9dc9b78a686c15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__16_tabs(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__16_tabs,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_6e4b86162d5d35ea61f25aed4de367c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__17_tabs(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__17_tabs,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_132c569b6544f46354fdf5d53d5954cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__18_on_change() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__18_on_change,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_e70a703f9588b4080a6d7ec4f556db49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__19_on_change() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__19_on_change,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_18434106a8e4d6ab2eccedd3cf9f1547,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_2c6b6fea802a3274432893ccc520576c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__20_selected_index(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__20_selected_index,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_ea30aadf3567807668e8b8aaea4f7edc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__21_selected_index(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__21_selected_index,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_4a722c778c448963aecc8aee68ca8310,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__22_scrollable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__22_scrollable,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_7f3635b6d9da14e59ab765116bd8518c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__23_scrollable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__23_scrollable,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_9f311691b41cd1bda9ad5ee8925dcb37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__24_animation_duration(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__24_animation_duration,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_38f5dc724fedef1c5f99992201393c10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__25_animation_duration(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__25_animation_duration,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_6965f47488f758a2d8a73184bb511623,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__26_divider_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__26_divider_color,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_cdb0d59736664bd1f98443b11e5d7218,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__27_divider_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__27_divider_color,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_f3c98bce9c89c45b6691f6180fe89ea9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__28_indicator_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__28_indicator_color,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_a7f3973f26ba7e38d22551b1cffe091d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__29_indicator_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__29_indicator_color,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_ac58d405cf75ceee570aeca1e8470fed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_570bde0833e3952460e62316287126e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[115]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__30_indicator_border_radius(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__30_indicator_border_radius,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_548f3ed69f0c965a68b20426d74d15cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__31_indicator_border_radius(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__31_indicator_border_radius,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_d099a626f6f09f91f9b34e70eb9622ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__32_indicator_border_side(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__32_indicator_border_side,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_0086221d3f4eb3e60be4eb39be314bfe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__33_indicator_border_side(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__33_indicator_border_side,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_30513792668eebb8b1a9986041a868b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__34_indicator_padding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__34_indicator_padding,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_fd6ac1454c037430a745dc3fdafe8047,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__35_indicator_padding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__35_indicator_padding,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_6448f9d1fa4c3dc15fcf1e73eac24222,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__36_indicator_tab_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__36_indicator_tab_size,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_5a5a9a9936fec2e4eab78f9d5d26bc59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__37_indicator_tab_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__37_indicator_tab_size,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_037d380761bc7686312f465ecad9651b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__38_label_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__38_label_color,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_4c344b50fc50b2d32544f7bd0eb51230,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__39_label_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__39_label_color,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_0c9f575b6457684fb036bc898477c305,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__3__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__3__get_children,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_25e9fc2418c3941340e7b649ee6a6ae3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__40_unselected_label_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__40_unselected_label_color,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_70c3bbc5591293114987b61a1225f6c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__41_unselected_label_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__41_unselected_label_color,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_1d7d8d659e3e88d4751eb88943c071dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__42_overlay_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__42_overlay_color,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_b2abc78098f2afbcb56c929cb9a788e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__43_overlay_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__43_overlay_color,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_0ea572ab68cbbdfe3e0c2b5397b4351c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__4_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__4_text,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_126e98d5dcf2184b5988d713b62bfa64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__5_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__5_text,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_8bc1cbea08c0bbfe15d8e84dfed63139,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__6_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__6_icon,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_22e27fc815c732483330f2d339ff42af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__7_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__7_icon,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_c5af5455e1ab192fa4ffc5252ac1be12,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__8_tab_content() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__8_tab_content,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_db664b9ee54032a7cedc60fd99ac2b0d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$tabs$$$function__9_tab_content() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$tabs$$$function__9_tab_content,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_492b72116ceeec26ce1797cfe3359e92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$tabs,
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

function_impl_code functable_flet_core$tabs[] = {
    impl_flet_core$tabs$$$function__1___init__,
    NULL,
    impl_flet_core$tabs$$$function__3__get_children,
    impl_flet_core$tabs$$$function__4_text,
    impl_flet_core$tabs$$$function__5_text,
    impl_flet_core$tabs$$$function__6_icon,
    impl_flet_core$tabs$$$function__7_icon,
    impl_flet_core$tabs$$$function__8_tab_content,
    impl_flet_core$tabs$$$function__9_tab_content,
    impl_flet_core$tabs$$$function__10_content,
    impl_flet_core$tabs$$$function__11_content,
    impl_flet_core$tabs$$$function__12___init__,
    NULL,
    impl_flet_core$tabs$$$function__14__before_build_command,
    impl_flet_core$tabs$$$function__15__get_children,
    impl_flet_core$tabs$$$function__16_tabs,
    impl_flet_core$tabs$$$function__17_tabs,
    impl_flet_core$tabs$$$function__18_on_change,
    impl_flet_core$tabs$$$function__19_on_change,
    impl_flet_core$tabs$$$function__20_selected_index,
    impl_flet_core$tabs$$$function__21_selected_index,
    impl_flet_core$tabs$$$function__22_scrollable,
    impl_flet_core$tabs$$$function__23_scrollable,
    impl_flet_core$tabs$$$function__24_animation_duration,
    impl_flet_core$tabs$$$function__25_animation_duration,
    impl_flet_core$tabs$$$function__26_divider_color,
    impl_flet_core$tabs$$$function__27_divider_color,
    impl_flet_core$tabs$$$function__28_indicator_color,
    impl_flet_core$tabs$$$function__29_indicator_color,
    impl_flet_core$tabs$$$function__30_indicator_border_radius,
    impl_flet_core$tabs$$$function__31_indicator_border_radius,
    impl_flet_core$tabs$$$function__32_indicator_border_side,
    impl_flet_core$tabs$$$function__33_indicator_border_side,
    impl_flet_core$tabs$$$function__34_indicator_padding,
    impl_flet_core$tabs$$$function__35_indicator_padding,
    impl_flet_core$tabs$$$function__36_indicator_tab_size,
    impl_flet_core$tabs$$$function__37_indicator_tab_size,
    impl_flet_core$tabs$$$function__38_label_color,
    impl_flet_core$tabs$$$function__39_label_color,
    impl_flet_core$tabs$$$function__40_unselected_label_color,
    impl_flet_core$tabs$$$function__41_unselected_label_color,
    impl_flet_core$tabs$$$function__42_overlay_color,
    impl_flet_core$tabs$$$function__43_overlay_color,
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

    function_impl_code *current = functable_flet_core$tabs;
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

    if (offset > sizeof(functable_flet_core$tabs) || offset < 0) {
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
        functable_flet_core$tabs[offset],
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
        module_flet_core$tabs,
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
PyObject *modulecode_flet_core$tabs(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.tabs");

    // Store the module for future use.
    module_flet_core$tabs = module;

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
        PRINT_STRING("flet_core.tabs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.tabs: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.tabs: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$tabs\n");

    moduledict_flet_core$tabs = MODULE_DICT(module_flet_core$tabs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$tabs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$tabs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[184]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$tabs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$tabs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$tabs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$tabs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$tabs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$tabs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$tabs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$tabs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_5bd3f3d395bd8af5531bbbf7f1fcb564;
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
    PyObject *locals_flet_core$tabs$$$class__1_Tab_20 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bc7e9116f603136b67ace901d512ef70_2;
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
    PyObject *locals_flet_core$tabs$$$class__2_Tabs_87 = NULL;
    struct Nuitka_FrameObject *frame_e914e048a6b997f074a75187e7595825_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_2);
    }
    frame_5bd3f3d395bd8af5531bbbf7f1fcb564 = MAKE_MODULE_FRAME(codeobj_5bd3f3d395bd8af5531bbbf7f1fcb564, module_flet_core$tabs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5bd3f3d395bd8af5531bbbf7f1fcb564);
    assert(Py_REFCNT(frame_5bd3f3d395bd8af5531bbbf7f1fcb564) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[66];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[69], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[70], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_3);
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
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[72],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[72]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[74],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[74]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[75],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[75]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[76],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[76]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[77],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[77]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_9);
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
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[78];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$tabs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[79];
        tmp_level_value_1 = mod_consts[73];
        frame_5bd3f3d395bd8af5531bbbf7f1fcb564->m_frame.f_lineno = 3;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[80],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[80]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[81];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$tabs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[82];
        tmp_level_value_2 = mod_consts[73];
        frame_5bd3f3d395bd8af5531bbbf7f1fcb564->m_frame.f_lineno = 4;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[83],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[83]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[84];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$tabs;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[85];
        tmp_level_value_3 = mod_consts[73];
        frame_5bd3f3d395bd8af5531bbbf7f1fcb564->m_frame.f_lineno = 5;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[17],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[86];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$tabs;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[87];
        tmp_level_value_4 = mod_consts[73];
        frame_5bd3f3d395bd8af5531bbbf7f1fcb564->m_frame.f_lineno = 6;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[0],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[0]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[88],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[88]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[89];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$tabs;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[90];
        tmp_level_value_5 = mod_consts[73];
        frame_5bd3f3d395bd8af5531bbbf7f1fcb564->m_frame.f_lineno = 7;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[91],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[91]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[92];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$tabs;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[93];
        tmp_level_value_6 = mod_consts[73];
        frame_5bd3f3d395bd8af5531bbbf7f1fcb564->m_frame.f_lineno = 8;
        tmp_assign_source_17 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[94],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[94]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[95],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[95]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[96],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[96]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[97],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[97]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[98],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[98]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[99],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[99]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[100],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[100]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_flet_core$tabs,
                mod_consts[101],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[101]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_25);
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
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        tmp_assign_source_26 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_27 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
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


            exception_lineno = 20;

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
        tmp_subscript_value_1 = mod_consts[73];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_29 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[102]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[102]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[103];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_5bd3f3d395bd8af5531bbbf7f1fcb564->m_frame.f_lineno = 20;
        tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[104]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

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
        tmp_mod_expr_left_1 = mod_consts[105];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[106];
        tmp_getattr_default_1 = mod_consts[107];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[106]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

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


            exception_lineno = 20;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 20;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_31;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$tabs$$$class__1_Tab_20 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[108];
        tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[109], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_6;
        }
        frame_bc7e9116f603136b67ace901d512ef70_2 = MAKE_CLASS_FRAME(codeobj_bc7e9116f603136b67ace901d512ef70, module_flet_core$tabs, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_bc7e9116f603136b67ace901d512ef70_2);
        assert(Py_REFCNT(frame_bc7e9116f603136b67ace901d512ef70_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            tmp_defaults_1 = mod_consts[111];
            tmp_dict_key_1 = mod_consts[3];
            tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[76]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 23;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[112]);

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


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_6;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[6];
                tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[76]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 24;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[0]);

                if (tmp_subscript_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_subscript_value_3 == NULL)) {
                            tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_subscript_value_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_7);

                            exception_lineno = 24;
                            type_description_2 = "o";
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


                    exception_lineno = 24;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[76]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 25;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[0]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_subscript_value_4 == NULL)) {
                            tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_subscript_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_8);

                            exception_lineno = 25;
                            type_description_2 = "o";
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


                    exception_lineno = 25;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[113];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[76]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 26;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[91]);

                if (tmp_subscript_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[91]);

                        if (unlikely(tmp_subscript_value_5 == NULL)) {
                            tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                        }

                        if (tmp_subscript_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_9);

                            exception_lineno = 26;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 26;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[4];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[76]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 27;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[112]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 27;
                    type_description_2 = "o";
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$tabs$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$tabs$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[116], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$tabs$$$function__3__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[120]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$tabs$$$function__4_text();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 51;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$tabs$$$function__4_text();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 51;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[3]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$tabs$$$function__5_text();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 55;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[122], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[120]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$tabs$$$function__6_icon();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 60;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$tabs$$$function__6_icon();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 60;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_6;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[4]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$tabs$$$function__7_icon();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 64;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[122], tmp_args_element_value_6);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[120]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$tabs$$$function__8_tab_content();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$tabs$$$function__8_tab_content();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_9;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[8]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$tabs$$$function__9_tab_content();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 73;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[122], tmp_args_element_value_9);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_11;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_8 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[120]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$tabs$$$function__10_content();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 78;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$tabs$$$function__10_content();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 78;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_12;
            tmp_called_instance_4 = PyObject_GetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[6]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$tabs$$$function__11_content();

            frame_bc7e9116f603136b67ace901d512ef70_2->m_frame.f_lineno = 82;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[122], tmp_args_element_value_12);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bc7e9116f603136b67ace901d512ef70_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bc7e9116f603136b67ace901d512ef70_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bc7e9116f603136b67ace901d512ef70_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bc7e9116f603136b67ace901d512ef70_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_bc7e9116f603136b67ace901d512ef70_2);

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
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__1_Tab_20, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_10 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[103];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$tabs$$$class__1_Tab_20;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_5bd3f3d395bd8af5531bbbf7f1fcb564->m_frame.f_lineno = 20;
            tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_33;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_32 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_flet_core$tabs$$$class__1_Tab_20);
        locals_flet_core$tabs$$$class__1_Tab_20 = NULL;
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

        Py_DECREF(locals_flet_core$tabs$$$class__1_Tab_20);
        locals_flet_core$tabs$$$class__1_Tab_20 = NULL;
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
        exception_lineno = 20;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_32);
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
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        tmp_assign_source_34 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_35 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_11 = tmp_class_creation_2__bases;
        tmp_subscript_value_7 = mod_consts[73];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_7, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_37 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_37;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[102]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_13 = tmp_class_creation_2__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[102]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        tmp_tuple_element_6 = mod_consts[127];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_5bd3f3d395bd8af5531bbbf7f1fcb564->m_frame.f_lineno = 87;
        tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_14 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[104]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[105];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[106];
        tmp_getattr_default_2 = mod_consts[107];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[106]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 87;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_39;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$tabs$$$class__2_Tabs_87 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[108];
        tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[109], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_9;
        }
        frame_e914e048a6b997f074a75187e7595825_3 = MAKE_CLASS_FRAME(codeobj_e914e048a6b997f074a75187e7595825, module_flet_core$tabs, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e914e048a6b997f074a75187e7595825_3);
        assert(Py_REFCNT(frame_e914e048a6b997f074a75187e7595825_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_8;
            tmp_defaults_2 = mod_consts[129];
            tmp_dict_key_2 = mod_consts[113];
            tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 135;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[91]);

            if (tmp_subscript_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_subscript_value_8 == NULL)) {
                        tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_subscript_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_16);

                        exception_lineno = 135;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_16);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 37 );
            {
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_tuple_element_9;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[130];
                tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 136;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_9);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 136;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[131];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[88]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 137;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[132];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[88]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 138;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[133];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[88]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 139;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[134];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[88]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 140;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[135];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[88]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 141;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[136];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[88]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 142;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[137];
                tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[77]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 143;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_8 = Py_None;
                tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[138]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[139]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_10, 2, tmp_tuple_element_8);
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[140];
                tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 144;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[99]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[99]);

                        if (unlikely(tmp_subscript_value_11 == NULL)) {
                            tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
                        }

                        if (tmp_subscript_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_19);

                            exception_lineno = 144;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[141];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[88]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 145;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[142];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[100]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[100]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 146;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[143];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[101]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[101]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 147;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[144];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[97]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[97]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 148;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[145];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[88]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 149;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[146];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[94]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 150;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[147];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[94]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 151;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[148];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[94]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 152;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[149];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[94]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 153;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[150];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[94]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 154;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[151];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[94]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 155;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[152];
                tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 157;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[138]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[153];
                tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[138]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[154];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[72]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[72]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 159;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[19];
                tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 162;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[75]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[75]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_22);

                            exception_lineno = 162;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[103]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_subscript_value_15 == NULL)) {
                            tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_subscript_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_22);
                            Py_DECREF(tmp_expression_value_23);

                            exception_lineno = 162;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_subscript_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_22);

                    exception_lineno = 162;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 162;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[20];
                tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 163;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[139]);

                if (tmp_subscript_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_16 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_16);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[21];
                tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 164;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[138]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_17);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[22];
                tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 165;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[139]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_18);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[23];
                tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 166;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_19);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[26];
                tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 167;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                if (tmp_subscript_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_20);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[27];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[95]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[95]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 168;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[28];
                tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 169;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[80]);

                if (tmp_subscript_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[80]);

                        if (unlikely(tmp_subscript_value_21 == NULL)) {
                            tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                        }

                        if (tmp_subscript_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_29);

                            exception_lineno = 169;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_21);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[29];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[98]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[98]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 170;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[30];
                tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 171;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[138]);

                if (tmp_subscript_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_22 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_22);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[24];
                tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 172;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                if (tmp_subscript_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_23 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_23);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 172;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[25];
                tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

                if (tmp_expression_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_expression_value_32 == NULL)) {
                            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_expression_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 173;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_32);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_24 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                if (tmp_subscript_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_24 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_24);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_32);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 173;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[31];
                tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[77]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 174;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_9 = Py_None;
                tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_expression_value_34;
                    PyObject *tmp_subscript_value_26;
                    PyObject *tmp_tuple_element_10;
                    PyTuple_SET_ITEM0(tmp_subscript_value_25, 0, tmp_tuple_element_9);
                    tmp_tuple_element_9 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                    if (tmp_tuple_element_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
                            Py_INCREF(tmp_tuple_element_9);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_25, 1, tmp_tuple_element_9);
                    tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[74]);

                    if (tmp_expression_value_34 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[74]);

                            if (unlikely(tmp_expression_value_34 == NULL)) {
                                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                            }

                            if (tmp_expression_value_34 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 174;
                                type_description_2 = "c";
                                goto tuple_build_exception_3;
                            }
                            Py_INCREF(tmp_expression_value_34);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    tmp_tuple_element_10 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[96]);

                    if (tmp_tuple_element_10 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[96]);

                            if (unlikely(tmp_tuple_element_10 == NULL)) {
                                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                            }

                            if (tmp_tuple_element_10 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_34);

                                exception_lineno = 174;
                                type_description_2 = "c";
                                goto tuple_build_exception_3;
                            }
                            Py_INCREF(tmp_tuple_element_10);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_26, 0, tmp_tuple_element_10);
                    tmp_tuple_element_10 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                    if (tmp_tuple_element_10 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
                            Py_INCREF(tmp_tuple_element_10);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_26, 1, tmp_tuple_element_10);
                    tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_26);
                    Py_DECREF(tmp_expression_value_34);
                    Py_DECREF(tmp_subscript_value_26);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 174;
                        type_description_2 = "c";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_25, 2, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_subscript_value_25);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$tabs$$$function__12___init__(tmp_defaults_2, tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$tabs$$$function__13__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[116], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$tabs$$$function__14__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$tabs$$$function__15__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_30;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_12 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_3 = mod_consts[159];
            tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 236;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[75]);

            if (tmp_expression_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);
                        Py_DECREF(tmp_expression_value_35);

                        exception_lineno = 236;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_36);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[103]);

            if (tmp_subscript_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_subscript_value_28 == NULL)) {
                        tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_subscript_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);
                        Py_DECREF(tmp_expression_value_35);
                        Py_DECREF(tmp_expression_value_36);

                        exception_lineno = 236;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_28);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_36);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_subscript_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);
                Py_DECREF(tmp_expression_value_35);

                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_35);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$tabs$$$function__16_tabs(tmp_annotations_3);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 235;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_4 = mod_consts[159];
            tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 236;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[75]);

            if (tmp_expression_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_37);

                        exception_lineno = 236;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_38);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_30 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[103]);

            if (tmp_subscript_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_subscript_value_30 == NULL)) {
                        tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_subscript_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_37);
                        Py_DECREF(tmp_expression_value_38);

                        exception_lineno = 236;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_30);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_38);
            Py_DECREF(tmp_subscript_value_30);
            if (tmp_subscript_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_37);

                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$tabs$$$function__16_tabs(tmp_annotations_4);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 235;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_32;
            tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[19]);

            if (unlikely(tmp_expression_value_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[19]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 239;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[122]);
            Py_DECREF(tmp_expression_value_39);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_5 = mod_consts[161];
            tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_40 == NULL)) {
                        tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 240;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_40);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[75]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);
                        Py_DECREF(tmp_expression_value_40);

                        exception_lineno = 240;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_32 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[103]);

            if (tmp_subscript_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_subscript_value_32 == NULL)) {
                        tmp_subscript_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_subscript_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);
                        Py_DECREF(tmp_expression_value_40);
                        Py_DECREF(tmp_expression_value_41);

                        exception_lineno = 240;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_32);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_41);
            Py_DECREF(tmp_subscript_value_32);
            if (tmp_subscript_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_expression_value_40);

                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_40);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$tabs$$$function__17_tabs(tmp_annotations_5);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 239;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_17;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_15 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$tabs$$$function__18_on_change();

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 244;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_16 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$tabs$$$function__18_on_change();

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 244;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_18;
            tmp_called_instance_5 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[32]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[32]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$tabs$$$function__19_on_change();

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 248;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[122], tmp_args_element_value_18);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_34;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_17 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_6 = mod_consts[159];
            tmp_expression_value_42 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 254;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_42);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_33 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[139]);

            if (tmp_subscript_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_33 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_33);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_42);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$tabs$$$function__20_selected_index(tmp_annotations_6);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 253;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_7 = mod_consts[159];
            tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_43 == NULL)) {
                        tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_43);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_34 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[139]);

            if (tmp_subscript_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_34 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_34);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_43);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$tabs$$$function__20_selected_index(tmp_annotations_7);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 253;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_35;
            tmp_expression_value_44 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[20]);

            if (unlikely(tmp_expression_value_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[20]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[122]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_8 = mod_consts[161];
            tmp_expression_value_45 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 258;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_45);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_35 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[139]);

            if (tmp_subscript_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_35 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_35);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_35);
            Py_DECREF(tmp_expression_value_45);
            Py_DECREF(tmp_subscript_value_35);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);

                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$tabs$$$function__21_selected_index(tmp_annotations_8);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 257;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_37;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_20 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 262;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_9 = mod_consts[159];
            tmp_expression_value_46 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        exception_lineno = 263;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_36 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[138]);

            if (tmp_subscript_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_36 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_36);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_36);
            Py_DECREF(tmp_expression_value_46);
            Py_DECREF(tmp_subscript_value_36);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_20);

                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$tabs$$$function__22_scrollable(tmp_annotations_9);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 262;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_10 = mod_consts[159];
            tmp_expression_value_47 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 263;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_37 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[138]);

            if (tmp_subscript_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_37 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_37);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_47);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$tabs$$$function__22_scrollable(tmp_annotations_10);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 262;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_38;
            tmp_expression_value_48 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[21]);

            if (unlikely(tmp_expression_value_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[21]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 266;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[122]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_11 = mod_consts[161];
            tmp_expression_value_49 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 267;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_49);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_38 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[138]);

            if (tmp_subscript_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_38 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_38);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_49);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 267;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$tabs$$$function__23_scrollable(tmp_annotations_11);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 266;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_39;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_40;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_23 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 271;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_12 = mod_consts[159];
            tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 272;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_39 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[139]);

            if (tmp_subscript_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_39 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_39);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_39);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$tabs$$$function__24_animation_duration(tmp_annotations_12);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 271;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_24 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_13 = mod_consts[159];
            tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 272;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_51);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_40 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[139]);

            if (tmp_subscript_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_40 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_40);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_51);
            Py_DECREF(tmp_subscript_value_40);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$tabs$$$function__24_animation_duration(tmp_annotations_13);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 271;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_41;
            tmp_expression_value_52 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[22]);

            if (unlikely(tmp_expression_value_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[22]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 275;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[122]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_14 = mod_consts[161];
            tmp_expression_value_53 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);

                        exception_lineno = 276;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_53);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_41 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[139]);

            if (tmp_subscript_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_41 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_41);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_53);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$tabs$$$function__25_animation_duration(tmp_annotations_14);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 275;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_42;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_subscript_value_43;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_26 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 280;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_15 = mod_consts[159];
            tmp_expression_value_54 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 281;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_54);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_42 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_42 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_42);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_54);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$tabs$$$function__26_divider_color(tmp_annotations_15);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 280;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_27 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_16 = mod_consts[159];
            tmp_expression_value_55 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_55 == NULL)) {
                        tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 281;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_55);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_43 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_43 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_43);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_55);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$tabs$$$function__26_divider_color(tmp_annotations_16);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 280;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_44;
            tmp_expression_value_56 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[23]);

            if (unlikely(tmp_expression_value_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 284;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[122]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_17 = mod_consts[161];
            tmp_expression_value_57 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);

                        exception_lineno = 285;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_57);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_44 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_44 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_44);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_44);
            Py_DECREF(tmp_expression_value_57);
            Py_DECREF(tmp_subscript_value_44);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 285;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$tabs$$$function__27_divider_color(tmp_annotations_17);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 284;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_45;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_46;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_18 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_29 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 289;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_18 = mod_consts[159];
            tmp_expression_value_58 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_29);

                        exception_lineno = 290;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_58);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_45 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_45 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_45);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_45);
            Py_DECREF(tmp_expression_value_58);
            Py_DECREF(tmp_subscript_value_45);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$tabs$$$function__28_indicator_color(tmp_annotations_18);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 289;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_30 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_19 = mod_consts[159];
            tmp_expression_value_59 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_59 == NULL)) {
                        tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 290;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_59);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_46 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_46 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_46);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_59);
            Py_DECREF(tmp_subscript_value_46);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$tabs$$$function__28_indicator_color(tmp_annotations_19);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 289;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_47;
            tmp_expression_value_60 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[26]);

            if (unlikely(tmp_expression_value_60 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[26]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 293;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[122]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_20 = mod_consts[161];
            tmp_expression_value_61 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_61 == NULL)) {
                        tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 294;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_61);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_47 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_47 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_47);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_47);
            Py_DECREF(tmp_expression_value_61);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 294;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_33 = MAKE_FUNCTION_flet_core$tabs$$$function__29_indicator_color(tmp_annotations_20);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 293;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_19 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_32 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 298;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_21 = mod_consts[159];
            tmp_dict_value_21 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[95]);

            if (tmp_dict_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_dict_value_21 == NULL)) {
                        tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_dict_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_32);

                        exception_lineno = 299;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_21);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_34 = MAKE_FUNCTION_flet_core$tabs$$$function__30_indicator_border_radius(tmp_annotations_21);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 298;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_33 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_22 = mod_consts[159];
            tmp_dict_value_22 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[95]);

            if (tmp_dict_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_dict_value_22 == NULL)) {
                        tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_dict_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 299;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_22);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_args_element_value_35 = MAKE_FUNCTION_flet_core$tabs$$$function__30_indicator_border_radius(tmp_annotations_22);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 298;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            tmp_expression_value_62 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[27]);

            if (unlikely(tmp_expression_value_62 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[27]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 302;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[122]);
            Py_DECREF(tmp_expression_value_62);
            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_23 = mod_consts[161];
            tmp_dict_value_23 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[95]);

            if (tmp_dict_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_dict_value_23 == NULL)) {
                        tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_dict_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);

                        exception_lineno = 303;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_23);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_value_36 = MAKE_FUNCTION_flet_core$tabs$$$function__31_indicator_border_radius(tmp_annotations_23);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 302;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_48;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_49;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_20 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            tmp_called_value_35 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 307;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_24 = mod_consts[159];
            tmp_expression_value_63 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);

                        exception_lineno = 308;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_63);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_48 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[80]);

            if (tmp_subscript_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[80]);

                    if (unlikely(tmp_subscript_value_48 == NULL)) {
                        tmp_subscript_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                    }

                    if (tmp_subscript_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);
                        Py_DECREF(tmp_expression_value_63);

                        exception_lineno = 308;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_48);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_48);
            Py_DECREF(tmp_expression_value_63);
            Py_DECREF(tmp_subscript_value_48);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 308;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_args_element_value_37 = MAKE_FUNCTION_flet_core$tabs$$$function__32_indicator_border_side(tmp_annotations_24);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 307;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_36 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_25 = mod_consts[159];
            tmp_expression_value_64 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_64 == NULL)) {
                        tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 308;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_64);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_49 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[80]);

            if (tmp_subscript_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[80]);

                    if (unlikely(tmp_subscript_value_49 == NULL)) {
                        tmp_subscript_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                    }

                    if (tmp_subscript_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_64);

                        exception_lineno = 308;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_49);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_49);
            Py_DECREF(tmp_expression_value_64);
            Py_DECREF(tmp_subscript_value_49);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_args_element_value_38 = MAKE_FUNCTION_flet_core$tabs$$$function__32_indicator_border_side(tmp_annotations_25);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 307;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_subscript_value_50;
            tmp_expression_value_65 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[28]);

            if (unlikely(tmp_expression_value_65 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[28]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 311;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[122]);
            Py_DECREF(tmp_expression_value_65);
            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_26 = mod_consts[161];
            tmp_expression_value_66 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_66 == NULL)) {
                        tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 312;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_66);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_50 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[80]);

            if (tmp_subscript_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[80]);

                    if (unlikely(tmp_subscript_value_50 == NULL)) {
                        tmp_subscript_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                    }

                    if (tmp_subscript_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);
                        Py_DECREF(tmp_expression_value_66);

                        exception_lineno = 312;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_50);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_50);
            Py_DECREF(tmp_expression_value_66);
            Py_DECREF(tmp_subscript_value_50);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 312;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_value_39 = MAKE_FUNCTION_flet_core$tabs$$$function__33_indicator_border_side(tmp_annotations_26);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 311;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_21 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            tmp_called_value_38 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 316;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_27 = mod_consts[159];
            tmp_dict_value_27 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[98]);

            if (tmp_dict_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_dict_value_27 == NULL)) {
                        tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_dict_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);

                        exception_lineno = 317;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_27);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));


            tmp_args_element_value_40 = MAKE_FUNCTION_flet_core$tabs$$$function__34_indicator_padding(tmp_annotations_27);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 316;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_39 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_28 = mod_consts[159];
            tmp_dict_value_28 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[98]);

            if (tmp_dict_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_dict_value_28 == NULL)) {
                        tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_dict_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 317;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_28);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_28 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));


            tmp_args_element_value_41 = MAKE_FUNCTION_flet_core$tabs$$$function__34_indicator_padding(tmp_annotations_28);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 316;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_40;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            tmp_expression_value_67 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[29]);

            if (unlikely(tmp_expression_value_67 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[29]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 320;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[122]);
            Py_DECREF(tmp_expression_value_67);
            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_29 = mod_consts[161];
            tmp_dict_value_29 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[98]);

            if (tmp_dict_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_dict_value_29 == NULL)) {
                        tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_dict_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);

                        exception_lineno = 321;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_29);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_29 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_args_element_value_42 = MAKE_FUNCTION_flet_core$tabs$$$function__35_indicator_padding(tmp_annotations_29);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 320;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_52;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_17;
            } else {
                goto condexpr_false_17;
            }
            condexpr_true_17:;
            tmp_called_value_41 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 325;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_30 = mod_consts[159];
            tmp_expression_value_68 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_68 == NULL)) {
                        tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);

                        exception_lineno = 326;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_68);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_51 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[138]);

            if (tmp_subscript_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_51 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_51);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_51);
            Py_DECREF(tmp_expression_value_68);
            Py_DECREF(tmp_subscript_value_51);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);

                exception_lineno = 326;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_value_43 = MAKE_FUNCTION_flet_core$tabs$$$function__36_indicator_tab_size(tmp_annotations_30);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 325;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_42 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_31 = mod_consts[159];
            tmp_expression_value_69 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_69 == NULL)) {
                        tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 326;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_69);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_52 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[138]);

            if (tmp_subscript_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_52 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_52);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_52);
            Py_DECREF(tmp_expression_value_69);
            Py_DECREF(tmp_subscript_value_52);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_args_element_value_44 = MAKE_FUNCTION_flet_core$tabs$$$function__36_indicator_tab_size(tmp_annotations_31);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 325;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_43;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_subscript_value_53;
            tmp_expression_value_70 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[30]);

            if (unlikely(tmp_expression_value_70 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[30]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 329;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[122]);
            Py_DECREF(tmp_expression_value_70);
            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_32 = mod_consts[161];
            tmp_expression_value_71 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_71 == NULL)) {
                        tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_71 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_43);

                        exception_lineno = 330;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_71);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_53 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[138]);

            if (tmp_subscript_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_53 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_53);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_53);
            Py_DECREF(tmp_expression_value_71);
            Py_DECREF(tmp_subscript_value_53);
            if (tmp_dict_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_43);

                exception_lineno = 330;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));


            tmp_args_element_value_45 = MAKE_FUNCTION_flet_core$tabs$$$function__37_indicator_tab_size(tmp_annotations_32);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 329;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_45);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_54;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_annotations_34;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_55;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_23 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_18;
            } else {
                goto condexpr_false_18;
            }
            condexpr_true_18:;
            tmp_called_value_44 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 334;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_33 = mod_consts[159];
            tmp_expression_value_72 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_72 == NULL)) {
                        tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);

                        exception_lineno = 335;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_72);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_54 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_54 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_54);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_72, tmp_subscript_value_54);
            Py_DECREF(tmp_expression_value_72);
            Py_DECREF(tmp_subscript_value_54);
            if (tmp_dict_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_44);

                exception_lineno = 335;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));


            tmp_args_element_value_46 = MAKE_FUNCTION_flet_core$tabs$$$function__38_label_color(tmp_annotations_33);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 334;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_45 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_34 = mod_consts[159];
            tmp_expression_value_73 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_73 == NULL)) {
                        tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 335;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_73);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_55 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_55 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_55);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_55);
            Py_DECREF(tmp_expression_value_73);
            Py_DECREF(tmp_subscript_value_55);
            if (tmp_dict_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_34 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));


            tmp_args_element_value_47 = MAKE_FUNCTION_flet_core$tabs$$$function__38_label_color(tmp_annotations_34);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 334;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_46;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_annotations_35;
            PyObject *tmp_dict_key_35;
            PyObject *tmp_dict_value_35;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_subscript_value_56;
            tmp_expression_value_74 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[24]);

            if (unlikely(tmp_expression_value_74 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[24]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 338;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[122]);
            Py_DECREF(tmp_expression_value_74);
            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_35 = mod_consts[161];
            tmp_expression_value_75 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_75 == NULL)) {
                        tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);

                        exception_lineno = 339;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_75);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_56 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_56 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_56);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_56);
            Py_DECREF(tmp_expression_value_75);
            Py_DECREF(tmp_subscript_value_56);
            if (tmp_dict_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_46);

                exception_lineno = 339;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_35 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
            Py_DECREF(tmp_dict_value_35);
            assert(!(tmp_res != 0));


            tmp_args_element_value_48 = MAKE_FUNCTION_flet_core$tabs$$$function__39_label_color(tmp_annotations_35);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 338;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_48);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_36;
            PyObject *tmp_dict_value_36;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_57;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_annotations_37;
            PyObject *tmp_dict_key_37;
            PyObject *tmp_dict_value_37;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_58;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_24 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_19;
            } else {
                goto condexpr_false_19;
            }
            condexpr_true_19:;
            tmp_called_value_47 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 343;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_36 = mod_consts[159];
            tmp_expression_value_76 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_76 == NULL)) {
                        tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_47);

                        exception_lineno = 344;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_76);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_57 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_57 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_57);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_57);
            Py_DECREF(tmp_expression_value_76);
            Py_DECREF(tmp_subscript_value_57);
            if (tmp_dict_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_47);

                exception_lineno = 344;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_36 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));


            tmp_args_element_value_49 = MAKE_FUNCTION_flet_core$tabs$$$function__40_unselected_label_color(tmp_annotations_36);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 343;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_49);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_19;
            condexpr_false_19:;
            tmp_called_value_48 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_37 = mod_consts[159];
            tmp_expression_value_77 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_77 == NULL)) {
                        tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 344;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_77);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_58 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_58 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_58);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_77, tmp_subscript_value_58);
            Py_DECREF(tmp_expression_value_77);
            Py_DECREF(tmp_subscript_value_58);
            if (tmp_dict_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_37 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));


            tmp_args_element_value_50 = MAKE_FUNCTION_flet_core$tabs$$$function__40_unselected_label_color(tmp_annotations_37);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 343;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_19:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_49;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_annotations_38;
            PyObject *tmp_dict_key_38;
            PyObject *tmp_dict_value_38;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_59;
            tmp_expression_value_78 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[25]);

            if (unlikely(tmp_expression_value_78 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[25]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 347;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[122]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_38 = mod_consts[161];
            tmp_expression_value_79 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[76]);

            if (tmp_expression_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_79 == NULL)) {
                        tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_49);

                        exception_lineno = 348;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_79);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_59 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

            if (tmp_subscript_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_59 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_59);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_59);
            Py_DECREF(tmp_expression_value_79);
            Py_DECREF(tmp_subscript_value_59);
            if (tmp_dict_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_49);

                exception_lineno = 348;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_38 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_38, tmp_dict_value_38);
            Py_DECREF(tmp_dict_value_38);
            assert(!(tmp_res != 0));


            tmp_args_element_value_51 = MAKE_FUNCTION_flet_core$tabs$$$function__41_unselected_label_color(tmp_annotations_38);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 347;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_51);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_annotations_39;
            PyObject *tmp_dict_key_39;
            PyObject *tmp_dict_value_39;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_60;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_annotations_40;
            PyObject *tmp_dict_key_40;
            PyObject *tmp_dict_value_40;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_62;
            PyObject *tmp_tuple_element_13;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_25 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_20;
            } else {
                goto condexpr_false_20;
            }
            condexpr_true_20:;
            tmp_called_value_50 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[120]);

            if (unlikely(tmp_called_value_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 352;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_39 = mod_consts[159];
            tmp_expression_value_80 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[77]);

            if (tmp_expression_value_80 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_expression_value_80 == NULL)) {
                        tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                    }

                    if (tmp_expression_value_80 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);

                        exception_lineno = 353;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_80);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_11 = Py_None;
            tmp_subscript_value_60 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_81;
                PyObject *tmp_subscript_value_61;
                PyObject *tmp_tuple_element_12;
                PyTuple_SET_ITEM0(tmp_subscript_value_60, 0, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_60, 1, tmp_tuple_element_11);
                tmp_expression_value_81 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[74]);

                if (tmp_expression_value_81 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[74]);

                        if (unlikely(tmp_expression_value_81 == NULL)) {
                            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                        }

                        if (tmp_expression_value_81 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 353;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_81);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_12 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[96]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[96]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_81);

                            exception_lineno = 353;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_subscript_value_61 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_61, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_61, 1, tmp_tuple_element_12);
                tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_61);
                Py_DECREF(tmp_expression_value_81);
                Py_DECREF(tmp_subscript_value_61);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 353;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_60, 2, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_expression_value_80);
            Py_DECREF(tmp_subscript_value_60);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_60);
            Py_DECREF(tmp_expression_value_80);
            Py_DECREF(tmp_subscript_value_60);
            if (tmp_dict_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_50);

                exception_lineno = 353;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_39 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));


            tmp_args_element_value_52 = MAKE_FUNCTION_flet_core$tabs$$$function__42_overlay_color(tmp_annotations_39);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 352;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_52);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_20;
            condexpr_false_20:;
            tmp_called_value_51 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_40 = mod_consts[159];
            tmp_expression_value_82 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[77]);

            if (tmp_expression_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                    }

                    if (tmp_expression_value_82 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 353;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_82);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_13 = Py_None;
            tmp_subscript_value_62 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_83;
                PyObject *tmp_subscript_value_63;
                PyObject *tmp_tuple_element_14;
                PyTuple_SET_ITEM0(tmp_subscript_value_62, 0, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_13 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_62, 1, tmp_tuple_element_13);
                tmp_expression_value_83 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[74]);

                if (tmp_expression_value_83 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[74]);

                        if (unlikely(tmp_expression_value_83 == NULL)) {
                            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                        }

                        if (tmp_expression_value_83 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 353;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_83);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_tuple_element_14 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[96]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[96]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_83);

                            exception_lineno = 353;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_subscript_value_63 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_63, 0, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_14 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_63, 1, tmp_tuple_element_14);
                tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_63);
                Py_DECREF(tmp_expression_value_83);
                Py_DECREF(tmp_subscript_value_63);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 353;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_62, 2, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_expression_value_82);
            Py_DECREF(tmp_subscript_value_62);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dict_value_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_62);
            Py_DECREF(tmp_expression_value_82);
            Py_DECREF(tmp_subscript_value_62);
            if (tmp_dict_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_40 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_40, tmp_dict_value_40);
            Py_DECREF(tmp_dict_value_40);
            assert(!(tmp_res != 0));


            tmp_args_element_value_53 = MAKE_FUNCTION_flet_core$tabs$$$function__42_overlay_color(tmp_annotations_40);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 352;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_20:;
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_52;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_annotations_41;
            PyObject *tmp_dict_key_41;
            PyObject *tmp_dict_value_41;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_subscript_value_64;
            PyObject *tmp_tuple_element_15;
            tmp_expression_value_84 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[31]);

            if (unlikely(tmp_expression_value_84 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[31]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 356;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[122]);
            Py_DECREF(tmp_expression_value_84);
            if (tmp_called_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_41 = mod_consts[161];
            tmp_expression_value_85 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[77]);

            if (tmp_expression_value_85 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_expression_value_85 == NULL)) {
                        tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                    }

                    if (tmp_expression_value_85 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_52);

                        exception_lineno = 357;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_85);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_15 = Py_None;
            tmp_subscript_value_64 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_86;
                PyObject *tmp_subscript_value_65;
                PyObject *tmp_tuple_element_16;
                PyTuple_SET_ITEM0(tmp_subscript_value_64, 0, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_64, 1, tmp_tuple_element_15);
                tmp_expression_value_86 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[74]);

                if (tmp_expression_value_86 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[74]);

                        if (unlikely(tmp_expression_value_86 == NULL)) {
                            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                        }

                        if (tmp_expression_value_86 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 357;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_86);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                tmp_tuple_element_16 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[96]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[96]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_86);

                            exception_lineno = 357;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                tmp_subscript_value_65 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_65, 0, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[112]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_16 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_65, 1, tmp_tuple_element_16);
                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_86, tmp_subscript_value_65);
                Py_DECREF(tmp_expression_value_86);
                Py_DECREF(tmp_subscript_value_65);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 357;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_64, 2, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_expression_value_85);
            Py_DECREF(tmp_subscript_value_64);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_64);
            Py_DECREF(tmp_expression_value_85);
            Py_DECREF(tmp_subscript_value_64);
            if (tmp_dict_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_52);

                exception_lineno = 357;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_41 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_41, tmp_dict_value_41);
            Py_DECREF(tmp_dict_value_41);
            assert(!(tmp_res != 0));


            tmp_args_element_value_54 = MAKE_FUNCTION_flet_core$tabs$$$function__43_overlay_color(tmp_annotations_41);

            frame_e914e048a6b997f074a75187e7595825_3->m_frame.f_lineno = 356;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_54);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_54);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e914e048a6b997f074a75187e7595825_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e914e048a6b997f074a75187e7595825_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e914e048a6b997f074a75187e7595825_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e914e048a6b997f074a75187e7595825_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_e914e048a6b997f074a75187e7595825_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$tabs$$$class__2_Tabs_87, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_53 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_17 = mod_consts[127];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_17 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = locals_flet_core$tabs$$$class__2_Tabs_87;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_5bd3f3d395bd8af5531bbbf7f1fcb564->m_frame.f_lineno = 87;
            tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_53, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto try_except_handler_9;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_41);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_40 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_40);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_flet_core$tabs$$$class__2_Tabs_87);
        locals_flet_core$tabs$$$class__2_Tabs_87 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$tabs$$$class__2_Tabs_87);
        locals_flet_core$tabs$$$class__2_Tabs_87 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 87;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$tabs, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_40);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5bd3f3d395bd8af5531bbbf7f1fcb564, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5bd3f3d395bd8af5531bbbf7f1fcb564->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5bd3f3d395bd8af5531bbbf7f1fcb564, exception_lineno);
    }



    assertFrameObject(frame_5bd3f3d395bd8af5531bbbf7f1fcb564);

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
    PGO_onModuleExit("flet_core.tabs", false);

    Py_INCREF(module_flet_core$tabs);
    return module_flet_core$tabs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$tabs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$tabs", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
