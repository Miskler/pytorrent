/* Generated code for Python module 'httpcore._models'
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

/* The "module_httpcore$_models" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpcore$_models;
PyDictObject *moduledict_httpcore$_models;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[200];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[200];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("httpcore._models"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 200; i++) {
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
void checkModuleConstants_httpcore$_models(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 200; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ccfd37ce1b2ce24ed72f862b961ece58;
static PyCodeObject *codeobj_be1e8d48213681ab65d3e0b17e27eb0a;
static PyCodeObject *codeobj_86389ab3956cede214dc6fa66e4f186f;
static PyCodeObject *codeobj_c67a516a25cf98791c5e2afb12ae8cf1;
static PyCodeObject *codeobj_8a26c55bc4b749c671a779015a9f2231;
static PyCodeObject *codeobj_8a93407d288e2e69a7351ca7a7e7e0e9;
static PyCodeObject *codeobj_784c146506466810ab4859868b47240f;
static PyCodeObject *codeobj_3a195db2912d14f9af1e27b09ea01c50;
static PyCodeObject *codeobj_d77c62229cea24c68ac8f562857c0992;
static PyCodeObject *codeobj_f015b0d5f36c9ded1a32c62ce0fb1966;
static PyCodeObject *codeobj_0bbf4a13f286b8d140e3c2645a958cb4;
static PyCodeObject *codeobj_b2fcaa0fe77b36ed068b75cde5f911bd;
static PyCodeObject *codeobj_9644d6ae97029f632496944c14ae3c38;
static PyCodeObject *codeobj_49ec0d7818521b363dd43e5b086f3d26;
static PyCodeObject *codeobj_46185690e71fd8a7f617cde5d532b0cd;
static PyCodeObject *codeobj_cc4c597327c5d7fccdf8bc03f6105b8d;
static PyCodeObject *codeobj_ab396a2b98a815fcfe3d54d158af7f33;
static PyCodeObject *codeobj_35c1c0fce3ce86e174c751a2d0d8ad5d;
static PyCodeObject *codeobj_cb37f7ad292911ce58a99dbd6b836234;
static PyCodeObject *codeobj_611018a0bf90d07c8c263984dc87c591;
static PyCodeObject *codeobj_67d4ed7c79bc6eb7d34ad1df913c9aff;
static PyCodeObject *codeobj_c03b75a7acaea060e5a6d5d878401527;
static PyCodeObject *codeobj_041008c84b90f3cc984424024407ae19;
static PyCodeObject *codeobj_432a036d2b9aaac2b21b41a3d9de1f99;
static PyCodeObject *codeobj_87f1d01a59d99a98bce49b07635e6404;
static PyCodeObject *codeobj_27aaa82bdaa8632083c5890410e2a530;
static PyCodeObject *codeobj_b66421ba710400b1a924e4cb39b73057;
static PyCodeObject *codeobj_700c276572ae5ab4f2055803b6dd2e2a;
static PyCodeObject *codeobj_ec7aaadf540d8fd032cd5e950d5611e8;
static PyCodeObject *codeobj_ac77cbdf162b34af1a14cc8601b98741;
static PyCodeObject *codeobj_d7f1f2c704c165861b19934f54558b58;
static PyCodeObject *codeobj_2ae32edbedf6269174ce782b2ec10e0c;
static PyCodeObject *codeobj_cd1dc6b54e7fb15196679eff2d30e037;
static PyCodeObject *codeobj_762d77595ec03e14dc75335771937da1;
static PyCodeObject *codeobj_66f5a251b2eaf7712129615ac44df3fa;
static PyCodeObject *codeobj_c93f1daabd0cf15e84c1162145523b32;
static PyCodeObject *codeobj_ef52c6e41e6671451f62d4e7436ebf5b;
static PyCodeObject *codeobj_c6295911a297d69c291f58edb17a9401;
static PyCodeObject *codeobj_99c5cd43f1d8a8e43d57c280a1643df5;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[111]; CHECK_OBJECT(module_filename_obj);
    codeobj_ccfd37ce1b2ce24ed72f862b961ece58 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[182], NULL, 1, 0, 0);
    codeobj_be1e8d48213681ab65d3e0b17e27eb0a = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[184], NULL, 1, 0, 0);
    codeobj_86389ab3956cede214dc6fa66e4f186f = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[184], NULL, 1, 0, 0);
    codeobj_c67a516a25cf98791c5e2afb12ae8cf1 = MAKE_CODE_OBJECT(module_filename_obj, 419, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[185], NULL, 1, 0, 0);
    codeobj_8a26c55bc4b749c671a779015a9f2231 = MAKE_CODE_OBJECT(module_filename_obj, 456, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[185], NULL, 1, 0, 0);
    codeobj_8a93407d288e2e69a7351ca7a7e7e0e9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[186], mod_consts[186], NULL, NULL, 0, 0, 0);
    codeobj_784c146506466810ab4859868b47240f = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[187], NULL, 0, 0, 0);
    codeobj_3a195db2912d14f9af1e27b09ea01c50 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[187], NULL, 0, 0, 0);
    codeobj_d77c62229cea24c68ac8f562857c0992 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_NOFREE, mod_consts[169], mod_consts[169], mod_consts[187], NULL, 0, 0, 0);
    codeobj_f015b0d5f36c9ded1a32c62ce0fb1966 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[187], NULL, 0, 0, 0);
    codeobj_0bbf4a13f286b8d140e3c2645a958cb4 = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[187], NULL, 0, 0, 0);
    codeobj_b2fcaa0fe77b36ed068b75cde5f911bd = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[188], NULL, 1, 0, 0);
    codeobj_9644d6ae97029f632496944c14ae3c38 = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[188], NULL, 1, 0, 0);
    codeobj_49ec0d7818521b363dd43e5b086f3d26 = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[154], mod_consts[154], mod_consts[189], NULL, 2, 0, 0);
    codeobj_46185690e71fd8a7f617cde5d532b0cd = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[154], mod_consts[154], mod_consts[189], NULL, 2, 0, 0);
    codeobj_cc4c597327c5d7fccdf8bc03f6105b8d = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[190], NULL, 2, 0, 0);
    codeobj_ab396a2b98a815fcfe3d54d158af7f33 = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[191], NULL, 3, 3, 0);
    codeobj_35c1c0fce3ce86e174c751a2d0d8ad5d = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[192], NULL, 4, 0, 0);
    codeobj_cb37f7ad292911ce58a99dbd6b836234 = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[193], NULL, 2, 3, 0);
    codeobj_611018a0bf90d07c8c263984dc87c591 = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[194], NULL, 2, 4, 0);
    codeobj_67d4ed7c79bc6eb7d34ad1df913c9aff = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[188], NULL, 1, 0, 0);
    codeobj_c03b75a7acaea060e5a6d5d878401527 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[188], NULL, 1, 0, 0);
    codeobj_041008c84b90f3cc984424024407ae19 = MAKE_CODE_OBJECT(module_filename_obj, 313, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[188], NULL, 1, 0, 0);
    codeobj_432a036d2b9aaac2b21b41a3d9de1f99 = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[188], NULL, 1, 0, 0);
    codeobj_87f1d01a59d99a98bce49b07635e6404 = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[188], NULL, 1, 0, 0);
    codeobj_27aaa82bdaa8632083c5890410e2a530 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[156], mod_consts[156], mod_consts[192], NULL, 1, 0, 0);
    codeobj_b66421ba710400b1a924e4cb39b73057 = MAKE_CODE_OBJECT(module_filename_obj, 475, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[188], NULL, 1, 0, 0);
    codeobj_700c276572ae5ab4f2055803b6dd2e2a = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[195], NULL, 1, 0, 0);
    codeobj_ec7aaadf540d8fd032cd5e950d5611e8 = MAKE_CODE_OBJECT(module_filename_obj, 448, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[188], NULL, 1, 0, 0);
    codeobj_ac77cbdf162b34af1a14cc8601b98741 = MAKE_CODE_OBJECT(module_filename_obj, 437, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[188], NULL, 1, 0, 0);
    codeobj_d7f1f2c704c165861b19934f54558b58 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[188], NULL, 1, 0, 0);
    codeobj_2ae32edbedf6269174ce782b2ec10e0c = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[196], NULL, 1, 1, 0);
    codeobj_cd1dc6b54e7fb15196679eff2d30e037 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[196], NULL, 1, 1, 0);
    codeobj_762d77595ec03e14dc75335771937da1 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[197], NULL, 1, 1, 0);
    codeobj_66f5a251b2eaf7712129615ac44df3fa = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[196], NULL, 1, 1, 0);
    codeobj_c93f1daabd0cf15e84c1162145523b32 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[198], NULL, 1, 2, 0);
    codeobj_ef52c6e41e6671451f62d4e7436ebf5b = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[195], NULL, 1, 0, 0);
    codeobj_c6295911a297d69c291f58edb17a9401 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[199], NULL, 1, 0, 0);
    codeobj_99c5cd43f1d8a8e43d57c280a1643df5 = MAKE_CODE_OBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[188], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpcore$_models$$$function__5_include_request_headers$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_httpcore$_models$$$function__7___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_httpcore$_models$$$function__8___aiter__$$$asyncgen__1___aiter__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_httpcore$_models$$$function__24_iter_stream$$$genobj__1_iter_stream(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpcore$_models$$$function__26_aread$$$coroutine__1_aread(struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_httpcore$_models$$$function__27_aiter_stream$$$asyncgen__1_aiter_stream(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpcore$_models$$$function__28_aclose$$$coroutine__1_aclose(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__10___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__11___eq__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__12___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__13___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__14_origin(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__15___eq__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__16___bytes__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__17___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__18___init__(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__19___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__1_enforce_bytes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__20___init__(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__21_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__22___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__23_read(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__24_iter_stream(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__25_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__26_aread(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__27_aiter_stream(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__28_aclose(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__2_enforce_url(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__3_enforce_headers(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__4_enforce_stream(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__5_include_request_headers(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__6___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__7___iter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__8___aiter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__9___repr__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpcore$_models$$$function__1_enforce_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *var_seen_type = NULL;
    struct Nuitka_FrameObject *frame_2ae32edbedf6269174ce782b2ec10e0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_2ae32edbedf6269174ce782b2ec10e0c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2ae32edbedf6269174ce782b2ec10e0c)) {
        Py_XDECREF(cache_frame_2ae32edbedf6269174ce782b2ec10e0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2ae32edbedf6269174ce782b2ec10e0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2ae32edbedf6269174ce782b2ec10e0c = MAKE_FUNCTION_FRAME(codeobj_2ae32edbedf6269174ce782b2ec10e0c, module_httpcore$_models, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2ae32edbedf6269174ce782b2ec10e0c->m_type_description == NULL);
    frame_2ae32edbedf6269174ce782b2ec10e0c = cache_frame_2ae32edbedf6269174ce782b2ec10e0c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2ae32edbedf6269174ce782b2ec10e0c);
    assert(Py_REFCNT(frame_2ae32edbedf6269174ce782b2ec10e0c) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooo";
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
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_2ae32edbedf6269174ce782b2ec10e0c->m_frame.f_lineno = 37;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_2ae32edbedf6269174ce782b2ec10e0c, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_2ae32edbedf6269174ce782b2ec10e0c, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_UnicodeEncodeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_name);
        tmp_format_value_1 = par_name;
        tmp_format_spec_1 = mod_consts[2];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[3];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        frame_2ae32edbedf6269174ce782b2ec10e0c->m_frame.f_lineno = 39;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 39;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 36;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2ae32edbedf6269174ce782b2ec10e0c->m_frame) frame_2ae32edbedf6269174ce782b2ec10e0c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_2 = par_value;
        tmp_isinstance_cls_2 = (PyObject *)&PyBytes_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_value);
        tmp_type_arg_1 = par_value;
        tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_2 == NULL));
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_seen_type == NULL);
        var_seen_type = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_2;
        PyObject *tmp_format_spec_2;
        CHECK_OBJECT(par_name);
        tmp_format_value_2 = par_name;
        tmp_format_spec_2 = mod_consts[2];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            CHECK_OBJECT(var_seen_type);
            tmp_format_value_3 = var_seen_type;
            tmp_format_spec_3 = mod_consts[2];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_2ae32edbedf6269174ce782b2ec10e0c->m_frame.f_lineno = 44;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 44;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_2ae32edbedf6269174ce782b2ec10e0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ae32edbedf6269174ce782b2ec10e0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ae32edbedf6269174ce782b2ec10e0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2ae32edbedf6269174ce782b2ec10e0c,
        type_description_1,
        par_value,
        par_name,
        var_seen_type
    );


    // Release cached frame if used for exception.
    if (frame_2ae32edbedf6269174ce782b2ec10e0c == cache_frame_2ae32edbedf6269174ce782b2ec10e0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2ae32edbedf6269174ce782b2ec10e0c);
        cache_frame_2ae32edbedf6269174ce782b2ec10e0c = NULL;
    }

    assertFrameObject(frame_2ae32edbedf6269174ce782b2ec10e0c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_seen_type);
    var_seen_type = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_models$$$function__2_enforce_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *var_seen_type = NULL;
    struct Nuitka_FrameObject *frame_66f5a251b2eaf7712129615ac44df3fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_66f5a251b2eaf7712129615ac44df3fa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_66f5a251b2eaf7712129615ac44df3fa)) {
        Py_XDECREF(cache_frame_66f5a251b2eaf7712129615ac44df3fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_66f5a251b2eaf7712129615ac44df3fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_66f5a251b2eaf7712129615ac44df3fa = MAKE_FUNCTION_FRAME(codeobj_66f5a251b2eaf7712129615ac44df3fa, module_httpcore$_models, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_66f5a251b2eaf7712129615ac44df3fa->m_type_description == NULL);
    frame_66f5a251b2eaf7712129615ac44df3fa = cache_frame_66f5a251b2eaf7712129615ac44df3fa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_66f5a251b2eaf7712129615ac44df3fa);
    assert(Py_REFCNT(frame_66f5a251b2eaf7712129615ac44df3fa) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = mod_consts[8];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
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
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_66f5a251b2eaf7712129615ac44df3fa->m_frame.f_lineno = 52;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_2 = par_value;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_value);
        tmp_type_arg_1 = par_value;
        tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_1 == NULL));
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_seen_type == NULL);
        var_seen_type = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_name);
        tmp_format_value_1 = par_name;
        tmp_format_spec_1 = mod_consts[2];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[10];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_seen_type);
            tmp_format_value_2 = var_seen_type;
            tmp_format_spec_2 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_66f5a251b2eaf7712129615ac44df3fa->m_frame.f_lineno = 57;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 57;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_66f5a251b2eaf7712129615ac44df3fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_66f5a251b2eaf7712129615ac44df3fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_66f5a251b2eaf7712129615ac44df3fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_66f5a251b2eaf7712129615ac44df3fa,
        type_description_1,
        par_value,
        par_name,
        var_seen_type
    );


    // Release cached frame if used for exception.
    if (frame_66f5a251b2eaf7712129615ac44df3fa == cache_frame_66f5a251b2eaf7712129615ac44df3fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_66f5a251b2eaf7712129615ac44df3fa);
        cache_frame_66f5a251b2eaf7712129615ac44df3fa = NULL;
    }

    assertFrameObject(frame_66f5a251b2eaf7712129615ac44df3fa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_seen_type);
    var_seen_type = NULL;
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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_models$$$function__3_enforce_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *var_seen_type = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *outline_1_var_k = NULL;
    PyObject *outline_1_var_v = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_cd1dc6b54e7fb15196679eff2d30e037;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_be1e8d48213681ab65d3e0b17e27eb0a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_be1e8d48213681ab65d3e0b17e27eb0a_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_86389ab3956cede214dc6fa66e4f186f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_86389ab3956cede214dc6fa66e4f186f_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_cd1dc6b54e7fb15196679eff2d30e037 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cd1dc6b54e7fb15196679eff2d30e037)) {
        Py_XDECREF(cache_frame_cd1dc6b54e7fb15196679eff2d30e037);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd1dc6b54e7fb15196679eff2d30e037 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd1dc6b54e7fb15196679eff2d30e037 = MAKE_FUNCTION_FRAME(codeobj_cd1dc6b54e7fb15196679eff2d30e037, module_httpcore$_models, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cd1dc6b54e7fb15196679eff2d30e037->m_type_description == NULL);
    frame_cd1dc6b54e7fb15196679eff2d30e037 = cache_frame_cd1dc6b54e7fb15196679eff2d30e037;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cd1dc6b54e7fb15196679eff2d30e037);
    assert(Py_REFCNT(frame_cd1dc6b54e7fb15196679eff2d30e037) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_cd1dc6b54e7fb15196679eff2d30e037->m_frame.f_lineno = 75;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    if (isFrameUnusable(cache_frame_be1e8d48213681ab65d3e0b17e27eb0a_2)) {
        Py_XDECREF(cache_frame_be1e8d48213681ab65d3e0b17e27eb0a_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be1e8d48213681ab65d3e0b17e27eb0a_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be1e8d48213681ab65d3e0b17e27eb0a_2 = MAKE_FUNCTION_FRAME(codeobj_be1e8d48213681ab65d3e0b17e27eb0a, module_httpcore$_models, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be1e8d48213681ab65d3e0b17e27eb0a_2->m_type_description == NULL);
    frame_be1e8d48213681ab65d3e0b17e27eb0a_2 = cache_frame_be1e8d48213681ab65d3e0b17e27eb0a_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be1e8d48213681ab65d3e0b17e27eb0a_2);
    assert(Py_REFCNT(frame_be1e8d48213681ab65d3e0b17e27eb0a_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "oo";
                exception_lineno = 70;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_2 = "oo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_2 = "oo";
            exception_lineno = 70;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
            tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_2 = "oo";
            exception_lineno = 70;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
            tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_2 = "oo";
                    exception_lineno = 70;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[14];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_2 = "oo";
            exception_lineno = 70;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
    Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
    tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
    tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
    tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
    Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
    tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_listcomp$tuple_unpack_1__element_1;
        {
            PyObject *old = outline_0_var_k;
            outline_0_var_k = tmp_assign_source_7;
            Py_INCREF(outline_0_var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
    tmp_listcomp$tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_listcomp$tuple_unpack_1__element_2;
        {
            PyObject *old = outline_0_var_v;
            outline_0_var_v = tmp_assign_source_8;
            Py_INCREF(outline_0_var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
    tmp_listcomp$tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(outline_0_var_k);
        tmp_tuple_element_2 = outline_0_var_k;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[16]);
        frame_be1e8d48213681ab65d3e0b17e27eb0a_2->m_frame.f_lineno = 72;
        tmp_tuple_element_1 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            PyTuple_SET_ITEM(tmp_append_value_1, 0, tmp_tuple_element_1);
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "oo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(outline_0_var_v);
            tmp_tuple_element_3 = outline_0_var_v;
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            tmp_kwargs_value_2 = DICT_COPY(mod_consts[17]);
            frame_be1e8d48213681ab65d3e0b17e27eb0a_2->m_frame.f_lineno = 73;
            tmp_tuple_element_1 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            Py_DECREF(tmp_kwargs_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_append_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_append_value_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 70;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
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

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_2;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_2:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;
    frame_exception_exit_2:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_be1e8d48213681ab65d3e0b17e27eb0a_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be1e8d48213681ab65d3e0b17e27eb0a_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be1e8d48213681ab65d3e0b17e27eb0a_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be1e8d48213681ab65d3e0b17e27eb0a_2,
        type_description_2,
        outline_0_var_k,
        outline_0_var_v
    );


    // Release cached frame if used for exception.
    if (frame_be1e8d48213681ab65d3e0b17e27eb0a_2 == cache_frame_be1e8d48213681ab65d3e0b17e27eb0a_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be1e8d48213681ab65d3e0b17e27eb0a_2);
        cache_frame_be1e8d48213681ab65d3e0b17e27eb0a_2 = NULL;
    }

    assertFrameObject(frame_be1e8d48213681ab65d3e0b17e27eb0a_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF(outline_0_var_k);
    outline_0_var_k = NULL;
    Py_XDECREF(outline_0_var_v);
    outline_0_var_v = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_k);
    outline_0_var_k = NULL;
    Py_XDECREF(outline_0_var_v);
    outline_0_var_v = NULL;
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
    exception_lineno = 70;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_2 = par_value;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(par_value);
        tmp_iter_arg_3 = par_value;
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto try_except_handler_6;
        }
        assert(tmp_listcomp_2__$0 == NULL);
        tmp_listcomp_2__$0 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_2__contraction == NULL);
        tmp_listcomp_2__contraction = tmp_assign_source_10;
    }
    if (isFrameUnusable(cache_frame_86389ab3956cede214dc6fa66e4f186f_3)) {
        Py_XDECREF(cache_frame_86389ab3956cede214dc6fa66e4f186f_3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_86389ab3956cede214dc6fa66e4f186f_3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_86389ab3956cede214dc6fa66e4f186f_3 = MAKE_FUNCTION_FRAME(codeobj_86389ab3956cede214dc6fa66e4f186f, module_httpcore$_models, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_86389ab3956cede214dc6fa66e4f186f_3->m_type_description == NULL);
    frame_86389ab3956cede214dc6fa66e4f186f_3 = cache_frame_86389ab3956cede214dc6fa66e4f186f_3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_86389ab3956cede214dc6fa66e4f186f_3);
    assert(Py_REFCNT(frame_86389ab3956cede214dc6fa66e4f186f_3) == 2);

    // Framed code:
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        tmp_next_source_2 = tmp_listcomp_2__$0;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "oo";
                exception_lineno = 78;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_listcomp_2__iter_value_0;
            tmp_listcomp_2__iter_value_0 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
        tmp_iter_arg_4 = tmp_listcomp_2__iter_value_0;
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_2 = "oo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_listcomp$tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_2 = "oo";
            exception_lineno = 78;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
            tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_listcomp$tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_2 = "oo";
            exception_lineno = 78;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
            tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_2 = "oo";
                    exception_lineno = 78;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[14];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_2 = "oo";
            exception_lineno = 78;
            goto try_except_handler_9;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
    Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
    tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_8;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
    tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
    tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
    Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
    tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_assign_source_15 = tmp_listcomp$tuple_unpack_2__element_1;
        {
            PyObject *old = outline_1_var_k;
            outline_1_var_k = tmp_assign_source_15;
            Py_INCREF(outline_1_var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
    tmp_listcomp$tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_assign_source_16 = tmp_listcomp$tuple_unpack_2__element_2;
        {
            PyObject *old = outline_1_var_v;
            outline_1_var_v = tmp_assign_source_16;
            Py_INCREF(outline_1_var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
    tmp_listcomp$tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_append_list_2;
        PyObject *tmp_append_value_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_append_list_2 = tmp_listcomp_2__contraction;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(outline_1_var_k);
        tmp_tuple_element_5 = outline_1_var_k;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[16]);
        frame_86389ab3956cede214dc6fa66e4f186f_3->m_frame.f_lineno = 80;
        tmp_tuple_element_4 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        tmp_append_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            PyTuple_SET_ITEM(tmp_append_value_2, 0, tmp_tuple_element_4);
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "oo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(outline_1_var_v);
            tmp_tuple_element_6 = outline_1_var_v;
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            tmp_kwargs_value_4 = DICT_COPY(mod_consts[17]);
            frame_86389ab3956cede214dc6fa66e4f186f_3->m_frame.f_lineno = 81;
            tmp_tuple_element_4 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            Py_DECREF(tmp_kwargs_value_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "oo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_append_value_2, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_append_value_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 78;
        type_description_2 = "oo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    CHECK_OBJECT(tmp_listcomp_2__contraction);
    tmp_return_value = tmp_listcomp_2__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_7;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT(tmp_listcomp_2__$0);
    Py_DECREF(tmp_listcomp_2__$0);
    tmp_listcomp_2__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_2__contraction);
    Py_DECREF(tmp_listcomp_2__contraction);
    tmp_listcomp_2__contraction = NULL;
    Py_XDECREF(tmp_listcomp_2__iter_value_0);
    tmp_listcomp_2__iter_value_0 = NULL;
    goto frame_return_exit_3;
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

    CHECK_OBJECT(tmp_listcomp_2__$0);
    Py_DECREF(tmp_listcomp_2__$0);
    tmp_listcomp_2__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_2__contraction);
    Py_DECREF(tmp_listcomp_2__contraction);
    tmp_listcomp_2__contraction = NULL;
    Py_XDECREF(tmp_listcomp_2__iter_value_0);
    tmp_listcomp_2__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_3;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_3:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_6;
    frame_exception_exit_3:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_86389ab3956cede214dc6fa66e4f186f_3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_86389ab3956cede214dc6fa66e4f186f_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_86389ab3956cede214dc6fa66e4f186f_3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_86389ab3956cede214dc6fa66e4f186f_3,
        type_description_2,
        outline_1_var_k,
        outline_1_var_v
    );


    // Release cached frame if used for exception.
    if (frame_86389ab3956cede214dc6fa66e4f186f_3 == cache_frame_86389ab3956cede214dc6fa66e4f186f_3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_86389ab3956cede214dc6fa66e4f186f_3);
        cache_frame_86389ab3956cede214dc6fa66e4f186f_3 = NULL;
    }

    assertFrameObject(frame_86389ab3956cede214dc6fa66e4f186f_3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;
    frame_no_exception_2:;
    goto skip_nested_handling_2;
    nested_frame_exit_2:;
    type_description_1 = "ooo";
    goto try_except_handler_6;
    skip_nested_handling_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF(outline_1_var_k);
    outline_1_var_k = NULL;
    Py_XDECREF(outline_1_var_v);
    outline_1_var_v = NULL;
    goto outline_result_2;
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

    Py_XDECREF(outline_1_var_k);
    outline_1_var_k = NULL;
    Py_XDECREF(outline_1_var_v);
    outline_1_var_v = NULL;
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
    exception_lineno = 78;
    goto frame_exception_exit_1;
    outline_result_2:;
    goto frame_return_exit_1;
    branch_no_3:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_value);
        tmp_type_arg_1 = par_value;
        tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_2 == NULL));
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_seen_type == NULL);
        var_seen_type = tmp_assign_source_17;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_name);
        tmp_format_value_1 = par_name;
        tmp_format_spec_1 = mod_consts[2];
        tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_7);
            CHECK_OBJECT(var_seen_type);
            tmp_format_value_2 = var_seen_type;
            tmp_format_spec_2 = mod_consts[2];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "ooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cd1dc6b54e7fb15196679eff2d30e037->m_frame.f_lineno = 87;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 87;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cd1dc6b54e7fb15196679eff2d30e037, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd1dc6b54e7fb15196679eff2d30e037->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd1dc6b54e7fb15196679eff2d30e037, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd1dc6b54e7fb15196679eff2d30e037,
        type_description_1,
        par_value,
        par_name,
        var_seen_type
    );


    // Release cached frame if used for exception.
    if (frame_cd1dc6b54e7fb15196679eff2d30e037 == cache_frame_cd1dc6b54e7fb15196679eff2d30e037) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cd1dc6b54e7fb15196679eff2d30e037);
        cache_frame_cd1dc6b54e7fb15196679eff2d30e037 = NULL;
    }

    assertFrameObject(frame_cd1dc6b54e7fb15196679eff2d30e037);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_seen_type);
    var_seen_type = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_models$$$function__4_enforce_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_762d77595ec03e14dc75335771937da1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_762d77595ec03e14dc75335771937da1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_762d77595ec03e14dc75335771937da1)) {
        Py_XDECREF(cache_frame_762d77595ec03e14dc75335771937da1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_762d77595ec03e14dc75335771937da1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_762d77595ec03e14dc75335771937da1 = MAKE_FUNCTION_FRAME(codeobj_762d77595ec03e14dc75335771937da1, module_httpcore$_models, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_762d77595ec03e14dc75335771937da1->m_type_description == NULL);
    frame_762d77595ec03e14dc75335771937da1 = cache_frame_762d77595ec03e14dc75335771937da1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_762d77595ec03e14dc75335771937da1);
    assert(Py_REFCNT(frame_762d77595ec03e14dc75335771937da1) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_762d77595ec03e14dc75335771937da1->m_frame.f_lineno = 96;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[22]);

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_762d77595ec03e14dc75335771937da1->m_frame.f_lineno = 98;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_762d77595ec03e14dc75335771937da1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_762d77595ec03e14dc75335771937da1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_762d77595ec03e14dc75335771937da1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_762d77595ec03e14dc75335771937da1,
        type_description_1,
        par_value,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_762d77595ec03e14dc75335771937da1 == cache_frame_762d77595ec03e14dc75335771937da1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_762d77595ec03e14dc75335771937da1);
        cache_frame_762d77595ec03e14dc75335771937da1 = NULL;
    }

    assertFrameObject(frame_762d77595ec03e14dc75335771937da1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_models$$$function__5_include_request_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_headers = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_content = python_pars[2];
    PyObject *var_headers_set = NULL;
    PyObject *var_default_port = NULL;
    PyObject *var_header_value = NULL;
    PyObject *var_content_length = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_c93f1daabd0cf15e84c1162145523b32;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c93f1daabd0cf15e84c1162145523b32 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c93f1daabd0cf15e84c1162145523b32)) {
        Py_XDECREF(cache_frame_c93f1daabd0cf15e84c1162145523b32);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c93f1daabd0cf15e84c1162145523b32 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c93f1daabd0cf15e84c1162145523b32 = MAKE_FUNCTION_FRAME(codeobj_c93f1daabd0cf15e84c1162145523b32, module_httpcore$_models, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c93f1daabd0cf15e84c1162145523b32->m_type_description == NULL);
    frame_c93f1daabd0cf15e84c1162145523b32 = cache_frame_c93f1daabd0cf15e84c1162145523b32;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c93f1daabd0cf15e84c1162145523b32);
    assert(Py_REFCNT(frame_c93f1daabd0cf15e84c1162145523b32) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_set_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_headers);
            tmp_iter_arg_1 = par_headers;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_set_arg_1 = MAKE_GENERATOR_httpcore$_models$$$function__5_include_request_headers$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_1 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_headers_set == NULL);
        var_headers_set = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[23];
        CHECK_OBJECT(var_headers_set);
        tmp_cmp_expr_right_1 = var_headers_set;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_expression_value_2 = par_url;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_c93f1daabd0cf15e84c1162145523b32->m_frame.f_lineno = 123;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_default_port == NULL);
        var_default_port = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_url);
        tmp_expression_value_3 = par_url;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[27]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_url);
        tmp_expression_value_4 = par_url;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[27]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_default_port);
        tmp_cmp_expr_right_3 = var_default_port;
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_url);
        tmp_expression_value_5 = par_url;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[28]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_header_value == NULL);
        var_header_value = tmp_assign_source_4;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        tmp_mod_expr_left_1 = mod_consts[29];
        CHECK_OBJECT(par_url);
        tmp_expression_value_6 = par_url;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[28]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_url);
            tmp_expression_value_7 = par_url;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[27]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_5 = BINARY_OPERATION_MOD_OBJECT_BYTES_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_header_value == NULL);
        var_header_value = tmp_assign_source_5;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[30];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_header_value);
        tmp_tuple_element_2 = var_header_value;
        PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_2);
        tmp_add_expr_left_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_add_expr_left_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_headers);
        tmp_add_expr_right_1 = par_headers;
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_headers;
            assert(old != NULL);
            par_headers = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_content);
        tmp_cmp_expr_left_4 = par_content;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_5 = mod_consts[31];
        CHECK_OBJECT(var_headers_set);
        tmp_cmp_expr_right_5 = var_headers_set;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_cmp_expr_left_6 = mod_consts[32];
        CHECK_OBJECT(var_headers_set);
        tmp_cmp_expr_right_6 = var_headers_set;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_content);
        tmp_isinstance_inst_1 = par_content;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_content);
        tmp_len_arg_1 = par_content;
        tmp_unicode_arg_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[0]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_c93f1daabd0cf15e84c1162145523b32->m_frame.f_lineno = 136;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[1]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_content_length == NULL);
        var_content_length = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_tuple_element_3;
        if (par_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_1 = par_headers;
        tmp_tuple_element_3 = mod_consts[34];
        tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_content_length);
        tmp_tuple_element_3 = var_content_length;
        PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_3);
        tmp_iadd_expr_right_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_iadd_expr_right_1, 0, tmp_list_element_2);
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LIST(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_1;
        par_headers = tmp_assign_source_8;

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (par_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_2 = par_headers;
        tmp_iadd_expr_right_2 = MAKE_LIST1(mod_consts[35]);
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LIST(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_iadd_expr_left_2;
        par_headers = tmp_assign_source_9;

    }
    branch_end_4:;
    branch_no_3:;
    if (par_headers == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 141;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_headers;
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
        exception_tb = MAKE_TRACEBACK(frame_c93f1daabd0cf15e84c1162145523b32, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c93f1daabd0cf15e84c1162145523b32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c93f1daabd0cf15e84c1162145523b32, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c93f1daabd0cf15e84c1162145523b32,
        type_description_1,
        par_headers,
        par_url,
        par_content,
        var_headers_set,
        var_default_port,
        var_header_value,
        var_content_length
    );


    // Release cached frame if used for exception.
    if (frame_c93f1daabd0cf15e84c1162145523b32 == cache_frame_c93f1daabd0cf15e84c1162145523b32) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c93f1daabd0cf15e84c1162145523b32);
        cache_frame_c93f1daabd0cf15e84c1162145523b32 = NULL;
    }

    assertFrameObject(frame_c93f1daabd0cf15e84c1162145523b32);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_headers);
    par_headers = NULL;
    CHECK_OBJECT(var_headers_set);
    Py_DECREF(var_headers_set);
    var_headers_set = NULL;
    Py_XDECREF(var_default_port);
    var_default_port = NULL;
    Py_XDECREF(var_header_value);
    var_header_value = NULL;
    Py_XDECREF(var_content_length);
    var_content_length = NULL;
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

    Py_XDECREF(par_headers);
    par_headers = NULL;
    Py_XDECREF(var_headers_set);
    var_headers_set = NULL;
    Py_XDECREF(var_default_port);
    var_default_port = NULL;
    Py_XDECREF(var_header_value);
    var_header_value = NULL;
    Py_XDECREF(var_content_length);
    var_content_length = NULL;
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
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct httpcore$_models$$$function__5_include_request_headers$$$genexpr__1_genexpr_locals {
    PyObject *var_k;
    PyObject *var_v;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};
#endif

static PyObject *httpcore$_models$$$function__5_include_request_headers$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_models$$$function__5_include_request_headers$$$genexpr__1_genexpr_locals *generator_heap = (struct httpcore$_models$$$function__5_include_request_headers$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
    generator_heap->var_v = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ccfd37ce1b2ce24ed72f862b961ece58, module_httpcore$_models, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 120;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 120;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 120;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 120;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[14];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 120;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_k;
            generator_heap->var_k = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_k);
        tmp_expression_value_2 = generator_heap->var_k;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[36]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 120;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 120;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_k,
            generator_heap->var_v
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpcore$_models$$$function__5_include_request_headers$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpcore$_models$$$function__5_include_request_headers$$$genexpr__1_genexpr_context,
        module_httpcore$_models,
        mod_consts[37],
#if PYTHON_VERSION >= 0x350
        mod_consts[38],
#endif
        codeobj_ccfd37ce1b2ce24ed72f862b961ece58,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_models$$$function__5_include_request_headers$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_models$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_content = python_pars[1];
    struct Nuitka_FrameObject *frame_cc4c597327c5d7fccdf8bc03f6105b8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cc4c597327c5d7fccdf8bc03f6105b8d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cc4c597327c5d7fccdf8bc03f6105b8d)) {
        Py_XDECREF(cache_frame_cc4c597327c5d7fccdf8bc03f6105b8d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc4c597327c5d7fccdf8bc03f6105b8d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc4c597327c5d7fccdf8bc03f6105b8d = MAKE_FUNCTION_FRAME(codeobj_cc4c597327c5d7fccdf8bc03f6105b8d, module_httpcore$_models, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc4c597327c5d7fccdf8bc03f6105b8d->m_type_description == NULL);
    frame_cc4c597327c5d7fccdf8bc03f6105b8d = cache_frame_cc4c597327c5d7fccdf8bc03f6105b8d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cc4c597327c5d7fccdf8bc03f6105b8d);
    assert(Py_REFCNT(frame_cc4c597327c5d7fccdf8bc03f6105b8d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_content);
        tmp_assattr_value_1 = par_content;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[39], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc4c597327c5d7fccdf8bc03f6105b8d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc4c597327c5d7fccdf8bc03f6105b8d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc4c597327c5d7fccdf8bc03f6105b8d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc4c597327c5d7fccdf8bc03f6105b8d,
        type_description_1,
        par_self,
        par_content
    );


    // Release cached frame if used for exception.
    if (frame_cc4c597327c5d7fccdf8bc03f6105b8d == cache_frame_cc4c597327c5d7fccdf8bc03f6105b8d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc4c597327c5d7fccdf8bc03f6105b8d);
        cache_frame_cc4c597327c5d7fccdf8bc03f6105b8d = NULL;
    }

    assertFrameObject(frame_cc4c597327c5d7fccdf8bc03f6105b8d);

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
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_models$$$function__7___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_GENERATOR_httpcore$_models$$$function__7___iter__$$$genobj__1___iter__(tmp_closure_1);

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
struct httpcore$_models$$$function__7___iter__$$$genobj__1___iter___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
};
#endif

static PyObject *httpcore$_models$$$function__7___iter__$$$genobj__1___iter___context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_models$$$function__7___iter__$$$genobj__1___iter___locals *generator_heap = (struct httpcore$_models$$$function__7___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_67d4ed7c79bc6eb7d34ad1df913c9aff, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[40]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpcore$_models$$$function__7___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpcore$_models$$$function__7___iter__$$$genobj__1___iter___context,
        module_httpcore$_models,
        mod_consts[41],
#if PYTHON_VERSION >= 0x350
        mod_consts[42],
#endif
        codeobj_67d4ed7c79bc6eb7d34ad1df913c9aff,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_models$$$function__7___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_models$$$function__8___aiter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_ASYNCGEN_httpcore$_models$$$function__8___aiter__$$$asyncgen__1___aiter__(tmp_closure_1);

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
struct httpcore$_models$$$function__8___aiter__$$$asyncgen__1___aiter___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
};
#endif

static PyObject *httpcore$_models$$$function__8___aiter__$$$asyncgen__1___aiter___context(struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));

#if 1
    // Heap access.
    struct httpcore$_models$$$function__8___aiter__$$$asyncgen__1___aiter___locals *asyncgen_heap = (struct httpcore$_models$$$function__8___aiter__$$$asyncgen__1___aiter___locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(asyncgen->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    asyncgen_heap->type_description_1 = NULL;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_b2fcaa0fe77b36ed068b75cde5f911bd, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    asyncgen->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(asyncgen->m_frame);
    assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

    assert(asyncgen->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(asyncgen->m_frame);
    assert(Py_REFCNT(asyncgen->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_ASYNCGEN_EXCEPTION(asyncgen);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[40]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 160;
            asyncgen_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 160;
            asyncgen_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        asyncgen->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 160;
            asyncgen_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }

    // Release exception attached to the frame
    DROP_ASYNCGEN_EXCEPTION(asyncgen);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(asyncgen_heap->exception_type)) {
        if (asyncgen_heap->exception_tb == NULL) {
            asyncgen_heap->exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        } else if (asyncgen_heap->exception_tb->tb_frame != &asyncgen->m_frame->m_frame) {
            asyncgen_heap->exception_tb = ADD_TRACEBACK(asyncgen_heap->exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            asyncgen->m_frame,
            asyncgen_heap->type_description_1,
            asyncgen->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(asyncgen->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(asyncgen));
#endif
    Py_CLEAR(EXC_VALUE_F(asyncgen));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(asyncgen));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    assert(asyncgen_heap->exception_type);
    RESTORE_ERROR_OCCURRED(asyncgen_heap->exception_type, asyncgen_heap->exception_value, asyncgen_heap->exception_tb);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_httpcore$_models$$$function__8___aiter__$$$asyncgen__1___aiter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        httpcore$_models$$$function__8___aiter__$$$asyncgen__1___aiter___context,
        module_httpcore$_models,
        mod_consts[43],
        mod_consts[44],
        codeobj_b2fcaa0fe77b36ed068b75cde5f911bd,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_models$$$function__8___aiter__$$$asyncgen__1___aiter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_models$$$function__9___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c03b75a7acaea060e5a6d5d878401527;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c03b75a7acaea060e5a6d5d878401527 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c03b75a7acaea060e5a6d5d878401527)) {
        Py_XDECREF(cache_frame_c03b75a7acaea060e5a6d5d878401527);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c03b75a7acaea060e5a6d5d878401527 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c03b75a7acaea060e5a6d5d878401527 = MAKE_FUNCTION_FRAME(codeobj_c03b75a7acaea060e5a6d5d878401527, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c03b75a7acaea060e5a6d5d878401527->m_type_description == NULL);
    frame_c03b75a7acaea060e5a6d5d878401527 = cache_frame_c03b75a7acaea060e5a6d5d878401527;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c03b75a7acaea060e5a6d5d878401527);
    assert(Py_REFCNT(frame_c03b75a7acaea060e5a6d5d878401527) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[45];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[46];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
            if (tmp_len_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_2 = BUILTIN_LEN(tmp_len_arg_1);
            Py_DECREF(tmp_len_arg_1);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[47];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
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
        exception_tb = MAKE_TRACEBACK(frame_c03b75a7acaea060e5a6d5d878401527, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c03b75a7acaea060e5a6d5d878401527->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c03b75a7acaea060e5a6d5d878401527, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c03b75a7acaea060e5a6d5d878401527,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c03b75a7acaea060e5a6d5d878401527 == cache_frame_c03b75a7acaea060e5a6d5d878401527) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c03b75a7acaea060e5a6d5d878401527);
        cache_frame_c03b75a7acaea060e5a6d5d878401527 = NULL;
    }

    assertFrameObject(frame_c03b75a7acaea060e5a6d5d878401527);

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


static PyObject *impl_httpcore$_models$$$function__10___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_scheme = python_pars[1];
    PyObject *par_host = python_pars[2];
    PyObject *par_port = python_pars[3];
    struct Nuitka_FrameObject *frame_35c1c0fce3ce86e174c751a2d0d8ad5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_35c1c0fce3ce86e174c751a2d0d8ad5d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_35c1c0fce3ce86e174c751a2d0d8ad5d)) {
        Py_XDECREF(cache_frame_35c1c0fce3ce86e174c751a2d0d8ad5d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35c1c0fce3ce86e174c751a2d0d8ad5d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35c1c0fce3ce86e174c751a2d0d8ad5d = MAKE_FUNCTION_FRAME(codeobj_35c1c0fce3ce86e174c751a2d0d8ad5d, module_httpcore$_models, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_35c1c0fce3ce86e174c751a2d0d8ad5d->m_type_description == NULL);
    frame_35c1c0fce3ce86e174c751a2d0d8ad5d = cache_frame_35c1c0fce3ce86e174c751a2d0d8ad5d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_35c1c0fce3ce86e174c751a2d0d8ad5d);
    assert(Py_REFCNT(frame_35c1c0fce3ce86e174c751a2d0d8ad5d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_scheme);
        tmp_assattr_value_1 = par_scheme;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_host);
        tmp_assattr_value_2 = par_host;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[28], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_port);
        tmp_assattr_value_3 = par_port;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[27], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35c1c0fce3ce86e174c751a2d0d8ad5d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35c1c0fce3ce86e174c751a2d0d8ad5d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35c1c0fce3ce86e174c751a2d0d8ad5d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35c1c0fce3ce86e174c751a2d0d8ad5d,
        type_description_1,
        par_self,
        par_scheme,
        par_host,
        par_port
    );


    // Release cached frame if used for exception.
    if (frame_35c1c0fce3ce86e174c751a2d0d8ad5d == cache_frame_35c1c0fce3ce86e174c751a2d0d8ad5d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_35c1c0fce3ce86e174c751a2d0d8ad5d);
        cache_frame_35c1c0fce3ce86e174c751a2d0d8ad5d = NULL;
    }

    assertFrameObject(frame_35c1c0fce3ce86e174c751a2d0d8ad5d);

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
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_models$$$function__11___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_49ec0d7818521b363dd43e5b086f3d26;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_49ec0d7818521b363dd43e5b086f3d26 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_49ec0d7818521b363dd43e5b086f3d26)) {
        Py_XDECREF(cache_frame_49ec0d7818521b363dd43e5b086f3d26);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49ec0d7818521b363dd43e5b086f3d26 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49ec0d7818521b363dd43e5b086f3d26 = MAKE_FUNCTION_FRAME(codeobj_49ec0d7818521b363dd43e5b086f3d26, module_httpcore$_models, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49ec0d7818521b363dd43e5b086f3d26->m_type_description == NULL);
    frame_49ec0d7818521b363dd43e5b086f3d26 = cache_frame_49ec0d7818521b363dd43e5b086f3d26;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_49ec0d7818521b363dd43e5b086f3d26);
    assert(Py_REFCNT(frame_49ec0d7818521b363dd43e5b086f3d26) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_2 = par_other;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_4 = par_other;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_and_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_3);

            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        Py_DECREF(tmp_and_left_value_3);
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[27]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_6 = par_other;
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[27]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_and_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_49ec0d7818521b363dd43e5b086f3d26, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49ec0d7818521b363dd43e5b086f3d26->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49ec0d7818521b363dd43e5b086f3d26, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49ec0d7818521b363dd43e5b086f3d26,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_49ec0d7818521b363dd43e5b086f3d26 == cache_frame_49ec0d7818521b363dd43e5b086f3d26) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49ec0d7818521b363dd43e5b086f3d26);
        cache_frame_49ec0d7818521b363dd43e5b086f3d26 = NULL;
    }

    assertFrameObject(frame_49ec0d7818521b363dd43e5b086f3d26);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_models$$$function__12___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_scheme = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    struct Nuitka_FrameObject *frame_27aaa82bdaa8632083c5890410e2a530;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_27aaa82bdaa8632083c5890410e2a530 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_27aaa82bdaa8632083c5890410e2a530)) {
        Py_XDECREF(cache_frame_27aaa82bdaa8632083c5890410e2a530);

#if _DEBUG_REFCOUNTS
        if (cache_frame_27aaa82bdaa8632083c5890410e2a530 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_27aaa82bdaa8632083c5890410e2a530 = MAKE_FUNCTION_FRAME(codeobj_27aaa82bdaa8632083c5890410e2a530, module_httpcore$_models, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_27aaa82bdaa8632083c5890410e2a530->m_type_description == NULL);
    frame_27aaa82bdaa8632083c5890410e2a530 = cache_frame_27aaa82bdaa8632083c5890410e2a530;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_27aaa82bdaa8632083c5890410e2a530);
    assert(Py_REFCNT(frame_27aaa82bdaa8632083c5890410e2a530) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[49]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_27aaa82bdaa8632083c5890410e2a530->m_frame.f_lineno = 181;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_scheme == NULL);
        var_scheme = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[49]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_27aaa82bdaa8632083c5890410e2a530->m_frame.f_lineno = 182;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[1]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_host == NULL);
        var_host = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[27]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_port == NULL);
        var_port = tmp_assign_source_3;
    }
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(var_scheme);
        tmp_format_value_1 = var_scheme;
        tmp_format_spec_1 = mod_consts[2];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[50];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_host);
            tmp_format_value_2 = var_host;
            tmp_format_spec_2 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[51];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(var_port);
            tmp_format_value_3 = var_port;
            tmp_format_spec_3 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_27aaa82bdaa8632083c5890410e2a530, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27aaa82bdaa8632083c5890410e2a530->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27aaa82bdaa8632083c5890410e2a530, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_27aaa82bdaa8632083c5890410e2a530,
        type_description_1,
        par_self,
        var_scheme,
        var_host,
        var_port
    );


    // Release cached frame if used for exception.
    if (frame_27aaa82bdaa8632083c5890410e2a530 == cache_frame_27aaa82bdaa8632083c5890410e2a530) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_27aaa82bdaa8632083c5890410e2a530);
        cache_frame_27aaa82bdaa8632083c5890410e2a530 = NULL;
    }

    assertFrameObject(frame_27aaa82bdaa8632083c5890410e2a530);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_scheme);
    Py_DECREF(var_scheme);
    var_scheme = NULL;
    CHECK_OBJECT(var_host);
    Py_DECREF(var_host);
    var_host = NULL;
    CHECK_OBJECT(var_port);
    Py_DECREF(var_port);
    var_port = NULL;
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

    Py_XDECREF(var_scheme);
    var_scheme = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
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


static PyObject *impl_httpcore$_models$$$function__13___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_scheme = python_pars[2];
    PyObject *par_host = python_pars[3];
    PyObject *par_port = python_pars[4];
    PyObject *par_target = python_pars[5];
    PyObject *var_parsed = NULL;
    struct Nuitka_FrameObject *frame_611018a0bf90d07c8c263984dc87c591;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_611018a0bf90d07c8c263984dc87c591 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_611018a0bf90d07c8c263984dc87c591)) {
        Py_XDECREF(cache_frame_611018a0bf90d07c8c263984dc87c591);

#if _DEBUG_REFCOUNTS
        if (cache_frame_611018a0bf90d07c8c263984dc87c591 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_611018a0bf90d07c8c263984dc87c591 = MAKE_FUNCTION_FRAME(codeobj_611018a0bf90d07c8c263984dc87c591, module_httpcore$_models, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_611018a0bf90d07c8c263984dc87c591->m_type_description == NULL);
    frame_611018a0bf90d07c8c263984dc87c591 = cache_frame_611018a0bf90d07c8c263984dc87c591;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_611018a0bf90d07c8c263984dc87c591);
    assert(Py_REFCNT(frame_611018a0bf90d07c8c263984dc87c591) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_url);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_url);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_tuple_element_1 = par_url;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[53]);
        frame_611018a0bf90d07c8c263984dc87c591->m_frame.f_lineno = 273;
        tmp_args_element_value_1 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_611018a0bf90d07c8c263984dc87c591->m_frame.f_lineno = 273;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parsed == NULL);
        var_parsed = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_parsed);
        tmp_expression_value_1 = var_parsed;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_parsed);
        tmp_expression_value_2 = var_parsed;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[54]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[55];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assattr_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assattr_value_2 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[28], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_parsed);
        tmp_expression_value_3 = var_parsed;
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[27]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[27], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_value_4;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_parsed);
        tmp_expression_value_4 = var_parsed;
        tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[56]);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = mod_consts[57];
        Py_INCREF(tmp_or_right_value_2);
        tmp_add_expr_left_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_add_expr_left_1 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT(var_parsed);
        tmp_expression_value_5 = var_parsed;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[58]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_add_expr_left_2 = mod_consts[59];
        CHECK_OBJECT(var_parsed);
        tmp_expression_value_6 = var_parsed;
        tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[58]);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_BYTES_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_add_expr_right_1 = mod_consts[55];
        Py_INCREF(tmp_add_expr_right_1);
        condexpr_end_1:;
        tmp_assattr_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[60], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scheme);
        tmp_tuple_element_2 = par_scheme;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[61]);
        frame_611018a0bf90d07c8c263984dc87c591->m_frame.f_lineno = 281;
        tmp_assattr_value_5 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[26], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        PyObject *tmp_assattr_target_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_tuple_element_3 = par_host;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[62]);
        frame_611018a0bf90d07c8c263984dc87c591->m_frame.f_lineno = 282;
        tmp_assattr_value_6 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[28], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_port);
        tmp_assattr_value_7 = par_port;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[27], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_4;
        PyObject *tmp_assattr_target_8;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_target);
        tmp_tuple_element_4 = par_target;
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[63]);
        frame_611018a0bf90d07c8c263984dc87c591->m_frame.f_lineno = 284;
        tmp_assattr_value_8 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[60], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_611018a0bf90d07c8c263984dc87c591, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_611018a0bf90d07c8c263984dc87c591->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_611018a0bf90d07c8c263984dc87c591, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_611018a0bf90d07c8c263984dc87c591,
        type_description_1,
        par_self,
        par_url,
        par_scheme,
        par_host,
        par_port,
        par_target,
        var_parsed
    );


    // Release cached frame if used for exception.
    if (frame_611018a0bf90d07c8c263984dc87c591 == cache_frame_611018a0bf90d07c8c263984dc87c591) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_611018a0bf90d07c8c263984dc87c591);
        cache_frame_611018a0bf90d07c8c263984dc87c591 = NULL;
    }

    assertFrameObject(frame_611018a0bf90d07c8c263984dc87c591);

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
    Py_XDECREF(var_parsed);
    var_parsed = NULL;
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

    Py_XDECREF(var_parsed);
    var_parsed = NULL;
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
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_models$$$function__14_origin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_default_port = NULL;
    struct Nuitka_FrameObject *frame_c6295911a297d69c291f58edb17a9401;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c6295911a297d69c291f58edb17a9401 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c6295911a297d69c291f58edb17a9401)) {
        Py_XDECREF(cache_frame_c6295911a297d69c291f58edb17a9401);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6295911a297d69c291f58edb17a9401 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6295911a297d69c291f58edb17a9401 = MAKE_FUNCTION_FRAME(codeobj_c6295911a297d69c291f58edb17a9401, module_httpcore$_models, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c6295911a297d69c291f58edb17a9401->m_type_description == NULL);
    frame_c6295911a297d69c291f58edb17a9401 = cache_frame_c6295911a297d69c291f58edb17a9401;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c6295911a297d69c291f58edb17a9401);
    assert(Py_REFCNT(frame_c6295911a297d69c291f58edb17a9401) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = DICT_COPY(mod_consts[65]);
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_default_port == NULL);
        var_default_port = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_2_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[27]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(var_default_port);
        tmp_or_right_value_1 = var_default_port;
        Py_INCREF(tmp_or_right_value_1);
        tmp_kw_call_value_2_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_kw_call_value_2_1 = tmp_or_left_value_1;
        or_end_1:;
        frame_c6295911a297d69c291f58edb17a9401->m_frame.f_lineno = 295;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
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
        exception_tb = MAKE_TRACEBACK(frame_c6295911a297d69c291f58edb17a9401, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6295911a297d69c291f58edb17a9401->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6295911a297d69c291f58edb17a9401, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6295911a297d69c291f58edb17a9401,
        type_description_1,
        par_self,
        var_default_port
    );


    // Release cached frame if used for exception.
    if (frame_c6295911a297d69c291f58edb17a9401 == cache_frame_c6295911a297d69c291f58edb17a9401) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c6295911a297d69c291f58edb17a9401);
        cache_frame_c6295911a297d69c291f58edb17a9401 = NULL;
    }

    assertFrameObject(frame_c6295911a297d69c291f58edb17a9401);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_default_port);
    Py_DECREF(var_default_port);
    var_default_port = NULL;
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

    Py_XDECREF(var_default_port);
    var_default_port = NULL;
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


static PyObject *impl_httpcore$_models$$$function__15___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_46185690e71fd8a7f617cde5d532b0cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_46185690e71fd8a7f617cde5d532b0cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_46185690e71fd8a7f617cde5d532b0cd)) {
        Py_XDECREF(cache_frame_46185690e71fd8a7f617cde5d532b0cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_46185690e71fd8a7f617cde5d532b0cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_46185690e71fd8a7f617cde5d532b0cd = MAKE_FUNCTION_FRAME(codeobj_46185690e71fd8a7f617cde5d532b0cd, module_httpcore$_models, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_46185690e71fd8a7f617cde5d532b0cd->m_type_description == NULL);
    frame_46185690e71fd8a7f617cde5d532b0cd = cache_frame_46185690e71fd8a7f617cde5d532b0cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_46185690e71fd8a7f617cde5d532b0cd);
    assert(Py_REFCNT(frame_46185690e71fd8a7f617cde5d532b0cd) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_other);
        tmp_expression_value_1 = par_other;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        CHECK_OBJECT(par_other);
        tmp_expression_value_3 = par_other;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_and_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_3);

            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        Py_DECREF(tmp_and_left_value_3);
        CHECK_OBJECT(par_other);
        tmp_expression_value_5 = par_other;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[27]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[27]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_and_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
        if (tmp_and_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_4);

            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        Py_DECREF(tmp_and_left_value_4);
        CHECK_OBJECT(par_other);
        tmp_expression_value_7 = par_other;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[60]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[60]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_and_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_46185690e71fd8a7f617cde5d532b0cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_46185690e71fd8a7f617cde5d532b0cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46185690e71fd8a7f617cde5d532b0cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_46185690e71fd8a7f617cde5d532b0cd,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_46185690e71fd8a7f617cde5d532b0cd == cache_frame_46185690e71fd8a7f617cde5d532b0cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_46185690e71fd8a7f617cde5d532b0cd);
        cache_frame_46185690e71fd8a7f617cde5d532b0cd = NULL;
    }

    assertFrameObject(frame_46185690e71fd8a7f617cde5d532b0cd);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_models$$$function__16___bytes__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9644d6ae97029f632496944c14ae3c38;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9644d6ae97029f632496944c14ae3c38 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9644d6ae97029f632496944c14ae3c38)) {
        Py_XDECREF(cache_frame_9644d6ae97029f632496944c14ae3c38);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9644d6ae97029f632496944c14ae3c38 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9644d6ae97029f632496944c14ae3c38 = MAKE_FUNCTION_FRAME(codeobj_9644d6ae97029f632496944c14ae3c38, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9644d6ae97029f632496944c14ae3c38->m_type_description == NULL);
    frame_9644d6ae97029f632496944c14ae3c38 = cache_frame_9644d6ae97029f632496944c14ae3c38;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9644d6ae97029f632496944c14ae3c38);
    assert(Py_REFCNT(frame_9644d6ae97029f632496944c14ae3c38) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
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
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        tmp_mod_expr_left_1 = mod_consts[67];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[60]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_BYTES_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_5;
        tmp_mod_expr_left_2 = mod_consts[68];
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[26]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[28]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_7 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[27]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[60]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_BYTES_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
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
        exception_tb = MAKE_TRACEBACK(frame_9644d6ae97029f632496944c14ae3c38, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9644d6ae97029f632496944c14ae3c38->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9644d6ae97029f632496944c14ae3c38, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9644d6ae97029f632496944c14ae3c38,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9644d6ae97029f632496944c14ae3c38 == cache_frame_9644d6ae97029f632496944c14ae3c38) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9644d6ae97029f632496944c14ae3c38);
        cache_frame_9644d6ae97029f632496944c14ae3c38 = NULL;
    }

    assertFrameObject(frame_9644d6ae97029f632496944c14ae3c38);

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


static PyObject *impl_httpcore$_models$$$function__17___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_041008c84b90f3cc984424024407ae19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_041008c84b90f3cc984424024407ae19 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_041008c84b90f3cc984424024407ae19)) {
        Py_XDECREF(cache_frame_041008c84b90f3cc984424024407ae19);

#if _DEBUG_REFCOUNTS
        if (cache_frame_041008c84b90f3cc984424024407ae19 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_041008c84b90f3cc984424024407ae19 = MAKE_FUNCTION_FRAME(codeobj_041008c84b90f3cc984424024407ae19, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_041008c84b90f3cc984424024407ae19->m_type_description == NULL);
    frame_041008c84b90f3cc984424024407ae19 = cache_frame_041008c84b90f3cc984424024407ae19;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_041008c84b90f3cc984424024407ae19);
    assert(Py_REFCNT(frame_041008c84b90f3cc984424024407ae19) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[2];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(10);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_operand_value_4;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[69];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[70];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
            if (tmp_operand_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
            Py_DECREF(tmp_operand_value_2);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[71];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[27]);
            if (tmp_operand_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
            Py_DECREF(tmp_operand_value_3);
            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[72];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[60]);
            if (tmp_operand_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_5 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
            Py_DECREF(tmp_operand_value_4);
            if (tmp_format_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_5 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[73];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
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
        exception_tb = MAKE_TRACEBACK(frame_041008c84b90f3cc984424024407ae19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_041008c84b90f3cc984424024407ae19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_041008c84b90f3cc984424024407ae19, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_041008c84b90f3cc984424024407ae19,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_041008c84b90f3cc984424024407ae19 == cache_frame_041008c84b90f3cc984424024407ae19) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_041008c84b90f3cc984424024407ae19);
        cache_frame_041008c84b90f3cc984424024407ae19 = NULL;
    }

    assertFrameObject(frame_041008c84b90f3cc984424024407ae19);

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


static PyObject *impl_httpcore$_models$$$function__18___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_url = python_pars[2];
    PyObject *par_headers = python_pars[3];
    PyObject *par_content = python_pars[4];
    PyObject *par_extensions = python_pars[5];
    struct Nuitka_FrameObject *frame_ab396a2b98a815fcfe3d54d158af7f33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ab396a2b98a815fcfe3d54d158af7f33 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ab396a2b98a815fcfe3d54d158af7f33)) {
        Py_XDECREF(cache_frame_ab396a2b98a815fcfe3d54d158af7f33);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab396a2b98a815fcfe3d54d158af7f33 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab396a2b98a815fcfe3d54d158af7f33 = MAKE_FUNCTION_FRAME(codeobj_ab396a2b98a815fcfe3d54d158af7f33, module_httpcore$_models, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ab396a2b98a815fcfe3d54d158af7f33->m_type_description == NULL);
    frame_ab396a2b98a815fcfe3d54d158af7f33 = cache_frame_ab396a2b98a815fcfe3d54d158af7f33;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ab396a2b98a815fcfe3d54d158af7f33);
    assert(Py_REFCNT(frame_ab396a2b98a815fcfe3d54d158af7f33) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_tuple_element_1 = par_method;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[74]);
        frame_ab396a2b98a815fcfe3d54d158af7f33->m_frame.f_lineno = 345;
        tmp_assattr_value_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[75], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_tuple_element_2 = par_url;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[53]);
        frame_ab396a2b98a815fcfe3d54d158af7f33->m_frame.f_lineno = 346;
        tmp_assattr_value_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[77], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_headers);
        tmp_tuple_element_3 = par_headers;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[79]);
        frame_ab396a2b98a815fcfe3d54d158af7f33->m_frame.f_lineno = 347;
        tmp_assattr_value_3 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[33], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_content);
        tmp_tuple_element_4 = par_content;
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[81]);
        frame_ab396a2b98a815fcfe3d54d158af7f33->m_frame.f_lineno = 350;
        tmp_assattr_value_4 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[82], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_extensions);
        tmp_cmp_expr_left_1 = par_extensions;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assattr_value_5 = MAKE_DICT_EMPTY();
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_extensions);
        tmp_assattr_value_5 = par_extensions;
        Py_INCREF(tmp_assattr_value_5);
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[83], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ab396a2b98a815fcfe3d54d158af7f33, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab396a2b98a815fcfe3d54d158af7f33->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab396a2b98a815fcfe3d54d158af7f33, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab396a2b98a815fcfe3d54d158af7f33,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_headers,
        par_content,
        par_extensions
    );


    // Release cached frame if used for exception.
    if (frame_ab396a2b98a815fcfe3d54d158af7f33 == cache_frame_ab396a2b98a815fcfe3d54d158af7f33) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ab396a2b98a815fcfe3d54d158af7f33);
        cache_frame_ab396a2b98a815fcfe3d54d158af7f33 = NULL;
    }

    assertFrameObject(frame_ab396a2b98a815fcfe3d54d158af7f33);

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
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_extensions);
    Py_DECREF(par_extensions);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_extensions);
    Py_DECREF(par_extensions);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_models$$$function__19___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_432a036d2b9aaac2b21b41a3d9de1f99;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_432a036d2b9aaac2b21b41a3d9de1f99 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_432a036d2b9aaac2b21b41a3d9de1f99)) {
        Py_XDECREF(cache_frame_432a036d2b9aaac2b21b41a3d9de1f99);

#if _DEBUG_REFCOUNTS
        if (cache_frame_432a036d2b9aaac2b21b41a3d9de1f99 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_432a036d2b9aaac2b21b41a3d9de1f99 = MAKE_FUNCTION_FRAME(codeobj_432a036d2b9aaac2b21b41a3d9de1f99, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_432a036d2b9aaac2b21b41a3d9de1f99->m_type_description == NULL);
    frame_432a036d2b9aaac2b21b41a3d9de1f99 = cache_frame_432a036d2b9aaac2b21b41a3d9de1f99;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_432a036d2b9aaac2b21b41a3d9de1f99);
    assert(Py_REFCNT(frame_432a036d2b9aaac2b21b41a3d9de1f99) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[45];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[46];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[75]);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[85];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
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
        exception_tb = MAKE_TRACEBACK(frame_432a036d2b9aaac2b21b41a3d9de1f99, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_432a036d2b9aaac2b21b41a3d9de1f99->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_432a036d2b9aaac2b21b41a3d9de1f99, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_432a036d2b9aaac2b21b41a3d9de1f99,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_432a036d2b9aaac2b21b41a3d9de1f99 == cache_frame_432a036d2b9aaac2b21b41a3d9de1f99) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_432a036d2b9aaac2b21b41a3d9de1f99);
        cache_frame_432a036d2b9aaac2b21b41a3d9de1f99 = NULL;
    }

    assertFrameObject(frame_432a036d2b9aaac2b21b41a3d9de1f99);

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


static PyObject *impl_httpcore$_models$$$function__20___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_status = python_pars[1];
    PyObject *par_headers = python_pars[2];
    PyObject *par_content = python_pars[3];
    PyObject *par_extensions = python_pars[4];
    struct Nuitka_FrameObject *frame_cb37f7ad292911ce58a99dbd6b836234;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cb37f7ad292911ce58a99dbd6b836234 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb37f7ad292911ce58a99dbd6b836234)) {
        Py_XDECREF(cache_frame_cb37f7ad292911ce58a99dbd6b836234);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb37f7ad292911ce58a99dbd6b836234 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb37f7ad292911ce58a99dbd6b836234 = MAKE_FUNCTION_FRAME(codeobj_cb37f7ad292911ce58a99dbd6b836234, module_httpcore$_models, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb37f7ad292911ce58a99dbd6b836234->m_type_description == NULL);
    frame_cb37f7ad292911ce58a99dbd6b836234 = cache_frame_cb37f7ad292911ce58a99dbd6b836234;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb37f7ad292911ce58a99dbd6b836234);
    assert(Py_REFCNT(frame_cb37f7ad292911ce58a99dbd6b836234) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_status);
        tmp_assattr_value_1 = par_status;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[86], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_headers);
        tmp_tuple_element_1 = par_headers;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[79]);
        frame_cb37f7ad292911ce58a99dbd6b836234->m_frame.f_lineno = 382;
        tmp_assattr_value_2 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[33], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_content);
        tmp_tuple_element_2 = par_content;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[81]);
        frame_cb37f7ad292911ce58a99dbd6b836234->m_frame.f_lineno = 385;
        tmp_assattr_value_3 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[82], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_extensions);
        tmp_cmp_expr_left_1 = par_extensions;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assattr_value_4 = MAKE_DICT_EMPTY();
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_extensions);
        tmp_assattr_value_4 = par_extensions;
        Py_INCREF(tmp_assattr_value_4);
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[83], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[87], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb37f7ad292911ce58a99dbd6b836234, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb37f7ad292911ce58a99dbd6b836234->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb37f7ad292911ce58a99dbd6b836234, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb37f7ad292911ce58a99dbd6b836234,
        type_description_1,
        par_self,
        par_status,
        par_headers,
        par_content,
        par_extensions
    );


    // Release cached frame if used for exception.
    if (frame_cb37f7ad292911ce58a99dbd6b836234 == cache_frame_cb37f7ad292911ce58a99dbd6b836234) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb37f7ad292911ce58a99dbd6b836234);
        cache_frame_cb37f7ad292911ce58a99dbd6b836234 = NULL;
    }

    assertFrameObject(frame_cb37f7ad292911ce58a99dbd6b836234);

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
    CHECK_OBJECT(par_status);
    Py_DECREF(par_status);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_extensions);
    Py_DECREF(par_extensions);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_status);
    Py_DECREF(par_status);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_extensions);
    Py_DECREF(par_extensions);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_models$$$function__21_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d7f1f2c704c165861b19934f54558b58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d7f1f2c704c165861b19934f54558b58 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7f1f2c704c165861b19934f54558b58)) {
        Py_XDECREF(cache_frame_d7f1f2c704c165861b19934f54558b58);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7f1f2c704c165861b19934f54558b58 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7f1f2c704c165861b19934f54558b58 = MAKE_FUNCTION_FRAME(codeobj_d7f1f2c704c165861b19934f54558b58, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7f1f2c704c165861b19934f54558b58->m_type_description == NULL);
    frame_d7f1f2c704c165861b19934f54558b58 = cache_frame_d7f1f2c704c165861b19934f54558b58;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d7f1f2c704c165861b19934f54558b58);
    assert(Py_REFCNT(frame_d7f1f2c704c165861b19934f54558b58) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = mod_consts[39];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[82]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 395;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[90];
        frame_d7f1f2c704c165861b19934f54558b58->m_frame.f_lineno = 396;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 396;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[91];
        frame_d7f1f2c704c165861b19934f54558b58->m_frame.f_lineno = 401;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 401;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
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
        exception_tb = MAKE_TRACEBACK(frame_d7f1f2c704c165861b19934f54558b58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7f1f2c704c165861b19934f54558b58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7f1f2c704c165861b19934f54558b58, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7f1f2c704c165861b19934f54558b58,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d7f1f2c704c165861b19934f54558b58 == cache_frame_d7f1f2c704c165861b19934f54558b58) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7f1f2c704c165861b19934f54558b58);
        cache_frame_d7f1f2c704c165861b19934f54558b58 = NULL;
    }

    assertFrameObject(frame_d7f1f2c704c165861b19934f54558b58);

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


static PyObject *impl_httpcore$_models$$$function__22___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_87f1d01a59d99a98bce49b07635e6404;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87f1d01a59d99a98bce49b07635e6404 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_87f1d01a59d99a98bce49b07635e6404)) {
        Py_XDECREF(cache_frame_87f1d01a59d99a98bce49b07635e6404);

#if _DEBUG_REFCOUNTS
        if (cache_frame_87f1d01a59d99a98bce49b07635e6404 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_87f1d01a59d99a98bce49b07635e6404 = MAKE_FUNCTION_FRAME(codeobj_87f1d01a59d99a98bce49b07635e6404, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_87f1d01a59d99a98bce49b07635e6404->m_type_description == NULL);
    frame_87f1d01a59d99a98bce49b07635e6404 = cache_frame_87f1d01a59d99a98bce49b07635e6404;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_87f1d01a59d99a98bce49b07635e6404);
    assert(Py_REFCNT(frame_87f1d01a59d99a98bce49b07635e6404) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[45];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[46];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[86]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[85];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
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
        exception_tb = MAKE_TRACEBACK(frame_87f1d01a59d99a98bce49b07635e6404, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87f1d01a59d99a98bce49b07635e6404->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87f1d01a59d99a98bce49b07635e6404, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_87f1d01a59d99a98bce49b07635e6404,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_87f1d01a59d99a98bce49b07635e6404 == cache_frame_87f1d01a59d99a98bce49b07635e6404) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_87f1d01a59d99a98bce49b07635e6404);
        cache_frame_87f1d01a59d99a98bce49b07635e6404 = NULL;
    }

    assertFrameObject(frame_87f1d01a59d99a98bce49b07635e6404);

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


static PyObject *impl_httpcore$_models$$$function__23_read(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_part = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_99c5cd43f1d8a8e43d57c280a1643df5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_c67a516a25cf98791c5e2afb12ae8cf1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c67a516a25cf98791c5e2afb12ae8cf1_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_99c5cd43f1d8a8e43d57c280a1643df5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_99c5cd43f1d8a8e43d57c280a1643df5)) {
        Py_XDECREF(cache_frame_99c5cd43f1d8a8e43d57c280a1643df5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_99c5cd43f1d8a8e43d57c280a1643df5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_99c5cd43f1d8a8e43d57c280a1643df5 = MAKE_FUNCTION_FRAME(codeobj_99c5cd43f1d8a8e43d57c280a1643df5, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_99c5cd43f1d8a8e43d57c280a1643df5->m_type_description == NULL);
    frame_99c5cd43f1d8a8e43d57c280a1643df5 = cache_frame_99c5cd43f1d8a8e43d57c280a1643df5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_99c5cd43f1d8a8e43d57c280a1643df5);
    assert(Py_REFCNT(frame_99c5cd43f1d8a8e43d57c280a1643df5) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 413;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[92];
        frame_99c5cd43f1d8a8e43d57c280a1643df5->m_frame.f_lineno = 414;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 414;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_1 = mod_consts[39];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_bytes_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_bytes_arg_value_1 = mod_consts[55];
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            frame_99c5cd43f1d8a8e43d57c280a1643df5->m_frame.f_lineno = 419;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[93]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_c67a516a25cf98791c5e2afb12ae8cf1_2)) {
            Py_XDECREF(cache_frame_c67a516a25cf98791c5e2afb12ae8cf1_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c67a516a25cf98791c5e2afb12ae8cf1_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c67a516a25cf98791c5e2afb12ae8cf1_2 = MAKE_FUNCTION_FRAME(codeobj_c67a516a25cf98791c5e2afb12ae8cf1, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_c67a516a25cf98791c5e2afb12ae8cf1_2->m_type_description == NULL);
        frame_c67a516a25cf98791c5e2afb12ae8cf1_2 = cache_frame_c67a516a25cf98791c5e2afb12ae8cf1_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c67a516a25cf98791c5e2afb12ae8cf1_2);
        assert(Py_REFCNT(frame_c67a516a25cf98791c5e2afb12ae8cf1_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 419;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_part;
                outline_0_var_part = tmp_assign_source_4;
                Py_INCREF(outline_0_var_part);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_part);
            tmp_append_value_1 = outline_0_var_part;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c67a516a25cf98791c5e2afb12ae8cf1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c67a516a25cf98791c5e2afb12ae8cf1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c67a516a25cf98791c5e2afb12ae8cf1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c67a516a25cf98791c5e2afb12ae8cf1_2,
            type_description_2,
            outline_0_var_part
        );


        // Release cached frame if used for exception.
        if (frame_c67a516a25cf98791c5e2afb12ae8cf1_2 == cache_frame_c67a516a25cf98791c5e2afb12ae8cf1_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_c67a516a25cf98791c5e2afb12ae8cf1_2);
            cache_frame_c67a516a25cf98791c5e2afb12ae8cf1_2 = NULL;
        }

        assertFrameObject(frame_c67a516a25cf98791c5e2afb12ae8cf1_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "o";
        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_part);
        outline_0_var_part = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_part);
        outline_0_var_part = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 419;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_assattr_value_1 = BYTES_JOIN(tmp_bytes_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[39], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_99c5cd43f1d8a8e43d57c280a1643df5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_99c5cd43f1d8a8e43d57c280a1643df5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_99c5cd43f1d8a8e43d57c280a1643df5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_99c5cd43f1d8a8e43d57c280a1643df5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_99c5cd43f1d8a8e43d57c280a1643df5 == cache_frame_99c5cd43f1d8a8e43d57c280a1643df5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_99c5cd43f1d8a8e43d57c280a1643df5);
        cache_frame_99c5cd43f1d8a8e43d57c280a1643df5 = NULL;
    }

    assertFrameObject(frame_99c5cd43f1d8a8e43d57c280a1643df5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

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


static PyObject *impl_httpcore$_models$$$function__24_iter_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_GENERATOR_httpcore$_models$$$function__24_iter_stream$$$genobj__1_iter_stream(tmp_closure_1);

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
struct httpcore$_models$$$function__24_iter_stream$$$genobj__1_iter_stream_locals {
    PyObject *var_chunk;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *httpcore$_models$$$function__24_iter_stream$$$genobj__1_iter_stream_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_models$$$function__24_iter_stream$$$genobj__1_iter_stream_locals *generator_heap = (struct httpcore$_models$$$function__24_iter_stream$$$genobj__1_iter_stream_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_chunk = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ef52c6e41e6671451f62d4e7436ebf5b, module_httpcore$_models, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[40]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 423;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 423;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            generator_heap->exception_lineno = 423;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 423;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 423;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[94];
        generator->m_frame->m_frame.f_lineno = 424;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        generator_heap->exception_type = tmp_raise_type_1;
        generator_heap->exception_lineno = 424;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[40]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 429;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[87]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 429;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 429;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[95];
        generator->m_frame->m_frame.f_lineno = 430;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        generator_heap->exception_type = tmp_raise_type_2;
        generator_heap->exception_lineno = 430;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[40]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 433;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[87], tmp_assattr_value_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 433;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[40]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 434;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[82]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 434;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 434;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "co";
                generator_heap->exception_lineno = 434;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_chunk;
            generator_heap->var_chunk = tmp_assign_source_3;
            Py_INCREF(generator_heap->var_chunk);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_4;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_chunk);
        tmp_expression_value_4 = generator_heap->var_chunk;
        Py_INCREF(tmp_expression_value_4);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_4;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 435;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 434;
        generator_heap->type_description_1 = "co";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0],
            generator_heap->var_chunk
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_chunk);
    generator_heap->var_chunk = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    Py_XDECREF(generator_heap->var_chunk);
    generator_heap->var_chunk = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpcore$_models$$$function__24_iter_stream$$$genobj__1_iter_stream(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpcore$_models$$$function__24_iter_stream$$$genobj__1_iter_stream_context,
        module_httpcore$_models,
        mod_consts[93],
#if PYTHON_VERSION >= 0x350
        mod_consts[96],
#endif
        codeobj_ef52c6e41e6671451f62d4e7436ebf5b,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_models$$$function__24_iter_stream$$$genobj__1_iter_stream_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_models$$$function__25_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ac77cbdf162b34af1a14cc8601b98741;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ac77cbdf162b34af1a14cc8601b98741 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ac77cbdf162b34af1a14cc8601b98741)) {
        Py_XDECREF(cache_frame_ac77cbdf162b34af1a14cc8601b98741);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac77cbdf162b34af1a14cc8601b98741 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac77cbdf162b34af1a14cc8601b98741 = MAKE_FUNCTION_FRAME(codeobj_ac77cbdf162b34af1a14cc8601b98741, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ac77cbdf162b34af1a14cc8601b98741->m_type_description == NULL);
    frame_ac77cbdf162b34af1a14cc8601b98741 = cache_frame_ac77cbdf162b34af1a14cc8601b98741;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ac77cbdf162b34af1a14cc8601b98741);
    assert(Py_REFCNT(frame_ac77cbdf162b34af1a14cc8601b98741) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 438;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[97];
        frame_ac77cbdf162b34af1a14cc8601b98741->m_frame.f_lineno = 439;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 439;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[82]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = mod_consts[98];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[82]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ac77cbdf162b34af1a14cc8601b98741->m_frame.f_lineno = 444;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[98]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac77cbdf162b34af1a14cc8601b98741, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac77cbdf162b34af1a14cc8601b98741->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac77cbdf162b34af1a14cc8601b98741, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac77cbdf162b34af1a14cc8601b98741,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ac77cbdf162b34af1a14cc8601b98741 == cache_frame_ac77cbdf162b34af1a14cc8601b98741) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ac77cbdf162b34af1a14cc8601b98741);
        cache_frame_ac77cbdf162b34af1a14cc8601b98741 = NULL;
    }

    assertFrameObject(frame_ac77cbdf162b34af1a14cc8601b98741);

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


static PyObject *impl_httpcore$_models$$$function__26_aread(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_httpcore$_models$$$function__26_aread$$$coroutine__1_aread(tmp_closure_1);

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
struct httpcore$_models$$$function__26_aread$$$coroutine__1_aread_locals {
    PyObject *outline_0_var_part;
    PyObject *tmp_listcomp_1__$0;
    PyObject *tmp_listcomp_1__contraction;
    PyObject *tmp_listcomp_1__iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    struct Nuitka_FrameObject *frame_8a26c55bc4b749c671a779015a9f2231_2;
    char const *type_description_2;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *tmp_return_value;
};
#endif

static PyObject *httpcore$_models$$$function__26_aread$$$coroutine__1_aread_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpcore$_models$$$function__26_aread$$$coroutine__1_aread_locals *coroutine_heap = (struct httpcore$_models$$$function__26_aread$$$coroutine__1_aread_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_frame_8a26c55bc4b749c671a779015a9f2231_2 = NULL;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->outline_0_var_part = NULL;
    coroutine_heap->tmp_listcomp_1__$0 = NULL;
    coroutine_heap->tmp_listcomp_1__contraction = NULL;
    coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->type_description_2 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ec7aaadf540d8fd032cd5e950d5611e8, module_httpcore$_models, sizeof(void *));
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
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[40]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 449;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 449;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            coroutine_heap->exception_lineno = 449;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 449;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 449;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[100];
        coroutine->m_frame->m_frame.f_lineno = 450;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 450;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[40]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 455;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_attribute_value_1 = mod_consts[39];
        coroutine_heap->tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 455;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 455;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_bytes_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_bytes_arg_value_1 = mod_consts[55];
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_value_value_1;
            PyObject *tmp_called_instance_1;
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[40]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 456;
                coroutine_heap->type_description_1 = "c";
                goto try_except_handler_1;
            }

            tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            coroutine->m_frame->m_frame.f_lineno = 456;
            tmp_value_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[101]);
            if (tmp_value_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 456;
                coroutine_heap->type_description_1 = "c";
                goto try_except_handler_1;
            }
            tmp_expression_value_3 = ASYNC_MAKE_ITERATOR(tmp_value_value_1);
            Py_DECREF(tmp_value_value_1);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 456;
                coroutine_heap->type_description_1 = "c";
                goto try_except_handler_1;
            }
            Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assattr_value_1, sizeof(PyObject *), &tmp_bytes_arg_value_1, sizeof(PyObject *), &tmp_iterable_value_1, sizeof(PyObject *), &tmp_value_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
            coroutine->m_yield_return_index = 1;
            coroutine->m_yieldfrom = tmp_expression_value_3;
            coroutine->m_awaiting = true;
            return NULL;

            yield_return_1:
            Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assattr_value_1, sizeof(PyObject *), &tmp_bytes_arg_value_1, sizeof(PyObject *), &tmp_iterable_value_1, sizeof(PyObject *), &tmp_value_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
            coroutine->m_awaiting = false;

            if (yield_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 456;
                coroutine_heap->type_description_1 = "c";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = yield_return_value;
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 456;
                coroutine_heap->type_description_1 = "c";
                goto try_except_handler_1;
            }
            assert(coroutine_heap->tmp_listcomp_1__$0 == NULL);
            coroutine_heap->tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
            assert(coroutine_heap->tmp_listcomp_1__contraction == NULL);
            coroutine_heap->tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_8a26c55bc4b749c671a779015a9f2231_2)) {
            Py_XDECREF(cache_frame_8a26c55bc4b749c671a779015a9f2231_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_8a26c55bc4b749c671a779015a9f2231_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_8a26c55bc4b749c671a779015a9f2231_2 = MAKE_FUNCTION_FRAME(codeobj_8a26c55bc4b749c671a779015a9f2231, module_httpcore$_models, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_8a26c55bc4b749c671a779015a9f2231_2->m_type_description == NULL);
        coroutine_heap->frame_8a26c55bc4b749c671a779015a9f2231_2 = cache_frame_8a26c55bc4b749c671a779015a9f2231_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(coroutine_heap->frame_8a26c55bc4b749c671a779015a9f2231_2);
        assert(Py_REFCNT(coroutine_heap->frame_8a26c55bc4b749c671a779015a9f2231_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_value_value_2;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
            tmp_value_value_2 = coroutine_heap->tmp_listcomp_1__$0;
            tmp_expression_value_4 = ASYNC_ITERATOR_NEXT(tmp_value_value_2);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 456;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_3;
            }
            Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assattr_value_1, sizeof(PyObject *), &tmp_bytes_arg_value_1, sizeof(PyObject *), &tmp_iterable_value_1, sizeof(PyObject *), &tmp_value_value_2, sizeof(PyObject *), NULL);
            coroutine->m_yield_return_index = 2;
            coroutine->m_yieldfrom = tmp_expression_value_4;
            coroutine->m_awaiting = true;
            return NULL;

            yield_return_2:
            Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assattr_value_1, sizeof(PyObject *), &tmp_bytes_arg_value_1, sizeof(PyObject *), &tmp_iterable_value_1, sizeof(PyObject *), &tmp_value_value_2, sizeof(PyObject *), NULL);
            coroutine->m_awaiting = false;

            if (yield_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 456;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_assign_source_3 = yield_return_value;
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 456;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_3;
            }
            {
                PyObject *old = coroutine_heap->tmp_listcomp_1__iter_value_0;
                coroutine_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_3:;
        coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
        coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
        coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
        coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
        coroutine_heap->exception_type = NULL;
        coroutine_heap->exception_value = NULL;
        coroutine_heap->exception_tb = NULL;
        coroutine_heap->exception_lineno = 0;

        {
            bool tmp_condition_result_3;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            tmp_cmp_expr_left_1 = coroutine_heap->exception_keeper_type_1;
            tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
            coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            assert(!(coroutine_heap->tmp_res == -1));
            tmp_condition_result_3 = (coroutine_heap->tmp_res != 0) ? true : false;
            if (tmp_condition_result_3 != false) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        Py_DECREF(coroutine_heap->exception_keeper_type_1);
        Py_XDECREF(coroutine_heap->exception_keeper_value_1);
        Py_XDECREF(coroutine_heap->exception_keeper_tb_1);
        goto loop_end_1;
        goto branch_end_3;
        branch_no_3:;
        // Re-raise.
        coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_1;
        coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_1;
        coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_1;
        coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

        goto try_except_handler_2;
        branch_end_3:;
        // End of try:
        try_end_1:;
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__iter_value_0);
            tmp_assign_source_4 = coroutine_heap->tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = coroutine_heap->outline_0_var_part;
                coroutine_heap->outline_0_var_part = tmp_assign_source_4;
                Py_INCREF(coroutine_heap->outline_0_var_part);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
            tmp_append_list_1 = coroutine_heap->tmp_listcomp_1__contraction;
            CHECK_OBJECT(coroutine_heap->outline_0_var_part);
            tmp_append_value_1 = coroutine_heap->outline_0_var_part;
            coroutine_heap->tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (coroutine_heap->tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 456;
                coroutine_heap->type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 456;
            coroutine_heap->type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = coroutine_heap->tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
        Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
        coroutine_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
        Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
        coroutine_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
        coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_2:;
        coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
        coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
        coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
        coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
        coroutine_heap->exception_type = NULL;
        coroutine_heap->exception_value = NULL;
        coroutine_heap->exception_tb = NULL;
        coroutine_heap->exception_lineno = 0;

        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
        Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
        coroutine_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
        Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
        coroutine_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
        coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
        coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
        coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
        coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;
        frame_exception_exit_2:


        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine_heap->frame_8a26c55bc4b749c671a779015a9f2231_2, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine_heap->frame_8a26c55bc4b749c671a779015a9f2231_2->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine_heap->frame_8a26c55bc4b749c671a779015a9f2231_2, coroutine_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            coroutine_heap->frame_8a26c55bc4b749c671a779015a9f2231_2,
            coroutine_heap->type_description_2,
            coroutine_heap->outline_0_var_part
        );


        // Release cached frame if used for exception.
        if (coroutine_heap->frame_8a26c55bc4b749c671a779015a9f2231_2 == cache_frame_8a26c55bc4b749c671a779015a9f2231_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_8a26c55bc4b749c671a779015a9f2231_2);
            cache_frame_8a26c55bc4b749c671a779015a9f2231_2 = NULL;
        }

        assertFrameObject(coroutine_heap->frame_8a26c55bc4b749c671a779015a9f2231_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        coroutine_heap->type_description_1 = "c";
        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(coroutine_heap->outline_0_var_part);
        coroutine_heap->outline_0_var_part = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
        coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
        coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
        coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
        coroutine_heap->exception_type = NULL;
        coroutine_heap->exception_value = NULL;
        coroutine_heap->exception_tb = NULL;
        coroutine_heap->exception_lineno = 0;

        Py_XDECREF(coroutine_heap->outline_0_var_part);
        coroutine_heap->outline_0_var_part = NULL;
        // Re-raise.
        coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
        coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
        coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
        coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        coroutine_heap->exception_lineno = 456;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_assattr_value_1 = BYTES_JOIN(tmp_bytes_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 456;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[40]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 456;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[39], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 456;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_expression_value_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[40]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 457;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine_heap->tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[39]);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 457;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_2;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    goto function_return_exit;

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

    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$_models$$$function__26_aread$$$coroutine__1_aread(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        httpcore$_models$$$function__26_aread$$$coroutine__1_aread_context,
        module_httpcore$_models,
        mod_consts[102],
        mod_consts[103],
        codeobj_ec7aaadf540d8fd032cd5e950d5611e8,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_models$$$function__26_aread$$$coroutine__1_aread_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_models$$$function__27_aiter_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_ASYNCGEN_httpcore$_models$$$function__27_aiter_stream$$$asyncgen__1_aiter_stream(tmp_closure_1);

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
struct httpcore$_models$$$function__27_aiter_stream$$$asyncgen__1_aiter_stream_locals {
    PyObject *var_chunk;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    bool tmp_result;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
};
#endif

static PyObject *httpcore$_models$$$function__27_aiter_stream$$$asyncgen__1_aiter_stream_context(struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));

#if 1
    // Heap access.
    struct httpcore$_models$$$function__27_aiter_stream$$$asyncgen__1_aiter_stream_locals *asyncgen_heap = (struct httpcore$_models$$$function__27_aiter_stream$$$asyncgen__1_aiter_stream_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(asyncgen->m_yield_return_index) {
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    asyncgen_heap->var_chunk = NULL;
    asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
    asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
    asyncgen_heap->type_description_1 = NULL;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
    // Tried code:
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_700c276572ae5ab4f2055803b6dd2e2a, module_httpcore$_models, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    asyncgen->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(asyncgen->m_frame);
    assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

    assert(asyncgen->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(asyncgen->m_frame);
    assert(Py_REFCNT(asyncgen->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_ASYNCGEN_EXCEPTION(asyncgen);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[40]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 460;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 460;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            asyncgen_heap->exception_lineno = 460;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        asyncgen_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (asyncgen_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 460;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (asyncgen_heap->tmp_res != 0) ? Py_True : Py_False;
        asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (asyncgen_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 460;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (asyncgen_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[104];
        asyncgen->m_frame->m_frame.f_lineno = 461;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        asyncgen_heap->exception_type = tmp_raise_type_1;
        asyncgen_heap->exception_lineno = 461;
        RAISE_EXCEPTION_WITH_TYPE(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
        asyncgen_heap->type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[40]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 466;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[87]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 466;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            asyncgen_heap->exception_lineno = 466;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[105];
        asyncgen->m_frame->m_frame.f_lineno = 467;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        asyncgen_heap->exception_type = tmp_raise_type_2;
        asyncgen_heap->exception_lineno = 467;
        RAISE_EXCEPTION_WITH_TYPE(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
        asyncgen_heap->type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[40]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 471;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
        asyncgen_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[87], tmp_assattr_value_1);
        if (asyncgen_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 471;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_value_value_1;
        PyObject *tmp_expression_value_4;
        if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[40]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 472;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
        tmp_value_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[82]);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 472;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = ASYNC_MAKE_ITERATOR(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 472;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
        asyncgen->m_yield_return_index = 1;
        asyncgen->m_yieldfrom = tmp_expression_value_3;
        asyncgen->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
        asyncgen->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 472;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = yield_return_value;
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 472;
            asyncgen_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
        asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_value_value_2;
        CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
        tmp_value_value_2 = asyncgen_heap->tmp_for_loop_1__for_iterator;
        tmp_expression_value_5 = ASYNC_ITERATOR_NEXT(tmp_value_value_2);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 472;
            asyncgen_heap->type_description_1 = "co";
            goto try_except_handler_3;
        }
        Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
        asyncgen->m_yield_return_index = 2;
        asyncgen->m_yieldfrom = tmp_expression_value_5;
        asyncgen->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
        asyncgen->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 472;
            asyncgen_heap->type_description_1 = "co";
            goto try_except_handler_3;
        }
        tmp_assign_source_2 = yield_return_value;
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 472;
            asyncgen_heap->type_description_1 = "co";
            goto try_except_handler_3;
        }
        {
            PyObject *old = asyncgen_heap->tmp_for_loop_1__iter_value;
            asyncgen_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    asyncgen_heap->exception_keeper_type_1 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_1 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_1 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = asyncgen_heap->exception_keeper_type_1;
        tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
        asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(asyncgen_heap->tmp_res == -1));
        tmp_condition_result_3 = (asyncgen_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    Py_DECREF(asyncgen_heap->exception_keeper_type_1);
    Py_XDECREF(asyncgen_heap->exception_keeper_value_1);
    Py_XDECREF(asyncgen_heap->exception_keeper_tb_1);
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_1;
    asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_1;
    asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_1;
    asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_3:;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = asyncgen_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = asyncgen_heap->var_chunk;
            asyncgen_heap->var_chunk = tmp_assign_source_3;
            Py_INCREF(asyncgen_heap->var_chunk);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_6;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(asyncgen_heap->var_chunk);
        tmp_expression_value_6 = asyncgen_heap->var_chunk;
        Py_INCREF(tmp_expression_value_6);
        asyncgen->m_yield_return_index = 3;
        return tmp_expression_value_6;
        yield_return_3:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 473;
            asyncgen_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


        asyncgen_heap->exception_lineno = 472;
        asyncgen_heap->type_description_1 = "co";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    asyncgen_heap->exception_keeper_type_2 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_2 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_2 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
    asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
    asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_2;
    asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_2;
    asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_2;
    asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Release exception attached to the frame
    DROP_ASYNCGEN_EXCEPTION(asyncgen);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(asyncgen_heap->exception_type)) {
        if (asyncgen_heap->exception_tb == NULL) {
            asyncgen_heap->exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        } else if (asyncgen_heap->exception_tb->tb_frame != &asyncgen->m_frame->m_frame) {
            asyncgen_heap->exception_tb = ADD_TRACEBACK(asyncgen_heap->exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            asyncgen->m_frame,
            asyncgen_heap->type_description_1,
            asyncgen->m_closure[0],
            asyncgen_heap->var_chunk
        );


        // Release cached frame if used for exception.
        if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(asyncgen->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(asyncgen));
#endif
    Py_CLEAR(EXC_VALUE_F(asyncgen));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(asyncgen));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
    asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
    asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(asyncgen_heap->var_chunk);
    asyncgen_heap->var_chunk = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    asyncgen_heap->exception_keeper_type_3 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_3 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_3 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    Py_XDECREF(asyncgen_heap->var_chunk);
    asyncgen_heap->var_chunk = NULL;
    // Re-raise.
    asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_3;
    asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_3;
    asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_3;
    asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    assert(asyncgen_heap->exception_type);
    RESTORE_ERROR_OCCURRED(asyncgen_heap->exception_type, asyncgen_heap->exception_value, asyncgen_heap->exception_tb);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_httpcore$_models$$$function__27_aiter_stream$$$asyncgen__1_aiter_stream(struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        httpcore$_models$$$function__27_aiter_stream$$$asyncgen__1_aiter_stream_context,
        module_httpcore$_models,
        mod_consts[101],
        mod_consts[106],
        codeobj_700c276572ae5ab4f2055803b6dd2e2a,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_models$$$function__27_aiter_stream$$$asyncgen__1_aiter_stream_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_models$$$function__28_aclose(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_httpcore$_models$$$function__28_aclose$$$coroutine__1_aclose(tmp_closure_1);

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
struct httpcore$_models$$$function__28_aclose$$$coroutine__1_aclose_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *httpcore$_models$$$function__28_aclose$$$coroutine__1_aclose_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpcore$_models$$$function__28_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct httpcore$_models$$$function__28_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_b66421ba710400b1a924e4cb39b73057, module_httpcore$_models, sizeof(void *));
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
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[40]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 476;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 476;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            coroutine_heap->exception_lineno = 476;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 476;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 476;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[107];
        coroutine->m_frame->m_frame.f_lineno = 477;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 477;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[40]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 482;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[82]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 482;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = mod_consts[108];
        coroutine_heap->tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 482;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 483;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[40]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 483;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[82]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 483;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 483;
        tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[108]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 483;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = ASYNC_AWAIT(tmp_expression_value_5, await_normal);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 483;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_4;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 483;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 483;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_await_result_1);
    }
    branch_no_2:;

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

static PyObject *MAKE_COROUTINE_httpcore$_models$$$function__28_aclose$$$coroutine__1_aclose(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        httpcore$_models$$$function__28_aclose$$$coroutine__1_aclose_context,
        module_httpcore$_models,
        mod_consts[108],
        mod_consts[109],
        codeobj_b66421ba710400b1a924e4cb39b73057,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_models$$$function__28_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__10___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__10___init__,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_35c1c0fce3ce86e174c751a2d0d8ad5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__11___eq__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__11___eq__,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_49ec0d7818521b363dd43e5b086f3d26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__12___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__12___str__,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_27aaa82bdaa8632083c5890410e2a530,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__13___init__(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__13___init__,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_611018a0bf90d07c8c263984dc87c591,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpcore$_models,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__14_origin(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__14_origin,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_c6295911a297d69c291f58edb17a9401,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__15___eq__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__15___eq__,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_46185690e71fd8a7f617cde5d532b0cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__16___bytes__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__16___bytes__,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_9644d6ae97029f632496944c14ae3c38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__17___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__17___repr__,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_041008c84b90f3cc984424024407ae19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__18___init__(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__18___init__,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_ab396a2b98a815fcfe3d54d158af7f33,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpcore$_models,
        mod_consts[84],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__19___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__19___repr__,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_432a036d2b9aaac2b21b41a3d9de1f99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__1_enforce_bytes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__1_enforce_bytes,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2ae32edbedf6269174ce782b2ec10e0c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__20___init__(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__20___init__,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_cb37f7ad292911ce58a99dbd6b836234,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpcore$_models,
        mod_consts[88],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__21_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__21_content,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_d7f1f2c704c165861b19934f54558b58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__22___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__22___repr__,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_87f1d01a59d99a98bce49b07635e6404,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__23_read(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__23_read,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_99c5cd43f1d8a8e43d57c280a1643df5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__24_iter_stream(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__24_iter_stream,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_ef52c6e41e6671451f62d4e7436ebf5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__25_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__25_close,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_ac77cbdf162b34af1a14cc8601b98741,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__26_aread(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__26_aread,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_ec7aaadf540d8fd032cd5e950d5611e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__27_aiter_stream(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__27_aiter_stream,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_700c276572ae5ab4f2055803b6dd2e2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__28_aclose(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__28_aclose,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_b66421ba710400b1a924e4cb39b73057,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__2_enforce_url(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__2_enforce_url,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_66f5a251b2eaf7712129615ac44df3fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__3_enforce_headers(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__3_enforce_headers,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cd1dc6b54e7fb15196679eff2d30e037,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__4_enforce_stream(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__4_enforce_stream,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_762d77595ec03e14dc75335771937da1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__5_include_request_headers(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__5_include_request_headers,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c93f1daabd0cf15e84c1162145523b32,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__6___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__6___init__,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_cc4c597327c5d7fccdf8bc03f6105b8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__7___iter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__7___iter__,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[42],
#endif
        codeobj_67d4ed7c79bc6eb7d34ad1df913c9aff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__8___aiter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__8___aiter__,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_b2fcaa0fe77b36ed068b75cde5f911bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_models$$$function__9___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_models$$$function__9___repr__,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_c03b75a7acaea060e5a6d5d878401527,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_models,
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

function_impl_code functable_httpcore$_models[] = {
    impl_httpcore$_models$$$function__1_enforce_bytes,
    impl_httpcore$_models$$$function__2_enforce_url,
    impl_httpcore$_models$$$function__3_enforce_headers,
    impl_httpcore$_models$$$function__4_enforce_stream,
    impl_httpcore$_models$$$function__5_include_request_headers,
    impl_httpcore$_models$$$function__6___init__,
    impl_httpcore$_models$$$function__7___iter__,
    impl_httpcore$_models$$$function__8___aiter__,
    impl_httpcore$_models$$$function__9___repr__,
    impl_httpcore$_models$$$function__10___init__,
    impl_httpcore$_models$$$function__11___eq__,
    impl_httpcore$_models$$$function__12___str__,
    impl_httpcore$_models$$$function__13___init__,
    impl_httpcore$_models$$$function__14_origin,
    impl_httpcore$_models$$$function__15___eq__,
    impl_httpcore$_models$$$function__16___bytes__,
    impl_httpcore$_models$$$function__17___repr__,
    impl_httpcore$_models$$$function__18___init__,
    impl_httpcore$_models$$$function__19___repr__,
    impl_httpcore$_models$$$function__20___init__,
    impl_httpcore$_models$$$function__21_content,
    impl_httpcore$_models$$$function__22___repr__,
    impl_httpcore$_models$$$function__23_read,
    impl_httpcore$_models$$$function__24_iter_stream,
    impl_httpcore$_models$$$function__25_close,
    impl_httpcore$_models$$$function__26_aread,
    impl_httpcore$_models$$$function__27_aiter_stream,
    impl_httpcore$_models$$$function__28_aclose,
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

    function_impl_code *current = functable_httpcore$_models;
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

    if (offset > sizeof(functable_httpcore$_models) || offset < 0) {
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
        functable_httpcore$_models[offset],
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
        module_httpcore$_models,
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
PyObject *modulecode_httpcore$_models(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpcore._models");

    // Store the module for future use.
    module_httpcore$_models = module;

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
        PRINT_STRING("httpcore._models: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore._models: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore._models: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpcore$_models\n");

    moduledict_httpcore$_models = MODULE_DICT(module_httpcore$_models);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpcore$_models,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpcore$_models,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[2]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpcore$_models,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_models,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_models,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpcore$_models);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpcore$_models, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpcore$_models, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpcore$_models, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_httpcore$_models);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_8a93407d288e2e69a7351ca7a7e7e0e9;
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
    int tmp_res;
    PyObject *locals_httpcore$_models$$$class__1_ByteStream_147 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_784c146506466810ab4859868b47240f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_httpcore$_models$$$class__2_Origin_166 = NULL;
    struct Nuitka_FrameObject *frame_3a195db2912d14f9af1e27b09ea01c50_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_httpcore$_models$$$class__3_URL_187 = NULL;
    struct Nuitka_FrameObject *frame_0bbf4a13f286b8d140e3c2645a958cb4_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_httpcore$_models$$$class__4_Request_320 = NULL;
    struct Nuitka_FrameObject *frame_d77c62229cea24c68ac8f562857c0992_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_httpcore$_models$$$class__5_Response_359 = NULL;
    struct Nuitka_FrameObject *frame_f015b0d5f36c9ded1a32c62ce0fb1966_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_2);
    }
    frame_8a93407d288e2e69a7351ca7a7e7e0e9 = MAKE_MODULE_FRAME(codeobj_8a93407d288e2e69a7351ca7a7e7e0e9, module_httpcore$_models);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8a93407d288e2e69a7351ca7a7e7e0e9);
    assert(Py_REFCNT(frame_8a93407d288e2e69a7351ca7a7e7e0e9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[111];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[114], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[115], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_3);
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
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[117],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[117]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[99],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[99]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[119],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[119]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[89],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[89]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[120],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[120]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[121],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[121]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[12],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[12]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[122],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[122]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[18],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[18]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[123],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[123]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[124],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[124]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[125];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_models;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[126];
        tmp_level_value_1 = mod_consts[118];
        frame_8a93407d288e2e69a7351ca7a7e7e0e9->m_frame.f_lineno = 14;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_httpcore$_models,
                mod_consts[52],
                mod_consts[118]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[8];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_4 = mod_consts[8];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[8];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_7;
            PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_2);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto tuple_build_exception_2;
            }
            tmp_subscript_value_7 = mod_consts[8];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_tuple_element_3;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        assert(!(tmp_tuple_element_3 == NULL));
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = Py_None;
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 2, tmp_tuple_element_3);
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_tuple_element_4;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_4);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        tmp_dict_key_1 = mod_consts[131];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = mod_consts[8];
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[132];
        tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[133];
        tmp_dict_value_1 = (PyObject *)&PyBytes_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_21 = MAKE_FUNCTION_httpcore$_models$$$function__1_enforce_bytes(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_11;
        tmp_dict_key_2 = mod_consts[131];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[134];
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_11);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[132];
        tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[133];
        tmp_dict_value_2 = mod_consts[9];
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_22 = MAKE_FUNCTION_httpcore$_models$$$function__2_enforce_url(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_tuple_element_5;
        tmp_defaults_1 = mod_consts[135];
        tmp_dict_key_3 = mod_consts[131];
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_12, 1, tmp_tuple_element_5);
        tmp_tuple_element_5 = Py_None;
        PyTuple_SET_ITEM0(tmp_subscript_value_12, 2, tmp_tuple_element_5);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_subscript_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_12);
        Py_DECREF(tmp_subscript_value_12);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_14;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[132];
            tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[133];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_14 = mod_consts[136];
            tmp_subscript_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_14);
            if (tmp_subscript_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_13);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_23 = MAKE_FUNCTION_httpcore$_models$$$function__3_enforce_headers(tmp_defaults_1, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_tuple_element_6;
        tmp_dict_key_4 = mod_consts[131];
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = (PyObject *)&PyBytes_Type;
        tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_17;
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_6);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[89]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_5;
            }
            tmp_subscript_value_16 = (PyObject *)&PyBytes_Type;
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_16);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_6);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_5;
            }
            tmp_subscript_value_17 = (PyObject *)&PyBytes_Type;
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_17);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_15, 2, tmp_tuple_element_6);
            tmp_tuple_element_6 = Py_None;
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 3, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_subscript_value_15);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_15);
        Py_DECREF(tmp_subscript_value_15);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_19;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[132];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[133];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_2;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[89]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_19 = (PyObject *)&PyBytes_Type;
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_19);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_20;
                PyObject *tmp_subscript_value_20;
                PyTuple_SET_ITEM(tmp_subscript_value_18, 0, tmp_tuple_element_7);
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[99]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
                }

                if (tmp_expression_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_6;
                }
                tmp_subscript_value_20 = (PyObject *)&PyBytes_Type;
                tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_20);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;

                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_18, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_subscript_value_18);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_18);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_24 = MAKE_FUNCTION_httpcore$_models$$$function__4_enforce_stream(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = DICT_COPY(mod_consts[137]);
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_22;
        tmp_dict_key_5 = mod_consts[33];
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = mod_consts[136];
        tmp_subscript_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_22);
        if (tmp_subscript_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_27;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[77];
            tmp_dict_value_5 = mod_consts[9];
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[138];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto dict_build_exception_3;
            }
            tmp_tuple_element_8 = Py_None;
            tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_25;
                PyTuple_SET_ITEM0(tmp_subscript_value_23, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = (PyObject *)&PyBytes_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_23, 1, tmp_tuple_element_8);
                tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[89]);

                if (unlikely(tmp_expression_value_24 == NULL)) {
                    tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                }

                if (tmp_expression_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;

                    goto tuple_build_exception_7;
                }
                tmp_subscript_value_24 = (PyObject *)&PyBytes_Type;
                tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_24);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;

                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_23, 2, tmp_tuple_element_8);
                tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[99]);

                if (unlikely(tmp_expression_value_25 == NULL)) {
                    tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
                }

                if (tmp_expression_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;

                    goto tuple_build_exception_7;
                }
                tmp_subscript_value_25 = (PyObject *)&PyBytes_Type;
                tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_25);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;

                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_23, 3, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_subscript_value_23);
            goto dict_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_23);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[133];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_3;
            }
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_27 = mod_consts[136];
            tmp_subscript_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_27);
            if (tmp_subscript_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_3;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_26);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_26 = MAKE_FUNCTION_httpcore$_models$$$function__5_include_request_headers(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_httpcore$_models$$$class__1_ByteStream_147 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__1_ByteStream_147, mod_consts[141], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__1_ByteStream_147, mod_consts[110], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[21];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__1_ByteStream_147, mod_consts[143], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(mod_consts[144]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__6___init__(tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__1_ByteStream_147, mod_consts[145], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_784c146506466810ab4859868b47240f_2 = MAKE_CLASS_FRAME(codeobj_784c146506466810ab4859868b47240f, module_httpcore$_models, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_784c146506466810ab4859868b47240f_2);
        assert(Py_REFCNT(frame_784c146506466810ab4859868b47240f_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_28;
            tmp_dict_key_6 = mod_consts[133];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_28 = (PyObject *)&PyBytes_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_28);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__7___iter__(tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__1_ByteStream_147, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_29;
            tmp_dict_key_7 = mod_consts[133];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_29 = (PyObject *)&PyBytes_Type;
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_29);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__8___aiter__(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__1_ByteStream_147, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_784c146506466810ab4859868b47240f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_784c146506466810ab4859868b47240f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_784c146506466810ab4859868b47240f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_784c146506466810ab4859868b47240f_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_784c146506466810ab4859868b47240f_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            PyObject *tmp_annotations_9;
            tmp_annotations_9 = DICT_COPY(mod_consts[147]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__9___repr__(tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__1_ByteStream_147, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_9 = mod_consts[21];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[150];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_httpcore$_models$$$class__1_ByteStream_147;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_8a93407d288e2e69a7351ca7a7e7e0e9->m_frame.f_lineno = 147;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_30;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_29 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_httpcore$_models$$$class__1_ByteStream_147);
        locals_httpcore$_models$$$class__1_ByteStream_147 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpcore$_models$$$class__1_ByteStream_147);
        locals_httpcore$_models$$$class__1_ByteStream_147 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 147;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_29);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_httpcore$_models$$$class__2_Origin_166 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__2_Origin_166, mod_consts[141], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[48];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__2_Origin_166, mod_consts[143], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_10;
            tmp_annotations_10 = DICT_COPY(mod_consts[151]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__10___init__(tmp_annotations_10);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__2_Origin_166, mod_consts[145], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_3a195db2912d14f9af1e27b09ea01c50_3 = MAKE_CLASS_FRAME(codeobj_3a195db2912d14f9af1e27b09ea01c50, module_httpcore$_models, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3a195db2912d14f9af1e27b09ea01c50_3);
        assert(Py_REFCNT(frame_3a195db2912d14f9af1e27b09ea01c50_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[153];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[133];
            tmp_dict_value_8 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__11___eq__(tmp_annotations_11);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__2_Origin_166, mod_consts[154], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3a195db2912d14f9af1e27b09ea01c50_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3a195db2912d14f9af1e27b09ea01c50_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3a195db2912d14f9af1e27b09ea01c50_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3a195db2912d14f9af1e27b09ea01c50_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_3a195db2912d14f9af1e27b09ea01c50_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[147]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__12___str__(tmp_annotations_12);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__2_Origin_166, mod_consts[156], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_10 = mod_consts[48];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[150];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_httpcore$_models$$$class__2_Origin_166;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_8a93407d288e2e69a7351ca7a7e7e0e9->m_frame.f_lineno = 166;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_33 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_httpcore$_models$$$class__2_Origin_166);
        locals_httpcore$_models$$$class__2_Origin_166 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpcore$_models$$$class__2_Origin_166);
        locals_httpcore$_models$$$class__2_Origin_166 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 166;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_33);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_36;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_httpcore$_models$$$class__3_URL_187 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__3_URL_187, mod_consts[141], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[158];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__3_URL_187, mod_consts[110], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__3_URL_187, mod_consts[143], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_0bbf4a13f286b8d140e3c2645a958cb4_4 = MAKE_CLASS_FRAME(codeobj_0bbf4a13f286b8d140e3c2645a958cb4, module_httpcore$_models, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0bbf4a13f286b8d140e3c2645a958cb4_4);
        assert(Py_REFCNT(frame_0bbf4a13f286b8d140e3c2645a958cb4_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_30;
            tmp_defaults_2 = mod_consts[159];
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[160]);
            tmp_dict_key_9 = mod_consts[77];
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_1);

                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_30 = mod_consts[8];
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_30);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_1);

                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_subscript_value_33;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_34;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[26];
                tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

                if (unlikely(tmp_expression_value_31 == NULL)) {
                    tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                }

                if (tmp_expression_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_31 = mod_consts[8];
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_31);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[28];
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                }

                if (tmp_expression_value_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_32 = mod_consts[8];
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_32);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[27];
                tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[122]);

                if (unlikely(tmp_expression_value_33 == NULL)) {
                    tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                }

                if (tmp_expression_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_33 = (PyObject *)&PyLong_Type;
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_33);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[60];
                tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

                if (unlikely(tmp_expression_value_34 == NULL)) {
                    tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                }

                if (tmp_expression_value_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_34 = mod_consts[8];
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_34);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[133];
                tmp_dict_value_9 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_9, tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_kw_defaults_1);
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__13___init__(tmp_defaults_2, tmp_kw_defaults_1, tmp_annotations_13);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__3_URL_187, mod_consts[145], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_10 = mod_consts[133];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_1 = MAKE_FUNCTION_httpcore$_models$$$function__14_origin(tmp_annotations_14);

            frame_0bbf4a13f286b8d140e3c2645a958cb4_4->m_frame.f_lineno = 286;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__3_URL_187, mod_consts[114], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_dict_key_11 = mod_consts[153];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_15 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[133];
            tmp_dict_value_11 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__15___eq__(tmp_annotations_15);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__3_URL_187, mod_consts[154], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0bbf4a13f286b8d140e3c2645a958cb4_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0bbf4a13f286b8d140e3c2645a958cb4_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0bbf4a13f286b8d140e3c2645a958cb4_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0bbf4a13f286b8d140e3c2645a958cb4_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_0bbf4a13f286b8d140e3c2645a958cb4_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            PyObject *tmp_annotations_16;
            tmp_annotations_16 = DICT_COPY(mod_consts[164]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__16___bytes__(tmp_annotations_16);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__3_URL_187, mod_consts[165], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_17;
            tmp_annotations_17 = DICT_COPY(mod_consts[147]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__17___repr__(tmp_annotations_17);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__3_URL_187, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_4 = (PyObject *)&PyType_Type;
            tmp_tuple_element_11 = mod_consts[9];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[150];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_httpcore$_models$$$class__3_URL_187;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
            frame_8a93407d288e2e69a7351ca7a7e7e0e9->m_frame.f_lineno = 187;
            tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_37 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_httpcore$_models$$$class__3_URL_187);
        locals_httpcore$_models$$$class__3_URL_187 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpcore$_models$$$class__3_URL_187);
        locals_httpcore$_models$$$class__3_URL_187 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 187;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_37);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_40;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_httpcore$_models$$$class__4_Request_320 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__4_Request_320, mod_consts[141], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__4_Request_320, mod_consts[110], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__4_Request_320, mod_consts[143], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_d77c62229cea24c68ac8f562857c0992_5 = MAKE_CLASS_FRAME(codeobj_d77c62229cea24c68ac8f562857c0992, module_httpcore$_models, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d77c62229cea24c68ac8f562857c0992_5);
        assert(Py_REFCNT(frame_d77c62229cea24c68ac8f562857c0992_5) == 2);

        // Framed code:
        {
            PyObject *tmp_kw_defaults_2;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_35;
            tmp_kw_defaults_2 = DICT_COPY(mod_consts[170]);
            tmp_dict_key_12 = mod_consts[75];
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_2);

                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_35 = mod_consts[8];
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_35);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_2);

                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_36;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_37;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_40;
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[77];
                tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

                if (unlikely(tmp_expression_value_36 == NULL)) {
                    tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                }

                if (tmp_expression_value_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 328;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_tuple_element_12 == NULL)) {
                    tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
                }

                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 328;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_36 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_36, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = (PyObject *)&PyBytes_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_36, 1, tmp_tuple_element_12);
                tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_36, 2, tmp_tuple_element_12);
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_36);
                Py_DECREF(tmp_subscript_value_36);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 328;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[33];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[129]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 330;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[138];
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                }

                if (tmp_expression_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 331;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_tuple_element_13 = (PyObject *)&PyBytes_Type;
                tmp_subscript_value_37 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_38;
                    PyObject *tmp_subscript_value_38;
                    PyObject *tmp_expression_value_39;
                    PyObject *tmp_subscript_value_39;
                    PyTuple_SET_ITEM0(tmp_subscript_value_37, 0, tmp_tuple_element_13);
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 331;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    tmp_subscript_value_38 = (PyObject *)&PyBytes_Type;
                    tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_38);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 331;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_37, 1, tmp_tuple_element_13);
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[99]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 331;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    tmp_subscript_value_39 = (PyObject *)&PyBytes_Type;
                    tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_39);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 331;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_37, 2, tmp_tuple_element_13);
                    tmp_tuple_element_13 = Py_None;
                    PyTuple_SET_ITEM0(tmp_subscript_value_37, 3, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_subscript_value_37);
                goto dict_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_37);
                Py_DECREF(tmp_subscript_value_37);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 331;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[83];
                tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[122]);

                if (unlikely(tmp_expression_value_40 == NULL)) {
                    tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                }

                if (tmp_expression_value_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 332;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_40 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[130]);

                if (unlikely(tmp_subscript_value_40 == NULL)) {
                    tmp_subscript_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
                }

                if (tmp_subscript_value_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 332;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_40);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 332;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[133];
                tmp_dict_value_12 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_kw_defaults_2);
            Py_DECREF(tmp_annotations_18);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__18___init__(tmp_kw_defaults_2, tmp_annotations_18);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__4_Request_320, mod_consts[145], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d77c62229cea24c68ac8f562857c0992_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d77c62229cea24c68ac8f562857c0992_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d77c62229cea24c68ac8f562857c0992_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d77c62229cea24c68ac8f562857c0992_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_d77c62229cea24c68ac8f562857c0992_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            PyObject *tmp_annotations_19;
            tmp_annotations_19 = DICT_COPY(mod_consts[147]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__19___repr__(tmp_annotations_19);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__4_Request_320, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_14 = mod_consts[169];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[150];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_httpcore$_models$$$class__4_Request_320;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_4__class_decl_dict;
            frame_8a93407d288e2e69a7351ca7a7e7e0e9->m_frame.f_lineno = 320;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_41 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_httpcore$_models$$$class__4_Request_320);
        locals_httpcore$_models$$$class__4_Request_320 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpcore$_models$$$class__4_Request_320);
        locals_httpcore$_models$$$class__4_Request_320 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 320;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_41);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_44;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_httpcore$_models$$$class__5_Response_359 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[141], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[110], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[174];
        tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[143], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_f015b0d5f36c9ded1a32c62ce0fb1966_6 = MAKE_CLASS_FRAME(codeobj_f015b0d5f36c9ded1a32c62ce0fb1966, module_httpcore$_models, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f015b0d5f36c9ded1a32c62ce0fb1966_6);
        assert(Py_REFCNT(frame_f015b0d5f36c9ded1a32c62ce0fb1966_6) == 2);

        // Framed code:
        {
            PyObject *tmp_kw_defaults_3;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_kw_defaults_3 = DICT_COPY(mod_consts[170]);
            tmp_dict_key_13 = mod_consts[86];
            tmp_dict_value_13 = (PyObject *)&PyLong_Type;
            tmp_annotations_20 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_41;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_44;
                tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[33];
                tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[129]);

                if (unlikely(tmp_dict_value_13 == NULL)) {
                    tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                }

                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 368;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[138];
                tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[124]);

                if (unlikely(tmp_expression_value_41 == NULL)) {
                    tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                }

                if (tmp_expression_value_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 369;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_tuple_element_15 = (PyObject *)&PyBytes_Type;
                tmp_subscript_value_41 = MAKE_TUPLE_EMPTY(4);
                {
                    PyObject *tmp_expression_value_42;
                    PyObject *tmp_subscript_value_42;
                    PyObject *tmp_expression_value_43;
                    PyObject *tmp_subscript_value_43;
                    PyTuple_SET_ITEM0(tmp_subscript_value_41, 0, tmp_tuple_element_15);
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_expression_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 369;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    tmp_subscript_value_42 = (PyObject *)&PyBytes_Type;
                    tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_42);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 369;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_41, 1, tmp_tuple_element_15);
                    tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[99]);

                    if (unlikely(tmp_expression_value_43 == NULL)) {
                        tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
                    }

                    if (tmp_expression_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 369;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    tmp_subscript_value_43 = (PyObject *)&PyBytes_Type;
                    tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_43);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 369;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_41, 2, tmp_tuple_element_15);
                    tmp_tuple_element_15 = Py_None;
                    PyTuple_SET_ITEM0(tmp_subscript_value_41, 3, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_subscript_value_41);
                goto dict_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_41);
                Py_DECREF(tmp_subscript_value_41);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 369;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[83];
                tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[122]);

                if (unlikely(tmp_expression_value_44 == NULL)) {
                    tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                }

                if (tmp_expression_value_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_44 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[130]);

                if (unlikely(tmp_subscript_value_44 == NULL)) {
                    tmp_subscript_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
                }

                if (tmp_subscript_value_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_44);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[133];
                tmp_dict_value_13 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_kw_defaults_3);
            Py_DECREF(tmp_annotations_20);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__20___init__(tmp_kw_defaults_3, tmp_annotations_20);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[145], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_21;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;
            tmp_annotations_21 = DICT_COPY(mod_consts[164]);


            tmp_args_element_value_2 = MAKE_FUNCTION_httpcore$_models$$$function__21_content(tmp_annotations_21);

            frame_f015b0d5f36c9ded1a32c62ce0fb1966_6->m_frame.f_lineno = 392;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_22;
            tmp_annotations_22 = DICT_COPY(mod_consts[147]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__22___repr__(tmp_annotations_22);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_23;
            tmp_annotations_23 = DICT_COPY(mod_consts[164]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__23_read(tmp_annotations_23);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[178], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_45;
            tmp_dict_key_14 = mod_consts[133];
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_45 = (PyObject *)&PyBytes_Type;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_45);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__24_iter_stream(tmp_annotations_24);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_25;
            tmp_annotations_25 = DICT_COPY(mod_consts[180]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__25_close(tmp_annotations_25);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_26;
            tmp_annotations_26 = DICT_COPY(mod_consts[164]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__26_aread(tmp_annotations_26);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[102], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_46;
            tmp_dict_key_15 = mod_consts[133];
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_46 = (PyObject *)&PyBytes_Type;
            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_46);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__27_aiter_stream(tmp_annotations_27);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f015b0d5f36c9ded1a32c62ce0fb1966_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f015b0d5f36c9ded1a32c62ce0fb1966_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f015b0d5f36c9ded1a32c62ce0fb1966_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f015b0d5f36c9ded1a32c62ce0fb1966_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_f015b0d5f36c9ded1a32c62ce0fb1966_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            PyObject *tmp_annotations_28;
            tmp_annotations_28 = DICT_COPY(mod_consts[180]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_models$$$function__28_aclose(tmp_annotations_28);

            tmp_res = PyDict_SetItem(locals_httpcore$_models$$$class__5_Response_359, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_16 = mod_consts[174];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[150];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_httpcore$_models$$$class__5_Response_359;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_5__class_decl_dict;
            frame_8a93407d288e2e69a7351ca7a7e7e0e9->m_frame.f_lineno = 359;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_45 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_httpcore$_models$$$class__5_Response_359);
        locals_httpcore$_models$$$class__5_Response_359 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpcore$_models$$$class__5_Response_359);
        locals_httpcore$_models$$$class__5_Response_359 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 359;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_models, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_45);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8a93407d288e2e69a7351ca7a7e7e0e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a93407d288e2e69a7351ca7a7e7e0e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a93407d288e2e69a7351ca7a7e7e0e9, exception_lineno);
    }



    assertFrameObject(frame_8a93407d288e2e69a7351ca7a7e7e0e9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpcore._models", false);

    Py_INCREF(module_httpcore$_models);
    return module_httpcore$_models;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_models, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("httpcore$_models", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
