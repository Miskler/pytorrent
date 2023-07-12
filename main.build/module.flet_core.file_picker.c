/* Generated code for Python module 'flet_core.file_picker'
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

/* The "module_flet_core$file_picker" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$file_picker;
PyDictObject *moduledict_flet_core$file_picker;

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
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.file_picker"));
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
void checkModuleConstants_flet_core$file_picker(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 197; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_21b270cc424f10624aae3064e2fc7319;
static PyCodeObject *codeobj_abf06a178dd26867b75216c94f283d0d;
static PyCodeObject *codeobj_e10f57381893cae4f2b4ff2947ee68d6;
static PyCodeObject *codeobj_f113e673fac01d27da9560c8a89f1ca2;
static PyCodeObject *codeobj_1b2a39c42051f54f6ce113ec7662e6ea;
static PyCodeObject *codeobj_abaf281379d0cead25e3e5354653edce;
static PyCodeObject *codeobj_513cb9482ea94881b42995fc69ad3d61;
static PyCodeObject *codeobj_3c55236a61aed407cc1dad7ea46bb9b0;
static PyCodeObject *codeobj_23ae51ec1ce9def869fc501a4f5aeb2a;
static PyCodeObject *codeobj_9bbc4a86c1fc58cec90e16453af5d2b8;
static PyCodeObject *codeobj_a1001629d28758c0bc3a5327befca7b3;
static PyCodeObject *codeobj_5fb2e4a372a8fd022b78e167265d9be3;
static PyCodeObject *codeobj_8214a968c6d278e0409e9fff07f22488;
static PyCodeObject *codeobj_1135b049ef88c404b38b33428b956e8f;
static PyCodeObject *codeobj_2b131034e3596ad3ce72c0c9f6882681;
static PyCodeObject *codeobj_c44736f63519dbcb7426a456c55ce3d2;
static PyCodeObject *codeobj_60cef26c694ed84b0f97b6a5db1c4914;
static PyCodeObject *codeobj_7768aa78ac262e519a087148fca24036;
static PyCodeObject *codeobj_61fadaf5dc5b1bdd239e67cc3affa20f;
static PyCodeObject *codeobj_90e5ff56414cd887d22c2141c86f1ae1;
static PyCodeObject *codeobj_c4c9f9d044812adb9594a257d8eb3be0;
static PyCodeObject *codeobj_5ec7d31de1e9053f289e08184b5813df;
static PyCodeObject *codeobj_2b3ee9183fb3647d630485cab3e59c04;
static PyCodeObject *codeobj_122f7dc62c92be2e143394c220d80f2f;
static PyCodeObject *codeobj_cb78487dfd04a24875956a6b2b917733;
static PyCodeObject *codeobj_3bdf601ca7015d6701ab9026b83d88d8;
static PyCodeObject *codeobj_6ee164c46ee8a58d72eeec4143b82fb3;
static PyCodeObject *codeobj_d755c7e69f61e2509bbe226a15cd11fa;
static PyCodeObject *codeobj_c8f0919477809040cbb6392bc781e484;
static PyCodeObject *codeobj_7ca2042cc425d49e2ec90bc880e74a24;
static PyCodeObject *codeobj_ed8675b149c9e2f41e1ee06988cccfea;
static PyCodeObject *codeobj_e8072806a55398443cc41dab8720edd8;
static PyCodeObject *codeobj_772e8d97b37e16dccce22d2ecbc97030;
static PyCodeObject *codeobj_8ff32e95a076206002eebf364f592739;
static PyCodeObject *codeobj_803d18866dff23104d95296e575819d6;
static PyCodeObject *codeobj_1617127a3bf5b1dd1585060e0036f139;
static PyCodeObject *codeobj_d95fcd195f0dbdd43f71898eae75ad74;
static PyCodeObject *codeobj_db923e66f9cdf8f2fa0723441d97e5fe;
static PyCodeObject *codeobj_c4044ef077d1924a07f64bb9fca4abd8;
static PyCodeObject *codeobj_d230fd1f5219b9c8153f731ef1ca4eef;
static PyCodeObject *codeobj_ee2da0b7336eb759a48d6f0eef05d770;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[73]; CHECK_OBJECT(module_filename_obj);
    codeobj_21b270cc424f10624aae3064e2fc7319 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[182], mod_consts[182], NULL, NULL, 0, 0, 0);
    codeobj_abf06a178dd26867b75216c94f283d0d = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_NOFREE, mod_consts[147], mod_consts[147], mod_consts[183], NULL, 0, 0, 0);
    codeobj_e10f57381893cae4f2b4ff2947ee68d6 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[183], NULL, 0, 0, 0);
    codeobj_f113e673fac01d27da9560c8a89f1ca2 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[183], NULL, 0, 0, 0);
    codeobj_1b2a39c42051f54f6ce113ec7662e6ea = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[183], NULL, 0, 0, 0);
    codeobj_abaf281379d0cead25e3e5354653edce = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[183], NULL, 0, 0, 0);
    codeobj_513cb9482ea94881b42995fc69ad3d61 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[183], NULL, 0, 0, 0);
    codeobj_3c55236a61aed407cc1dad7ea46bb9b0 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[184], NULL, 3, 0, 0);
    codeobj_23ae51ec1ce9def869fc501a4f5aeb2a = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[185], NULL, 7, 0, 0);
    codeobj_9bbc4a86c1fc58cec90e16453af5d2b8 = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[186], NULL, 2, 0, 0);
    codeobj_a1001629d28758c0bc3a5327befca7b3 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[31], mod_consts[31], mod_consts[187], mod_consts[183], 1, 0, 0);
    codeobj_5fb2e4a372a8fd022b78e167265d9be3 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[156], mod_consts[156], mod_consts[188], NULL, 1, 0, 0);
    codeobj_8214a968c6d278e0409e9fff07f22488 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[188], NULL, 1, 0, 0);
    codeobj_1135b049ef88c404b38b33428b956e8f = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[186], NULL, 2, 0, 0);
    codeobj_2b131034e3596ad3ce72c0c9f6882681 = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[188], NULL, 1, 0, 0);
    codeobj_c44736f63519dbcb7426a456c55ce3d2 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[186], NULL, 2, 0, 0);
    codeobj_60cef26c694ed84b0f97b6a5db1c4914 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[9], mod_consts[9], mod_consts[189], mod_consts[188], 1, 0, 0);
    codeobj_7768aa78ac262e519a087148fca24036 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[190], NULL, 1, 0, 0);
    codeobj_61fadaf5dc5b1bdd239e67cc3affa20f = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[188], NULL, 1, 0, 0);
    codeobj_90e5ff56414cd887d22c2141c86f1ae1 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[186], NULL, 2, 0, 0);
    codeobj_c4c9f9d044812adb9594a257d8eb3be0 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[188], NULL, 1, 0, 0);
    codeobj_5ec7d31de1e9053f289e08184b5813df = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[186], NULL, 2, 0, 0);
    codeobj_2b3ee9183fb3647d630485cab3e59c04 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[188], NULL, 1, 0, 0);
    codeobj_122f7dc62c92be2e143394c220d80f2f = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[186], NULL, 2, 0, 0);
    codeobj_cb78487dfd04a24875956a6b2b917733 = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[191], NULL, 3, 0, 0);
    codeobj_3bdf601ca7015d6701ab9026b83d88d8 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[191], NULL, 3, 0, 0);
    codeobj_6ee164c46ee8a58d72eeec4143b82fb3 = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[188], NULL, 1, 0, 0);
    codeobj_d755c7e69f61e2509bbe226a15cd11fa = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[186], NULL, 2, 0, 0);
    codeobj_c8f0919477809040cbb6392bc781e484 = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[188], NULL, 1, 0, 0);
    codeobj_7ca2042cc425d49e2ec90bc880e74a24 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[192], NULL, 2, 0, 0);
    codeobj_ed8675b149c9e2f41e1ee06988cccfea = MAKE_CODE_OBJECT(module_filename_obj, 332, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[188], NULL, 1, 0, 0);
    codeobj_e8072806a55398443cc41dab8720edd8 = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[192], NULL, 2, 0, 0);
    codeobj_772e8d97b37e16dccce22d2ecbc97030 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[193], NULL, 6, 0, 0);
    codeobj_8ff32e95a076206002eebf364f592739 = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[193], NULL, 6, 0, 0);
    codeobj_803d18866dff23104d95296e575819d6 = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[188], NULL, 1, 0, 0);
    codeobj_1617127a3bf5b1dd1585060e0036f139 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[194], NULL, 6, 0, 0);
    codeobj_d95fcd195f0dbdd43f71898eae75ad74 = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[194], NULL, 6, 0, 0);
    codeobj_db923e66f9cdf8f2fa0723441d97e5fe = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[188], NULL, 1, 0, 0);
    codeobj_c4044ef077d1924a07f64bb9fca4abd8 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[186], NULL, 2, 0, 0);
    codeobj_d230fd1f5219b9c8153f731ef1ca4eef = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[195], NULL, 2, 0, 0);
    codeobj_ee2da0b7336eb759a48d6f0eef05d770 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[195], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_flet_core$file_picker$$$function__6_pick_files_async$$$coroutine__1_pick_files_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_flet_core$file_picker$$$function__8_save_file_async$$$coroutine__1_save_file_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_flet_core$file_picker$$$function__10_get_directory_path_async$$$coroutine__1_get_directory_path_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_flet_core$file_picker$$$function__12_upload_async$$$coroutine__1_upload_async(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__10_get_directory_path_async(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__11_upload(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__12_upload_async(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__13_state(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__14_state(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__15_result(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__16_dialog_title();


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__17_dialog_title();


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__18_file_name();


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__19_file_name(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__20_initial_directory();


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__21_initial_directory(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__22_file_type(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__23_file_type(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__24___set_file_type(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__25_allowed_extensions(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__26_allowed_extensions(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__27_allow_multiple(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__28_allow_multiple(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__29_on_result();


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__2___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__2___init__$$$function__1_convert_result_event_data(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__2___init__$$$function__2_convert_upload_event_data();


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__30_on_result();


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__31_on_upload();


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__32_on_upload();


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__3__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__4__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__5_pick_files(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__6_pick_files_async(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__7_save_file(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__8_save_file_async(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__9_get_directory_path(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$file_picker$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_files = python_pars[2];
    PyObject *var_fd = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_3c55236a61aed407cc1dad7ea46bb9b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3c55236a61aed407cc1dad7ea46bb9b0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3c55236a61aed407cc1dad7ea46bb9b0)) {
        Py_XDECREF(cache_frame_3c55236a61aed407cc1dad7ea46bb9b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c55236a61aed407cc1dad7ea46bb9b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c55236a61aed407cc1dad7ea46bb9b0 = MAKE_FUNCTION_FRAME(codeobj_3c55236a61aed407cc1dad7ea46bb9b0, module_flet_core$file_picker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c55236a61aed407cc1dad7ea46bb9b0->m_type_description == NULL);
    frame_3c55236a61aed407cc1dad7ea46bb9b0 = cache_frame_3c55236a61aed407cc1dad7ea46bb9b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3c55236a61aed407cc1dad7ea46bb9b0);
    assert(Py_REFCNT(frame_3c55236a61aed407cc1dad7ea46bb9b0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_path);
        tmp_assattr_value_1 = par_path;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_files);
        tmp_cmp_expr_left_1 = par_files;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_files);
        tmp_isinstance_inst_1 = par_files;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[1], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_files);
        tmp_iter_arg_1 = par_files;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 50;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_fd;
            var_fd = tmp_assign_source_3;
            Py_INCREF(var_fd);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 51;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_fd);
        tmp_dircall_arg2_1 = var_fd;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_args_element_value_1 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 51;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_3c55236a61aed407cc1dad7ea46bb9b0->m_frame.f_lineno = 51;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 50;
        type_description_1 = "oooo";
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
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3c55236a61aed407cc1dad7ea46bb9b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c55236a61aed407cc1dad7ea46bb9b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c55236a61aed407cc1dad7ea46bb9b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c55236a61aed407cc1dad7ea46bb9b0,
        type_description_1,
        par_self,
        par_path,
        par_files,
        var_fd
    );


    // Release cached frame if used for exception.
    if (frame_3c55236a61aed407cc1dad7ea46bb9b0 == cache_frame_3c55236a61aed407cc1dad7ea46bb9b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c55236a61aed407cc1dad7ea46bb9b0);
        cache_frame_3c55236a61aed407cc1dad7ea46bb9b0 = NULL;
    }

    assertFrameObject(frame_3c55236a61aed407cc1dad7ea46bb9b0);

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
    Py_XDECREF(var_fd);
    var_fd = NULL;
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

    Py_XDECREF(var_fd);
    var_fd = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$file_picker$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_ref = python_pars[1];
    PyObject *par_visible = python_pars[2];
    PyObject *par_disabled = python_pars[3];
    PyObject *par_data = python_pars[4];
    PyObject *par_on_result = python_pars[5];
    PyObject *par_on_upload = python_pars[6];
    PyObject *var_convert_result_event_data = NULL;
    PyObject *var_convert_upload_event_data = NULL;
    struct Nuitka_FrameObject *frame_23ae51ec1ce9def869fc501a4f5aeb2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_23ae51ec1ce9def869fc501a4f5aeb2a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_23ae51ec1ce9def869fc501a4f5aeb2a)) {
        Py_XDECREF(cache_frame_23ae51ec1ce9def869fc501a4f5aeb2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23ae51ec1ce9def869fc501a4f5aeb2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23ae51ec1ce9def869fc501a4f5aeb2a = MAKE_FUNCTION_FRAME(codeobj_23ae51ec1ce9def869fc501a4f5aeb2a, module_flet_core$file_picker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23ae51ec1ce9def869fc501a4f5aeb2a->m_type_description == NULL);
    frame_23ae51ec1ce9def869fc501a4f5aeb2a = cache_frame_23ae51ec1ce9def869fc501a4f5aeb2a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_23ae51ec1ce9def869fc501a4f5aeb2a);
    assert(Py_REFCNT(frame_23ae51ec1ce9def869fc501a4f5aeb2a) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(par_self);
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        CHECK_OBJECT(par_visible);
        tmp_kw_call_dict_value_1_1 = par_visible;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_2_1 = par_disabled;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_3_1 = par_data;
        frame_23ae51ec1ce9def869fc501a4f5aeb2a->m_frame.f_lineno = 117;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_flet_core$file_picker$$$function__2___init__$$$function__1_convert_result_event_data(tmp_closure_1);

        assert(var_convert_result_event_data == NULL);
        var_convert_result_event_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_convert_result_event_data);
        tmp_args_element_value_1 = var_convert_result_event_data;
        frame_23ae51ec1ce9def869fc501a4f5aeb2a->m_frame.f_lineno = 130;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_1 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "coooooooo";
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
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[13]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[14];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 131;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        frame_23ae51ec1ce9def869fc501a4f5aeb2a->m_frame.f_lineno = 131;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[15]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 131;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        frame_23ae51ec1ce9def869fc501a4f5aeb2a->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_2;


        tmp_assign_source_2 = MAKE_FUNCTION_flet_core$file_picker$$$function__2___init__$$$function__2_convert_upload_event_data();

        assert(var_convert_upload_event_data == NULL);
        var_convert_upload_event_data = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_convert_upload_event_data);
        tmp_args_element_value_4 = var_convert_upload_event_data;
        frame_23ae51ec1ce9def869fc501a4f5aeb2a->m_frame.f_lineno = 137;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_2 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[18], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[13]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[19];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_5 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[18]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 138;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        frame_23ae51ec1ce9def869fc501a4f5aeb2a->m_frame.f_lineno = 138;
        tmp_args_element_value_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[15]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 138;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        frame_23ae51ec1ce9def869fc501a4f5aeb2a->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_3 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[20], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_4 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[21], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Py_None;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_5 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[22], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_on_result);
        tmp_assattr_value_6 = par_on_result;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_6 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[23], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_on_upload);
        tmp_assattr_value_7 = par_on_upload;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_7 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[24], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "coooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_23ae51ec1ce9def869fc501a4f5aeb2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23ae51ec1ce9def869fc501a4f5aeb2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23ae51ec1ce9def869fc501a4f5aeb2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23ae51ec1ce9def869fc501a4f5aeb2a,
        type_description_1,
        par_self,
        par_ref,
        par_visible,
        par_disabled,
        par_data,
        par_on_result,
        par_on_upload,
        var_convert_result_event_data,
        var_convert_upload_event_data
    );


    // Release cached frame if used for exception.
    if (frame_23ae51ec1ce9def869fc501a4f5aeb2a == cache_frame_23ae51ec1ce9def869fc501a4f5aeb2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23ae51ec1ce9def869fc501a4f5aeb2a);
        cache_frame_23ae51ec1ce9def869fc501a4f5aeb2a = NULL;
    }

    assertFrameObject(frame_23ae51ec1ce9def869fc501a4f5aeb2a);

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
    CHECK_OBJECT(var_convert_result_event_data);
    Py_DECREF(var_convert_result_event_data);
    var_convert_result_event_data = NULL;
    CHECK_OBJECT(var_convert_upload_event_data);
    Py_DECREF(var_convert_upload_event_data);
    var_convert_upload_event_data = NULL;
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

    Py_XDECREF(var_convert_result_event_data);
    var_convert_result_event_data = NULL;
    Py_XDECREF(var_convert_upload_event_data);
    var_convert_upload_event_data = NULL;
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
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_on_result);
    Py_DECREF(par_on_result);
    CHECK_OBJECT(par_on_upload);
    Py_DECREF(par_on_upload);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_on_result);
    Py_DECREF(par_on_result);
    CHECK_OBJECT(par_on_upload);
    Py_DECREF(par_on_upload);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$file_picker$$$function__2___init__$$$function__1_convert_result_event_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_e = python_pars[0];
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_60cef26c694ed84b0f97b6a5db1c4914;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_60cef26c694ed84b0f97b6a5db1c4914 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_60cef26c694ed84b0f97b6a5db1c4914)) {
        Py_XDECREF(cache_frame_60cef26c694ed84b0f97b6a5db1c4914);

#if _DEBUG_REFCOUNTS
        if (cache_frame_60cef26c694ed84b0f97b6a5db1c4914 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_60cef26c694ed84b0f97b6a5db1c4914 = MAKE_FUNCTION_FRAME(codeobj_60cef26c694ed84b0f97b6a5db1c4914, module_flet_core$file_picker, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_60cef26c694ed84b0f97b6a5db1c4914->m_type_description == NULL);
    frame_60cef26c694ed84b0f97b6a5db1c4914 = cache_frame_60cef26c694ed84b0f97b6a5db1c4914;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_60cef26c694ed84b0f97b6a5db1c4914);
    assert(Py_REFCNT(frame_60cef26c694ed84b0f97b6a5db1c4914) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_e);
        tmp_expression_value_2 = par_e;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 126;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_60cef26c694ed84b0f97b6a5db1c4914->m_frame.f_lineno = 126;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_assattr_target_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_d);
        tmp_dircall_arg2_1 = var_d;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assattr_value_1 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[20]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_60cef26c694ed84b0f97b6a5db1c4914, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60cef26c694ed84b0f97b6a5db1c4914->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60cef26c694ed84b0f97b6a5db1c4914, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_60cef26c694ed84b0f97b6a5db1c4914,
        type_description_1,
        par_e,
        var_d,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_60cef26c694ed84b0f97b6a5db1c4914 == cache_frame_60cef26c694ed84b0f97b6a5db1c4914) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_60cef26c694ed84b0f97b6a5db1c4914);
        cache_frame_60cef26c694ed84b0f97b6a5db1c4914 = NULL;
    }

    assertFrameObject(frame_60cef26c694ed84b0f97b6a5db1c4914);

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


static PyObject *impl_flet_core$file_picker$$$function__2___init__$$$function__2_convert_upload_event_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_e = python_pars[0];
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_7768aa78ac262e519a087148fca24036;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7768aa78ac262e519a087148fca24036 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7768aa78ac262e519a087148fca24036)) {
        Py_XDECREF(cache_frame_7768aa78ac262e519a087148fca24036);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7768aa78ac262e519a087148fca24036 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7768aa78ac262e519a087148fca24036 = MAKE_FUNCTION_FRAME(codeobj_7768aa78ac262e519a087148fca24036, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7768aa78ac262e519a087148fca24036->m_type_description == NULL);
    frame_7768aa78ac262e519a087148fca24036 = cache_frame_7768aa78ac262e519a087148fca24036;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7768aa78ac262e519a087148fca24036);
    assert(Py_REFCNT(frame_7768aa78ac262e519a087148fca24036) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_e);
        tmp_expression_value_2 = par_e;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 134;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7768aa78ac262e519a087148fca24036->m_frame.f_lineno = 134;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
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


            exception_lineno = 135;
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
        exception_tb = MAKE_TRACEBACK(frame_7768aa78ac262e519a087148fca24036, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7768aa78ac262e519a087148fca24036->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7768aa78ac262e519a087148fca24036, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7768aa78ac262e519a087148fca24036,
        type_description_1,
        par_e,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_7768aa78ac262e519a087148fca24036 == cache_frame_7768aa78ac262e519a087148fca24036) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7768aa78ac262e519a087148fca24036);
        cache_frame_7768aa78ac262e519a087148fca24036 = NULL;
    }

    assertFrameObject(frame_7768aa78ac262e519a087148fca24036);

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


static PyObject *impl_flet_core$file_picker$$$function__4__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a1001629d28758c0bc3a5327befca7b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a1001629d28758c0bc3a5327befca7b3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a1001629d28758c0bc3a5327befca7b3)) {
        Py_XDECREF(cache_frame_a1001629d28758c0bc3a5327befca7b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a1001629d28758c0bc3a5327befca7b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a1001629d28758c0bc3a5327befca7b3 = MAKE_FUNCTION_FRAME(codeobj_a1001629d28758c0bc3a5327befca7b3, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a1001629d28758c0bc3a5327befca7b3->m_type_description == NULL);
    frame_a1001629d28758c0bc3a5327befca7b3 = cache_frame_a1001629d28758c0bc3a5327befca7b3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a1001629d28758c0bc3a5327befca7b3);
    assert(Py_REFCNT(frame_a1001629d28758c0bc3a5327befca7b3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$file_picker, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_a1001629d28758c0bc3a5327befca7b3->m_frame.f_lineno = 150;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[31]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[33];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 151;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_a1001629d28758c0bc3a5327befca7b3->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
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
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[32]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[19];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 152;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_a1001629d28758c0bc3a5327befca7b3->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a1001629d28758c0bc3a5327befca7b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a1001629d28758c0bc3a5327befca7b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a1001629d28758c0bc3a5327befca7b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a1001629d28758c0bc3a5327befca7b3,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a1001629d28758c0bc3a5327befca7b3 == cache_frame_a1001629d28758c0bc3a5327befca7b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a1001629d28758c0bc3a5327befca7b3);
        cache_frame_a1001629d28758c0bc3a5327befca7b3 = NULL;
    }

    assertFrameObject(frame_a1001629d28758c0bc3a5327befca7b3);

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


static PyObject *impl_flet_core$file_picker$$$function__5_pick_files(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dialog_title = python_pars[1];
    PyObject *par_initial_directory = python_pars[2];
    PyObject *par_file_type = python_pars[3];
    PyObject *par_allowed_extensions = python_pars[4];
    PyObject *par_allow_multiple = python_pars[5];
    struct Nuitka_FrameObject *frame_772e8d97b37e16dccce22d2ecbc97030;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_772e8d97b37e16dccce22d2ecbc97030 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_772e8d97b37e16dccce22d2ecbc97030)) {
        Py_XDECREF(cache_frame_772e8d97b37e16dccce22d2ecbc97030);

#if _DEBUG_REFCOUNTS
        if (cache_frame_772e8d97b37e16dccce22d2ecbc97030 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_772e8d97b37e16dccce22d2ecbc97030 = MAKE_FUNCTION_FRAME(codeobj_772e8d97b37e16dccce22d2ecbc97030, module_flet_core$file_picker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_772e8d97b37e16dccce22d2ecbc97030->m_type_description == NULL);
    frame_772e8d97b37e16dccce22d2ecbc97030 = cache_frame_772e8d97b37e16dccce22d2ecbc97030;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_772e8d97b37e16dccce22d2ecbc97030);
    assert(Py_REFCNT(frame_772e8d97b37e16dccce22d2ecbc97030) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[34];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_dialog_title);
        tmp_assattr_value_2 = par_dialog_title;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_initial_directory);
        tmp_assattr_value_3 = par_initial_directory;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[37], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_file_type);
        tmp_assattr_value_4 = par_file_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[38], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_allowed_extensions);
        tmp_assattr_value_5 = par_allowed_extensions;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[39], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_allow_multiple);
        tmp_assattr_value_6 = par_allow_multiple;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[40], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_772e8d97b37e16dccce22d2ecbc97030->m_frame.f_lineno = 168;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_772e8d97b37e16dccce22d2ecbc97030, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_772e8d97b37e16dccce22d2ecbc97030->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_772e8d97b37e16dccce22d2ecbc97030, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_772e8d97b37e16dccce22d2ecbc97030,
        type_description_1,
        par_self,
        par_dialog_title,
        par_initial_directory,
        par_file_type,
        par_allowed_extensions,
        par_allow_multiple
    );


    // Release cached frame if used for exception.
    if (frame_772e8d97b37e16dccce22d2ecbc97030 == cache_frame_772e8d97b37e16dccce22d2ecbc97030) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_772e8d97b37e16dccce22d2ecbc97030);
        cache_frame_772e8d97b37e16dccce22d2ecbc97030 = NULL;
    }

    assertFrameObject(frame_772e8d97b37e16dccce22d2ecbc97030);

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
    CHECK_OBJECT(par_dialog_title);
    Py_DECREF(par_dialog_title);
    CHECK_OBJECT(par_initial_directory);
    Py_DECREF(par_initial_directory);
    CHECK_OBJECT(par_file_type);
    Py_DECREF(par_file_type);
    CHECK_OBJECT(par_allowed_extensions);
    Py_DECREF(par_allowed_extensions);
    CHECK_OBJECT(par_allow_multiple);
    Py_DECREF(par_allow_multiple);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialog_title);
    Py_DECREF(par_dialog_title);
    CHECK_OBJECT(par_initial_directory);
    Py_DECREF(par_initial_directory);
    CHECK_OBJECT(par_file_type);
    Py_DECREF(par_file_type);
    CHECK_OBJECT(par_allowed_extensions);
    Py_DECREF(par_allowed_extensions);
    CHECK_OBJECT(par_allow_multiple);
    Py_DECREF(par_allow_multiple);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$file_picker$$$function__6_pick_files_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_dialog_title = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_initial_directory = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_file_type = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_allowed_extensions = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_allow_multiple = Nuitka_Cell_New1(python_pars[5]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[6];

        tmp_closure_1[0] = par_allow_multiple;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_allowed_extensions;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_dialog_title;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_file_type;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_initial_directory;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_self;
        Py_INCREF(tmp_closure_1[5]);

        tmp_return_value = MAKE_COROUTINE_flet_core$file_picker$$$function__6_pick_files_async$$$coroutine__1_pick_files_async(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialog_title);
    Py_DECREF(par_dialog_title);
    CHECK_OBJECT(par_initial_directory);
    Py_DECREF(par_initial_directory);
    CHECK_OBJECT(par_file_type);
    Py_DECREF(par_file_type);
    CHECK_OBJECT(par_allowed_extensions);
    Py_DECREF(par_allowed_extensions);
    CHECK_OBJECT(par_allow_multiple);
    Py_DECREF(par_allow_multiple);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct flet_core$file_picker$$$function__6_pick_files_async$$$coroutine__1_pick_files_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$file_picker$$$function__6_pick_files_async$$$coroutine__1_pick_files_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$file_picker$$$function__6_pick_files_async$$$coroutine__1_pick_files_async_locals *coroutine_heap = (struct flet_core$file_picker$$$function__6_pick_files_async$$$coroutine__1_pick_files_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_8ff32e95a076206002eebf364f592739, module_flet_core$file_picker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[34];
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 178;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 178;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[36]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_value_2);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[37]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 180;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 180;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[37], tmp_assattr_value_3);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 180;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[38]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_4 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[38], tmp_assattr_value_4);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[39]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[39], tmp_assattr_value_5);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[40]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 183;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 183;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[40], tmp_assattr_value_6);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 183;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 184;
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 184;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine->m_frame->m_frame.f_lineno = 184;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 184;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 184;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 184;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 184;
            coroutine_heap->type_description_1 = "cccccc";
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
            coroutine->m_closure[5],
            coroutine->m_closure[2],
            coroutine->m_closure[4],
            coroutine->m_closure[3],
            coroutine->m_closure[1],
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

static PyObject *MAKE_COROUTINE_flet_core$file_picker$$$function__6_pick_files_async$$$coroutine__1_pick_files_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$file_picker$$$function__6_pick_files_async$$$coroutine__1_pick_files_async_context,
        module_flet_core$file_picker,
        mod_consts[43],
        mod_consts[44],
        codeobj_8ff32e95a076206002eebf364f592739,
        closure,
        6,
#if 1
        sizeof(struct flet_core$file_picker$$$function__6_pick_files_async$$$coroutine__1_pick_files_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$file_picker$$$function__7_save_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dialog_title = python_pars[1];
    PyObject *par_file_name = python_pars[2];
    PyObject *par_initial_directory = python_pars[3];
    PyObject *par_file_type = python_pars[4];
    PyObject *par_allowed_extensions = python_pars[5];
    struct Nuitka_FrameObject *frame_1617127a3bf5b1dd1585060e0036f139;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1617127a3bf5b1dd1585060e0036f139 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1617127a3bf5b1dd1585060e0036f139)) {
        Py_XDECREF(cache_frame_1617127a3bf5b1dd1585060e0036f139);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1617127a3bf5b1dd1585060e0036f139 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1617127a3bf5b1dd1585060e0036f139 = MAKE_FUNCTION_FRAME(codeobj_1617127a3bf5b1dd1585060e0036f139, module_flet_core$file_picker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1617127a3bf5b1dd1585060e0036f139->m_type_description == NULL);
    frame_1617127a3bf5b1dd1585060e0036f139 = cache_frame_1617127a3bf5b1dd1585060e0036f139;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1617127a3bf5b1dd1585060e0036f139);
    assert(Py_REFCNT(frame_1617127a3bf5b1dd1585060e0036f139) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[45];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_dialog_title);
        tmp_assattr_value_2 = par_dialog_title;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_file_name);
        tmp_assattr_value_3 = par_file_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[46], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_initial_directory);
        tmp_assattr_value_4 = par_initial_directory;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[37], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_file_type);
        tmp_assattr_value_5 = par_file_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[38], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_allowed_extensions);
        tmp_assattr_value_6 = par_allowed_extensions;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[39], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1617127a3bf5b1dd1585060e0036f139->m_frame.f_lineno = 200;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1617127a3bf5b1dd1585060e0036f139, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1617127a3bf5b1dd1585060e0036f139->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1617127a3bf5b1dd1585060e0036f139, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1617127a3bf5b1dd1585060e0036f139,
        type_description_1,
        par_self,
        par_dialog_title,
        par_file_name,
        par_initial_directory,
        par_file_type,
        par_allowed_extensions
    );


    // Release cached frame if used for exception.
    if (frame_1617127a3bf5b1dd1585060e0036f139 == cache_frame_1617127a3bf5b1dd1585060e0036f139) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1617127a3bf5b1dd1585060e0036f139);
        cache_frame_1617127a3bf5b1dd1585060e0036f139 = NULL;
    }

    assertFrameObject(frame_1617127a3bf5b1dd1585060e0036f139);

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
    CHECK_OBJECT(par_dialog_title);
    Py_DECREF(par_dialog_title);
    CHECK_OBJECT(par_file_name);
    Py_DECREF(par_file_name);
    CHECK_OBJECT(par_initial_directory);
    Py_DECREF(par_initial_directory);
    CHECK_OBJECT(par_file_type);
    Py_DECREF(par_file_type);
    CHECK_OBJECT(par_allowed_extensions);
    Py_DECREF(par_allowed_extensions);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialog_title);
    Py_DECREF(par_dialog_title);
    CHECK_OBJECT(par_file_name);
    Py_DECREF(par_file_name);
    CHECK_OBJECT(par_initial_directory);
    Py_DECREF(par_initial_directory);
    CHECK_OBJECT(par_file_type);
    Py_DECREF(par_file_type);
    CHECK_OBJECT(par_allowed_extensions);
    Py_DECREF(par_allowed_extensions);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$file_picker$$$function__8_save_file_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_dialog_title = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_file_name = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_initial_directory = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_file_type = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_allowed_extensions = Nuitka_Cell_New1(python_pars[5]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[6];

        tmp_closure_1[0] = par_allowed_extensions;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_dialog_title;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_file_name;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_file_type;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_initial_directory;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_self;
        Py_INCREF(tmp_closure_1[5]);

        tmp_return_value = MAKE_COROUTINE_flet_core$file_picker$$$function__8_save_file_async$$$coroutine__1_save_file_async(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialog_title);
    Py_DECREF(par_dialog_title);
    CHECK_OBJECT(par_file_name);
    Py_DECREF(par_file_name);
    CHECK_OBJECT(par_initial_directory);
    Py_DECREF(par_initial_directory);
    CHECK_OBJECT(par_file_type);
    Py_DECREF(par_file_type);
    CHECK_OBJECT(par_allowed_extensions);
    Py_DECREF(par_allowed_extensions);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct flet_core$file_picker$$$function__8_save_file_async$$$coroutine__1_save_file_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$file_picker$$$function__8_save_file_async$$$coroutine__1_save_file_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$file_picker$$$function__8_save_file_async$$$coroutine__1_save_file_async_locals *coroutine_heap = (struct flet_core$file_picker$$$function__8_save_file_async$$$coroutine__1_save_file_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_d95fcd195f0dbdd43f71898eae75ad74, module_flet_core$file_picker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[45];
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 210;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 210;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[36]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_value_2);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[46]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 212;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 212;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[46], tmp_assattr_value_3);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 212;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[37]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_4 = Nuitka_Cell_GET(coroutine->m_closure[4]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[37], tmp_assattr_value_4);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[38]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_5 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[38], tmp_assattr_value_5);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[39]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[39], tmp_assattr_value_6);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 216;
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 216;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine->m_frame->m_frame.f_lineno = 216;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 216;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 216;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 216;
            coroutine_heap->type_description_1 = "cccccc";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 216;
            coroutine_heap->type_description_1 = "cccccc";
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
            coroutine->m_closure[5],
            coroutine->m_closure[1],
            coroutine->m_closure[2],
            coroutine->m_closure[4],
            coroutine->m_closure[3],
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

static PyObject *MAKE_COROUTINE_flet_core$file_picker$$$function__8_save_file_async$$$coroutine__1_save_file_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$file_picker$$$function__8_save_file_async$$$coroutine__1_save_file_async_context,
        module_flet_core$file_picker,
        mod_consts[47],
        mod_consts[48],
        codeobj_d95fcd195f0dbdd43f71898eae75ad74,
        closure,
        6,
#if 1
        sizeof(struct flet_core$file_picker$$$function__8_save_file_async$$$coroutine__1_save_file_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$file_picker$$$function__9_get_directory_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dialog_title = python_pars[1];
    PyObject *par_initial_directory = python_pars[2];
    struct Nuitka_FrameObject *frame_cb78487dfd04a24875956a6b2b917733;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cb78487dfd04a24875956a6b2b917733 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb78487dfd04a24875956a6b2b917733)) {
        Py_XDECREF(cache_frame_cb78487dfd04a24875956a6b2b917733);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb78487dfd04a24875956a6b2b917733 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb78487dfd04a24875956a6b2b917733 = MAKE_FUNCTION_FRAME(codeobj_cb78487dfd04a24875956a6b2b917733, module_flet_core$file_picker, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb78487dfd04a24875956a6b2b917733->m_type_description == NULL);
    frame_cb78487dfd04a24875956a6b2b917733 = cache_frame_cb78487dfd04a24875956a6b2b917733;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb78487dfd04a24875956a6b2b917733);
    assert(Py_REFCNT(frame_cb78487dfd04a24875956a6b2b917733) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[49];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_dialog_title);
        tmp_assattr_value_2 = par_dialog_title;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_initial_directory);
        tmp_assattr_value_3 = par_initial_directory;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[37], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cb78487dfd04a24875956a6b2b917733->m_frame.f_lineno = 226;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb78487dfd04a24875956a6b2b917733, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb78487dfd04a24875956a6b2b917733->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb78487dfd04a24875956a6b2b917733, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb78487dfd04a24875956a6b2b917733,
        type_description_1,
        par_self,
        par_dialog_title,
        par_initial_directory
    );


    // Release cached frame if used for exception.
    if (frame_cb78487dfd04a24875956a6b2b917733 == cache_frame_cb78487dfd04a24875956a6b2b917733) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb78487dfd04a24875956a6b2b917733);
        cache_frame_cb78487dfd04a24875956a6b2b917733 = NULL;
    }

    assertFrameObject(frame_cb78487dfd04a24875956a6b2b917733);

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
    CHECK_OBJECT(par_dialog_title);
    Py_DECREF(par_dialog_title);
    CHECK_OBJECT(par_initial_directory);
    Py_DECREF(par_initial_directory);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialog_title);
    Py_DECREF(par_dialog_title);
    CHECK_OBJECT(par_initial_directory);
    Py_DECREF(par_initial_directory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$file_picker$$$function__10_get_directory_path_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_dialog_title = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_initial_directory = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_dialog_title;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_initial_directory;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_flet_core$file_picker$$$function__10_get_directory_path_async$$$coroutine__1_get_directory_path_async(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialog_title);
    Py_DECREF(par_dialog_title);
    CHECK_OBJECT(par_initial_directory);
    Py_DECREF(par_initial_directory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct flet_core$file_picker$$$function__10_get_directory_path_async$$$coroutine__1_get_directory_path_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$file_picker$$$function__10_get_directory_path_async$$$coroutine__1_get_directory_path_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$file_picker$$$function__10_get_directory_path_async$$$coroutine__1_get_directory_path_async_locals *coroutine_heap = (struct flet_core$file_picker$$$function__10_get_directory_path_async$$$coroutine__1_get_directory_path_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_3bdf601ca7015d6701ab9026b83d88d8, module_flet_core$file_picker, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[49];
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 233;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 233;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[36]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_value_2);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[37]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 235;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 235;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[37], tmp_assattr_value_3);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 235;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 236;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 236;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 236;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 236;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 236;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 236;
            coroutine_heap->type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 236;
            coroutine_heap->type_description_1 = "ccc";
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
            coroutine->m_closure[2],
            coroutine->m_closure[0],
            coroutine->m_closure[1]
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

static PyObject *MAKE_COROUTINE_flet_core$file_picker$$$function__10_get_directory_path_async$$$coroutine__1_get_directory_path_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$file_picker$$$function__10_get_directory_path_async$$$coroutine__1_get_directory_path_async_context,
        module_flet_core$file_picker,
        mod_consts[50],
        mod_consts[51],
        codeobj_3bdf601ca7015d6701ab9026b83d88d8,
        closure,
        3,
#if 1
        sizeof(struct flet_core$file_picker$$$function__10_get_directory_path_async$$$coroutine__1_get_directory_path_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$file_picker$$$function__11_upload(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_files = python_pars[1];
    struct Nuitka_FrameObject *frame_d230fd1f5219b9c8153f731ef1ca4eef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d230fd1f5219b9c8153f731ef1ca4eef = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d230fd1f5219b9c8153f731ef1ca4eef)) {
        Py_XDECREF(cache_frame_d230fd1f5219b9c8153f731ef1ca4eef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d230fd1f5219b9c8153f731ef1ca4eef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d230fd1f5219b9c8153f731ef1ca4eef = MAKE_FUNCTION_FRAME(codeobj_d230fd1f5219b9c8153f731ef1ca4eef, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d230fd1f5219b9c8153f731ef1ca4eef->m_type_description == NULL);
    frame_d230fd1f5219b9c8153f731ef1ca4eef = cache_frame_d230fd1f5219b9c8153f731ef1ca4eef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d230fd1f5219b9c8153f731ef1ca4eef);
    assert(Py_REFCNT(frame_d230fd1f5219b9c8153f731ef1ca4eef) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_files);
        tmp_assattr_value_1 = par_files;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d230fd1f5219b9c8153f731ef1ca4eef->m_frame.f_lineno = 240;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
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
        exception_tb = MAKE_TRACEBACK(frame_d230fd1f5219b9c8153f731ef1ca4eef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d230fd1f5219b9c8153f731ef1ca4eef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d230fd1f5219b9c8153f731ef1ca4eef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d230fd1f5219b9c8153f731ef1ca4eef,
        type_description_1,
        par_self,
        par_files
    );


    // Release cached frame if used for exception.
    if (frame_d230fd1f5219b9c8153f731ef1ca4eef == cache_frame_d230fd1f5219b9c8153f731ef1ca4eef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d230fd1f5219b9c8153f731ef1ca4eef);
        cache_frame_d230fd1f5219b9c8153f731ef1ca4eef = NULL;
    }

    assertFrameObject(frame_d230fd1f5219b9c8153f731ef1ca4eef);

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
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$file_picker$$$function__12_upload_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_files = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_files;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_COROUTINE_flet_core$file_picker$$$function__12_upload_async$$$coroutine__1_upload_async(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct flet_core$file_picker$$$function__12_upload_async$$$coroutine__1_upload_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$file_picker$$$function__12_upload_async$$$coroutine__1_upload_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$file_picker$$$function__12_upload_async$$$coroutine__1_upload_async_locals *coroutine_heap = (struct flet_core$file_picker$$$function__12_upload_async$$$coroutine__1_upload_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ee2da0b7336eb759a48d6f0eef05d770, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[1]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 243;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 243;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 243;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 244;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 244;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cc";
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
            coroutine->m_closure[1],
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

static PyObject *MAKE_COROUTINE_flet_core$file_picker$$$function__12_upload_async$$$coroutine__1_upload_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$file_picker$$$function__12_upload_async$$$coroutine__1_upload_async_context,
        module_flet_core$file_picker,
        mod_consts[52],
        mod_consts[53],
        codeobj_ee2da0b7336eb759a48d6f0eef05d770,
        closure,
        2,
#if 1
        sizeof(struct flet_core$file_picker$$$function__12_upload_async$$$coroutine__1_upload_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$file_picker$$$function__13_state(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_db923e66f9cdf8f2fa0723441d97e5fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_db923e66f9cdf8f2fa0723441d97e5fe = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_db923e66f9cdf8f2fa0723441d97e5fe)) {
        Py_XDECREF(cache_frame_db923e66f9cdf8f2fa0723441d97e5fe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db923e66f9cdf8f2fa0723441d97e5fe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db923e66f9cdf8f2fa0723441d97e5fe = MAKE_FUNCTION_FRAME(codeobj_db923e66f9cdf8f2fa0723441d97e5fe, module_flet_core$file_picker, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_db923e66f9cdf8f2fa0723441d97e5fe->m_type_description == NULL);
    frame_db923e66f9cdf8f2fa0723441d97e5fe = cache_frame_db923e66f9cdf8f2fa0723441d97e5fe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_db923e66f9cdf8f2fa0723441d97e5fe);
    assert(Py_REFCNT(frame_db923e66f9cdf8f2fa0723441d97e5fe) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_db923e66f9cdf8f2fa0723441d97e5fe->m_frame.f_lineno = 249;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
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
        exception_tb = MAKE_TRACEBACK(frame_db923e66f9cdf8f2fa0723441d97e5fe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db923e66f9cdf8f2fa0723441d97e5fe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db923e66f9cdf8f2fa0723441d97e5fe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db923e66f9cdf8f2fa0723441d97e5fe,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_db923e66f9cdf8f2fa0723441d97e5fe == cache_frame_db923e66f9cdf8f2fa0723441d97e5fe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_db923e66f9cdf8f2fa0723441d97e5fe);
        cache_frame_db923e66f9cdf8f2fa0723441d97e5fe = NULL;
    }

    assertFrameObject(frame_db923e66f9cdf8f2fa0723441d97e5fe);

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


static PyObject *impl_flet_core$file_picker$$$function__14_state(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_c4044ef077d1924a07f64bb9fca4abd8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c4044ef077d1924a07f64bb9fca4abd8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c4044ef077d1924a07f64bb9fca4abd8)) {
        Py_XDECREF(cache_frame_c4044ef077d1924a07f64bb9fca4abd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c4044ef077d1924a07f64bb9fca4abd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c4044ef077d1924a07f64bb9fca4abd8 = MAKE_FUNCTION_FRAME(codeobj_c4044ef077d1924a07f64bb9fca4abd8, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c4044ef077d1924a07f64bb9fca4abd8->m_type_description == NULL);
    frame_c4044ef077d1924a07f64bb9fca4abd8 = cache_frame_c4044ef077d1924a07f64bb9fca4abd8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c4044ef077d1924a07f64bb9fca4abd8);
    assert(Py_REFCNT(frame_c4044ef077d1924a07f64bb9fca4abd8) == 2);

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
        frame_c4044ef077d1924a07f64bb9fca4abd8->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
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
        exception_tb = MAKE_TRACEBACK(frame_c4044ef077d1924a07f64bb9fca4abd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c4044ef077d1924a07f64bb9fca4abd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c4044ef077d1924a07f64bb9fca4abd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c4044ef077d1924a07f64bb9fca4abd8,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c4044ef077d1924a07f64bb9fca4abd8 == cache_frame_c4044ef077d1924a07f64bb9fca4abd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c4044ef077d1924a07f64bb9fca4abd8);
        cache_frame_c4044ef077d1924a07f64bb9fca4abd8 = NULL;
    }

    assertFrameObject(frame_c4044ef077d1924a07f64bb9fca4abd8);

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


static PyObject *impl_flet_core$file_picker$$$function__15_result(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_803d18866dff23104d95296e575819d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_803d18866dff23104d95296e575819d6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_803d18866dff23104d95296e575819d6)) {
        Py_XDECREF(cache_frame_803d18866dff23104d95296e575819d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_803d18866dff23104d95296e575819d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_803d18866dff23104d95296e575819d6 = MAKE_FUNCTION_FRAME(codeobj_803d18866dff23104d95296e575819d6, module_flet_core$file_picker, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_803d18866dff23104d95296e575819d6->m_type_description == NULL);
    frame_803d18866dff23104d95296e575819d6 = cache_frame_803d18866dff23104d95296e575819d6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_803d18866dff23104d95296e575819d6);
    assert(Py_REFCNT(frame_803d18866dff23104d95296e575819d6) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
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
        exception_tb = MAKE_TRACEBACK(frame_803d18866dff23104d95296e575819d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_803d18866dff23104d95296e575819d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_803d18866dff23104d95296e575819d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_803d18866dff23104d95296e575819d6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_803d18866dff23104d95296e575819d6 == cache_frame_803d18866dff23104d95296e575819d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_803d18866dff23104d95296e575819d6);
        cache_frame_803d18866dff23104d95296e575819d6 = NULL;
    }

    assertFrameObject(frame_803d18866dff23104d95296e575819d6);

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


static PyObject *impl_flet_core$file_picker$$$function__16_dialog_title(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_61fadaf5dc5b1bdd239e67cc3affa20f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_61fadaf5dc5b1bdd239e67cc3affa20f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_61fadaf5dc5b1bdd239e67cc3affa20f)) {
        Py_XDECREF(cache_frame_61fadaf5dc5b1bdd239e67cc3affa20f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61fadaf5dc5b1bdd239e67cc3affa20f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61fadaf5dc5b1bdd239e67cc3affa20f = MAKE_FUNCTION_FRAME(codeobj_61fadaf5dc5b1bdd239e67cc3affa20f, module_flet_core$file_picker, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_61fadaf5dc5b1bdd239e67cc3affa20f->m_type_description == NULL);
    frame_61fadaf5dc5b1bdd239e67cc3affa20f = cache_frame_61fadaf5dc5b1bdd239e67cc3affa20f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_61fadaf5dc5b1bdd239e67cc3affa20f);
    assert(Py_REFCNT(frame_61fadaf5dc5b1bdd239e67cc3affa20f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_61fadaf5dc5b1bdd239e67cc3affa20f->m_frame.f_lineno = 263;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
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
        exception_tb = MAKE_TRACEBACK(frame_61fadaf5dc5b1bdd239e67cc3affa20f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61fadaf5dc5b1bdd239e67cc3affa20f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61fadaf5dc5b1bdd239e67cc3affa20f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61fadaf5dc5b1bdd239e67cc3affa20f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_61fadaf5dc5b1bdd239e67cc3affa20f == cache_frame_61fadaf5dc5b1bdd239e67cc3affa20f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_61fadaf5dc5b1bdd239e67cc3affa20f);
        cache_frame_61fadaf5dc5b1bdd239e67cc3affa20f = NULL;
    }

    assertFrameObject(frame_61fadaf5dc5b1bdd239e67cc3affa20f);

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


static PyObject *impl_flet_core$file_picker$$$function__17_dialog_title(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_90e5ff56414cd887d22c2141c86f1ae1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_90e5ff56414cd887d22c2141c86f1ae1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_90e5ff56414cd887d22c2141c86f1ae1)) {
        Py_XDECREF(cache_frame_90e5ff56414cd887d22c2141c86f1ae1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90e5ff56414cd887d22c2141c86f1ae1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90e5ff56414cd887d22c2141c86f1ae1 = MAKE_FUNCTION_FRAME(codeobj_90e5ff56414cd887d22c2141c86f1ae1, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_90e5ff56414cd887d22c2141c86f1ae1->m_type_description == NULL);
    frame_90e5ff56414cd887d22c2141c86f1ae1 = cache_frame_90e5ff56414cd887d22c2141c86f1ae1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_90e5ff56414cd887d22c2141c86f1ae1);
    assert(Py_REFCNT(frame_90e5ff56414cd887d22c2141c86f1ae1) == 2);

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
        frame_90e5ff56414cd887d22c2141c86f1ae1->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
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
        exception_tb = MAKE_TRACEBACK(frame_90e5ff56414cd887d22c2141c86f1ae1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90e5ff56414cd887d22c2141c86f1ae1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90e5ff56414cd887d22c2141c86f1ae1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90e5ff56414cd887d22c2141c86f1ae1,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_90e5ff56414cd887d22c2141c86f1ae1 == cache_frame_90e5ff56414cd887d22c2141c86f1ae1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90e5ff56414cd887d22c2141c86f1ae1);
        cache_frame_90e5ff56414cd887d22c2141c86f1ae1 = NULL;
    }

    assertFrameObject(frame_90e5ff56414cd887d22c2141c86f1ae1);

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


static PyObject *impl_flet_core$file_picker$$$function__18_file_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c4c9f9d044812adb9594a257d8eb3be0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c4c9f9d044812adb9594a257d8eb3be0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c4c9f9d044812adb9594a257d8eb3be0)) {
        Py_XDECREF(cache_frame_c4c9f9d044812adb9594a257d8eb3be0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c4c9f9d044812adb9594a257d8eb3be0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c4c9f9d044812adb9594a257d8eb3be0 = MAKE_FUNCTION_FRAME(codeobj_c4c9f9d044812adb9594a257d8eb3be0, module_flet_core$file_picker, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c4c9f9d044812adb9594a257d8eb3be0->m_type_description == NULL);
    frame_c4c9f9d044812adb9594a257d8eb3be0 = cache_frame_c4c9f9d044812adb9594a257d8eb3be0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c4c9f9d044812adb9594a257d8eb3be0);
    assert(Py_REFCNT(frame_c4c9f9d044812adb9594a257d8eb3be0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_c4c9f9d044812adb9594a257d8eb3be0->m_frame.f_lineno = 272;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
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
        exception_tb = MAKE_TRACEBACK(frame_c4c9f9d044812adb9594a257d8eb3be0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c4c9f9d044812adb9594a257d8eb3be0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c4c9f9d044812adb9594a257d8eb3be0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c4c9f9d044812adb9594a257d8eb3be0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c4c9f9d044812adb9594a257d8eb3be0 == cache_frame_c4c9f9d044812adb9594a257d8eb3be0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c4c9f9d044812adb9594a257d8eb3be0);
        cache_frame_c4c9f9d044812adb9594a257d8eb3be0 = NULL;
    }

    assertFrameObject(frame_c4c9f9d044812adb9594a257d8eb3be0);

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


static PyObject *impl_flet_core$file_picker$$$function__19_file_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_5ec7d31de1e9053f289e08184b5813df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5ec7d31de1e9053f289e08184b5813df = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5ec7d31de1e9053f289e08184b5813df)) {
        Py_XDECREF(cache_frame_5ec7d31de1e9053f289e08184b5813df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ec7d31de1e9053f289e08184b5813df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ec7d31de1e9053f289e08184b5813df = MAKE_FUNCTION_FRAME(codeobj_5ec7d31de1e9053f289e08184b5813df, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5ec7d31de1e9053f289e08184b5813df->m_type_description == NULL);
    frame_5ec7d31de1e9053f289e08184b5813df = cache_frame_5ec7d31de1e9053f289e08184b5813df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5ec7d31de1e9053f289e08184b5813df);
    assert(Py_REFCNT(frame_5ec7d31de1e9053f289e08184b5813df) == 2);

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
        frame_5ec7d31de1e9053f289e08184b5813df->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
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
        exception_tb = MAKE_TRACEBACK(frame_5ec7d31de1e9053f289e08184b5813df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ec7d31de1e9053f289e08184b5813df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ec7d31de1e9053f289e08184b5813df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ec7d31de1e9053f289e08184b5813df,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_5ec7d31de1e9053f289e08184b5813df == cache_frame_5ec7d31de1e9053f289e08184b5813df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5ec7d31de1e9053f289e08184b5813df);
        cache_frame_5ec7d31de1e9053f289e08184b5813df = NULL;
    }

    assertFrameObject(frame_5ec7d31de1e9053f289e08184b5813df);

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


static PyObject *impl_flet_core$file_picker$$$function__20_initial_directory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6ee164c46ee8a58d72eeec4143b82fb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6ee164c46ee8a58d72eeec4143b82fb3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6ee164c46ee8a58d72eeec4143b82fb3)) {
        Py_XDECREF(cache_frame_6ee164c46ee8a58d72eeec4143b82fb3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ee164c46ee8a58d72eeec4143b82fb3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ee164c46ee8a58d72eeec4143b82fb3 = MAKE_FUNCTION_FRAME(codeobj_6ee164c46ee8a58d72eeec4143b82fb3, module_flet_core$file_picker, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6ee164c46ee8a58d72eeec4143b82fb3->m_type_description == NULL);
    frame_6ee164c46ee8a58d72eeec4143b82fb3 = cache_frame_6ee164c46ee8a58d72eeec4143b82fb3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6ee164c46ee8a58d72eeec4143b82fb3);
    assert(Py_REFCNT(frame_6ee164c46ee8a58d72eeec4143b82fb3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6ee164c46ee8a58d72eeec4143b82fb3->m_frame.f_lineno = 281;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
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
        exception_tb = MAKE_TRACEBACK(frame_6ee164c46ee8a58d72eeec4143b82fb3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ee164c46ee8a58d72eeec4143b82fb3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ee164c46ee8a58d72eeec4143b82fb3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ee164c46ee8a58d72eeec4143b82fb3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6ee164c46ee8a58d72eeec4143b82fb3 == cache_frame_6ee164c46ee8a58d72eeec4143b82fb3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6ee164c46ee8a58d72eeec4143b82fb3);
        cache_frame_6ee164c46ee8a58d72eeec4143b82fb3 = NULL;
    }

    assertFrameObject(frame_6ee164c46ee8a58d72eeec4143b82fb3);

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


static PyObject *impl_flet_core$file_picker$$$function__21_initial_directory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d755c7e69f61e2509bbe226a15cd11fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d755c7e69f61e2509bbe226a15cd11fa = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d755c7e69f61e2509bbe226a15cd11fa)) {
        Py_XDECREF(cache_frame_d755c7e69f61e2509bbe226a15cd11fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d755c7e69f61e2509bbe226a15cd11fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d755c7e69f61e2509bbe226a15cd11fa = MAKE_FUNCTION_FRAME(codeobj_d755c7e69f61e2509bbe226a15cd11fa, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d755c7e69f61e2509bbe226a15cd11fa->m_type_description == NULL);
    frame_d755c7e69f61e2509bbe226a15cd11fa = cache_frame_d755c7e69f61e2509bbe226a15cd11fa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d755c7e69f61e2509bbe226a15cd11fa);
    assert(Py_REFCNT(frame_d755c7e69f61e2509bbe226a15cd11fa) == 2);

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
        frame_d755c7e69f61e2509bbe226a15cd11fa->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
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
        exception_tb = MAKE_TRACEBACK(frame_d755c7e69f61e2509bbe226a15cd11fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d755c7e69f61e2509bbe226a15cd11fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d755c7e69f61e2509bbe226a15cd11fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d755c7e69f61e2509bbe226a15cd11fa,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d755c7e69f61e2509bbe226a15cd11fa == cache_frame_d755c7e69f61e2509bbe226a15cd11fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d755c7e69f61e2509bbe226a15cd11fa);
        cache_frame_d755c7e69f61e2509bbe226a15cd11fa = NULL;
    }

    assertFrameObject(frame_d755c7e69f61e2509bbe226a15cd11fa);

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


static PyObject *impl_flet_core$file_picker$$$function__22_file_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2b3ee9183fb3647d630485cab3e59c04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b3ee9183fb3647d630485cab3e59c04 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b3ee9183fb3647d630485cab3e59c04)) {
        Py_XDECREF(cache_frame_2b3ee9183fb3647d630485cab3e59c04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b3ee9183fb3647d630485cab3e59c04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b3ee9183fb3647d630485cab3e59c04 = MAKE_FUNCTION_FRAME(codeobj_2b3ee9183fb3647d630485cab3e59c04, module_flet_core$file_picker, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b3ee9183fb3647d630485cab3e59c04->m_type_description == NULL);
    frame_2b3ee9183fb3647d630485cab3e59c04 = cache_frame_2b3ee9183fb3647d630485cab3e59c04;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2b3ee9183fb3647d630485cab3e59c04);
    assert(Py_REFCNT(frame_2b3ee9183fb3647d630485cab3e59c04) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
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
        exception_tb = MAKE_TRACEBACK(frame_2b3ee9183fb3647d630485cab3e59c04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b3ee9183fb3647d630485cab3e59c04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b3ee9183fb3647d630485cab3e59c04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b3ee9183fb3647d630485cab3e59c04,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2b3ee9183fb3647d630485cab3e59c04 == cache_frame_2b3ee9183fb3647d630485cab3e59c04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b3ee9183fb3647d630485cab3e59c04);
        cache_frame_2b3ee9183fb3647d630485cab3e59c04 = NULL;
    }

    assertFrameObject(frame_2b3ee9183fb3647d630485cab3e59c04);

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


static PyObject *impl_flet_core$file_picker$$$function__23_file_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_122f7dc62c92be2e143394c220d80f2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_122f7dc62c92be2e143394c220d80f2f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_122f7dc62c92be2e143394c220d80f2f)) {
        Py_XDECREF(cache_frame_122f7dc62c92be2e143394c220d80f2f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_122f7dc62c92be2e143394c220d80f2f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_122f7dc62c92be2e143394c220d80f2f = MAKE_FUNCTION_FRAME(codeobj_122f7dc62c92be2e143394c220d80f2f, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_122f7dc62c92be2e143394c220d80f2f->m_type_description == NULL);
    frame_122f7dc62c92be2e143394c220d80f2f = cache_frame_122f7dc62c92be2e143394c220d80f2f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_122f7dc62c92be2e143394c220d80f2f);
    assert(Py_REFCNT(frame_122f7dc62c92be2e143394c220d80f2f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[56]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[65];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[66]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_122f7dc62c92be2e143394c220d80f2f->m_frame.f_lineno = 296;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
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
        frame_122f7dc62c92be2e143394c220d80f2f->m_frame.f_lineno = 298;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[67], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
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
        exception_tb = MAKE_TRACEBACK(frame_122f7dc62c92be2e143394c220d80f2f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_122f7dc62c92be2e143394c220d80f2f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_122f7dc62c92be2e143394c220d80f2f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_122f7dc62c92be2e143394c220d80f2f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_122f7dc62c92be2e143394c220d80f2f == cache_frame_122f7dc62c92be2e143394c220d80f2f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_122f7dc62c92be2e143394c220d80f2f);
        cache_frame_122f7dc62c92be2e143394c220d80f2f = NULL;
    }

    assertFrameObject(frame_122f7dc62c92be2e143394c220d80f2f);

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


static PyObject *impl_flet_core$file_picker$$$function__24___set_file_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_9bbc4a86c1fc58cec90e16453af5d2b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9bbc4a86c1fc58cec90e16453af5d2b8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9bbc4a86c1fc58cec90e16453af5d2b8)) {
        Py_XDECREF(cache_frame_9bbc4a86c1fc58cec90e16453af5d2b8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9bbc4a86c1fc58cec90e16453af5d2b8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9bbc4a86c1fc58cec90e16453af5d2b8 = MAKE_FUNCTION_FRAME(codeobj_9bbc4a86c1fc58cec90e16453af5d2b8, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9bbc4a86c1fc58cec90e16453af5d2b8->m_type_description == NULL);
    frame_9bbc4a86c1fc58cec90e16453af5d2b8 = cache_frame_9bbc4a86c1fc58cec90e16453af5d2b8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9bbc4a86c1fc58cec90e16453af5d2b8);
    assert(Py_REFCNT(frame_9bbc4a86c1fc58cec90e16453af5d2b8) == 2);

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
        frame_9bbc4a86c1fc58cec90e16453af5d2b8->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
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
        exception_tb = MAKE_TRACEBACK(frame_9bbc4a86c1fc58cec90e16453af5d2b8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9bbc4a86c1fc58cec90e16453af5d2b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9bbc4a86c1fc58cec90e16453af5d2b8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9bbc4a86c1fc58cec90e16453af5d2b8,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_9bbc4a86c1fc58cec90e16453af5d2b8 == cache_frame_9bbc4a86c1fc58cec90e16453af5d2b8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9bbc4a86c1fc58cec90e16453af5d2b8);
        cache_frame_9bbc4a86c1fc58cec90e16453af5d2b8 = NULL;
    }

    assertFrameObject(frame_9bbc4a86c1fc58cec90e16453af5d2b8);

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


static PyObject *impl_flet_core$file_picker$$$function__25_allowed_extensions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2b131034e3596ad3ce72c0c9f6882681;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b131034e3596ad3ce72c0c9f6882681 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b131034e3596ad3ce72c0c9f6882681)) {
        Py_XDECREF(cache_frame_2b131034e3596ad3ce72c0c9f6882681);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b131034e3596ad3ce72c0c9f6882681 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b131034e3596ad3ce72c0c9f6882681 = MAKE_FUNCTION_FRAME(codeobj_2b131034e3596ad3ce72c0c9f6882681, module_flet_core$file_picker, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b131034e3596ad3ce72c0c9f6882681->m_type_description == NULL);
    frame_2b131034e3596ad3ce72c0c9f6882681 = cache_frame_2b131034e3596ad3ce72c0c9f6882681;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2b131034e3596ad3ce72c0c9f6882681);
    assert(Py_REFCNT(frame_2b131034e3596ad3ce72c0c9f6882681) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
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
        exception_tb = MAKE_TRACEBACK(frame_2b131034e3596ad3ce72c0c9f6882681, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b131034e3596ad3ce72c0c9f6882681->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b131034e3596ad3ce72c0c9f6882681, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b131034e3596ad3ce72c0c9f6882681,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2b131034e3596ad3ce72c0c9f6882681 == cache_frame_2b131034e3596ad3ce72c0c9f6882681) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b131034e3596ad3ce72c0c9f6882681);
        cache_frame_2b131034e3596ad3ce72c0c9f6882681 = NULL;
    }

    assertFrameObject(frame_2b131034e3596ad3ce72c0c9f6882681);

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


static PyObject *impl_flet_core$file_picker$$$function__26_allowed_extensions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_c44736f63519dbcb7426a456c55ce3d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c44736f63519dbcb7426a456c55ce3d2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c44736f63519dbcb7426a456c55ce3d2)) {
        Py_XDECREF(cache_frame_c44736f63519dbcb7426a456c55ce3d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c44736f63519dbcb7426a456c55ce3d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c44736f63519dbcb7426a456c55ce3d2 = MAKE_FUNCTION_FRAME(codeobj_c44736f63519dbcb7426a456c55ce3d2, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c44736f63519dbcb7426a456c55ce3d2->m_type_description == NULL);
    frame_c44736f63519dbcb7426a456c55ce3d2 = cache_frame_c44736f63519dbcb7426a456c55ce3d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c44736f63519dbcb7426a456c55ce3d2);
    assert(Py_REFCNT(frame_c44736f63519dbcb7426a456c55ce3d2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[22], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c44736f63519dbcb7426a456c55ce3d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c44736f63519dbcb7426a456c55ce3d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c44736f63519dbcb7426a456c55ce3d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c44736f63519dbcb7426a456c55ce3d2,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c44736f63519dbcb7426a456c55ce3d2 == cache_frame_c44736f63519dbcb7426a456c55ce3d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c44736f63519dbcb7426a456c55ce3d2);
        cache_frame_c44736f63519dbcb7426a456c55ce3d2 = NULL;
    }

    assertFrameObject(frame_c44736f63519dbcb7426a456c55ce3d2);

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


static PyObject *impl_flet_core$file_picker$$$function__27_allow_multiple(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8214a968c6d278e0409e9fff07f22488;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8214a968c6d278e0409e9fff07f22488 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8214a968c6d278e0409e9fff07f22488)) {
        Py_XDECREF(cache_frame_8214a968c6d278e0409e9fff07f22488);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8214a968c6d278e0409e9fff07f22488 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8214a968c6d278e0409e9fff07f22488 = MAKE_FUNCTION_FRAME(codeobj_8214a968c6d278e0409e9fff07f22488, module_flet_core$file_picker, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8214a968c6d278e0409e9fff07f22488->m_type_description == NULL);
    frame_8214a968c6d278e0409e9fff07f22488 = cache_frame_8214a968c6d278e0409e9fff07f22488;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8214a968c6d278e0409e9fff07f22488);
    assert(Py_REFCNT(frame_8214a968c6d278e0409e9fff07f22488) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8214a968c6d278e0409e9fff07f22488->m_frame.f_lineno = 315;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[68], 0), mod_consts[69]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
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
        exception_tb = MAKE_TRACEBACK(frame_8214a968c6d278e0409e9fff07f22488, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8214a968c6d278e0409e9fff07f22488->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8214a968c6d278e0409e9fff07f22488, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8214a968c6d278e0409e9fff07f22488,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8214a968c6d278e0409e9fff07f22488 == cache_frame_8214a968c6d278e0409e9fff07f22488) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8214a968c6d278e0409e9fff07f22488);
        cache_frame_8214a968c6d278e0409e9fff07f22488 = NULL;
    }

    assertFrameObject(frame_8214a968c6d278e0409e9fff07f22488);

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


static PyObject *impl_flet_core$file_picker$$$function__28_allow_multiple(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_1135b049ef88c404b38b33428b956e8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1135b049ef88c404b38b33428b956e8f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1135b049ef88c404b38b33428b956e8f)) {
        Py_XDECREF(cache_frame_1135b049ef88c404b38b33428b956e8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1135b049ef88c404b38b33428b956e8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1135b049ef88c404b38b33428b956e8f = MAKE_FUNCTION_FRAME(codeobj_1135b049ef88c404b38b33428b956e8f, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1135b049ef88c404b38b33428b956e8f->m_type_description == NULL);
    frame_1135b049ef88c404b38b33428b956e8f = cache_frame_1135b049ef88c404b38b33428b956e8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1135b049ef88c404b38b33428b956e8f);
    assert(Py_REFCNT(frame_1135b049ef88c404b38b33428b956e8f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[70];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_1135b049ef88c404b38b33428b956e8f->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
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
        exception_tb = MAKE_TRACEBACK(frame_1135b049ef88c404b38b33428b956e8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1135b049ef88c404b38b33428b956e8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1135b049ef88c404b38b33428b956e8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1135b049ef88c404b38b33428b956e8f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_1135b049ef88c404b38b33428b956e8f == cache_frame_1135b049ef88c404b38b33428b956e8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1135b049ef88c404b38b33428b956e8f);
        cache_frame_1135b049ef88c404b38b33428b956e8f = NULL;
    }

    assertFrameObject(frame_1135b049ef88c404b38b33428b956e8f);

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


static PyObject *impl_flet_core$file_picker$$$function__29_on_result(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c8f0919477809040cbb6392bc781e484;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c8f0919477809040cbb6392bc781e484 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8f0919477809040cbb6392bc781e484)) {
        Py_XDECREF(cache_frame_c8f0919477809040cbb6392bc781e484);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8f0919477809040cbb6392bc781e484 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8f0919477809040cbb6392bc781e484 = MAKE_FUNCTION_FRAME(codeobj_c8f0919477809040cbb6392bc781e484, module_flet_core$file_picker, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8f0919477809040cbb6392bc781e484->m_type_description == NULL);
    frame_c8f0919477809040cbb6392bc781e484 = cache_frame_c8f0919477809040cbb6392bc781e484;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c8f0919477809040cbb6392bc781e484);
    assert(Py_REFCNT(frame_c8f0919477809040cbb6392bc781e484) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
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
        exception_tb = MAKE_TRACEBACK(frame_c8f0919477809040cbb6392bc781e484, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8f0919477809040cbb6392bc781e484->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8f0919477809040cbb6392bc781e484, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8f0919477809040cbb6392bc781e484,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c8f0919477809040cbb6392bc781e484 == cache_frame_c8f0919477809040cbb6392bc781e484) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8f0919477809040cbb6392bc781e484);
        cache_frame_c8f0919477809040cbb6392bc781e484 = NULL;
    }

    assertFrameObject(frame_c8f0919477809040cbb6392bc781e484);

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


static PyObject *impl_flet_core$file_picker$$$function__30_on_result(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_7ca2042cc425d49e2ec90bc880e74a24;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ca2042cc425d49e2ec90bc880e74a24 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ca2042cc425d49e2ec90bc880e74a24)) {
        Py_XDECREF(cache_frame_7ca2042cc425d49e2ec90bc880e74a24);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ca2042cc425d49e2ec90bc880e74a24 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ca2042cc425d49e2ec90bc880e74a24 = MAKE_FUNCTION_FRAME(codeobj_7ca2042cc425d49e2ec90bc880e74a24, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ca2042cc425d49e2ec90bc880e74a24->m_type_description == NULL);
    frame_7ca2042cc425d49e2ec90bc880e74a24 = cache_frame_7ca2042cc425d49e2ec90bc880e74a24;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ca2042cc425d49e2ec90bc880e74a24);
    assert(Py_REFCNT(frame_7ca2042cc425d49e2ec90bc880e74a24) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_1 = par_handler;
        frame_7ca2042cc425d49e2ec90bc880e74a24->m_frame.f_lineno = 328;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[71], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
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
        exception_tb = MAKE_TRACEBACK(frame_7ca2042cc425d49e2ec90bc880e74a24, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ca2042cc425d49e2ec90bc880e74a24->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ca2042cc425d49e2ec90bc880e74a24, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ca2042cc425d49e2ec90bc880e74a24,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_7ca2042cc425d49e2ec90bc880e74a24 == cache_frame_7ca2042cc425d49e2ec90bc880e74a24) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ca2042cc425d49e2ec90bc880e74a24);
        cache_frame_7ca2042cc425d49e2ec90bc880e74a24 = NULL;
    }

    assertFrameObject(frame_7ca2042cc425d49e2ec90bc880e74a24);

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


static PyObject *impl_flet_core$file_picker$$$function__31_on_upload(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ed8675b149c9e2f41e1ee06988cccfea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ed8675b149c9e2f41e1ee06988cccfea = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ed8675b149c9e2f41e1ee06988cccfea)) {
        Py_XDECREF(cache_frame_ed8675b149c9e2f41e1ee06988cccfea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed8675b149c9e2f41e1ee06988cccfea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed8675b149c9e2f41e1ee06988cccfea = MAKE_FUNCTION_FRAME(codeobj_ed8675b149c9e2f41e1ee06988cccfea, module_flet_core$file_picker, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ed8675b149c9e2f41e1ee06988cccfea->m_type_description == NULL);
    frame_ed8675b149c9e2f41e1ee06988cccfea = cache_frame_ed8675b149c9e2f41e1ee06988cccfea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ed8675b149c9e2f41e1ee06988cccfea);
    assert(Py_REFCNT(frame_ed8675b149c9e2f41e1ee06988cccfea) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
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
        exception_tb = MAKE_TRACEBACK(frame_ed8675b149c9e2f41e1ee06988cccfea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed8675b149c9e2f41e1ee06988cccfea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed8675b149c9e2f41e1ee06988cccfea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed8675b149c9e2f41e1ee06988cccfea,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ed8675b149c9e2f41e1ee06988cccfea == cache_frame_ed8675b149c9e2f41e1ee06988cccfea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ed8675b149c9e2f41e1ee06988cccfea);
        cache_frame_ed8675b149c9e2f41e1ee06988cccfea = NULL;
    }

    assertFrameObject(frame_ed8675b149c9e2f41e1ee06988cccfea);

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


static PyObject *impl_flet_core$file_picker$$$function__32_on_upload(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_e8072806a55398443cc41dab8720edd8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e8072806a55398443cc41dab8720edd8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e8072806a55398443cc41dab8720edd8)) {
        Py_XDECREF(cache_frame_e8072806a55398443cc41dab8720edd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8072806a55398443cc41dab8720edd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8072806a55398443cc41dab8720edd8 = MAKE_FUNCTION_FRAME(codeobj_e8072806a55398443cc41dab8720edd8, module_flet_core$file_picker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e8072806a55398443cc41dab8720edd8->m_type_description == NULL);
    frame_e8072806a55398443cc41dab8720edd8 = cache_frame_e8072806a55398443cc41dab8720edd8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e8072806a55398443cc41dab8720edd8);
    assert(Py_REFCNT(frame_e8072806a55398443cc41dab8720edd8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_1 = par_handler;
        frame_e8072806a55398443cc41dab8720edd8->m_frame.f_lineno = 337;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[71], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
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
        exception_tb = MAKE_TRACEBACK(frame_e8072806a55398443cc41dab8720edd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8072806a55398443cc41dab8720edd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8072806a55398443cc41dab8720edd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8072806a55398443cc41dab8720edd8,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_e8072806a55398443cc41dab8720edd8 == cache_frame_e8072806a55398443cc41dab8720edd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e8072806a55398443cc41dab8720edd8);
        cache_frame_e8072806a55398443cc41dab8720edd8 = NULL;
    }

    assertFrameObject(frame_e8072806a55398443cc41dab8720edd8);

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



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__10_get_directory_path_async(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__10_get_directory_path_async,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_3bdf601ca7015d6701ab9026b83d88d8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__11_upload(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__11_upload,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_d230fd1f5219b9c8153f731ef1ca4eef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__12_upload_async(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__12_upload_async,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        codeobj_ee2da0b7336eb759a48d6f0eef05d770,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__13_state(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__13_state,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_db923e66f9cdf8f2fa0723441d97e5fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__14_state(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__14_state,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_c4044ef077d1924a07f64bb9fca4abd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__15_result(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__15_result,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_803d18866dff23104d95296e575819d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__16_dialog_title() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__16_dialog_title,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_61fadaf5dc5b1bdd239e67cc3affa20f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__17_dialog_title() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__17_dialog_title,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_90e5ff56414cd887d22c2141c86f1ae1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__18_file_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__18_file_name,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_c4c9f9d044812adb9594a257d8eb3be0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__19_file_name(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__19_file_name,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_5ec7d31de1e9053f289e08184b5813df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__1___init__,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_3c55236a61aed407cc1dad7ea46bb9b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__20_initial_directory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__20_initial_directory,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_6ee164c46ee8a58d72eeec4143b82fb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__21_initial_directory(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__21_initial_directory,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_d755c7e69f61e2509bbe226a15cd11fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__22_file_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__22_file_type,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_2b3ee9183fb3647d630485cab3e59c04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__23_file_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__23_file_type,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_122f7dc62c92be2e143394c220d80f2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__24___set_file_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__24___set_file_type,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_9bbc4a86c1fc58cec90e16453af5d2b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__25_allowed_extensions(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__25_allowed_extensions,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_2b131034e3596ad3ce72c0c9f6882681,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__26_allowed_extensions(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__26_allowed_extensions,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_c44736f63519dbcb7426a456c55ce3d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__27_allow_multiple(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__27_allow_multiple,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_8214a968c6d278e0409e9fff07f22488,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__28_allow_multiple(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__28_allow_multiple,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_1135b049ef88c404b38b33428b956e8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__29_on_result() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__29_on_result,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_c8f0919477809040cbb6392bc781e484,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__2___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__2___init__,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_23ae51ec1ce9def869fc501a4f5aeb2a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__2___init__$$$function__1_convert_result_event_data(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__2___init__$$$function__1_convert_result_event_data,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[10],
#endif
        codeobj_60cef26c694ed84b0f97b6a5db1c4914,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__2___init__$$$function__2_convert_upload_event_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__2___init__$$$function__2_convert_upload_event_data,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[17],
#endif
        codeobj_7768aa78ac262e519a087148fca24036,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__30_on_result() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__30_on_result,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_7ca2042cc425d49e2ec90bc880e74a24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__31_on_upload() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__31_on_upload,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_ed8675b149c9e2f41e1ee06988cccfea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__32_on_upload() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__32_on_upload,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_e8072806a55398443cc41dab8720edd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__3__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_5fb2e4a372a8fd022b78e167265d9be3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[155]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__4__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__4__before_build_command,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_a1001629d28758c0bc3a5327befca7b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$file_picker,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__5_pick_files(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__5_pick_files,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_772e8d97b37e16dccce22d2ecbc97030,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__6_pick_files_async(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__6_pick_files_async,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_8ff32e95a076206002eebf364f592739,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__7_save_file(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__7_save_file,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_1617127a3bf5b1dd1585060e0036f139,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__8_save_file_async(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__8_save_file_async,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[48],
#endif
        codeobj_d95fcd195f0dbdd43f71898eae75ad74,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$file_picker$$$function__9_get_directory_path(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$file_picker$$$function__9_get_directory_path,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_cb78487dfd04a24875956a6b2b917733,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$file_picker,
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

function_impl_code functable_flet_core$file_picker[] = {
    impl_flet_core$file_picker$$$function__2___init__$$$function__1_convert_result_event_data,
    impl_flet_core$file_picker$$$function__2___init__$$$function__2_convert_upload_event_data,
    impl_flet_core$file_picker$$$function__1___init__,
    impl_flet_core$file_picker$$$function__2___init__,
    NULL,
    impl_flet_core$file_picker$$$function__4__before_build_command,
    impl_flet_core$file_picker$$$function__5_pick_files,
    impl_flet_core$file_picker$$$function__6_pick_files_async,
    impl_flet_core$file_picker$$$function__7_save_file,
    impl_flet_core$file_picker$$$function__8_save_file_async,
    impl_flet_core$file_picker$$$function__9_get_directory_path,
    impl_flet_core$file_picker$$$function__10_get_directory_path_async,
    impl_flet_core$file_picker$$$function__11_upload,
    impl_flet_core$file_picker$$$function__12_upload_async,
    impl_flet_core$file_picker$$$function__13_state,
    impl_flet_core$file_picker$$$function__14_state,
    impl_flet_core$file_picker$$$function__15_result,
    impl_flet_core$file_picker$$$function__16_dialog_title,
    impl_flet_core$file_picker$$$function__17_dialog_title,
    impl_flet_core$file_picker$$$function__18_file_name,
    impl_flet_core$file_picker$$$function__19_file_name,
    impl_flet_core$file_picker$$$function__20_initial_directory,
    impl_flet_core$file_picker$$$function__21_initial_directory,
    impl_flet_core$file_picker$$$function__22_file_type,
    impl_flet_core$file_picker$$$function__23_file_type,
    impl_flet_core$file_picker$$$function__24___set_file_type,
    impl_flet_core$file_picker$$$function__25_allowed_extensions,
    impl_flet_core$file_picker$$$function__26_allowed_extensions,
    impl_flet_core$file_picker$$$function__27_allow_multiple,
    impl_flet_core$file_picker$$$function__28_allow_multiple,
    impl_flet_core$file_picker$$$function__29_on_result,
    impl_flet_core$file_picker$$$function__30_on_result,
    impl_flet_core$file_picker$$$function__31_on_upload,
    impl_flet_core$file_picker$$$function__32_on_upload,
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

    function_impl_code *current = functable_flet_core$file_picker;
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

    if (offset > sizeof(functable_flet_core$file_picker) || offset < 0) {
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
        functable_flet_core$file_picker[offset],
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
        module_flet_core$file_picker,
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
PyObject *modulecode_flet_core$file_picker(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.file_picker");

    // Store the module for future use.
    module_flet_core$file_picker = module;

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
        PRINT_STRING("flet_core.file_picker: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.file_picker: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.file_picker: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$file_picker\n");

    moduledict_flet_core$file_picker = MODULE_DICT(module_flet_core$file_picker);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$file_picker,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$file_picker,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[196]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$file_picker,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$file_picker,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$file_picker,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$file_picker);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$file_picker, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$file_picker, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$file_picker, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$file_picker);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    struct Nuitka_CellObject *outline_5_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_21b270cc424f10624aae3064e2fc7319;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_flet_core$file_picker$$$class__1_FilePickerFileType_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_f113e673fac01d27da9560c8a89f1ca2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31 = NULL;
    struct Nuitka_FrameObject *frame_513cb9482ea94881b42995fc69ad3d61_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_flet_core$file_picker$$$class__3_FilePickerFile_38 = NULL;
    struct Nuitka_FrameObject *frame_e10f57381893cae4f2b4ff2947ee68d6_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_flet_core$file_picker$$$class__4_FilePickerResultEvent_44 = NULL;
    struct Nuitka_FrameObject *frame_1b2a39c42051f54f6ce113ec7662e6ea_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55 = NULL;
    struct Nuitka_FrameObject *frame_abaf281379d0cead25e3e5354653edce_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *locals_flet_core$file_picker$$$class__6_FilePicker_61 = NULL;
    struct Nuitka_FrameObject *frame_abf06a178dd26867b75216c94f283d0d_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_2);
    }
    frame_21b270cc424f10624aae3064e2fc7319 = MAKE_MODULE_FRAME(codeobj_21b270cc424f10624aae3064e2fc7319, module_flet_core$file_picker);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21b270cc424f10624aae3064e2fc7319);
    assert(Py_REFCNT(frame_21b270cc424f10624aae3064e2fc7319) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[73];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[76], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[77], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[25];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$file_picker;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[79];
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[80];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$file_picker;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[81];
        tmp_level_value_2 = mod_consts[79];
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
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
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[82],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[82]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[83],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[83]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_7);
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
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[84];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$file_picker;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[85];
        tmp_level_value_3 = mod_consts[79];
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 3;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[86],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[86]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_9 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_9);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[87],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[87]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[2],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[2]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[88],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[88]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[89],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[89]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_13);
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
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[90];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$file_picker;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[91];
        tmp_level_value_4 = mod_consts[79];
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 6;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[6],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[6]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[92],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[92]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_16);
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
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[93];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$file_picker;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[94];
        tmp_level_value_5 = mod_consts[79];
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 7;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[95],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[96];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$file_picker;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[97];
        tmp_level_value_6 = mod_consts[79];
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 8;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[98],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[98]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[99];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core$file_picker;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[100];
        tmp_level_value_7 = mod_consts[79];
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 9;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[11],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[101];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_flet_core$file_picker;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[102];
        tmp_level_value_8 = mod_consts[79];
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 10;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[103],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[103]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_20);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        tmp_import_name_from_14 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_14 == NULL));
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[104],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[104]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_21);
    }
    goto try_end_4;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_21b270cc424f10624aae3064e2fc7319, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_21b270cc424f10624aae3064e2fc7319, exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[105];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_flet_core$file_picker;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[106];
        tmp_level_value_9 = mod_consts[79];
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 15;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_flet_core$file_picker,
                mod_consts[104],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[104]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_22);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 12;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_21b270cc424f10624aae3064e2fc7319->m_frame) frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_5;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = mod_consts[107];
        tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[109];
        tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_24);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
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


            exception_lineno = 21;

            goto try_except_handler_6;
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
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_3 = tmp_class_creation_1__bases;
        tmp_subscript_value_3 = mod_consts[79];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
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


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[111]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[111]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        tmp_tuple_element_2 = mod_consts[64];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 21;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[112]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
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
        tmp_mod_expr_left_1 = mod_consts[113];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[114];
        tmp_getattr_default_1 = mod_consts[115];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[114]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 21;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_30;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$file_picker$$$class__1_FilePickerFileType_21 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__1_FilePickerFileType_21, mod_consts[117], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__1_FilePickerFileType_21, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_8;
        }
        frame_f113e673fac01d27da9560c8a89f1ca2_2 = MAKE_CLASS_FRAME(codeobj_f113e673fac01d27da9560c8a89f1ca2, module_flet_core$file_picker, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f113e673fac01d27da9560c8a89f1ca2_2);
        assert(Py_REFCNT(frame_f113e673fac01d27da9560c8a89f1ca2_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__1_FilePickerFileType_21, mod_consts[120], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__1_FilePickerFileType_21, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__1_FilePickerFileType_21, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__1_FilePickerFileType_21, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__1_FilePickerFileType_21, mod_consts[128], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__1_FilePickerFileType_21, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f113e673fac01d27da9560c8a89f1ca2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f113e673fac01d27da9560c8a89f1ca2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f113e673fac01d27da9560c8a89f1ca2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f113e673fac01d27da9560c8a89f1ca2_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_f113e673fac01d27da9560c8a89f1ca2_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_8;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__1_FilePickerFileType_21, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_8;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[64];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$file_picker$$$class__1_FilePickerFileType_21;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 21;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_8;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_31 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_flet_core$file_picker$$$class__1_FilePickerFileType_21);
        locals_flet_core$file_picker$$$class__1_FilePickerFileType_21 = NULL;
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

        Py_DECREF(locals_flet_core$file_picker$$$class__1_FilePickerFileType_21);
        locals_flet_core$file_picker$$$class__1_FilePickerFileType_21 = NULL;
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
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 21;
        goto try_except_handler_6;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_31);
    }
    goto try_end_6;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyDict_SetItem(locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31, mod_consts[117], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[132];
        tmp_res = PyDict_SetItem(locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31, mod_consts[118], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31, mod_consts[133], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_513cb9482ea94881b42995fc69ad3d61_3 = MAKE_CLASS_FRAME(codeobj_513cb9482ea94881b42995fc69ad3d61, module_flet_core$file_picker, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_513cb9482ea94881b42995fc69ad3d61_3);
        assert(Py_REFCNT(frame_513cb9482ea94881b42995fc69ad3d61_3) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_1 = DICT_GET_ITEM0(locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31, mod_consts[133]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_1 = mod_consts[134];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_2 = DICT_GET_ITEM0(locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31, mod_consts[133]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_2 = mod_consts[135];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_4;
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_513cb9482ea94881b42995fc69ad3d61_3->m_frame.f_lineno = 34;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[136], 0), mod_consts[137]);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_3 = DICT_GET_ITEM0(locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31, mod_consts[133]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_3 = mod_consts[138];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_513cb9482ea94881b42995fc69ad3d61_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_513cb9482ea94881b42995fc69ad3d61_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_513cb9482ea94881b42995fc69ad3d61_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_513cb9482ea94881b42995fc69ad3d61_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_513cb9482ea94881b42995fc69ad3d61_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_11;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[132];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[139];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 31;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_11;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_args_element_value_1 = outline_1_var___class__;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31);
        locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31);
        locals_flet_core$file_picker$$$class__2_FilePickerUploadFile_31 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 31;
        goto try_except_handler_9;
        outline_result_2:;
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 30;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_35);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_12;
        }
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_flet_core$file_picker$$$class__3_FilePickerFile_38 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyDict_SetItem(locals_flet_core$file_picker$$$class__3_FilePickerFile_38, mod_consts[117], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[5];
        tmp_res = PyDict_SetItem(locals_flet_core$file_picker$$$class__3_FilePickerFile_38, mod_consts[118], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$file_picker$$$class__3_FilePickerFile_38, mod_consts[133], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_e10f57381893cae4f2b4ff2947ee68d6_4 = MAKE_CLASS_FRAME(codeobj_e10f57381893cae4f2b4ff2947ee68d6, module_flet_core$file_picker, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e10f57381893cae4f2b4ff2947ee68d6_4);
        assert(Py_REFCNT(frame_e10f57381893cae4f2b4ff2947ee68d6_4) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_ass_subvalue_4 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_4 = DICT_GET_ITEM0(locals_flet_core$file_picker$$$class__3_FilePickerFile_38, mod_consts[133]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_4 = mod_consts[134];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_5 = DICT_GET_ITEM0(locals_flet_core$file_picker$$$class__3_FilePickerFile_38, mod_consts[133]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_5 = mod_consts[0];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_6 = DICT_GET_ITEM0(locals_flet_core$file_picker$$$class__3_FilePickerFile_38, mod_consts[133]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_6 = mod_consts[140];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e10f57381893cae4f2b4ff2947ee68d6_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e10f57381893cae4f2b4ff2947ee68d6_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e10f57381893cae4f2b4ff2947ee68d6_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e10f57381893cae4f2b4ff2947ee68d6_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_e10f57381893cae4f2b4ff2947ee68d6_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_14;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[5];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[139];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_flet_core$file_picker$$$class__3_FilePickerFile_38;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 38;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_14;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_args_element_value_2 = outline_2_var___class__;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_flet_core$file_picker$$$class__3_FilePickerFile_38);
        locals_flet_core$file_picker$$$class__3_FilePickerFile_38 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$file_picker$$$class__3_FilePickerFile_38);
        locals_flet_core$file_picker$$$class__3_FilePickerFile_38 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 38;
        goto try_except_handler_12;
        outline_result_3:;
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 37;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_39);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_15;
        }
        tmp_assign_source_41 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_42 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_15;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_8 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[79];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_15;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_2 = tmp_class_creation_4__bases;
        tmp_assign_source_44 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_44;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_9 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[111]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_10 = tmp_class_creation_4__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[111]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_15;
        }
        tmp_tuple_element_8 = mod_consts[28];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_8 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_4__class_decl_dict;
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 44;
        tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_11 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[112]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_15;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[113];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_2 = mod_consts[114];
        tmp_getattr_default_2 = mod_consts[115];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_15;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_4 = tmp_class_creation_4__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[114]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 44;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_46;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_flet_core$file_picker$$$class__4_FilePickerResultEvent_44 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__4_FilePickerResultEvent_44, mod_consts[117], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__4_FilePickerResultEvent_44, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_17;
        }
        frame_1b2a39c42051f54f6ce113ec7662e6ea_5 = MAKE_CLASS_FRAME(codeobj_1b2a39c42051f54f6ce113ec7662e6ea, module_flet_core$file_picker, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1b2a39c42051f54f6ce113ec7662e6ea_5);
        assert(Py_REFCNT(frame_1b2a39c42051f54f6ce113ec7662e6ea_5) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[141]);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__1___init__(tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__4_FilePickerResultEvent_44, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1b2a39c42051f54f6ce113ec7662e6ea_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1b2a39c42051f54f6ce113ec7662e6ea_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1b2a39c42051f54f6ce113ec7662e6ea_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1b2a39c42051f54f6ce113ec7662e6ea_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_1b2a39c42051f54f6ce113ec7662e6ea_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_17;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__4_FilePickerResultEvent_44, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_17;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_9 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_10 = mod_consts[28];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_10 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_flet_core$file_picker$$$class__4_FilePickerResultEvent_44;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 44;
            tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto try_except_handler_17;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_47 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_flet_core$file_picker$$$class__4_FilePickerResultEvent_44);
        locals_flet_core$file_picker$$$class__4_FilePickerResultEvent_44 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$file_picker$$$class__4_FilePickerResultEvent_44);
        locals_flet_core$file_picker$$$class__4_FilePickerResultEvent_44 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 44;
        goto try_except_handler_15;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_47);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_18;
        }
        tmp_assign_source_49 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_50 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_18;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_13 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[79];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_5, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_18;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_18;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_3 = tmp_class_creation_5__bases;
        tmp_assign_source_52 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_52;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_14 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[111]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_15 = tmp_class_creation_5__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[111]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_18;
        }
        tmp_tuple_element_12 = mod_consts[29];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_12 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 55;
        tmp_assign_source_53 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_53;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_16 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[112]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_18;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[113];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_3 = mod_consts[114];
        tmp_getattr_default_3 = mod_consts[115];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_18;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_6 = tmp_class_creation_5__prepared;
            tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_17 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[114]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_18;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 55;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_18;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_54;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_18;
        }
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[117], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[29];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_20;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[133], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_20;
        }
        frame_abaf281379d0cead25e3e5354653edce_6 = MAKE_CLASS_FRAME(codeobj_abaf281379d0cead25e3e5354653edce, module_flet_core$file_picker, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_abaf281379d0cead25e3e5354653edce_6);
        assert(Py_REFCNT(frame_abaf281379d0cead25e3e5354653edce_6) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = PyObject_GetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[143]);

            if (tmp_ass_subvalue_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_7 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_7);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_ass_subscribed_7 = PyObject_GetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[133]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_7);

                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_7 = mod_consts[46];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subscribed_7);
            Py_DECREF(tmp_ass_subvalue_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[88]);

            if (tmp_expression_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_18);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[144]);

            if (tmp_subscript_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_6 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_subscript_value_6);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_18);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_ass_subvalue_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_8 = PyObject_GetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[133]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_8);

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_8 = mod_consts[145];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            Py_DECREF(tmp_ass_subscribed_8);
            Py_DECREF(tmp_ass_subvalue_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[88]);

            if (tmp_expression_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 58;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_19);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[143]);

            if (tmp_subscript_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_7);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_19);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_ass_subvalue_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_9 = PyObject_GetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[133]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_9);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_9);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_9 = mod_consts[146];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            Py_DECREF(tmp_ass_subscribed_9);
            Py_DECREF(tmp_ass_subvalue_9);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_abaf281379d0cead25e3e5354653edce_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_abaf281379d0cead25e3e5354653edce_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_abaf281379d0cead25e3e5354653edce_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_abaf281379d0cead25e3e5354653edce_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_abaf281379d0cead25e3e5354653edce_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_20;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_20;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_20;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_12 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_14 = mod_consts[29];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_14 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_5__class_decl_dict;
            frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 55;
            tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_20;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_56;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_args_element_value_3 = outline_4_var___class__;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55);
        locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55);
        locals_flet_core$file_picker$$$class__5_FilePickerUploadEvent_55 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 55;
        goto try_except_handler_18;
        outline_result_5:;
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 54;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_55);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_tuple_element_15;
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_21;
        }
        tmp_assign_source_57 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_15);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_58 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_21;
        }
        tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_20 = tmp_class_creation_6__bases;
        tmp_subscript_value_8 = mod_consts[79];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_20, tmp_subscript_value_8, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_21;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_21;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_4 = tmp_class_creation_6__bases;
        tmp_assign_source_60 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_60;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_21 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_21, mod_consts[111]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_22 = tmp_class_creation_6__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[111]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_21;
        }
        tmp_tuple_element_16 = mod_consts[147];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_16 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_6__class_decl_dict;
        frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 61;
        tmp_assign_source_61 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_61;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_23 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_23, mod_consts[112]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_21;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[113];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_4 = mod_consts[114];
        tmp_getattr_default_4 = mod_consts[115];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_21;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_8 = tmp_class_creation_6__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[114]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_21;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 61;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_21;
    }
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_62;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_63;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_flet_core$file_picker$$$class__6_FilePicker_61 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[117], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[147];
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_23;
        }
        frame_abf06a178dd26867b75216c94f283d0d_7 = MAKE_CLASS_FRAME(codeobj_abf06a178dd26867b75216c94f283d0d, module_flet_core$file_picker, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_abf06a178dd26867b75216c94f283d0d_7);
        assert(Py_REFCNT(frame_abf06a178dd26867b75216c94f283d0d_7) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_9;
            tmp_defaults_1 = mod_consts[149];
            tmp_dict_key_1 = mod_consts[150];
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 106;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_25);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[103]);

            if (tmp_subscript_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_subscript_value_9 == NULL)) {
                        tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_subscript_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_25);

                        exception_lineno = 106;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_subscript_value_9);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_25);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_11;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[151];
                tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 107;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[152]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 107;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[153];
                tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 108;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[152]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[27];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[87]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[87]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 109;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__2___init__(tmp_defaults_1, tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__3__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[156], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "c";
            goto frame_exception_exit_7;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_5_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__4__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_12;
            tmp_tuple_element_18 = Py_None;
            tmp_defaults_2 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_expression_value_28;
                PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_18);
                tmp_tuple_element_18 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_18);
                tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[64]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[120]);
                Py_DECREF(tmp_expression_value_28);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_defaults_2, 2, tmp_tuple_element_18);
                tmp_tuple_element_18 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_2, 3, tmp_tuple_element_18);
                tmp_tuple_element_18 = Py_False;
                PyTuple_SET_ITEM0(tmp_defaults_2, 4, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_defaults_2);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dict_key_2 = mod_consts[36];
            tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_2);

                        exception_lineno = 156;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

            if (tmp_subscript_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_12 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_12);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_29);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_2);

                exception_lineno = 156;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_subscript_value_16;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[37];
                tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 157;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[38];
                tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[64]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[39];
                tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 159;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[2]);

                if (tmp_expression_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[2]);

                        if (unlikely(tmp_expression_value_32 == NULL)) {
                            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                        }

                        if (tmp_expression_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_31);

                            exception_lineno = 159;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_32);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_32);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_subscript_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_31);

                    exception_lineno = 159;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[40];
                tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 160;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[152]);

                if (tmp_subscript_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_16 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_16);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_defaults_2);
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__5_pick_files(tmp_defaults_2, tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[159], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_17;
            tmp_tuple_element_19 = Py_None;
            tmp_defaults_3 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_expression_value_34;
                PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_19);
                tmp_tuple_element_19 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_19);
                tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[64]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 174;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[120]);
                Py_DECREF(tmp_expression_value_34);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_defaults_3, 2, tmp_tuple_element_19);
                tmp_tuple_element_19 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_3, 3, tmp_tuple_element_19);
                tmp_tuple_element_19 = Py_False;
                PyTuple_SET_ITEM0(tmp_defaults_3, 4, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_defaults_3);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_key_3 = mod_consts[36];
            tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_3);

                        exception_lineno = 172;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

            if (tmp_subscript_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_17 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_17);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_35);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_3);

                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_21;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[37];
                tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_36 == NULL)) {
                            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 173;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_36);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_18);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_36);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 173;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[38];
                tmp_dict_value_3 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[64]);

                if (tmp_dict_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_dict_value_3 == NULL)) {
                            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_dict_value_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 174;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_dict_value_3);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[39];
                tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 175;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[2]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[2]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_37);

                            exception_lineno = 175;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_20);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_subscript_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_37);

                    exception_lineno = 175;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 175;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[40];
                tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 176;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[152]);

                if (tmp_subscript_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_21 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_21);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_defaults_3);
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__6_pick_files_async(tmp_defaults_3, tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_22;
            tmp_tuple_element_20 = Py_None;
            tmp_defaults_4 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_expression_value_40;
                PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_20);
                tmp_tuple_element_20 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_4, 1, tmp_tuple_element_20);
                tmp_tuple_element_20 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_4, 2, tmp_tuple_element_20);
                tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[64]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 191;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[120]);
                Py_DECREF(tmp_expression_value_40);
                if (tmp_tuple_element_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_defaults_4, 3, tmp_tuple_element_20);
                tmp_tuple_element_20 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_4, 4, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_defaults_4);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_dict_key_4 = mod_consts[36];
            tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_4);

                        exception_lineno = 188;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

            if (tmp_subscript_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_22);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_41);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_4);

                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_42;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_expression_value_45;
                PyObject *tmp_subscript_value_26;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[46];
                tmp_expression_value_42 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_42 == NULL)) {
                            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 189;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_42);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_23 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_23);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_42);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 189;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[37];
                tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_43 == NULL)) {
                            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 190;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_43);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_24 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_24 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_24);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[38];
                tmp_dict_value_4 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[64]);

                if (tmp_dict_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_dict_value_4 == NULL)) {
                            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_dict_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 191;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_dict_value_4);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[39];
                tmp_expression_value_44 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_44 == NULL)) {
                            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 192;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_44);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_expression_value_45 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[2]);

                if (tmp_expression_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[2]);

                        if (unlikely(tmp_expression_value_45 == NULL)) {
                            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                        }

                        if (tmp_expression_value_45 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_44);

                            exception_lineno = 192;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_45);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_26 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_26);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_subscript_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_44);

                    exception_lineno = 192;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_defaults_4);
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__7_save_file(tmp_defaults_4, tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[161], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_27;
            tmp_tuple_element_21 = Py_None;
            tmp_defaults_5 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_expression_value_46;
                PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_21);
                tmp_tuple_element_21 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_5, 1, tmp_tuple_element_21);
                tmp_tuple_element_21 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_5, 2, tmp_tuple_element_21);
                tmp_expression_value_46 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[64]);

                if (tmp_expression_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_expression_value_46 == NULL)) {
                            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_expression_value_46 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 207;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_46);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[120]);
                Py_DECREF(tmp_expression_value_46);
                if (tmp_tuple_element_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_defaults_5, 3, tmp_tuple_element_21);
                tmp_tuple_element_21 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_5, 4, tmp_tuple_element_21);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_defaults_5);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_dict_key_5 = mod_consts[36];
            tmp_expression_value_47 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_5);

                        exception_lineno = 204;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

            if (tmp_subscript_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_27 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_27);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_47);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_5);

                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_48;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_subscript_value_29;
                PyObject *tmp_expression_value_50;
                PyObject *tmp_subscript_value_30;
                PyObject *tmp_expression_value_51;
                PyObject *tmp_subscript_value_31;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[46];
                tmp_expression_value_48 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_48 == NULL)) {
                            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_48 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 205;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_48);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_28);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_28);
                Py_DECREF(tmp_expression_value_48);
                Py_DECREF(tmp_subscript_value_28);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[37];
                tmp_expression_value_49 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_49 == NULL)) {
                            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 206;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_49);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_29 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_29 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_29);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_29);
                Py_DECREF(tmp_expression_value_49);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[38];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[64]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 207;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[39];
                tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_50 == NULL)) {
                            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 208;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_50);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[2]);

                if (tmp_expression_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[2]);

                        if (unlikely(tmp_expression_value_51 == NULL)) {
                            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                        }

                        if (tmp_expression_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_50);

                            exception_lineno = 208;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_51);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_31 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_31 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_31);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_51);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_subscript_value_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_50);

                    exception_lineno = 208;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_30);
                Py_DECREF(tmp_expression_value_50);
                Py_DECREF(tmp_subscript_value_30);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_defaults_5);
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__8_save_file_async(tmp_defaults_5, tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_32;
            tmp_defaults_6 = mod_consts[163];
            tmp_dict_key_6 = mod_consts[36];
            tmp_expression_value_52 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_52 == NULL)) {
                        tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 220;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_52);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_32 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

            if (tmp_subscript_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_32 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_32);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_52);
            Py_DECREF(tmp_subscript_value_32);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_53;
                PyObject *tmp_subscript_value_33;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[37];
                tmp_expression_value_53 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_53 == NULL)) {
                            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_53 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 221;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_53);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_33 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_33 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_33);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_33);
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_33);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 221;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__9_get_directory_path(tmp_defaults_6, tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[164], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_34;
            tmp_defaults_7 = mod_consts[163];
            tmp_dict_key_7 = mod_consts[36];
            tmp_expression_value_54 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 230;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_54);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_34 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

            if (tmp_subscript_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_34 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_34);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_54);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_55;
                PyObject *tmp_subscript_value_35;
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[37];
                tmp_expression_value_55 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

                if (tmp_expression_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_expression_value_55 == NULL)) {
                            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_expression_value_55 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 231;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_55);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_35 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

                if (tmp_subscript_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_35 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_35);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_35);
                Py_DECREF(tmp_expression_value_55);
                Py_DECREF(tmp_subscript_value_35);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 231;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_8);
            goto frame_exception_exit_7;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__10_get_directory_path_async(tmp_defaults_7, tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_36;
            tmp_dict_key_8 = mod_consts[1];
            tmp_expression_value_56 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[2]);

            if (tmp_expression_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[2]);

                    if (unlikely(tmp_expression_value_56 == NULL)) {
                        tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                    }

                    if (tmp_expression_value_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 238;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_56);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_36 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[132]);

            if (tmp_subscript_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[132]);

                    if (unlikely(tmp_subscript_value_36 == NULL)) {
                        tmp_subscript_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                    }

                    if (tmp_subscript_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_56);

                        exception_lineno = 238;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_subscript_value_36);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_36);
            Py_DECREF(tmp_expression_value_56);
            Py_DECREF(tmp_subscript_value_36);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__11_upload(tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_37;
            tmp_dict_key_9 = mod_consts[1];
            tmp_expression_value_57 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[2]);

            if (tmp_expression_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[2]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 242;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_57);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_37 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[132]);

            if (tmp_subscript_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[132]);

                    if (unlikely(tmp_subscript_value_37 == NULL)) {
                        tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                    }

                    if (tmp_subscript_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_57);

                        exception_lineno = 242;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_subscript_value_37);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_57);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__12_upload_async(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[52], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_39;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_14 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[167]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_10 = mod_consts[168];
            tmp_expression_value_58 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 248;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_58);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_38 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[110]);

            if (tmp_subscript_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[110]);

                    if (unlikely(tmp_subscript_value_38 == NULL)) {
                        tmp_subscript_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
                    }

                    if (tmp_subscript_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);
                        Py_DECREF(tmp_expression_value_58);

                        exception_lineno = 248;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_subscript_value_38);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_58);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$file_picker$$$function__13_state(tmp_annotations_11);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_11 = mod_consts[168];
            tmp_expression_value_59 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_59 == NULL)) {
                        tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 248;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_59);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_39 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[110]);

            if (tmp_subscript_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[110]);

                    if (unlikely(tmp_subscript_value_39 == NULL)) {
                        tmp_subscript_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
                    }

                    if (tmp_subscript_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_59);

                        exception_lineno = 248;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_subscript_value_39);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_39);
            Py_DECREF(tmp_expression_value_59);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$file_picker$$$function__13_state(tmp_annotations_12);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_40;
            tmp_expression_value_60 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[35]);

            if (unlikely(tmp_expression_value_60 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[35]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 251;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[170]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_12 = mod_consts[66];
            tmp_expression_value_61 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_61 == NULL)) {
                        tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 252;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_61);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_40 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[110]);

            if (tmp_subscript_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[110]);

                    if (unlikely(tmp_subscript_value_40 == NULL)) {
                        tmp_subscript_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
                    }

                    if (tmp_subscript_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_expression_value_61);

                        exception_lineno = 252;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_subscript_value_40);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_61);
            Py_DECREF(tmp_subscript_value_40);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 252;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$file_picker$$$function__14_state(tmp_annotations_13);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 251;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_42;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_18 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_17 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[167]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 256;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_13 = mod_consts[168];
            tmp_expression_value_62 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_62 == NULL)) {
                        tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 257;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_62);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_41 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[28]);

            if (tmp_subscript_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[28]);

                    if (unlikely(tmp_subscript_value_41 == NULL)) {
                        tmp_subscript_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                    }

                    if (tmp_subscript_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);
                        Py_DECREF(tmp_expression_value_62);

                        exception_lineno = 257;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_subscript_value_41);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_62);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$file_picker$$$function__15_result(tmp_annotations_14);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 256;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_14 = mod_consts[168];
            tmp_expression_value_63 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 257;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_63);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_42 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[28]);

            if (tmp_subscript_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[28]);

                    if (unlikely(tmp_subscript_value_42 == NULL)) {
                        tmp_subscript_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                    }

                    if (tmp_subscript_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_63);

                        exception_lineno = 257;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_subscript_value_42);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_63);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$file_picker$$$function__15_result(tmp_annotations_15);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 256;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_10;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_19 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_19 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (unlikely(tmp_called_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[167]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 261;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$file_picker$$$function__16_dialog_title();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 261;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_20 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$file_picker$$$function__16_dialog_title();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 261;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_11;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[36]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[36]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 265;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$file_picker$$$function__17_dialog_title();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 265;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[170], tmp_args_element_value_11);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_13;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_20 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_21 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (unlikely(tmp_called_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[167]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 270;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$file_picker$$$function__18_file_name();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 270;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_22 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$file_picker$$$function__18_file_name();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 270;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_43;
            tmp_expression_value_64 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[46]);

            if (unlikely(tmp_expression_value_64 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 274;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[170]);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_15 = mod_consts[66];
            tmp_expression_value_65 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 275;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_65);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_43 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

            if (tmp_subscript_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_43 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_43);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_65);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 275;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$file_picker$$$function__19_file_name(tmp_annotations_16);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 274;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_16;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_21 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_24 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (unlikely(tmp_called_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[167]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 279;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$file_picker$$$function__20_initial_directory();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 279;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_25 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$file_picker$$$function__20_initial_directory();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 279;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_44;
            tmp_expression_value_66 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[37]);

            if (unlikely(tmp_expression_value_66 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[37]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 283;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[170]);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_16 = mod_consts[66];
            tmp_expression_value_67 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_67 == NULL)) {
                        tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 284;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_67);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_44 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

            if (tmp_subscript_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_44 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_44);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_44);
            Py_DECREF(tmp_expression_value_67);
            Py_DECREF(tmp_subscript_value_44);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 284;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$file_picker$$$function__21_initial_directory(tmp_annotations_17);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 283;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_27 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (unlikely(tmp_called_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[167]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 288;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_17 = mod_consts[168];
            tmp_dict_value_17 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[64]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_dict_value_17 == NULL)) {
                        tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_dict_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);

                        exception_lineno = 289;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_dict_value_17);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$file_picker$$$function__22_file_type(tmp_annotations_18);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 288;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_28 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_18 = mod_consts[168];
            tmp_dict_value_18 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[64]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_dict_value_18 == NULL)) {
                        tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_dict_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 289;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$file_picker$$$function__22_file_type(tmp_annotations_19);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 288;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_29;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            tmp_expression_value_68 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[38]);

            if (unlikely(tmp_expression_value_68 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[38]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 292;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[170]);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_19 = mod_consts[66];
            tmp_dict_value_19 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[64]);

            if (tmp_dict_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_dict_value_19 == NULL)) {
                        tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_dict_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_29);

                        exception_lineno = 293;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_dict_value_19);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$file_picker$$$function__23_file_type(tmp_annotations_20);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 292;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            tmp_dict_key_20 = mod_consts[66];
            tmp_dict_value_20 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[108]);

            if (tmp_dict_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[108]);

                    if (unlikely(tmp_dict_value_20 == NULL)) {
                        tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
                    }

                    if (tmp_dict_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 300;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_dict_value_20);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$file_picker$$$function__24___set_file_type(tmp_annotations_21);

            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[67], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_45;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_48;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_23 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_30 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (unlikely(tmp_called_value_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[167]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_21 = mod_consts[168];
            tmp_expression_value_69 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_69 == NULL)) {
                        tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_30);

                        exception_lineno = 305;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_69);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_expression_value_70 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[2]);

            if (tmp_expression_value_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[2]);

                    if (unlikely(tmp_expression_value_70 == NULL)) {
                        tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                    }

                    if (tmp_expression_value_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_30);
                        Py_DECREF(tmp_expression_value_69);

                        exception_lineno = 305;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_70);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_46 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

            if (tmp_subscript_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_46 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_46);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_45 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_70);
            Py_DECREF(tmp_subscript_value_46);
            if (tmp_subscript_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_30);
                Py_DECREF(tmp_expression_value_69);

                exception_lineno = 305;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_45);
            Py_DECREF(tmp_expression_value_69);
            Py_DECREF(tmp_subscript_value_45);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_30);

                exception_lineno = 305;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$file_picker$$$function__25_allowed_extensions(tmp_annotations_22);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 304;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_31 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_22 = mod_consts[168];
            tmp_expression_value_71 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_71 == NULL)) {
                        tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_71 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 305;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_71);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_expression_value_72 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[2]);

            if (tmp_expression_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[2]);

                    if (unlikely(tmp_expression_value_72 == NULL)) {
                        tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                    }

                    if (tmp_expression_value_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_71);

                        exception_lineno = 305;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_72);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_48 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

            if (tmp_subscript_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_48 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_48);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_47 = LOOKUP_SUBSCRIPT(tmp_expression_value_72, tmp_subscript_value_48);
            Py_DECREF(tmp_expression_value_72);
            Py_DECREF(tmp_subscript_value_48);
            if (tmp_subscript_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_71);

                exception_lineno = 305;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_47);
            Py_DECREF(tmp_expression_value_71);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$file_picker$$$function__25_allowed_extensions(tmp_annotations_23);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 304;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_32;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_49;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_subscript_value_50;
            tmp_expression_value_73 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[39]);

            if (unlikely(tmp_expression_value_73 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[39]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 308;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_expression_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[170]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_23 = mod_consts[66];
            tmp_expression_value_74 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_74 == NULL)) {
                        tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_32);

                        exception_lineno = 309;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_74);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_expression_value_75 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[2]);

            if (tmp_expression_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[2]);

                    if (unlikely(tmp_expression_value_75 == NULL)) {
                        tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
                    }

                    if (tmp_expression_value_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_32);
                        Py_DECREF(tmp_expression_value_74);

                        exception_lineno = 309;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_75);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_50 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[143]);

            if (tmp_subscript_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_50 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_50);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_49 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_50);
            Py_DECREF(tmp_expression_value_75);
            Py_DECREF(tmp_subscript_value_50);
            if (tmp_subscript_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_32);
                Py_DECREF(tmp_expression_value_74);

                exception_lineno = 309;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_49);
            Py_DECREF(tmp_expression_value_74);
            Py_DECREF(tmp_subscript_value_49);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_32);

                exception_lineno = 309;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$file_picker$$$function__26_allowed_extensions(tmp_annotations_24);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 308;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_23);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_52;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_24 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_33 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (unlikely(tmp_called_value_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[167]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 313;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_24 = mod_consts[168];
            tmp_expression_value_76 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_76 == NULL)) {
                        tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);

                        exception_lineno = 314;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_76);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_51 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[152]);

            if (tmp_subscript_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_51 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_51);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_51);
            Py_DECREF(tmp_expression_value_76);
            Py_DECREF(tmp_subscript_value_51);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);

                exception_lineno = 314;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$file_picker$$$function__27_allow_multiple(tmp_annotations_25);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 313;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_34 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_25 = mod_consts[168];
            tmp_expression_value_77 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_77 == NULL)) {
                        tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 314;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_77);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_52 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[152]);

            if (tmp_subscript_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_52 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_52);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_77, tmp_subscript_value_52);
            Py_DECREF(tmp_expression_value_77);
            Py_DECREF(tmp_subscript_value_52);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$file_picker$$$function__27_allow_multiple(tmp_annotations_26);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 313;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_53;
            tmp_expression_value_78 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[40]);

            if (unlikely(tmp_expression_value_78 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 317;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[170]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_dict_key_26 = mod_consts[66];
            tmp_expression_value_79 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[88]);

            if (tmp_expression_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_expression_value_79 == NULL)) {
                        tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_expression_value_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);

                        exception_lineno = 318;
                        type_description_2 = "c";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_79);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_subscript_value_53 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[152]);

            if (tmp_subscript_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_53 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_53);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_53);
            Py_DECREF(tmp_expression_value_79);
            Py_DECREF(tmp_subscript_value_53);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 318;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_annotations_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$file_picker$$$function__28_allow_multiple(tmp_annotations_27);

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 317;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_26);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_28;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_25 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_36 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (unlikely(tmp_called_value_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[167]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 322;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$file_picker$$$function__29_on_result();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 322;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_37 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$file_picker$$$function__29_on_result();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 322;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_29;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[23]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 326;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$file_picker$$$function__30_on_result();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 326;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[170], tmp_args_element_value_29);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_31;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_26 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_38 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[167]);

            if (unlikely(tmp_called_value_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[167]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 331;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$file_picker$$$function__31_on_upload();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 331;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_39 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$file_picker$$$function__31_on_upload();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 331;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_32;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[24]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[24]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 335;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$file_picker$$$function__32_on_upload();

            frame_abf06a178dd26867b75216c94f283d0d_7->m_frame.f_lineno = 335;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[170], tmp_args_element_value_32);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_abf06a178dd26867b75216c94f283d0d_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_abf06a178dd26867b75216c94f283d0d_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_abf06a178dd26867b75216c94f283d0d_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_abf06a178dd26867b75216c94f283d0d_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_abf06a178dd26867b75216c94f283d0d_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_23;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_27 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_23;
            }
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$file_picker$$$class__6_FilePicker_61, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_23;
        }
        branch_no_13:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_40 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_22 = mod_consts[147];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_22 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_flet_core$file_picker$$$class__6_FilePicker_61;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_6__class_decl_dict;
            frame_21b270cc424f10624aae3064e2fc7319->m_frame.f_lineno = 61;
            tmp_assign_source_64 = CALL_FUNCTION(tmp_called_value_40, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_23;
            }
            assert(Nuitka_Cell_GET(outline_5_var___class__) == NULL);
            PyCell_SET(outline_5_var___class__, tmp_assign_source_64);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_5_var___class__));
        tmp_assign_source_63 = Nuitka_Cell_GET(outline_5_var___class__);
        Py_INCREF(tmp_assign_source_63);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_flet_core$file_picker$$$class__6_FilePicker_61);
        locals_flet_core$file_picker$$$class__6_FilePicker_61 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$file_picker$$$class__6_FilePicker_61);
        locals_flet_core$file_picker$$$class__6_FilePicker_61 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 61;
        goto try_except_handler_21;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_flet_core$file_picker, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_63);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21b270cc424f10624aae3064e2fc7319, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21b270cc424f10624aae3064e2fc7319->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21b270cc424f10624aae3064e2fc7319, exception_lineno);
    }



    assertFrameObject(frame_21b270cc424f10624aae3064e2fc7319);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_7:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core.file_picker", false);

    Py_INCREF(module_flet_core$file_picker);
    return module_flet_core$file_picker;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$file_picker, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$file_picker", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
