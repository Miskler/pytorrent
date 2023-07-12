/* Generated code for Python module 'comtypes.safearray'
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

/* The "module_comtypes$safearray" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_comtypes$safearray;
PyDictObject *moduledict_comtypes$safearray;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[229];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[229];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("comtypes.safearray"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 229; i++) {
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
void checkModuleConstants_comtypes$safearray(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 229; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_baec27a4a47a286b46dca39d470368ea;
static PyCodeObject *codeobj_ba1d96b4ee7f94b65d86b5b0c6661971;
static PyCodeObject *codeobj_f2c61ea1d4805961ac42d7c1859fddcb;
static PyCodeObject *codeobj_7a047d5a66fcff2bac3e6b7bb1c54e53;
static PyCodeObject *codeobj_27e2f5f1603c0ad8d3d1329aaec9a8ce;
static PyCodeObject *codeobj_f10b994b7021afdaf7c94fb62254c134;
static PyCodeObject *codeobj_5db1f1928da6d5b4865aafb56e09b3c0;
static PyCodeObject *codeobj_0057727a6b7dd51e0c242991643973d6;
static PyCodeObject *codeobj_3b19feafec4520de5502a73d6c05254d;
static PyCodeObject *codeobj_3cb6c543872ca2751ad12a2361fe8793;
static PyCodeObject *codeobj_975e0839ca0c71c6ce440082a003e20d;
static PyCodeObject *codeobj_273d0c48e715984a0411a68b72b7b66a;
static PyCodeObject *codeobj_1351823356555c0b9e3554156ca644db;
static PyCodeObject *codeobj_8442bebcdc30981c35f246e50279bdb7;
static PyCodeObject *codeobj_28bd36cfb677dcd676caa5a91d67fdc1;
static PyCodeObject *codeobj_aefac7973845daf0e5029c55eac02d15;
static PyCodeObject *codeobj_c0b3f9fb4c82df75c8debbd327126daf;
static PyCodeObject *codeobj_37c0a0c5de1d2af097b2e3807cd72f0f;
static PyCodeObject *codeobj_93e8d55087b50df65dd3475c5e23a1ab;
static PyCodeObject *codeobj_b2c827f6f259f0c0fc6d847765d29918;
static PyCodeObject *codeobj_440fd1bfac76e125fe19347e1f202e0e;
static PyCodeObject *codeobj_d90aedd58f44c36207b8738fb47e9708;
static PyCodeObject *codeobj_11a6f7ed8c0d1784c91122a3c56694a4;
static PyCodeObject *codeobj_0830884c358641b040c4bbe676eaaf6c;
static PyCodeObject *codeobj_cbf8f954e368d621010425c4a92e29d4;
static PyCodeObject *codeobj_a5ad8f493dc08bd42e9367df4953414e;
static PyCodeObject *codeobj_1228808ccedba376743b0ca7bf94c6f5;
static PyCodeObject *codeobj_4e0d21ded16792a9b1cf75cb54639171;
static PyCodeObject *codeobj_d039cc727c0d45a2a4bb6f32cfc86907;
static PyCodeObject *codeobj_c5403d09768f7cf8b6e90c122a7baa82;
static PyCodeObject *codeobj_ec21a60580e888f52bbbd3c8395c869a;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[176]; CHECK_OBJECT(module_filename_obj);
    codeobj_baec27a4a47a286b46dca39d470368ea = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[199], NULL, 1, 0, 0);
    codeobj_ba1d96b4ee7f94b65d86b5b0c6661971 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[199], NULL, 1, 0, 0);
    codeobj_f2c61ea1d4805961ac42d7c1859fddcb = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[200], NULL, 1, 0, 0);
    codeobj_7a047d5a66fcff2bac3e6b7bb1c54e53 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[201], NULL, 1, 0, 0);
    codeobj_27e2f5f1603c0ad8d3d1329aaec9a8ce = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[202], NULL, 1, 0, 0);
    codeobj_f10b994b7021afdaf7c94fb62254c134 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[203], NULL, 1, 0, 0);
    codeobj_5db1f1928da6d5b4865aafb56e09b3c0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[204], mod_consts[204], NULL, NULL, 0, 0, 0);
    codeobj_0057727a6b7dd51e0c242991643973d6 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[205], NULL, 0, 0, 0);
    codeobj_3b19feafec4520de5502a73d6c05254d = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_NOFREE, mod_consts[187], mod_consts[187], mod_consts[206], NULL, 0, 0, 0);
    codeobj_3cb6c543872ca2751ad12a2361fe8793 = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[206], NULL, 0, 0, 0);
    codeobj_975e0839ca0c71c6ce440082a003e20d = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[207], NULL, 1, 0, 0);
    codeobj_273d0c48e715984a0411a68b72b7b66a = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[207], NULL, 1, 0, 0);
    codeobj_1351823356555c0b9e3554156ca644db = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[208], NULL, 2, 0, 0);
    codeobj_8442bebcdc30981c35f246e50279bdb7 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[190], mod_consts[190], mod_consts[207], NULL, 1, 0, 0);
    codeobj_28bd36cfb677dcd676caa5a91d67fdc1 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[192], mod_consts[192], mod_consts[209], NULL, 4, 0, 0);
    codeobj_aefac7973845daf0e5029c55eac02d15 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[210], NULL, 2, 0, 0);
    codeobj_c0b3f9fb4c82df75c8debbd327126daf = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[211], NULL, 3, 0, 0);
    codeobj_37c0a0c5de1d2af097b2e3807cd72f0f = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[57], mod_consts[57], mod_consts[212], mod_consts[213], 3, 0, 0);
    codeobj_93e8d55087b50df65dd3475c5e23a1ab = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[214], NULL, 1, 0, 0);
    codeobj_b2c827f6f259f0c0fc6d847765d29918 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[215], NULL, 2, 0, 0);
    codeobj_440fd1bfac76e125fe19347e1f202e0e = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[216], NULL, 5, 0, 0);
    codeobj_d90aedd58f44c36207b8738fb47e9708 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[217], NULL, 2, 0, 0);
    codeobj_11a6f7ed8c0d1784c91122a3c56694a4 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[218], NULL, 1, 0, 0);
    codeobj_0830884c358641b040c4bbe676eaaf6c = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[219], NULL, 1, 0, 0);
    codeobj_cbf8f954e368d621010425c4a92e29d4 = MAKE_CODE_OBJECT(module_filename_obj, 372, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[220], NULL, 1, 0, 0);
    codeobj_a5ad8f493dc08bd42e9367df4953414e = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[49], mod_consts[49], mod_consts[221], mod_consts[222], 3, 0, 0);
    codeobj_1228808ccedba376743b0ca7bf94c6f5 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[52], mod_consts[52], mod_consts[223], mod_consts[222], 4, 0, 0);
    codeobj_4e0d21ded16792a9b1cf75cb54639171 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[54], mod_consts[54], mod_consts[224], mod_consts[225], 2, 0, 0);
    codeobj_d039cc727c0d45a2a4bb6f32cfc86907 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[54], mod_consts[54], mod_consts[224], mod_consts[225], 2, 0, 0);
    codeobj_c5403d09768f7cf8b6e90c122a7baa82 = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], mod_consts[226], mod_consts[207], 1, 0, 0);
    codeobj_ec21a60580e888f52bbbd3c8395c869a = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[227], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__1___enter__();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__2___exit__();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__3___bool__();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__4__midlSAFEARRAY();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw$$$function__1_keep_safearray(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__11__get_row();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__12_from_param(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__13___setitem__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__1_create(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__2_create_from_ndarray(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__3_from_param(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__4___getitem__();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__5___setitem__();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__6___ctypes_from_outparam__();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__7___del__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__8__get_size();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__9_unpack();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__6__ndarray_to_variant_array();


static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__7__datetime64_ndarray_to_variant_array();


// The module function definitions.
static PyObject *impl_comtypes$safearray$$$function__1___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_8442bebcdc30981c35f246e50279bdb7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_8442bebcdc30981c35f246e50279bdb7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8442bebcdc30981c35f246e50279bdb7)) {
        Py_XDECREF(cache_frame_8442bebcdc30981c35f246e50279bdb7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8442bebcdc30981c35f246e50279bdb7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8442bebcdc30981c35f246e50279bdb7 = MAKE_FUNCTION_FRAME(codeobj_8442bebcdc30981c35f246e50279bdb7, module_comtypes$safearray, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8442bebcdc30981c35f246e50279bdb7->m_type_description == NULL);
    frame_8442bebcdc30981c35f246e50279bdb7 = cache_frame_8442bebcdc30981c35f246e50279bdb7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8442bebcdc30981c35f246e50279bdb7);
    assert(Py_REFCNT(frame_8442bebcdc30981c35f246e50279bdb7) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[2];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    goto try_end_2;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_8442bebcdc30981c35f246e50279bdb7, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_8442bebcdc30981c35f246e50279bdb7, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_4;
        tmp_assattr_value_2 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 30;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8442bebcdc30981c35f246e50279bdb7->m_frame) frame_8442bebcdc30981c35f246e50279bdb7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_3;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8442bebcdc30981c35f246e50279bdb7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8442bebcdc30981c35f246e50279bdb7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8442bebcdc30981c35f246e50279bdb7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8442bebcdc30981c35f246e50279bdb7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8442bebcdc30981c35f246e50279bdb7 == cache_frame_8442bebcdc30981c35f246e50279bdb7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8442bebcdc30981c35f246e50279bdb7);
        cache_frame_8442bebcdc30981c35f246e50279bdb7 = NULL;
    }

    assertFrameObject(frame_8442bebcdc30981c35f246e50279bdb7);

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


static PyObject *impl_comtypes$safearray$$$function__2___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_value = python_pars[2];
    PyObject *par_traceback = python_pars[3];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_28bd36cfb677dcd676caa5a91d67fdc1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_28bd36cfb677dcd676caa5a91d67fdc1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_28bd36cfb677dcd676caa5a91d67fdc1)) {
        Py_XDECREF(cache_frame_28bd36cfb677dcd676caa5a91d67fdc1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28bd36cfb677dcd676caa5a91d67fdc1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28bd36cfb677dcd676caa5a91d67fdc1 = MAKE_FUNCTION_FRAME(codeobj_28bd36cfb677dcd676caa5a91d67fdc1, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_28bd36cfb677dcd676caa5a91d67fdc1->m_type_description == NULL);
    frame_28bd36cfb677dcd676caa5a91d67fdc1 = cache_frame_28bd36cfb677dcd676caa5a91d67fdc1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_28bd36cfb677dcd676caa5a91d67fdc1);
    assert(Py_REFCNT(frame_28bd36cfb677dcd676caa5a91d67fdc1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_isub_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_isub_expr_right_1 = mod_consts[2];
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_isub_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_28bd36cfb677dcd676caa5a91d67fdc1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28bd36cfb677dcd676caa5a91d67fdc1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28bd36cfb677dcd676caa5a91d67fdc1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28bd36cfb677dcd676caa5a91d67fdc1,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_value,
        par_traceback
    );


    // Release cached frame if used for exception.
    if (frame_28bd36cfb677dcd676caa5a91d67fdc1 == cache_frame_28bd36cfb677dcd676caa5a91d67fdc1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_28bd36cfb677dcd676caa5a91d67fdc1);
        cache_frame_28bd36cfb677dcd676caa5a91d67fdc1 = NULL;
    }

    assertFrameObject(frame_28bd36cfb677dcd676caa5a91d67fdc1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_traceback);
    Py_DECREF(par_traceback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_traceback);
    Py_DECREF(par_traceback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__3___bool__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_975e0839ca0c71c6ce440082a003e20d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_975e0839ca0c71c6ce440082a003e20d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_975e0839ca0c71c6ce440082a003e20d)) {
        Py_XDECREF(cache_frame_975e0839ca0c71c6ce440082a003e20d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_975e0839ca0c71c6ce440082a003e20d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_975e0839ca0c71c6ce440082a003e20d = MAKE_FUNCTION_FRAME(codeobj_975e0839ca0c71c6ce440082a003e20d, module_comtypes$safearray, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_975e0839ca0c71c6ce440082a003e20d->m_type_description == NULL);
    frame_975e0839ca0c71c6ce440082a003e20d = cache_frame_975e0839ca0c71c6ce440082a003e20d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_975e0839ca0c71c6ce440082a003e20d);
    assert(Py_REFCNT(frame_975e0839ca0c71c6ce440082a003e20d) == 2);

    // Framed code:
    {
        PyObject *tmp_value_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = mod_consts[1];
        tmp_getattr_default_1 = mod_consts[3];
        tmp_value_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_975e0839ca0c71c6ce440082a003e20d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_975e0839ca0c71c6ce440082a003e20d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_975e0839ca0c71c6ce440082a003e20d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_975e0839ca0c71c6ce440082a003e20d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_975e0839ca0c71c6ce440082a003e20d == cache_frame_975e0839ca0c71c6ce440082a003e20d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_975e0839ca0c71c6ce440082a003e20d);
        cache_frame_975e0839ca0c71c6ce440082a003e20d = NULL;
    }

    assertFrameObject(frame_975e0839ca0c71c6ce440082a003e20d);

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


static PyObject *impl_comtypes$safearray$$$function__4__midlSAFEARRAY(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_itemtype = python_pars[0];
    PyObject *var_sa_type = NULL;
    struct Nuitka_FrameObject *frame_0830884c358641b040c4bbe676eaaf6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_0830884c358641b040c4bbe676eaaf6c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0830884c358641b040c4bbe676eaaf6c)) {
        Py_XDECREF(cache_frame_0830884c358641b040c4bbe676eaaf6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0830884c358641b040c4bbe676eaaf6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0830884c358641b040c4bbe676eaaf6c = MAKE_FUNCTION_FRAME(codeobj_0830884c358641b040c4bbe676eaaf6c, module_comtypes$safearray, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0830884c358641b040c4bbe676eaaf6c->m_type_description == NULL);
    frame_0830884c358641b040c4bbe676eaaf6c = cache_frame_0830884c358641b040c4bbe676eaaf6c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0830884c358641b040c4bbe676eaaf6c);
    assert(Py_REFCNT(frame_0830884c358641b040c4bbe676eaaf6c) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_itemtype);
        tmp_subscript_value_1 = par_itemtype;
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_0830884c358641b040c4bbe676eaaf6c->m_frame.f_lineno = 60;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_0830884c358641b040c4bbe676eaaf6c, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_0830884c358641b040c4bbe676eaaf6c, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_KeyError;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_itemtype);
        tmp_args_element_value_2 = par_itemtype;
        frame_0830884c358641b040c4bbe676eaaf6c->m_frame.f_lineno = 62;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        assert(var_sa_type == NULL);
        var_sa_type = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_sa_type);
        tmp_ass_subvalue_1 = var_sa_type;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_itemtype);
        tmp_ass_subscript_1 = par_itemtype;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_sa_type);
        tmp_args_element_value_3 = var_sa_type;
        frame_0830884c358641b040c4bbe676eaaf6c->m_frame.f_lineno = 64;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        goto try_return_handler_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 59;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0830884c358641b040c4bbe676eaaf6c->m_frame) frame_0830884c358641b040c4bbe676eaaf6c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0830884c358641b040c4bbe676eaaf6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0830884c358641b040c4bbe676eaaf6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0830884c358641b040c4bbe676eaaf6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0830884c358641b040c4bbe676eaaf6c,
        type_description_1,
        par_itemtype,
        var_sa_type
    );


    // Release cached frame if used for exception.
    if (frame_0830884c358641b040c4bbe676eaaf6c == cache_frame_0830884c358641b040c4bbe676eaaf6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0830884c358641b040c4bbe676eaaf6c);
        cache_frame_0830884c358641b040c4bbe676eaaf6c = NULL;
    }

    assertFrameObject(frame_0830884c358641b040c4bbe676eaaf6c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_sa_type);
    var_sa_type = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_sa_type);
    var_sa_type = NULL;
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
    CHECK_OBJECT(par_itemtype);
    Py_DECREF(par_itemtype);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_itemtype);
    Py_DECREF(par_itemtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_itemtype = python_pars[0];
    PyObject *var__ctype_to_vartype = NULL;
    struct Nuitka_CellObject *var_VT_RECORD = Nuitka_Cell_Empty();
    PyObject *var_VT_UNKNOWN = NULL;
    PyObject *var_IDispatch = NULL;
    PyObject *var_VT_DISPATCH = NULL;
    PyObject *var_meta = NULL;
    struct Nuitka_CellObject *var_sa_type = Nuitka_Cell_Empty();
    PyObject *var_vartype = NULL;
    struct Nuitka_CellObject *var_extra = Nuitka_Cell_Empty();
    PyObject *var_guids = NULL;
    PyObject *var_GetRecordInfoFromGuids = NULL;
    PyObject *var__ = NULL;
    PyObject *var___ = NULL;
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_11a6f7ed8c0d1784c91122a3c56694a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0057727a6b7dd51e0c242991643973d6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0057727a6b7dd51e0c242991643973d6_2 = NULL;
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
    PyObject *locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354 = NULL;
    struct Nuitka_FrameObject *frame_3cb6c543872ca2751ad12a2361fe8793_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3cb6c543872ca2751ad12a2361fe8793_3 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_11a6f7ed8c0d1784c91122a3c56694a4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_11a6f7ed8c0d1784c91122a3c56694a4)) {
        Py_XDECREF(cache_frame_11a6f7ed8c0d1784c91122a3c56694a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_11a6f7ed8c0d1784c91122a3c56694a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_11a6f7ed8c0d1784c91122a3c56694a4 = MAKE_FUNCTION_FRAME(codeobj_11a6f7ed8c0d1784c91122a3c56694a4, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_11a6f7ed8c0d1784c91122a3c56694a4->m_type_description == NULL);
    frame_11a6f7ed8c0d1784c91122a3c56694a4 = cache_frame_11a6f7ed8c0d1784c91122a3c56694a4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_11a6f7ed8c0d1784c91122a3c56694a4);
    assert(Py_REFCNT(frame_11a6f7ed8c0d1784c91122a3c56694a4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[10];
        tmp_level_value_1 = mod_consts[3];
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 69;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oocoooococoooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[11],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[11]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_2;
        }
        assert(var__ctype_to_vartype == NULL);
        var__ctype_to_vartype = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[12],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[12]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_2;
        }
        assert(Nuitka_Cell_GET(var_VT_RECORD) == NULL);
        PyCell_SET(var_VT_RECORD, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[13],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[13]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_2;
        }
        assert(var_VT_UNKNOWN == NULL);
        var_VT_UNKNOWN = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[14],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[14]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_2;
        }
        assert(var_IDispatch == NULL);
        var_IDispatch = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[15],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[15]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_2;
        }
        assert(var_VT_DISPATCH == NULL);
        var_VT_DISPATCH = tmp_assign_source_6;
    }
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oocoooococoooo";
            goto frame_exception_exit_1;
        }
        tmp_type_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oocoooococoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oocoooococoooo";
            goto frame_exception_exit_1;
        }
        assert(var_meta == NULL);
        var_meta = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_meta);
        tmp_expression_value_2 = var_meta;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(var_meta);
        tmp_args_element_value_1 = var_meta;
        tmp_mod_expr_left_1 = mod_consts[19];
        CHECK_OBJECT(par_itemtype);
        tmp_expression_value_3 = par_itemtype;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[20]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 74;
            type_description_1 = "oocoooococoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 74;
            type_description_1 = "oocoooococoooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 75;
            type_description_1 = "oocoooococoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 75;
            type_description_1 = "oocoooococoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_element_value_3, 0, tmp_tuple_element_1);
        tmp_args_element_value_4 = MAKE_DICT_EMPTY();
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oocoooococoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_sa_type) == NULL);
        PyCell_SET(var_sa_type, tmp_assign_source_8);

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var__ctype_to_vartype);
        tmp_expression_value_5 = var__ctype_to_vartype;
        CHECK_OBJECT(par_itemtype);
        tmp_subscript_value_1 = par_itemtype;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_3;
        }
        assert(var_vartype == NULL);
        var_vartype = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_None;
        assert(Nuitka_Cell_GET(var_extra) == NULL);
        Py_INCREF(tmp_assign_source_10);
        PyCell_SET(var_extra, tmp_assign_source_10);

    }
    goto try_end_2;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_11a6f7ed8c0d1784c91122a3c56694a4, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_11a6f7ed8c0d1784c91122a3c56694a4, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_KeyError;
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_issubclass_cls_1;
        PyObject *tmp_issubclass_classes_1;
        CHECK_OBJECT(par_itemtype);
        tmp_issubclass_cls_1 = par_itemtype;
        tmp_issubclass_classes_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_issubclass_classes_1 == NULL)) {
            tmp_issubclass_classes_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_issubclass_classes_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
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
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_itemtype);
        tmp_expression_value_6 = par_itemtype;
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[22]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_5;
        }
        assert(var_guids == NULL);
        var_guids = tmp_assign_source_12;
    }
    goto try_end_3;
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

    {
        nuitka_bool tmp_assign_source_13;
        tmp_assign_source_13 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_13;
    }
    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_11a6f7ed8c0d1784c91122a3c56694a4, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_11a6f7ed8c0d1784c91122a3c56694a4, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_None;
        assert(Nuitka_Cell_GET(var_extra) == NULL);
        Py_INCREF(tmp_assign_source_14);
        PyCell_SET(var_extra, tmp_assign_source_14);

    }
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 82;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame) frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oocoooococoooo";
    goto try_except_handler_6;
    branch_end_3:;
    goto try_end_4;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[23];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[24];
        tmp_level_value_2 = mod_consts[3];
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 87;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[25],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[25]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        assert(var_GetRecordInfoFromGuids == NULL);
        var_GetRecordInfoFromGuids = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(var_GetRecordInfoFromGuids);
        tmp_dircall_arg1_1 = var_GetRecordInfoFromGuids;
        if (var_guids == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }

        tmp_dircall_arg2_1 = var_guids;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_16 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_extra);
            PyCell_SET(var_extra, tmp_assign_source_16);
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(Nuitka_Cell_GET(var_VT_RECORD));
        tmp_assign_source_17 = Nuitka_Cell_GET(var_VT_RECORD);
        assert(var_vartype == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_vartype = tmp_assign_source_17;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_issubclass_cls_2;
        PyObject *tmp_issubclass_classes_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_itemtype);
        tmp_issubclass_cls_2 = par_itemtype;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_IDispatch);
        tmp_args_element_value_5 = var_IDispatch;
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 90;
        tmp_issubclass_classes_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_5);
        if (tmp_issubclass_classes_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
        Py_DECREF(tmp_issubclass_classes_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(var_VT_DISPATCH);
        tmp_assign_source_18 = var_VT_DISPATCH;
        assert(var_vartype == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_vartype = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_7;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_itemtype);
        tmp_expression_value_7 = par_itemtype;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[28]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 92;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        assert(Nuitka_Cell_GET(var_extra) == NULL);
        PyCell_SET(var_extra, tmp_assign_source_19);

    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_issubclass_cls_3;
        PyObject *tmp_issubclass_classes_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_itemtype);
        tmp_issubclass_cls_3 = par_itemtype;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 93;
        tmp_issubclass_classes_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_7);
        if (tmp_issubclass_classes_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_3, tmp_issubclass_classes_3);
        Py_DECREF(tmp_issubclass_classes_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(var_VT_UNKNOWN);
        tmp_assign_source_20 = var_VT_UNKNOWN;
        assert(var_vartype == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_vartype = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_8;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_itemtype);
        tmp_expression_value_8 = par_itemtype;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[28]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 95;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_4;
        }
        assert(Nuitka_Cell_GET(var_extra) == NULL);
        PyCell_SET(var_extra, tmp_assign_source_21);

    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        CHECK_OBJECT(par_itemtype);
        tmp_make_exception_arg_1 = par_itemtype;
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 97;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 97;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oocoooococoooo";
        goto try_except_handler_4;
    }
    branch_end_6:;
    branch_end_5:;
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 77;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame) frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oocoooococoooo";
    goto try_except_handler_4;
    branch_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[30];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_22 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
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
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_9 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[3];
        tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_2, 0);
        if (tmp_type_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_2);
        Py_DECREF(tmp_type_arg_2);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
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


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_10 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_10, mod_consts[31]);
        tmp_condition_result_8 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_11 = tmp_class_creation_1__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[31]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        tmp_tuple_element_2 = mod_consts[32];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 100;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_12 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[33]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[34];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[20];
        tmp_getattr_default_1 = mod_consts[35];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_3 = tmp_class_creation_1__prepared;
            tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_value_13 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[20]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "oocoooococoooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_1;
        exception_lineno = 100;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oocoooococoooo";
        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_sa_type));
        tmp_args_element_value_10 = Nuitka_Cell_GET(var_sa_type);
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 99;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 99;
        tmp_called_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[39];
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_0057727a6b7dd51e0c242991643973d6_2)) {
            Py_XDECREF(cache_frame_0057727a6b7dd51e0c242991643973d6_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0057727a6b7dd51e0c242991643973d6_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0057727a6b7dd51e0c242991643973d6_2 = MAKE_CLASS_FRAME(codeobj_0057727a6b7dd51e0c242991643973d6, module_comtypes$safearray, NULL, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0057727a6b7dd51e0c242991643973d6_2->m_type_description == NULL);
        frame_0057727a6b7dd51e0c242991643973d6_2 = cache_frame_0057727a6b7dd51e0c242991643973d6_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0057727a6b7dd51e0c242991643973d6_2);
        assert(Py_REFCNT(frame_0057727a6b7dd51e0c242991643973d6_2) == 2);

        // Framed code:
        tmp_dictset_value = PyObject_GetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[41]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                CHECK_OBJECT(par_itemtype);
                tmp_dictset_value = par_itemtype;
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_2;
            }
        }

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "ooo";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[43]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                CHECK_OBJECT(var_vartype);
                tmp_dictset_value = var_vartype;
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_2;
            }
        }

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[44], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_2 = "ooo";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_2 = "ooo";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_defaults_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_defaults_2;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_res = MAPPING_HAS_ITEM(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[46]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_10 = PyObject_GetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[46]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 106;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = mod_consts[47];
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = var_VT_RECORD;
            Py_INCREF(tmp_closure_1[0]);

            tmp_args_element_value_12 = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__1_create(tmp_defaults_1, tmp_closure_1);

            frame_0057727a6b7dd51e0c242991643973d6_2->m_frame.f_lineno = 106;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_defaults_2 = mod_consts[47];
            Py_INCREF(tmp_defaults_2);

            tmp_closure_2[0] = var_VT_RECORD;
            Py_INCREF(tmp_closure_2[0]);

            tmp_classmethod_arg_1 = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__1_create(tmp_defaults_2, tmp_closure_2);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[49], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_defaults_3;
            struct Nuitka_CellObject *tmp_closure_3[1];
            PyObject *tmp_classmethod_arg_2;
            PyObject *tmp_defaults_4;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_res = MAPPING_HAS_ITEM(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[46]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_11 = PyObject_GetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[46]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 154;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
            tmp_defaults_3 = mod_consts[51];
            Py_INCREF(tmp_defaults_3);

            tmp_closure_3[0] = var_VT_RECORD;
            Py_INCREF(tmp_closure_3[0]);

            tmp_args_element_value_13 = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__2_create_from_ndarray(tmp_defaults_3, tmp_closure_3);

            frame_0057727a6b7dd51e0c242991643973d6_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_defaults_4 = mod_consts[51];
            Py_INCREF(tmp_defaults_4);

            tmp_closure_4[0] = var_VT_RECORD;
            Py_INCREF(tmp_closure_4[0]);

            tmp_classmethod_arg_2 = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__2_create_from_ndarray(tmp_defaults_4, tmp_closure_4);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[52], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_14;
            struct Nuitka_CellObject *tmp_closure_5[1];
            PyObject *tmp_classmethod_arg_3;
            struct Nuitka_CellObject *tmp_closure_6[1];
            tmp_res = MAPPING_HAS_ITEM(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[46]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_12 = PyObject_GetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[46]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 205;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }

            tmp_closure_5[0] = var_extra;
            Py_INCREF(tmp_closure_5[0]);

            tmp_args_element_value_14 = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__3_from_param(tmp_closure_5);

            frame_0057727a6b7dd51e0c242991643973d6_2->m_frame.f_lineno = 205;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;

            tmp_closure_6[0] = var_extra;
            Py_INCREF(tmp_closure_6[0]);

            tmp_classmethod_arg_3 = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__3_from_param(tmp_closure_6);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__4___getitem__();

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[33], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_2 = "ooo";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__5___setitem__();

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_2 = "ooo";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__6___ctypes_from_outparam__();

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_2 = "ooo";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_14;
            tmp_expression_value_14 = PyObject_GetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[16]);

            if (tmp_expression_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_expression_value_14 == NULL)) {
                        tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_expression_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 227;
                        type_description_2 = "ooo";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[61]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
            tmp_defaults_5 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_5, 0, tmp_tuple_element_4);


            tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__7___del__(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "ooo";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__8__get_size();

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[65], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_2 = "ooo";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__9_unpack();

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[68], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_2 = "ooo";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw();

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[71], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_2 = "ooo";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__11__get_row();

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[73], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_2 = "ooo";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0057727a6b7dd51e0c242991643973d6_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0057727a6b7dd51e0c242991643973d6_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0057727a6b7dd51e0c242991643973d6_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0057727a6b7dd51e0c242991643973d6_2,
            type_description_2,
            outline_0_var___class__,
            par_itemtype,
            var_vartype
        );


        // Release cached frame if used for exception.
        if (frame_0057727a6b7dd51e0c242991643973d6_2 == cache_frame_0057727a6b7dd51e0c242991643973d6_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0057727a6b7dd51e0c242991643973d6_2);
            cache_frame_0057727a6b7dd51e0c242991643973d6_2 = NULL;
        }

        assertFrameObject(frame_0057727a6b7dd51e0c242991643973d6_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oocoooococoooo";
        goto try_except_handler_9;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_4 = mod_consts[30];
            tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "oocoooococoooo";
                goto try_except_handler_9;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_13 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[32];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 100;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "oocoooococoooo";
                goto try_except_handler_9;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_args_element_value_11 = outline_0_var___class__;
        Py_INCREF(tmp_args_element_value_11);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100);
        locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100);
        locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_8:;
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
        exception_lineno = 100;
        goto try_except_handler_7;
        outline_result_1:;
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 99;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_7;
        }
        assert(var__ == NULL);
        var__ = tmp_assign_source_27;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

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
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = mod_consts[30];
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_29 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_14 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_15 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[3];
        tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_3, 0);
        if (tmp_type_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_4);
        Py_DECREF(tmp_type_arg_4);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_16 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[31]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_17 = tmp_class_creation_2__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[31]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        tmp_tuple_element_6 = mod_consts[76];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 354;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_18 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_18, mod_consts[33]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[34];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[20];
        tmp_getattr_default_2 = mod_consts[35];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_5;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_5 = tmp_class_creation_2__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[20]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "oocoooococoooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_2;
        exception_lineno = 354;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oocoooococoooo";
        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_sa_type));
        tmp_args_element_value_17 = Nuitka_Cell_GET(var_sa_type);
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 353;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_17);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 353;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 353;
        tmp_called_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_12;
        }
        if (isFrameUnusable(cache_frame_3cb6c543872ca2751ad12a2361fe8793_3)) {
            Py_XDECREF(cache_frame_3cb6c543872ca2751ad12a2361fe8793_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3cb6c543872ca2751ad12a2361fe8793_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3cb6c543872ca2751ad12a2361fe8793_3 = MAKE_CLASS_FRAME(codeobj_3cb6c543872ca2751ad12a2361fe8793, module_comtypes$safearray, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_3cb6c543872ca2751ad12a2361fe8793_3->m_type_description == NULL);
        frame_3cb6c543872ca2751ad12a2361fe8793_3 = cache_frame_3cb6c543872ca2751ad12a2361fe8793_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3cb6c543872ca2751ad12a2361fe8793_3);
        assert(Py_REFCNT(frame_3cb6c543872ca2751ad12a2361fe8793_3) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_19;
            struct Nuitka_CellObject *tmp_closure_7[1];
            PyObject *tmp_classmethod_arg_4;
            struct Nuitka_CellObject *tmp_closure_8[1];
            tmp_res = MAPPING_HAS_ITEM(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354, mod_consts[46]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_19 = PyObject_GetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354, mod_consts[46]);

            if (unlikely(tmp_called_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            tmp_closure_7[0] = var_extra;
            Py_INCREF(tmp_closure_7[0]);

            tmp_args_element_value_19 = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__12_from_param(tmp_closure_7);

            frame_3cb6c543872ca2751ad12a2361fe8793_3->m_frame.f_lineno = 356;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;

            tmp_closure_8[0] = var_extra;
            Py_INCREF(tmp_closure_8[0]);

            tmp_classmethod_arg_4 = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__12_from_param(tmp_closure_8);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_4);
            Py_DECREF(tmp_classmethod_arg_4);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            struct Nuitka_CellObject *tmp_closure_9[2];

            tmp_closure_9[0] = var_extra;
            Py_INCREF(tmp_closure_9[0]);
            tmp_closure_9[1] = var_sa_type;
            Py_INCREF(tmp_closure_9[1]);

            tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__13___setitem__(tmp_closure_9);

            tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3cb6c543872ca2751ad12a2361fe8793_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3cb6c543872ca2751ad12a2361fe8793_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3cb6c543872ca2751ad12a2361fe8793_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3cb6c543872ca2751ad12a2361fe8793_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_3cb6c543872ca2751ad12a2361fe8793_3 == cache_frame_3cb6c543872ca2751ad12a2361fe8793_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_3cb6c543872ca2751ad12a2361fe8793_3);
            cache_frame_3cb6c543872ca2751ad12a2361fe8793_3 = NULL;
        }

        assertFrameObject(frame_3cb6c543872ca2751ad12a2361fe8793_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oocoooococoooo";
        goto try_except_handler_12;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_2__bases;
            tmp_cmp_expr_right_5 = mod_consts[30];
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "oocoooococoooo";
                goto try_except_handler_12;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_20 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[76];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 354;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "oocoooococoooo";
                goto try_except_handler_12;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_args_element_value_18 = outline_1_var___class__;
        Py_INCREF(tmp_args_element_value_18);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354);
        locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354);
        locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_11:;
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
        exception_lineno = 354;
        goto try_except_handler_10;
        outline_result_2:;
        frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame.f_lineno = 353;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oocoooococoooo";
            goto try_except_handler_10;
        }
        assert(var___ == NULL);
        var___ = tmp_assign_source_34;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_11a6f7ed8c0d1784c91122a3c56694a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_11a6f7ed8c0d1784c91122a3c56694a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_11a6f7ed8c0d1784c91122a3c56694a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_11a6f7ed8c0d1784c91122a3c56694a4,
        type_description_1,
        par_itemtype,
        var__ctype_to_vartype,
        var_VT_RECORD,
        var_VT_UNKNOWN,
        var_IDispatch,
        var_VT_DISPATCH,
        var_meta,
        var_sa_type,
        var_vartype,
        var_extra,
        var_guids,
        var_GetRecordInfoFromGuids,
        var__,
        var___
    );


    // Release cached frame if used for exception.
    if (frame_11a6f7ed8c0d1784c91122a3c56694a4 == cache_frame_11a6f7ed8c0d1784c91122a3c56694a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_11a6f7ed8c0d1784c91122a3c56694a4);
        cache_frame_11a6f7ed8c0d1784c91122a3c56694a4 = NULL;
    }

    assertFrameObject(frame_11a6f7ed8c0d1784c91122a3c56694a4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
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
    CHECK_OBJECT(Nuitka_Cell_GET(var_sa_type));
    tmp_return_value = Nuitka_Cell_GET(var_sa_type);
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__ctype_to_vartype);
    Py_DECREF(var__ctype_to_vartype);
    var__ctype_to_vartype = NULL;
    CHECK_OBJECT(var_VT_RECORD);
    Py_DECREF(var_VT_RECORD);
    var_VT_RECORD = NULL;
    Py_XDECREF(var_VT_UNKNOWN);
    var_VT_UNKNOWN = NULL;
    Py_XDECREF(var_IDispatch);
    var_IDispatch = NULL;
    Py_XDECREF(var_VT_DISPATCH);
    var_VT_DISPATCH = NULL;
    CHECK_OBJECT(var_meta);
    Py_DECREF(var_meta);
    var_meta = NULL;
    CHECK_OBJECT(var_sa_type);
    Py_DECREF(var_sa_type);
    var_sa_type = NULL;
    CHECK_OBJECT(var_vartype);
    Py_DECREF(var_vartype);
    var_vartype = NULL;
    CHECK_OBJECT(var_extra);
    Py_DECREF(var_extra);
    var_extra = NULL;
    Py_XDECREF(var_guids);
    var_guids = NULL;
    Py_XDECREF(var_GetRecordInfoFromGuids);
    var_GetRecordInfoFromGuids = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    CHECK_OBJECT(var___);
    Py_DECREF(var___);
    var___ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var__ctype_to_vartype);
    var__ctype_to_vartype = NULL;
    CHECK_OBJECT(var_VT_RECORD);
    Py_DECREF(var_VT_RECORD);
    var_VT_RECORD = NULL;
    Py_XDECREF(var_VT_UNKNOWN);
    var_VT_UNKNOWN = NULL;
    Py_XDECREF(var_IDispatch);
    var_IDispatch = NULL;
    Py_XDECREF(var_VT_DISPATCH);
    var_VT_DISPATCH = NULL;
    Py_XDECREF(var_meta);
    var_meta = NULL;
    CHECK_OBJECT(var_sa_type);
    Py_DECREF(var_sa_type);
    var_sa_type = NULL;
    Py_XDECREF(var_vartype);
    var_vartype = NULL;
    CHECK_OBJECT(var_extra);
    Py_DECREF(var_extra);
    var_extra = NULL;
    Py_XDECREF(var_guids);
    var_guids = NULL;
    Py_XDECREF(var_GetRecordInfoFromGuids);
    var_GetRecordInfoFromGuids = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    Py_XDECREF(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100);

    Py_XDECREF(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354);

    CHECK_OBJECT(par_itemtype);
    Py_DECREF(par_itemtype);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__1___100);

    Py_XDECREF(locals_comtypes$safearray$$$function__5__make_safearray_type$$$class__2____354);

    CHECK_OBJECT(par_itemtype);
    Py_DECREF(par_itemtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__1_create(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_extra = python_pars[2];
    PyObject *var_pa = NULL;
    PyObject *var_ptr = NULL;
    PyObject *var_addr = NULL;
    PyObject *var_n = NULL;
    PyObject *var_nbytes = NULL;
    PyObject *var_index = NULL;
    PyObject *var_item = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a5ad8f493dc08bd42e9367df4953414e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
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
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_a5ad8f493dc08bd42e9367df4953414e = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a5ad8f493dc08bd42e9367df4953414e)) {
        Py_XDECREF(cache_frame_a5ad8f493dc08bd42e9367df4953414e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5ad8f493dc08bd42e9367df4953414e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5ad8f493dc08bd42e9367df4953414e = MAKE_FUNCTION_FRAME(codeobj_a5ad8f493dc08bd42e9367df4953414e, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a5ad8f493dc08bd42e9367df4953414e->m_type_description == NULL);
    frame_a5ad8f493dc08bd42e9367df4953414e = cache_frame_a5ad8f493dc08bd42e9367df4953414e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a5ad8f493dc08bd42e9367df4953414e);
    assert(Py_REFCNT(frame_a5ad8f493dc08bd42e9367df4953414e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 116;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[81], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 116;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_cls);
        tmp_called_instance_2 = par_cls;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        CHECK_OBJECT(par_extra);
        tmp_args_element_value_3 = par_extra;
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[52],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 127;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[3];
        CHECK_OBJECT(par_value);
        tmp_len_arg_1 = par_value;
        tmp_args_element_value_6 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 129;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_extra);
        tmp_args_element_value_7 = par_extra;
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_pa == NULL);
        var_pa = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_pa);
        tmp_operand_value_1 = var_pa;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooc";
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
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_3 = par_cls;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[44]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_extra);
        tmp_cmp_expr_left_2 = par_extra;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[83];
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 133;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 133;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_raise_type_2;
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 135;
        tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(PyExc_MemoryError);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 135;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pa);
        tmp_args_element_value_8 = var_pa;
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_9 = par_cls;
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pa;
            assert(old != NULL);
            var_pa = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_4 = par_cls;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[42]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 140;
        tmp_called_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 140;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_ptr == NULL);
        var_ptr = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[85]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pa);
        tmp_args_element_value_11 = var_pa;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 141;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ptr);
        tmp_args_element_value_13 = var_ptr;
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 141;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_13);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 141;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[87]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_value);
        tmp_called_instance_3 = par_value;
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 144;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[88]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_3;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "ooooooooooc";
            exception_lineno = 144;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "ooooooooooc";
            exception_lineno = 144;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
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

                    type_description_1 = "ooooooooooc";
                    exception_lineno = 144;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[89];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooc";
            exception_lineno = 144;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_addr == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_addr = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_n == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_n = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_value);
        tmp_len_arg_2 = par_value;
        tmp_mult_expr_left_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 145;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_7 = par_cls;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[42]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 145;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 145;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 145;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        assert(var_nbytes == NULL);
        var_nbytes = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ptr);
        tmp_args_element_value_15 = var_ptr;
        CHECK_OBJECT(var_addr);
        tmp_args_element_value_16 = var_addr;
        CHECK_OBJECT(var_nbytes);
        tmp_args_element_value_17 = var_nbytes;
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_9 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_18 = par_value;
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 148;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_18);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_2;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooc";
                exception_lineno = 148;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
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


            type_description_1 = "ooooooooooc";
            exception_lineno = 148;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
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


            type_description_1 = "ooooooooooc";
            exception_lineno = 148;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
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

                    type_description_1 = "ooooooooooc";
                    exception_lineno = 148;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[89];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooc";
            exception_lineno = 148;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_15;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_item;
            var_item = tmp_assign_source_16;
            Py_INCREF(var_item);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_item);
        tmp_ass_subvalue_1 = var_item;
        if (var_ptr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_1 = var_ptr;
        CHECK_OBJECT(var_index);
        tmp_ass_subscript_1 = var_index;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_5;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 148;
        type_description_1 = "ooooooooooc";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    branch_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_a5ad8f493dc08bd42e9367df4953414e, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_a5ad8f493dc08bd42e9367df4953414e, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_19;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_pa);
        tmp_args_element_value_19 = var_pa;
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 151;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[93], tmp_args_element_value_19);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooc";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_4);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 142;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a5ad8f493dc08bd42e9367df4953414e->m_frame) frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooc";
    goto try_except_handler_8;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_20;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pa);
        tmp_args_element_value_20 = var_pa;
        frame_a5ad8f493dc08bd42e9367df4953414e->m_frame.f_lineno = 151;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[93], tmp_args_element_value_20);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
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
        exception_tb = MAKE_TRACEBACK(frame_a5ad8f493dc08bd42e9367df4953414e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5ad8f493dc08bd42e9367df4953414e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5ad8f493dc08bd42e9367df4953414e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5ad8f493dc08bd42e9367df4953414e,
        type_description_1,
        par_cls,
        par_value,
        par_extra,
        var_pa,
        var_ptr,
        var_addr,
        var_n,
        var_nbytes,
        var_index,
        var_item,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a5ad8f493dc08bd42e9367df4953414e == cache_frame_a5ad8f493dc08bd42e9367df4953414e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a5ad8f493dc08bd42e9367df4953414e);
        cache_frame_a5ad8f493dc08bd42e9367df4953414e = NULL;
    }

    assertFrameObject(frame_a5ad8f493dc08bd42e9367df4953414e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_pa);
    tmp_return_value = var_pa;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_pa);
    var_pa = NULL;
    Py_XDECREF(var_ptr);
    var_ptr = NULL;
    Py_XDECREF(var_addr);
    var_addr = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_nbytes);
    var_nbytes = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_pa);
    var_pa = NULL;
    Py_XDECREF(var_ptr);
    var_ptr = NULL;
    Py_XDECREF(var_addr);
    var_addr = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_nbytes);
    var_nbytes = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__2_create_from_ndarray(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_extra = python_pars[2];
    PyObject *par_lBound = python_pars[3];
    PyObject *var_VARIANT = NULL;
    PyObject *var_ai = NULL;
    PyObject *var_rgsa = NULL;
    PyObject *var_nitems = NULL;
    PyObject *var_i = NULL;
    PyObject *var_d = NULL;
    PyObject *var_pa = NULL;
    PyObject *var_ptr = NULL;
    PyObject *var_nbytes = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1228808ccedba376743b0ca7bf94c6f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_1228808ccedba376743b0ca7bf94c6f5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1228808ccedba376743b0ca7bf94c6f5)) {
        Py_XDECREF(cache_frame_1228808ccedba376743b0ca7bf94c6f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1228808ccedba376743b0ca7bf94c6f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1228808ccedba376743b0ca7bf94c6f5 = MAKE_FUNCTION_FRAME(codeobj_1228808ccedba376743b0ca7bf94c6f5, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1228808ccedba376743b0ca7bf94c6f5->m_type_description == NULL);
    frame_1228808ccedba376743b0ca7bf94c6f5 = cache_frame_1228808ccedba376743b0ca7bf94c6f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1228808ccedba376743b0ca7bf94c6f5);
    assert(Py_REFCNT(frame_1228808ccedba376743b0ca7bf94c6f5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[94];
        tmp_level_value_1 = mod_consts[3];
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 156;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[95],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_VARIANT == NULL);
        var_VARIANT = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_VARIANT);
        tmp_cmp_expr_right_1 = var_VARIANT;
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[96]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[97]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 160;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_value);
        tmp_expression_value_4 = par_value;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[99]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_ai == NULL);
        var_ai = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_ai);
        tmp_expression_value_5 = var_ai;
        tmp_subscript_value_1 = mod_consts[100];
        tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[101];
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[102];
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 164;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 164;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_6 = par_cls;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[42]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 165;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[103]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 165;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ai);
        tmp_expression_value_9 = var_ai;
        tmp_subscript_value_3 = mod_consts[104];
        tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_3);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);
            Py_DECREF(tmp_expression_value_7);

            exception_lineno = 165;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_7);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 165;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[105];
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 166;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 166;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    branch_end_1:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_value;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[107]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[108]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[87]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (par_value == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_value;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[110]);
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 170;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            par_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[111]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (par_value == NULL) {
            Py_DECREF(tmp_mult_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = par_value;
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[112]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 177;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 177;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_rgsa == NULL);
        var_rgsa = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[2];
        assert(var_nitems == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_nitems = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_15;
        tmp_called_value_4 = (PyObject *)&PyEnum_Type;
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[113]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 179;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooc";
                exception_lineno = 179;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooc";
            exception_lineno = 179;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooc";
            exception_lineno = 179;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
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

                    type_description_1 = "oooooooooooooc";
                    exception_lineno = 179;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[89];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooc";
            exception_lineno = 179;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_12;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_13;
            Py_INCREF(var_d);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_imult_expr_left_1;
        PyObject *tmp_imult_expr_right_1;
        if (var_nitems == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_imult_expr_left_1 = var_nitems;
        CHECK_OBJECT(var_d);
        tmp_imult_expr_right_1 = var_d;
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = tmp_imult_expr_left_1;
        var_nitems = tmp_assign_source_14;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_d);
        tmp_assattr_value_1 = var_d;
        CHECK_OBJECT(var_rgsa);
        tmp_expression_value_16 = var_rgsa;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_assattr_target_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_4);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[115], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_5;
        if (par_lBound == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_2;
        }

        tmp_assattr_value_2 = par_lBound;
        CHECK_OBJECT(var_rgsa);
        tmp_expression_value_17 = var_rgsa;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_assattr_target_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_5);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[116], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 179;
        type_description_1 = "oooooooooooooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[117]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_19 = par_cls;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[44]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 183;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (par_value == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 184;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = par_value;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[112]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 184;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rgsa);
        tmp_args_element_value_5 = var_rgsa;
        CHECK_OBJECT(par_extra);
        tmp_args_element_value_6 = par_extra;
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_pa == NULL);
        var_pa = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_pa);
        tmp_operand_value_2 = var_pa;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_21 = par_cls;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[44]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_5 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_extra);
        tmp_cmp_expr_left_6 = par_extra;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_7 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[83];
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 189;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 189;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        PyObject *tmp_raise_type_4;
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 191;
        tmp_raise_type_4 = CALL_FUNCTION_NO_ARGS(PyExc_MemoryError);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 191;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pa);
        tmp_args_element_value_7 = var_pa;
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_8 = par_cls;
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pa;
            assert(old != NULL);
            var_pa = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_22;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_22 = par_cls;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[42]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 196;
        tmp_called_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 196;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_ptr == NULL);
        var_ptr = tmp_assign_source_17;
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[85]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pa);
        tmp_args_element_value_10 = var_pa;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 197;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ptr);
        tmp_args_element_value_12 = var_ptr;
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 197;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_12);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 197;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_24;
        if (var_nitems == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 199;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_5;
        }

        tmp_mult_expr_left_2 = var_nitems;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_24 = par_cls;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[42]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_5;
        }
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 199;
        tmp_mult_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_assign_source_18 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_5;
        }
        assert(var_nbytes == NULL);
        var_nbytes = tmp_assign_source_18;
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_ptr);
        tmp_args_element_value_14 = var_ptr;
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_5;
        }

        tmp_expression_value_26 = par_value;
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[118]);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[119]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_nbytes);
        tmp_args_element_value_16 = var_nbytes;
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
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
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_1228808ccedba376743b0ca7bf94c6f5, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_1228808ccedba376743b0ca7bf94c6f5, exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_17;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_pa);
        tmp_args_element_value_17 = var_pa;
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 202;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[93], tmp_args_element_value_17);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooc";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 198;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1228808ccedba376743b0ca7bf94c6f5->m_frame) frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooc";
    goto try_except_handler_6;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
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
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_18;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pa);
        tmp_args_element_value_18 = var_pa;
        frame_1228808ccedba376743b0ca7bf94c6f5->m_frame.f_lineno = 202;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[93], tmp_args_element_value_18);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1228808ccedba376743b0ca7bf94c6f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1228808ccedba376743b0ca7bf94c6f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1228808ccedba376743b0ca7bf94c6f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1228808ccedba376743b0ca7bf94c6f5,
        type_description_1,
        par_cls,
        par_value,
        par_extra,
        par_lBound,
        var_VARIANT,
        var_ai,
        var_rgsa,
        var_nitems,
        var_i,
        var_d,
        var_pa,
        var_ptr,
        var_nbytes,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1228808ccedba376743b0ca7bf94c6f5 == cache_frame_1228808ccedba376743b0ca7bf94c6f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1228808ccedba376743b0ca7bf94c6f5);
        cache_frame_1228808ccedba376743b0ca7bf94c6f5 = NULL;
    }

    assertFrameObject(frame_1228808ccedba376743b0ca7bf94c6f5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_pa);
    tmp_return_value = var_pa;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_value);
    par_value = NULL;
    CHECK_OBJECT(var_VARIANT);
    Py_DECREF(var_VARIANT);
    var_VARIANT = NULL;
    Py_XDECREF(var_ai);
    var_ai = NULL;
    CHECK_OBJECT(var_rgsa);
    Py_DECREF(var_rgsa);
    var_rgsa = NULL;
    Py_XDECREF(var_nitems);
    var_nitems = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    CHECK_OBJECT(var_pa);
    Py_DECREF(var_pa);
    var_pa = NULL;
    CHECK_OBJECT(var_ptr);
    Py_DECREF(var_ptr);
    var_ptr = NULL;
    CHECK_OBJECT(var_nbytes);
    Py_DECREF(var_nbytes);
    var_nbytes = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_VARIANT);
    var_VARIANT = NULL;
    Py_XDECREF(var_ai);
    var_ai = NULL;
    Py_XDECREF(var_rgsa);
    var_rgsa = NULL;
    Py_XDECREF(var_nitems);
    var_nitems = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_pa);
    var_pa = NULL;
    Py_XDECREF(var_ptr);
    var_ptr = NULL;
    Py_XDECREF(var_nbytes);
    var_nbytes = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    CHECK_OBJECT(par_lBound);
    Py_DECREF(par_lBound);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_extra);
    Py_DECREF(par_extra);
    CHECK_OBJECT(par_lBound);
    Py_DECREF(par_lBound);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__3_from_param(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_4e0d21ded16792a9b1cf75cb54639171;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4e0d21ded16792a9b1cf75cb54639171 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4e0d21ded16792a9b1cf75cb54639171)) {
        Py_XDECREF(cache_frame_4e0d21ded16792a9b1cf75cb54639171);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e0d21ded16792a9b1cf75cb54639171 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e0d21ded16792a9b1cf75cb54639171 = MAKE_FUNCTION_FRAME(codeobj_4e0d21ded16792a9b1cf75cb54639171, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e0d21ded16792a9b1cf75cb54639171->m_type_description == NULL);
    frame_4e0d21ded16792a9b1cf75cb54639171 = cache_frame_4e0d21ded16792a9b1cf75cb54639171;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4e0d21ded16792a9b1cf75cb54639171);
    assert(Py_REFCNT(frame_4e0d21ded16792a9b1cf75cb54639171) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        CHECK_OBJECT(par_cls);
        tmp_isinstance_cls_1 = par_cls;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooc";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[49]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_4e0d21ded16792a9b1cf75cb54639171->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_value);
        tmp_assattr_target_1 = par_value;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    if (par_value == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 210;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_value;
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
        exception_tb = MAKE_TRACEBACK(frame_4e0d21ded16792a9b1cf75cb54639171, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e0d21ded16792a9b1cf75cb54639171->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e0d21ded16792a9b1cf75cb54639171, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e0d21ded16792a9b1cf75cb54639171,
        type_description_1,
        par_cls,
        par_value,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4e0d21ded16792a9b1cf75cb54639171 == cache_frame_4e0d21ded16792a9b1cf75cb54639171) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e0d21ded16792a9b1cf75cb54639171);
        cache_frame_4e0d21ded16792a9b1cf75cb54639171 = NULL;
    }

    assertFrameObject(frame_4e0d21ded16792a9b1cf75cb54639171);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_value);
    par_value = NULL;
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

    Py_XDECREF(par_value);
    par_value = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__4___getitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    struct Nuitka_FrameObject *frame_aefac7973845daf0e5029c55eac02d15;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aefac7973845daf0e5029c55eac02d15 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aefac7973845daf0e5029c55eac02d15)) {
        Py_XDECREF(cache_frame_aefac7973845daf0e5029c55eac02d15);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aefac7973845daf0e5029c55eac02d15 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aefac7973845daf0e5029c55eac02d15 = MAKE_FUNCTION_FRAME(codeobj_aefac7973845daf0e5029c55eac02d15, module_comtypes$safearray, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aefac7973845daf0e5029c55eac02d15->m_type_description == NULL);
    frame_aefac7973845daf0e5029c55eac02d15 = cache_frame_aefac7973845daf0e5029c55eac02d15;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aefac7973845daf0e5029c55eac02d15);
    assert(Py_REFCNT(frame_aefac7973845daf0e5029c55eac02d15) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_index);
        tmp_cmp_expr_left_1 = par_index;
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[121];
        frame_aefac7973845daf0e5029c55eac02d15->m_frame.f_lineno = 215;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_IndexError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 215;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_aefac7973845daf0e5029c55eac02d15->m_frame.f_lineno = 216;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[68]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aefac7973845daf0e5029c55eac02d15, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aefac7973845daf0e5029c55eac02d15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aefac7973845daf0e5029c55eac02d15, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aefac7973845daf0e5029c55eac02d15,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_aefac7973845daf0e5029c55eac02d15 == cache_frame_aefac7973845daf0e5029c55eac02d15) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aefac7973845daf0e5029c55eac02d15);
        cache_frame_aefac7973845daf0e5029c55eac02d15 = NULL;
    }

    assertFrameObject(frame_aefac7973845daf0e5029c55eac02d15);

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
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__5___setitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_c0b3f9fb4c82df75c8debbd327126daf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c0b3f9fb4c82df75c8debbd327126daf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c0b3f9fb4c82df75c8debbd327126daf)) {
        Py_XDECREF(cache_frame_c0b3f9fb4c82df75c8debbd327126daf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0b3f9fb4c82df75c8debbd327126daf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0b3f9fb4c82df75c8debbd327126daf = MAKE_FUNCTION_FRAME(codeobj_c0b3f9fb4c82df75c8debbd327126daf, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c0b3f9fb4c82df75c8debbd327126daf->m_type_description == NULL);
    frame_c0b3f9fb4c82df75c8debbd327126daf = cache_frame_c0b3f9fb4c82df75c8debbd327126daf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c0b3f9fb4c82df75c8debbd327126daf);
    assert(Py_REFCNT(frame_c0b3f9fb4c82df75c8debbd327126daf) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[122];
        frame_c0b3f9fb4c82df75c8debbd327126daf->m_frame.f_lineno = 221;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 221;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c0b3f9fb4c82df75c8debbd327126daf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0b3f9fb4c82df75c8debbd327126daf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0b3f9fb4c82df75c8debbd327126daf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0b3f9fb4c82df75c8debbd327126daf,
        type_description_1,
        par_self,
        par_index,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c0b3f9fb4c82df75c8debbd327126daf == cache_frame_c0b3f9fb4c82df75c8debbd327126daf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0b3f9fb4c82df75c8debbd327126daf);
        cache_frame_c0b3f9fb4c82df75c8debbd327126daf = NULL;
    }

    assertFrameObject(frame_c0b3f9fb4c82df75c8debbd327126daf);

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
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__6___ctypes_from_outparam__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_273d0c48e715984a0411a68b72b7b66a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_273d0c48e715984a0411a68b72b7b66a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_273d0c48e715984a0411a68b72b7b66a)) {
        Py_XDECREF(cache_frame_273d0c48e715984a0411a68b72b7b66a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_273d0c48e715984a0411a68b72b7b66a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_273d0c48e715984a0411a68b72b7b66a = MAKE_FUNCTION_FRAME(codeobj_273d0c48e715984a0411a68b72b7b66a, module_comtypes$safearray, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_273d0c48e715984a0411a68b72b7b66a->m_type_description == NULL);
    frame_273d0c48e715984a0411a68b72b7b66a = cache_frame_273d0c48e715984a0411a68b72b7b66a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_273d0c48e715984a0411a68b72b7b66a);
    assert(Py_REFCNT(frame_273d0c48e715984a0411a68b72b7b66a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
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
        exception_tb = MAKE_TRACEBACK(frame_273d0c48e715984a0411a68b72b7b66a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_273d0c48e715984a0411a68b72b7b66a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_273d0c48e715984a0411a68b72b7b66a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_273d0c48e715984a0411a68b72b7b66a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_273d0c48e715984a0411a68b72b7b66a == cache_frame_273d0c48e715984a0411a68b72b7b66a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_273d0c48e715984a0411a68b72b7b66a);
        cache_frame_273d0c48e715984a0411a68b72b7b66a = NULL;
    }

    assertFrameObject(frame_273d0c48e715984a0411a68b72b7b66a);

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


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__7___del__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par__SafeArrayDestroy = python_pars[1];
    struct Nuitka_FrameObject *frame_1351823356555c0b9e3554156ca644db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1351823356555c0b9e3554156ca644db = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1351823356555c0b9e3554156ca644db)) {
        Py_XDECREF(cache_frame_1351823356555c0b9e3554156ca644db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1351823356555c0b9e3554156ca644db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1351823356555c0b9e3554156ca644db = MAKE_FUNCTION_FRAME(codeobj_1351823356555c0b9e3554156ca644db, module_comtypes$safearray, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1351823356555c0b9e3554156ca644db->m_type_description == NULL);
    frame_1351823356555c0b9e3554156ca644db = cache_frame_1351823356555c0b9e3554156ca644db;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1351823356555c0b9e3554156ca644db);
    assert(Py_REFCNT(frame_1351823356555c0b9e3554156ca644db) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[45]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 228;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par__SafeArrayDestroy);
        tmp_called_value_1 = par__SafeArrayDestroy;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_1351823356555c0b9e3554156ca644db->m_frame.f_lineno = 229;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1351823356555c0b9e3554156ca644db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1351823356555c0b9e3554156ca644db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1351823356555c0b9e3554156ca644db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1351823356555c0b9e3554156ca644db,
        type_description_1,
        par_self,
        par__SafeArrayDestroy
    );


    // Release cached frame if used for exception.
    if (frame_1351823356555c0b9e3554156ca644db == cache_frame_1351823356555c0b9e3554156ca644db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1351823356555c0b9e3554156ca644db);
        cache_frame_1351823356555c0b9e3554156ca644db = NULL;
    }

    assertFrameObject(frame_1351823356555c0b9e3554156ca644db);

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
    CHECK_OBJECT(par__SafeArrayDestroy);
    Py_DECREF(par__SafeArrayDestroy);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par__SafeArrayDestroy);
    Py_DECREF(par__SafeArrayDestroy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__8__get_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *var_ub = NULL;
    PyObject *var_lb = NULL;
    struct Nuitka_FrameObject *frame_d90aedd58f44c36207b8738fb47e9708;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d90aedd58f44c36207b8738fb47e9708 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d90aedd58f44c36207b8738fb47e9708)) {
        Py_XDECREF(cache_frame_d90aedd58f44c36207b8738fb47e9708);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d90aedd58f44c36207b8738fb47e9708 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d90aedd58f44c36207b8738fb47e9708 = MAKE_FUNCTION_FRAME(codeobj_d90aedd58f44c36207b8738fb47e9708, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d90aedd58f44c36207b8738fb47e9708->m_type_description == NULL);
    frame_d90aedd58f44c36207b8738fb47e9708 = cache_frame_d90aedd58f44c36207b8738fb47e9708;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d90aedd58f44c36207b8738fb47e9708);
    assert(Py_REFCNT(frame_d90aedd58f44c36207b8738fb47e9708) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_2 = par_dim;
        frame_d90aedd58f44c36207b8738fb47e9708->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_add_expr_left_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[123],
                call_args
            );
        }

        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[2];
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ub == NULL);
        var_ub = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_4 = par_dim;
        frame_d90aedd58f44c36207b8738fb47e9708->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[124],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_lb == NULL);
        var_lb = tmp_assign_source_2;
    }
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_ub);
        tmp_sub_expr_left_1 = var_ub;
        CHECK_OBJECT(var_lb);
        tmp_sub_expr_right_1 = var_lb;
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
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
        exception_tb = MAKE_TRACEBACK(frame_d90aedd58f44c36207b8738fb47e9708, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d90aedd58f44c36207b8738fb47e9708->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d90aedd58f44c36207b8738fb47e9708, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d90aedd58f44c36207b8738fb47e9708,
        type_description_1,
        par_self,
        par_dim,
        var_ub,
        var_lb
    );


    // Release cached frame if used for exception.
    if (frame_d90aedd58f44c36207b8738fb47e9708 == cache_frame_d90aedd58f44c36207b8738fb47e9708) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d90aedd58f44c36207b8738fb47e9708);
        cache_frame_d90aedd58f44c36207b8738fb47e9708 = NULL;
    }

    assertFrameObject(frame_d90aedd58f44c36207b8738fb47e9708);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ub);
    Py_DECREF(var_ub);
    var_ub = NULL;
    CHECK_OBJECT(var_lb);
    Py_DECREF(var_lb);
    var_lb = NULL;
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

    Py_XDECREF(var_ub);
    var_ub = NULL;
    Py_XDECREF(var_lb);
    var_lb = NULL;
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
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__9_unpack(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_dim = NULL;
    PyObject *var_numpy = NULL;
    PyObject *var_num_elements = NULL;
    PyObject *var_result = NULL;
    PyObject *var_rows = NULL;
    PyObject *var_cols = NULL;
    PyObject *var_lowerbounds = NULL;
    PyObject *var_indexes = NULL;
    PyObject *var_upperbounds = NULL;
    PyObject *var_row = NULL;
    PyObject *outline_0_var_r = NULL;
    PyObject *outline_1_var_d = NULL;
    PyObject *outline_2_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ec21a60580e888f52bbbd3c8395c869a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_baec27a4a47a286b46dca39d470368ea_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_baec27a4a47a286b46dca39d470368ea_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_FrameObject *frame_ba1d96b4ee7f94b65d86b5b0c6661971_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_ba1d96b4ee7f94b65d86b5b0c6661971_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_ec21a60580e888f52bbbd3c8395c869a = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ec21a60580e888f52bbbd3c8395c869a)) {
        Py_XDECREF(cache_frame_ec21a60580e888f52bbbd3c8395c869a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec21a60580e888f52bbbd3c8395c869a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec21a60580e888f52bbbd3c8395c869a = MAKE_FUNCTION_FRAME(codeobj_ec21a60580e888f52bbbd3c8395c869a, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec21a60580e888f52bbbd3c8395c869a->m_type_description == NULL);
    frame_ec21a60580e888f52bbbd3c8395c869a = cache_frame_ec21a60580e888f52bbbd3c8395c869a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ec21a60580e888f52bbbd3c8395c869a);
    assert(Py_REFCNT(frame_ec21a60580e888f52bbbd3c8395c869a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 239;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[125], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim == NULL);
        var_dim = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_dim);
        tmp_cmp_expr_left_1 = var_dim;
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[109];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 243;
        tmp_assign_source_2 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_numpy == NULL);
        var_numpy = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_numpy);
        tmp_called_instance_2 = var_numpy;
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 244;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[87]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    tmp_return_value = mod_consts[127];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_dim);
        tmp_cmp_expr_left_2 = var_dim;
        tmp_cmp_expr_right_2 = mod_consts[2];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 247;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[65],
            PyTuple_GET_ITEM(mod_consts[128], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_elements == NULL);
        var_num_elements = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_num_elements);
        tmp_args_element_value_2 = var_num_elements;
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 248;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[71], tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_mvar_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[109];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[3];
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 250;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_numpy == NULL);
        var_numpy = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_numpy);
        tmp_called_instance_5 = var_numpy;
        CHECK_OBJECT(var_result);
        tmp_args_element_value_3 = var_result;
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 251;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[129], tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(var_result);
        tmp_tuple_arg_1 = var_result;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_dim);
        tmp_cmp_expr_left_3 = var_dim;
        tmp_cmp_expr_right_3 = mod_consts[130];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 255;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[65],
            PyTuple_GET_ITEM(mod_consts[128], 0)
        );

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_7;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_called_instance_7 = par_self;
            frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 255;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_7,
                mod_consts[65],
                PyTuple_GET_ITEM(mod_consts[131], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 255;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 255;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
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

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 255;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[89];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooo";
            exception_lineno = 255;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert(var_rows == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_rows = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert(var_cols == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_cols = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rows);
        tmp_mult_expr_left_1 = var_rows;
        CHECK_OBJECT(var_cols);
        tmp_mult_expr_right_1 = var_cols;
        tmp_args_element_value_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 257;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 257;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_mvar_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_mvar_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[109];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[3];
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 261;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_numpy == NULL);
        var_numpy = tmp_assign_source_12;
    }
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_numpy);
        tmp_called_instance_9 = var_numpy;
        CHECK_OBJECT(var_result);
        tmp_args_element_value_5 = var_result;
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 262;
        tmp_called_instance_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[129], tmp_args_element_value_5);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cols);
        tmp_tuple_element_2 = var_cols;
        tmp_args_element_value_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_6, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_rows);
        tmp_tuple_element_2 = var_rows;
        PyTuple_SET_ITEM0(tmp_args_element_value_6, 1, tmp_tuple_element_2);
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 262;
        tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[132], tmp_args_element_value_6);
        Py_DECREF(tmp_called_instance_8);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[133]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_13;
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_1;
            CHECK_OBJECT(var_rows);
            tmp_xrange_low_1 = var_rows;
            tmp_iter_arg_2 = BUILTIN_XRANGE1(tmp_xrange_low_1);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_15;
        }
        if (isFrameUnusable(cache_frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2)) {
            Py_XDECREF(cache_frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2 = MAKE_FUNCTION_FRAME(codeobj_7a047d5a66fcff2bac3e6b7bb1c54e53, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2->m_type_description == NULL);
        frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2 = cache_frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2);
        assert(Py_REFCNT(frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_16 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 263;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_17 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_r;
                outline_0_var_r = tmp_assign_source_17;
                Py_INCREF(outline_0_var_r);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_arg_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_start_value_1;
            PyObject *tmp_stop_value_1;
            PyObject *tmp_step_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(var_result);
            tmp_expression_value_3 = var_result;
            CHECK_OBJECT(outline_0_var_r);
            tmp_start_value_1 = outline_0_var_r;
            tmp_stop_value_1 = Py_None;
            CHECK_OBJECT(var_rows);
            tmp_step_value_1 = var_rows;
            tmp_subscript_value_1 = MAKE_SLICE_OBJECT3(tmp_start_value_1, tmp_stop_value_1, tmp_step_value_1);
            assert(!(tmp_subscript_value_1 == NULL));
            tmp_tuple_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_tuple_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            tmp_append_value_1 = PySequence_Tuple(tmp_tuple_arg_2);
            Py_DECREF(tmp_tuple_arg_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_2 = "ooo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_13 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        try_except_handler_5:;
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

        goto try_return_handler_4;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2,
            type_description_2,
            outline_0_var_r,
            var_result,
            var_rows
        );


        // Release cached frame if used for exception.
        if (frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2 == cache_frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2);
            cache_frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2 = NULL;
        }

        assertFrameObject(frame_7a047d5a66fcff2bac3e6b7bb1c54e53_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_r);
        outline_0_var_r = NULL;
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

        Py_XDECREF(outline_0_var_r);
        outline_0_var_r = NULL;
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
        exception_lineno = 263;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_tuple_arg_3;
        CHECK_OBJECT(var_result);
        tmp_tuple_arg_3 = var_result;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_18;
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_xrange_low_2;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            tmp_xrange_low_2 = mod_consts[2];
            CHECK_OBJECT(var_dim);
            tmp_add_expr_left_1 = var_dim;
            tmp_add_expr_right_1 = mod_consts[2];
            tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_xrange_high_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_6;
            }
            tmp_iter_arg_3 = BUILTIN_XRANGE2(tmp_xrange_low_2, tmp_xrange_high_1);
            Py_DECREF(tmp_xrange_high_1);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_19 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_20;
        }
        if (isFrameUnusable(cache_frame_baec27a4a47a286b46dca39d470368ea_3)) {
            Py_XDECREF(cache_frame_baec27a4a47a286b46dca39d470368ea_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_baec27a4a47a286b46dca39d470368ea_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_baec27a4a47a286b46dca39d470368ea_3 = MAKE_FUNCTION_FRAME(codeobj_baec27a4a47a286b46dca39d470368ea, module_comtypes$safearray, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_baec27a4a47a286b46dca39d470368ea_3->m_type_description == NULL);
        frame_baec27a4a47a286b46dca39d470368ea_3 = cache_frame_baec27a4a47a286b46dca39d470368ea_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_baec27a4a47a286b46dca39d470368ea_3);
        assert(Py_REFCNT(frame_baec27a4a47a286b46dca39d470368ea_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_21 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 266;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_21;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_22 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_d;
                outline_1_var_d = tmp_assign_source_22;
                Py_INCREF(outline_1_var_d);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[124]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            if (par_self == NULL) {
                Py_DECREF(tmp_called_value_2);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 266;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }

            tmp_args_element_value_7 = par_self;
            CHECK_OBJECT(outline_1_var_d);
            tmp_args_element_value_8 = outline_1_var_d;
            frame_baec27a4a47a286b46dca39d470368ea_3->m_frame.f_lineno = 266;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_18 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_18);
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
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
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
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

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
            exception_tb = MAKE_TRACEBACK(frame_baec27a4a47a286b46dca39d470368ea_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_baec27a4a47a286b46dca39d470368ea_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_baec27a4a47a286b46dca39d470368ea_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_baec27a4a47a286b46dca39d470368ea_3,
            type_description_2,
            outline_1_var_d,
            par_self
        );


        // Release cached frame if used for exception.
        if (frame_baec27a4a47a286b46dca39d470368ea_3 == cache_frame_baec27a4a47a286b46dca39d470368ea_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_baec27a4a47a286b46dca39d470368ea_3);
            cache_frame_baec27a4a47a286b46dca39d470368ea_3 = NULL;
        }

        assertFrameObject(frame_baec27a4a47a286b46dca39d470368ea_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_6;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_1_var_d);
        outline_1_var_d = NULL;
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

        Py_XDECREF(outline_1_var_d);
        outline_1_var_d = NULL;
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
        exception_lineno = 266;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_lowerbounds == NULL);
        var_lowerbounds = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_dircall_arg2_1;
        tmp_mult_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_mult_expr_left_2 == NULL)) {
            tmp_mult_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dim);
        tmp_mult_expr_right_2 = var_dim;
        tmp_dircall_arg1_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lowerbounds);
        tmp_dircall_arg2_1 = var_lowerbounds;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_23 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indexes == NULL);
        var_indexes = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_xrange_low_3;
            PyObject *tmp_xrange_high_2;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            tmp_xrange_low_3 = mod_consts[2];
            CHECK_OBJECT(var_dim);
            tmp_add_expr_left_2 = var_dim;
            tmp_add_expr_right_2 = mod_consts[2];
            tmp_xrange_high_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
            if (tmp_xrange_high_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_8;
            }
            tmp_iter_arg_4 = BUILTIN_XRANGE2(tmp_xrange_low_3, tmp_xrange_high_2);
            Py_DECREF(tmp_xrange_high_2);
            if (tmp_iter_arg_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_4);
            Py_DECREF(tmp_iter_arg_4);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_8;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_26;
        }
        if (isFrameUnusable(cache_frame_ba1d96b4ee7f94b65d86b5b0c6661971_4)) {
            Py_XDECREF(cache_frame_ba1d96b4ee7f94b65d86b5b0c6661971_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ba1d96b4ee7f94b65d86b5b0c6661971_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ba1d96b4ee7f94b65d86b5b0c6661971_4 = MAKE_FUNCTION_FRAME(codeobj_ba1d96b4ee7f94b65d86b5b0c6661971, module_comtypes$safearray, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_ba1d96b4ee7f94b65d86b5b0c6661971_4->m_type_description == NULL);
        frame_ba1d96b4ee7f94b65d86b5b0c6661971_4 = cache_frame_ba1d96b4ee7f94b65d86b5b0c6661971_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ba1d96b4ee7f94b65d86b5b0c6661971_4);
        assert(Py_REFCNT(frame_ba1d96b4ee7f94b65d86b5b0c6661971_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_27 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 269;
                    goto try_except_handler_9;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_28 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_d;
                outline_2_var_d = tmp_assign_source_28;
                Py_INCREF(outline_2_var_d);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[123]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            if (par_self == NULL) {
                Py_DECREF(tmp_called_value_3);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 269;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }

            tmp_args_element_value_9 = par_self;
            CHECK_OBJECT(outline_2_var_d);
            tmp_args_element_value_10 = outline_2_var_d;
            frame_ba1d96b4ee7f94b65d86b5b0c6661971_4->m_frame.f_lineno = 269;
            {
                PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
                tmp_append_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_called_value_3);
            if (tmp_append_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_2 = "oo";
            goto try_except_handler_9;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assign_source_24 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_4;
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

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_8;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ba1d96b4ee7f94b65d86b5b0c6661971_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ba1d96b4ee7f94b65d86b5b0c6661971_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ba1d96b4ee7f94b65d86b5b0c6661971_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ba1d96b4ee7f94b65d86b5b0c6661971_4,
            type_description_2,
            outline_2_var_d,
            par_self
        );


        // Release cached frame if used for exception.
        if (frame_ba1d96b4ee7f94b65d86b5b0c6661971_4 == cache_frame_ba1d96b4ee7f94b65d86b5b0c6661971_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_ba1d96b4ee7f94b65d86b5b0c6661971_4);
            cache_frame_ba1d96b4ee7f94b65d86b5b0c6661971_4 = NULL;
        }

        assertFrameObject(frame_ba1d96b4ee7f94b65d86b5b0c6661971_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_8;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(outline_2_var_d);
        outline_2_var_d = NULL;
        goto outline_result_3;
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

        Py_XDECREF(outline_2_var_d);
        outline_2_var_d = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 269;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert(var_upperbounds == NULL);
        var_upperbounds = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = par_self;
        tmp_args_element_value_11 = mod_consts[3];
        CHECK_OBJECT(var_indexes);
        tmp_args_element_value_12 = var_indexes;
        CHECK_OBJECT(var_lowerbounds);
        tmp_args_element_value_13 = var_lowerbounds;
        CHECK_OBJECT(var_upperbounds);
        tmp_args_element_value_14 = var_upperbounds;
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 271;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_29 = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_10,
                mod_consts[73],
                call_args
            );
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_row == NULL);
        var_row = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_mvar_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_mvar_value_4);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[109];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[3];
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 273;
        tmp_assign_source_30 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_numpy == NULL);
        var_numpy = tmp_assign_source_30;
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(var_numpy);
        tmp_called_instance_11 = var_numpy;
        CHECK_OBJECT(var_row);
        tmp_args_element_value_15 = var_row;
        frame_ec21a60580e888f52bbbd3c8395c869a->m_frame.f_lineno = 274;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[129], tmp_args_element_value_15);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_7:;
    CHECK_OBJECT(var_row);
    tmp_return_value = var_row;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_5:;
    branch_end_3:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ec21a60580e888f52bbbd3c8395c869a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec21a60580e888f52bbbd3c8395c869a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec21a60580e888f52bbbd3c8395c869a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec21a60580e888f52bbbd3c8395c869a,
        type_description_1,
        par_self,
        var_dim,
        var_numpy,
        var_num_elements,
        var_result,
        var_rows,
        var_cols,
        var_lowerbounds,
        var_indexes,
        var_upperbounds,
        var_row
    );


    // Release cached frame if used for exception.
    if (frame_ec21a60580e888f52bbbd3c8395c869a == cache_frame_ec21a60580e888f52bbbd3c8395c869a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec21a60580e888f52bbbd3c8395c869a);
        cache_frame_ec21a60580e888f52bbbd3c8395c869a = NULL;
    }

    assertFrameObject(frame_ec21a60580e888f52bbbd3c8395c869a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dim);
    Py_DECREF(var_dim);
    var_dim = NULL;
    Py_XDECREF(var_numpy);
    var_numpy = NULL;
    Py_XDECREF(var_num_elements);
    var_num_elements = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_rows);
    var_rows = NULL;
    Py_XDECREF(var_cols);
    var_cols = NULL;
    Py_XDECREF(var_lowerbounds);
    var_lowerbounds = NULL;
    Py_XDECREF(var_indexes);
    var_indexes = NULL;
    Py_XDECREF(var_upperbounds);
    var_upperbounds = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_dim);
    var_dim = NULL;
    Py_XDECREF(var_numpy);
    var_numpy = NULL;
    Py_XDECREF(var_num_elements);
    var_num_elements = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_rows);
    var_rows = NULL;
    Py_XDECREF(var_cols);
    var_cols = NULL;
    Py_XDECREF(var_lowerbounds);
    var_lowerbounds = NULL;
    Py_XDECREF(var_indexes);
    var_indexes = NULL;
    Py_XDECREF(var_upperbounds);
    var_upperbounds = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
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


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_num_elements = python_pars[1];
    PyObject *var_VARIANT = NULL;
    PyObject *var_ptr = NULL;
    PyObject *var_iid = NULL;
    PyObject *var_itf = NULL;
    PyObject *var_elems = NULL;
    PyObject *var_result = NULL;
    PyObject *var_p = NULL;
    PyObject *var_arr = NULL;
    PyObject *var_keep_safearray = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_1_var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_b2c827f6f259f0c0fc6d847765d29918;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_f2c61ea1d4805961ac42d7c1859fddcb_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f2c61ea1d4805961ac42d7c1859fddcb_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_f10b994b7021afdaf7c94fb62254c134_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_f10b994b7021afdaf7c94fb62254c134_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_b2c827f6f259f0c0fc6d847765d29918 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b2c827f6f259f0c0fc6d847765d29918)) {
        Py_XDECREF(cache_frame_b2c827f6f259f0c0fc6d847765d29918);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2c827f6f259f0c0fc6d847765d29918 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2c827f6f259f0c0fc6d847765d29918 = MAKE_FUNCTION_FRAME(codeobj_b2c827f6f259f0c0fc6d847765d29918, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b2c827f6f259f0c0fc6d847765d29918->m_type_description == NULL);
    frame_b2c827f6f259f0c0fc6d847765d29918 = cache_frame_b2c827f6f259f0c0fc6d847765d29918;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b2c827f6f259f0c0fc6d847765d29918);
    assert(Py_REFCNT(frame_b2c827f6f259f0c0fc6d847765d29918) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[94];
        tmp_level_value_1 = mod_consts[3];
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 280;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[95],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_VARIANT == NULL);
        var_VARIANT = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 284;
        tmp_called_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 284;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ptr == NULL);
        var_ptr = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[85]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_args_element_value_2 = Nuitka_Cell_GET(par_self);
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 285;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ptr);
        tmp_args_element_value_4 = var_ptr;
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 285;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 285;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[42]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_VARIANT);
        tmp_cmp_expr_right_1 = var_VARIANT;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(var_ptr);
        tmp_expression_value_4 = var_ptr;
        CHECK_OBJECT(par_num_elements);
        tmp_stop_value_1 = par_num_elements;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "coooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "coooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_4;
    }
    if (isFrameUnusable(cache_frame_f2c61ea1d4805961ac42d7c1859fddcb_2)) {
        Py_XDECREF(cache_frame_f2c61ea1d4805961ac42d7c1859fddcb_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2c61ea1d4805961ac42d7c1859fddcb_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2c61ea1d4805961ac42d7c1859fddcb_2 = MAKE_FUNCTION_FRAME(codeobj_f2c61ea1d4805961ac42d7c1859fddcb, module_comtypes$safearray, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f2c61ea1d4805961ac42d7c1859fddcb_2->m_type_description == NULL);
    frame_f2c61ea1d4805961ac42d7c1859fddcb_2 = cache_frame_f2c61ea1d4805961ac42d7c1859fddcb_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f2c61ea1d4805961ac42d7c1859fddcb_2);
    assert(Py_REFCNT(frame_f2c61ea1d4805961ac42d7c1859fddcb_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 290;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_i;
            outline_0_var_i = tmp_assign_source_6;
            Py_INCREF(outline_0_var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_i);
        tmp_expression_value_5 = outline_0_var_i;
        tmp_append_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[106]);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 290;
        type_description_2 = "o";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
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
    try_except_handler_4:;
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

    goto try_return_handler_3;
    frame_exception_exit_2:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2c61ea1d4805961ac42d7c1859fddcb_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2c61ea1d4805961ac42d7c1859fddcb_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2c61ea1d4805961ac42d7c1859fddcb_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2c61ea1d4805961ac42d7c1859fddcb_2,
        type_description_2,
        outline_0_var_i
    );


    // Release cached frame if used for exception.
    if (frame_f2c61ea1d4805961ac42d7c1859fddcb_2 == cache_frame_f2c61ea1d4805961ac42d7c1859fddcb_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f2c61ea1d4805961ac42d7c1859fddcb_2);
        cache_frame_f2c61ea1d4805961ac42d7c1859fddcb_2 = NULL;
    }

    assertFrameObject(frame_f2c61ea1d4805961ac42d7c1859fddcb_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "coooooooooo";
    goto try_except_handler_3;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF(outline_0_var_i);
    outline_0_var_i = NULL;
    goto outline_result_1;
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

    Py_XDECREF(outline_0_var_i);
    outline_0_var_i = NULL;
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
    exception_lineno = 290;
    goto try_except_handler_2;
    outline_result_1:;
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_issubclass_cls_1;
        PyObject *tmp_issubclass_classes_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
        tmp_issubclass_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[42]);
        if (tmp_issubclass_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_1);

            exception_lineno = 291;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_1);

            exception_lineno = 291;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 291;
        tmp_issubclass_classes_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        if (tmp_issubclass_classes_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_1);

            exception_lineno = 291;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
        Py_DECREF(tmp_issubclass_cls_1);
        Py_DECREF(tmp_issubclass_classes_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_args_element_value_6 = Nuitka_Cell_GET(par_self);
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 292;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[136], tmp_args_element_value_6);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        assert(var_iid == NULL);
        var_iid = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_unicode_arg_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_iid);
        tmp_unicode_arg_1 = var_iid;
        tmp_subscript_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        assert(var_itf == NULL);
        var_itf = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_stop_value_2;
        CHECK_OBJECT(var_ptr);
        tmp_expression_value_8 = var_ptr;
        CHECK_OBJECT(par_num_elements);
        tmp_stop_value_2 = par_num_elements;
        tmp_subscript_value_3 = MAKE_SLICE_OBJECT1(tmp_stop_value_2);
        assert(!(tmp_subscript_value_3 == NULL));
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        assert(var_elems == NULL);
        var_elems = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
        assert(var_result == NULL);
        var_result = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_elems);
        tmp_iter_arg_2 = var_elems;
        tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "coooooooooo";
                exception_lineno = 300;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_13 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_13;
            Py_INCREF(var_p);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(var_p);
        tmp_value_value_1 = var_p;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_p);
        tmp_called_instance_2 = var_p;
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 302;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[138]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_8;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 303;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_9 = var_result;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[140]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_p);
        tmp_expression_value_10 = var_p;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[141]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 303;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }
        if (var_itf == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[142]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 303;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_8 = var_itf;
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 303;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 303;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 303;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 306;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_11 = var_result;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[140]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 306;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }
        if (var_itf == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[142]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 306;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_10 = var_itf;
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 306;
        tmp_called_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 306;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 306;
        tmp_args_element_value_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        Py_DECREF(tmp_called_value_9);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 306;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 306;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "coooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 300;
        type_description_1 = "coooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[139]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 307;
        type_description_1 = "coooooooooo";
        goto try_except_handler_2;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_issubclass_cls_2;
        PyObject *tmp_issubclass_classes_2;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_12 = Nuitka_Cell_GET(par_self);
        tmp_issubclass_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[42]);
        if (tmp_issubclass_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_issubclass_classes_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_issubclass_classes_2 == NULL)) {
            tmp_issubclass_classes_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_issubclass_classes_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_issubclass_cls_2);

            exception_lineno = 312;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
        Py_DECREF(tmp_issubclass_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_13 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[42]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 318;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[103]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 318;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[143]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 318;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 318;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 318;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 318;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[144]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ptr);
        tmp_args_element_value_11 = var_ptr;
        CHECK_OBJECT(par_num_elements);
        tmp_tuple_element_1 = par_num_elements;
        tmp_args_element_value_12 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_element_value_12, 0, tmp_tuple_element_1);
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_14 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[145],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_3);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        assert(var_arr == NULL);
        var_arr = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_arr);
        tmp_expression_value_17 = var_arr;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[146]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 321;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        Py_DECREF(tmp_called_value_12);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    branch_no_5:;
    {
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_stop_value_3;
        CHECK_OBJECT(var_ptr);
        tmp_expression_value_18 = var_ptr;
        CHECK_OBJECT(par_num_elements);
        tmp_stop_value_3 = par_num_elements;
        tmp_subscript_value_4 = MAKE_SLICE_OBJECT1(tmp_stop_value_3);
        assert(!(tmp_subscript_value_4 == NULL));
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "coooooooooo";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_15;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_15 = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw$$$function__1_keep_safearray(tmp_closure_1);

        assert(var_keep_safearray == NULL);
        var_keep_safearray = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_stop_value_4;
        CHECK_OBJECT(var_ptr);
        tmp_expression_value_19 = var_ptr;
        CHECK_OBJECT(par_num_elements);
        tmp_stop_value_4 = par_num_elements;
        tmp_subscript_value_5 = MAKE_SLICE_OBJECT1(tmp_stop_value_4);
        assert(!(tmp_subscript_value_5 == NULL));
        tmp_iter_arg_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "coooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "coooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_listcomp_2__$0 == NULL);
        tmp_listcomp_2__$0 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_2__contraction == NULL);
        tmp_listcomp_2__contraction = tmp_assign_source_17;
    }
    if (isFrameUnusable(cache_frame_f10b994b7021afdaf7c94fb62254c134_3)) {
        Py_XDECREF(cache_frame_f10b994b7021afdaf7c94fb62254c134_3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f10b994b7021afdaf7c94fb62254c134_3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f10b994b7021afdaf7c94fb62254c134_3 = MAKE_FUNCTION_FRAME(codeobj_f10b994b7021afdaf7c94fb62254c134, module_comtypes$safearray, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f10b994b7021afdaf7c94fb62254c134_3->m_type_description == NULL);
    frame_f10b994b7021afdaf7c94fb62254c134_3 = cache_frame_f10b994b7021afdaf7c94fb62254c134_3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f10b994b7021afdaf7c94fb62254c134_3);
    assert(Py_REFCNT(frame_f10b994b7021afdaf7c94fb62254c134_3) == 2);

    // Framed code:
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        tmp_next_source_3 = tmp_listcomp_2__$0;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "oo";
                exception_lineno = 327;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_listcomp_2__iter_value_0;
            tmp_listcomp_2__iter_value_0 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
        tmp_assign_source_19 = tmp_listcomp_2__iter_value_0;
        {
            PyObject *old = outline_1_var_x;
            outline_1_var_x = tmp_assign_source_19;
            Py_INCREF(outline_1_var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_2;
        PyObject *tmp_append_value_2;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_append_list_2 = tmp_listcomp_2__contraction;
        if (var_keep_safearray == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }

        tmp_called_value_13 = var_keep_safearray;
        CHECK_OBJECT(outline_1_var_x);
        tmp_args_element_value_13 = outline_1_var_x;
        frame_f10b994b7021afdaf7c94fb62254c134_3->m_frame.f_lineno = 327;
        tmp_append_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
        if (tmp_append_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 327;
        type_description_2 = "oo";
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
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
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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
        exception_tb = MAKE_TRACEBACK(frame_f10b994b7021afdaf7c94fb62254c134_3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f10b994b7021afdaf7c94fb62254c134_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f10b994b7021afdaf7c94fb62254c134_3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f10b994b7021afdaf7c94fb62254c134_3,
        type_description_2,
        outline_1_var_x,
        var_keep_safearray
    );


    // Release cached frame if used for exception.
    if (frame_f10b994b7021afdaf7c94fb62254c134_3 == cache_frame_f10b994b7021afdaf7c94fb62254c134_3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f10b994b7021afdaf7c94fb62254c134_3);
        cache_frame_f10b994b7021afdaf7c94fb62254c134_3 = NULL;
    }

    assertFrameObject(frame_f10b994b7021afdaf7c94fb62254c134_3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;
    frame_no_exception_2:;
    goto skip_nested_handling_2;
    nested_frame_exit_2:;
    type_description_1 = "coooooooooo";
    goto try_except_handler_6;
    skip_nested_handling_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF(outline_1_var_x);
    outline_1_var_x = NULL;
    goto outline_result_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_1_var_x);
    outline_1_var_x = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_2;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_2:;
    exception_lineno = 327;
    goto try_except_handler_2;
    outline_result_2:;
    goto try_return_handler_2;
    branch_end_2:;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_14;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_args_element_value_14 = Nuitka_Cell_GET(par_self);
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 329;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[93], tmp_args_element_value_14);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "coooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_b2c827f6f259f0c0fc6d847765d29918, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_b2c827f6f259f0c0fc6d847765d29918, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_15;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "coooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_args_element_value_15 = Nuitka_Cell_GET(par_self);
        frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = 329;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[93], tmp_args_element_value_15);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "coooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_6);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 286;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b2c827f6f259f0c0fc6d847765d29918->m_frame) frame_b2c827f6f259f0c0fc6d847765d29918->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "coooooooooo";
    goto try_except_handler_8;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b2c827f6f259f0c0fc6d847765d29918, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2c827f6f259f0c0fc6d847765d29918->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2c827f6f259f0c0fc6d847765d29918, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2c827f6f259f0c0fc6d847765d29918,
        type_description_1,
        par_self,
        par_num_elements,
        var_VARIANT,
        var_ptr,
        var_iid,
        var_itf,
        var_elems,
        var_result,
        var_p,
        var_arr,
        var_keep_safearray
    );


    // Release cached frame if used for exception.
    if (frame_b2c827f6f259f0c0fc6d847765d29918 == cache_frame_b2c827f6f259f0c0fc6d847765d29918) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b2c827f6f259f0c0fc6d847765d29918);
        cache_frame_b2c827f6f259f0c0fc6d847765d29918 = NULL;
    }

    assertFrameObject(frame_b2c827f6f259f0c0fc6d847765d29918);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_VARIANT);
    Py_DECREF(var_VARIANT);
    var_VARIANT = NULL;
    CHECK_OBJECT(var_ptr);
    Py_DECREF(var_ptr);
    var_ptr = NULL;
    Py_XDECREF(var_iid);
    var_iid = NULL;
    Py_XDECREF(var_itf);
    var_itf = NULL;
    Py_XDECREF(var_elems);
    var_elems = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    Py_XDECREF(var_keep_safearray);
    var_keep_safearray = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_VARIANT);
    var_VARIANT = NULL;
    Py_XDECREF(var_ptr);
    var_ptr = NULL;
    Py_XDECREF(var_iid);
    var_iid = NULL;
    Py_XDECREF(var_itf);
    var_itf = NULL;
    Py_XDECREF(var_elems);
    var_elems = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    Py_XDECREF(var_keep_safearray);
    var_keep_safearray = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_num_elements);
    Py_DECREF(par_num_elements);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_num_elements);
    Py_DECREF(par_num_elements);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw$$$function__1_keep_safearray(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    struct Nuitka_FrameObject *frame_c5403d09768f7cf8b6e90c122a7baa82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c5403d09768f7cf8b6e90c122a7baa82 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c5403d09768f7cf8b6e90c122a7baa82)) {
        Py_XDECREF(cache_frame_c5403d09768f7cf8b6e90c122a7baa82);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5403d09768f7cf8b6e90c122a7baa82 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5403d09768f7cf8b6e90c122a7baa82 = MAKE_FUNCTION_FRAME(codeobj_c5403d09768f7cf8b6e90c122a7baa82, module_comtypes$safearray, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5403d09768f7cf8b6e90c122a7baa82->m_type_description == NULL);
    frame_c5403d09768f7cf8b6e90c122a7baa82 = cache_frame_c5403d09768f7cf8b6e90c122a7baa82;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c5403d09768f7cf8b6e90c122a7baa82);
    assert(Py_REFCNT(frame_c5403d09768f7cf8b6e90c122a7baa82) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 325;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_v);
        tmp_assattr_target_1 = par_v;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[149], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5403d09768f7cf8b6e90c122a7baa82, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5403d09768f7cf8b6e90c122a7baa82->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5403d09768f7cf8b6e90c122a7baa82, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5403d09768f7cf8b6e90c122a7baa82,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c5403d09768f7cf8b6e90c122a7baa82 == cache_frame_c5403d09768f7cf8b6e90c122a7baa82) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5403d09768f7cf8b6e90c122a7baa82);
        cache_frame_c5403d09768f7cf8b6e90c122a7baa82 = NULL;
    }

    assertFrameObject(frame_c5403d09768f7cf8b6e90c122a7baa82);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_v);
    tmp_return_value = par_v;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__11__get_row(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *par_indices = python_pars[2];
    PyObject *par_lowerbounds = python_pars[3];
    PyObject *par_upperbounds = python_pars[4];
    PyObject *var_restore = NULL;
    PyObject *var_result = NULL;
    PyObject *var_obj = NULL;
    PyObject *var_pobj = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_440fd1bfac76e125fe19347e1f202e0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_440fd1bfac76e125fe19347e1f202e0e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_440fd1bfac76e125fe19347e1f202e0e)) {
        Py_XDECREF(cache_frame_440fd1bfac76e125fe19347e1f202e0e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_440fd1bfac76e125fe19347e1f202e0e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_440fd1bfac76e125fe19347e1f202e0e = MAKE_FUNCTION_FRAME(codeobj_440fd1bfac76e125fe19347e1f202e0e, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_440fd1bfac76e125fe19347e1f202e0e->m_type_description == NULL);
    frame_440fd1bfac76e125fe19347e1f202e0e = cache_frame_440fd1bfac76e125fe19347e1f202e0e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_440fd1bfac76e125fe19347e1f202e0e);
    assert(Py_REFCNT(frame_440fd1bfac76e125fe19347e1f202e0e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_indices);
        tmp_expression_value_1 = par_indices;
        CHECK_OBJECT(par_dim);
        tmp_subscript_value_1 = par_dim;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_restore == NULL);
        var_restore = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_result == NULL);
        var_result = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_440fd1bfac76e125fe19347e1f202e0e->m_frame.f_lineno = 337;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_obj);
        tmp_args_element_value_1 = var_obj;
        frame_440fd1bfac76e125fe19347e1f202e0e->m_frame.f_lineno = 338;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pobj == NULL);
        var_pobj = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_dim);
        tmp_add_expr_left_1 = par_dim;
        tmp_add_expr_right_1 = mod_consts[2];
        tmp_cmp_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indices);
        tmp_len_arg_1 = par_indices;
        tmp_cmp_expr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 339;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_indices);
        tmp_expression_value_2 = par_indices;
        CHECK_OBJECT(par_dim);
        tmp_subscript_value_2 = par_dim;
        tmp_xrange_low_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_upperbounds);
        tmp_expression_value_3 = par_upperbounds;
        CHECK_OBJECT(par_dim);
        tmp_subscript_value_3 = par_dim;
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_xrange_low_1);

            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[2];
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_xrange_high_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_xrange_low_1);

            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 342;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_7;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_i);
        tmp_ass_subvalue_1 = var_i;
        if (par_indices == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = par_indices;
        CHECK_OBJECT(par_dim);
        tmp_ass_subscript_1 = par_dim;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[151]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_self;
        if (par_indices == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_indices;
        if (var_pobj == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[152]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = var_pobj;
        frame_440fd1bfac76e125fe19347e1f202e0e->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 345;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_result;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[140]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (var_obj == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[153]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 345;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = var_obj;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[106]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 345;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_440fd1bfac76e125fe19347e1f202e0e->m_frame.f_lineno = 345;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 342;
        type_description_1 = "oooooooooo";
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
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_xrange_high_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_indices);
        tmp_expression_value_7 = par_indices;
        CHECK_OBJECT(par_dim);
        tmp_subscript_value_4 = par_dim;
        tmp_xrange_low_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_4);
        if (tmp_xrange_low_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_upperbounds);
        tmp_expression_value_8 = par_upperbounds;
        CHECK_OBJECT(par_dim);
        tmp_subscript_value_5 = par_dim;
        tmp_add_expr_left_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_5);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_xrange_low_2);

            exception_lineno = 347;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[2];
        tmp_xrange_high_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_xrange_high_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_xrange_low_2);

            exception_lineno = 347;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE2(tmp_xrange_low_2, tmp_xrange_high_2);
        Py_DECREF(tmp_xrange_low_2);
        Py_DECREF(tmp_xrange_high_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 347;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_10 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_10;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_i);
        tmp_ass_subvalue_2 = var_i;
        if (par_indices == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 348;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_2 = par_indices;
        if (par_dim == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[154]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 348;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscript_2 = par_dim;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_9 = var_result;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[140]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_10 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[73]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        if (par_dim == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[154]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_add_expr_left_4 = par_dim;
        tmp_add_expr_right_4 = mod_consts[2];
        tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        if (par_indices == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_8 = par_indices;
        if (par_lowerbounds == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[155]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_9 = par_lowerbounds;
        if (par_upperbounds == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[156]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_10 = par_upperbounds;
        frame_440fd1bfac76e125fe19347e1f202e0e->m_frame.f_lineno = 349;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        frame_440fd1bfac76e125fe19347e1f202e0e->m_frame.f_lineno = 349;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 347;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_end_1:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_restore);
        tmp_ass_subvalue_3 = var_restore;
        if (par_indices == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 350;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = par_indices;
        if (par_dim == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[154]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 350;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_3 = par_dim;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_tuple_arg_1;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 351;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_arg_1 = var_result;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_440fd1bfac76e125fe19347e1f202e0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_440fd1bfac76e125fe19347e1f202e0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_440fd1bfac76e125fe19347e1f202e0e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_440fd1bfac76e125fe19347e1f202e0e,
        type_description_1,
        par_self,
        par_dim,
        par_indices,
        par_lowerbounds,
        par_upperbounds,
        var_restore,
        var_result,
        var_obj,
        var_pobj,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_440fd1bfac76e125fe19347e1f202e0e == cache_frame_440fd1bfac76e125fe19347e1f202e0e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_440fd1bfac76e125fe19347e1f202e0e);
        cache_frame_440fd1bfac76e125fe19347e1f202e0e = NULL;
    }

    assertFrameObject(frame_440fd1bfac76e125fe19347e1f202e0e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_restore);
    Py_DECREF(var_restore);
    var_restore = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_pobj);
    var_pobj = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_restore);
    var_restore = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_pobj);
    var_pobj = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_indices);
    Py_DECREF(par_indices);
    CHECK_OBJECT(par_lowerbounds);
    Py_DECREF(par_lowerbounds);
    CHECK_OBJECT(par_upperbounds);
    Py_DECREF(par_upperbounds);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_indices);
    Py_DECREF(par_indices);
    CHECK_OBJECT(par_lowerbounds);
    Py_DECREF(par_lowerbounds);
    CHECK_OBJECT(par_upperbounds);
    Py_DECREF(par_upperbounds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__12_from_param(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d039cc727c0d45a2a4bb6f32cfc86907;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d039cc727c0d45a2a4bb6f32cfc86907 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d039cc727c0d45a2a4bb6f32cfc86907)) {
        Py_XDECREF(cache_frame_d039cc727c0d45a2a4bb6f32cfc86907);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d039cc727c0d45a2a4bb6f32cfc86907 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d039cc727c0d45a2a4bb6f32cfc86907 = MAKE_FUNCTION_FRAME(codeobj_d039cc727c0d45a2a4bb6f32cfc86907, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d039cc727c0d45a2a4bb6f32cfc86907->m_type_description == NULL);
    frame_d039cc727c0d45a2a4bb6f32cfc86907 = cache_frame_d039cc727c0d45a2a4bb6f32cfc86907;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d039cc727c0d45a2a4bb6f32cfc86907);
    assert(Py_REFCNT(frame_d039cc727c0d45a2a4bb6f32cfc86907) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[157]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooc";
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
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_d039cc727c0d45a2a4bb6f32cfc86907->m_frame.f_lineno = 359;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_3 = par_cls;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[157]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 360;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_d039cc727c0d45a2a4bb6f32cfc86907->m_frame.f_lineno = 360;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_d039cc727c0d45a2a4bb6f32cfc86907->m_frame.f_lineno = 360;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d039cc727c0d45a2a4bb6f32cfc86907, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d039cc727c0d45a2a4bb6f32cfc86907->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d039cc727c0d45a2a4bb6f32cfc86907, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d039cc727c0d45a2a4bb6f32cfc86907,
        type_description_1,
        par_cls,
        par_value,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d039cc727c0d45a2a4bb6f32cfc86907 == cache_frame_d039cc727c0d45a2a4bb6f32cfc86907) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d039cc727c0d45a2a4bb6f32cfc86907);
        cache_frame_d039cc727c0d45a2a4bb6f32cfc86907 = NULL;
    }

    assertFrameObject(frame_d039cc727c0d45a2a4bb6f32cfc86907);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__13___setitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *var_pa = NULL;
    struct Nuitka_FrameObject *frame_37c0a0c5de1d2af097b2e3807cd72f0f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_37c0a0c5de1d2af097b2e3807cd72f0f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_37c0a0c5de1d2af097b2e3807cd72f0f)) {
        Py_XDECREF(cache_frame_37c0a0c5de1d2af097b2e3807cd72f0f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_37c0a0c5de1d2af097b2e3807cd72f0f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_37c0a0c5de1d2af097b2e3807cd72f0f = MAKE_FUNCTION_FRAME(codeobj_37c0a0c5de1d2af097b2e3807cd72f0f, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_37c0a0c5de1d2af097b2e3807cd72f0f->m_type_description == NULL);
    frame_37c0a0c5de1d2af097b2e3807cd72f0f = cache_frame_37c0a0c5de1d2af097b2e3807cd72f0f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_37c0a0c5de1d2af097b2e3807cd72f0f);
    assert(Py_REFCNT(frame_37c0a0c5de1d2af097b2e3807cd72f0f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[157]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooccN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[49]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooccN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[120]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 364;
            type_description_1 = "ooooccN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_37c0a0c5de1d2af097b2e3807cd72f0f->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooccN";
            goto frame_exception_exit_1;
        }
        assert(var_pa == NULL);
        var_pa = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooccN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooccN";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[158]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 367;
            type_description_1 = "ooooccN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_37c0a0c5de1d2af097b2e3807cd72f0f->m_frame.f_lineno = 367;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooccN";
            goto frame_exception_exit_1;
        }
        frame_37c0a0c5de1d2af097b2e3807cd72f0f->m_frame.f_lineno = 367;
        tmp_type_arg_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooccN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_comtypes$safearray, tmp_type_arg_value_1, tmp_object_arg_value_1);
        Py_DECREF(tmp_type_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooccN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_args_element_value_5 = par_index;
        CHECK_OBJECT(var_pa);
        tmp_args_element_value_6 = var_pa;
        frame_37c0a0c5de1d2af097b2e3807cd72f0f->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[57],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooccN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_37c0a0c5de1d2af097b2e3807cd72f0f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_37c0a0c5de1d2af097b2e3807cd72f0f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_37c0a0c5de1d2af097b2e3807cd72f0f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_37c0a0c5de1d2af097b2e3807cd72f0f,
        type_description_1,
        par_self,
        par_index,
        par_value,
        var_pa,
        self->m_closure[0],
        self->m_closure[1],
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_37c0a0c5de1d2af097b2e3807cd72f0f == cache_frame_37c0a0c5de1d2af097b2e3807cd72f0f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_37c0a0c5de1d2af097b2e3807cd72f0f);
        cache_frame_37c0a0c5de1d2af097b2e3807cd72f0f = NULL;
    }

    assertFrameObject(frame_37c0a0c5de1d2af097b2e3807cd72f0f);

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
    CHECK_OBJECT(var_pa);
    Py_DECREF(var_pa);
    var_pa = NULL;
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

    Py_XDECREF(var_pa);
    var_pa = NULL;
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
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__6__ndarray_to_variant_array(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *var_VARIANT = NULL;
    PyObject *var_varr = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_cbf8f954e368d621010425c4a92e29d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_cbf8f954e368d621010425c4a92e29d4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cbf8f954e368d621010425c4a92e29d4)) {
        Py_XDECREF(cache_frame_cbf8f954e368d621010425c4a92e29d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cbf8f954e368d621010425c4a92e29d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cbf8f954e368d621010425c4a92e29d4 = MAKE_FUNCTION_FRAME(codeobj_cbf8f954e368d621010425c4a92e29d4, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cbf8f954e368d621010425c4a92e29d4->m_type_description == NULL);
    frame_cbf8f954e368d621010425c4a92e29d4 = cache_frame_cbf8f954e368d621010425c4a92e29d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cbf8f954e368d621010425c4a92e29d4);
    assert(Py_REFCNT(frame_cbf8f954e368d621010425c4a92e29d4) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[97]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oNoo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[159];
        frame_cbf8f954e368d621010425c4a92e29d4->m_frame.f_lineno = 377;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 377;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oNoo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        int tmp_truth_name_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[160]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_expression_value_3 = par_value;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[96]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 380;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 380;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[161]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 380;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        frame_cbf8f954e368d621010425c4a92e29d4->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 380;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_cbf8f954e368d621010425c4a92e29d4->m_frame.f_lineno = 381;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[94];
        tmp_level_value_1 = mod_consts[3];
        frame_cbf8f954e368d621010425c4a92e29d4->m_frame.f_lineno = 383;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[95],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        assert(var_VARIANT == NULL);
        var_VARIANT = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[163]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_expression_value_6 = par_value;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[113]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 385;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_1 = "oNoo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[97]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_1 = "oNoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[110]);
        frame_cbf8f954e368d621010425c4a92e29d4->m_frame.f_lineno = 385;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
        assert(var_varr == NULL);
        var_varr = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_8;
            CHECK_OBJECT(par_value);
            tmp_expression_value_8 = par_value;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[164]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;
                type_description_1 = "oNoo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;
                type_description_1 = "oNoo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2)) {
            Py_XDECREF(cache_frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2 = MAKE_FUNCTION_FRAME(codeobj_27e2f5f1603c0ad8d3d1329aaec9a8ce, module_comtypes$safearray, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2->m_type_description == NULL);
        frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2 = cache_frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2);
        assert(Py_REFCNT(frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 387;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_6;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (var_VARIANT == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[95]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 387;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_called_value_4 = var_VARIANT;
            CHECK_OBJECT(outline_0_var_v);
            tmp_args_element_value_4 = outline_0_var_v;
            frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2->m_frame.f_lineno = 387;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assattr_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assattr_value_1);
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

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2,
            type_description_2,
            outline_0_var_v,
            var_VARIANT
        );


        // Release cached frame if used for exception.
        if (frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2 == cache_frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2);
            cache_frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2 = NULL;
        }

        assertFrameObject(frame_27e2f5f1603c0ad8d3d1329aaec9a8ce_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oNoo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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
        exception_lineno = 387;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(var_varr);
        tmp_assattr_target_1 = var_varr;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[164], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oNoo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cbf8f954e368d621010425c4a92e29d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cbf8f954e368d621010425c4a92e29d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cbf8f954e368d621010425c4a92e29d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cbf8f954e368d621010425c4a92e29d4,
        type_description_1,
        par_value,
        NULL,
        var_VARIANT,
        var_varr
    );


    // Release cached frame if used for exception.
    if (frame_cbf8f954e368d621010425c4a92e29d4 == cache_frame_cbf8f954e368d621010425c4a92e29d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cbf8f954e368d621010425c4a92e29d4);
        cache_frame_cbf8f954e368d621010425c4a92e29d4 = NULL;
    }

    assertFrameObject(frame_cbf8f954e368d621010425c4a92e29d4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    CHECK_OBJECT(var_varr);
    tmp_return_value = var_varr;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_VARIANT);
    var_VARIANT = NULL;
    Py_XDECREF(var_varr);
    var_varr = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_VARIANT);
    var_VARIANT = NULL;
    Py_XDECREF(var_varr);
    var_varr = NULL;
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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$safearray$$$function__7__datetime64_ndarray_to_variant_array(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *var_VT_DATE = NULL;
    PyObject *var_varr = NULL;
    struct Nuitka_FrameObject *frame_93e8d55087b50df65dd3475c5e23a1ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_93e8d55087b50df65dd3475c5e23a1ab = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_93e8d55087b50df65dd3475c5e23a1ab)) {
        Py_XDECREF(cache_frame_93e8d55087b50df65dd3475c5e23a1ab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_93e8d55087b50df65dd3475c5e23a1ab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_93e8d55087b50df65dd3475c5e23a1ab = MAKE_FUNCTION_FRAME(codeobj_93e8d55087b50df65dd3475c5e23a1ab, module_comtypes$safearray, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_93e8d55087b50df65dd3475c5e23a1ab->m_type_description == NULL);
    frame_93e8d55087b50df65dd3475c5e23a1ab = cache_frame_93e8d55087b50df65dd3475c5e23a1ab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_93e8d55087b50df65dd3475c5e23a1ab);
    assert(Py_REFCNT(frame_93e8d55087b50df65dd3475c5e23a1ab) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[166];
        tmp_level_value_1 = mod_consts[3];
        frame_93e8d55087b50df65dd3475c5e23a1ab->m_frame.f_lineno = 396;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[167],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[167]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_VT_DATE == NULL);
        var_VT_DATE = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        tmp_args_element_value_2 = mod_consts[168];
        frame_93e8d55087b50df65dd3475c5e23a1ab->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[87],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_sub_expr_left_1 = par_value;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[169]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_value);
        tmp_truediv_expr_left_1 = par_value;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_93e8d55087b50df65dd3475c5e23a1ab->m_frame.f_lineno = 400;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[170],
            &PyTuple_GET_ITEM(mod_consts[171], 0)
        );

        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[163]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_expression_value_3 = par_value;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[113]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 401;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 401;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[97]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 401;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[110]);
        frame_93e8d55087b50df65dd3475c5e23a1ab->m_frame.f_lineno = 401;
        tmp_assign_source_5 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_varr == NULL);
        var_varr = tmp_assign_source_5;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_VT_DATE);
        tmp_ass_subvalue_1 = var_VT_DATE;
        CHECK_OBJECT(var_varr);
        tmp_ass_subscribed_1 = var_varr;
        tmp_ass_subscript_1 = mod_consts[172];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_value);
        tmp_expression_value_5 = par_value;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[164]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_varr);
        tmp_expression_value_7 = var_varr;
        tmp_subscript_value_1 = mod_consts[32];
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_1);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 403;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[173];
        tmp_assattr_target_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 403;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[164], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_93e8d55087b50df65dd3475c5e23a1ab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_93e8d55087b50df65dd3475c5e23a1ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_93e8d55087b50df65dd3475c5e23a1ab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_93e8d55087b50df65dd3475c5e23a1ab,
        type_description_1,
        par_value,
        var_VT_DATE,
        var_varr
    );


    // Release cached frame if used for exception.
    if (frame_93e8d55087b50df65dd3475c5e23a1ab == cache_frame_93e8d55087b50df65dd3475c5e23a1ab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_93e8d55087b50df65dd3475c5e23a1ab);
        cache_frame_93e8d55087b50df65dd3475c5e23a1ab = NULL;
    }

    assertFrameObject(frame_93e8d55087b50df65dd3475c5e23a1ab);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_varr);
    tmp_return_value = var_varr;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    CHECK_OBJECT(var_VT_DATE);
    Py_DECREF(var_VT_DATE);
    var_VT_DATE = NULL;
    CHECK_OBJECT(var_varr);
    Py_DECREF(var_varr);
    var_varr = NULL;
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

    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_VT_DATE);
    var_VT_DATE = NULL;
    Py_XDECREF(var_varr);
    var_varr = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__1___enter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__1___enter__,
        mod_consts[190],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_8442bebcdc30981c35f246e50279bdb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__2___exit__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__2___exit__,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_28bd36cfb677dcd676caa5a91d67fdc1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__3___bool__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__3___bool__,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_975e0839ca0c71c6ce440082a003e20d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__4__midlSAFEARRAY() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__4__midlSAFEARRAY,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0830884c358641b040c4bbe676eaaf6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_11a6f7ed8c0d1784c91122a3c56694a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_b2c827f6f259f0c0fc6d847765d29918,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw$$$function__1_keep_safearray(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw$$$function__1_keep_safearray,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_c5403d09768f7cf8b6e90c122a7baa82,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__11__get_row() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__11__get_row,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_440fd1bfac76e125fe19347e1f202e0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__12_from_param(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__12_from_param,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_d039cc727c0d45a2a4bb6f32cfc86907,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__13___setitem__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__13___setitem__,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_37c0a0c5de1d2af097b2e3807cd72f0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__1_create(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__1_create,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[50],
#endif
        codeobj_a5ad8f493dc08bd42e9367df4953414e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        mod_consts[48],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__2_create_from_ndarray(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__2_create_from_ndarray,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        codeobj_1228808ccedba376743b0ca7bf94c6f5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__3_from_param(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__3_from_param,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        codeobj_4e0d21ded16792a9b1cf75cb54639171,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__4___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__4___getitem__,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[56],
#endif
        codeobj_aefac7973845daf0e5029c55eac02d15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__5___setitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__5___setitem__,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_c0b3f9fb4c82df75c8debbd327126daf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__6___ctypes_from_outparam__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__6___ctypes_from_outparam__,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_273d0c48e715984a0411a68b72b7b66a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__7___del__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__7___del__,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        mod_consts[63],
#endif
        codeobj_1351823356555c0b9e3554156ca644db,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__8__get_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__8__get_size,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[66],
#endif
        codeobj_d90aedd58f44c36207b8738fb47e9708,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type$$$function__9_unpack() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__9_unpack,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[69],
#endif
        codeobj_ec21a60580e888f52bbbd3c8395c869a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__6__ndarray_to_variant_array() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__6__ndarray_to_variant_array,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cbf8f954e368d621010425c4a92e29d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        mod_consts[165],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$safearray$$$function__7__datetime64_ndarray_to_variant_array() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$safearray$$$function__7__datetime64_ndarray_to_variant_array,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_93e8d55087b50df65dd3475c5e23a1ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$safearray,
        mod_consts[174],
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

function_impl_code functable_comtypes$safearray[] = {
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__1_create,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__2_create_from_ndarray,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__3_from_param,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__4___getitem__,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__5___setitem__,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__6___ctypes_from_outparam__,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__7___del__,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__8__get_size,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__9_unpack,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__11__get_row,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__12_from_param,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__13___setitem__,
    impl_comtypes$safearray$$$function__5__make_safearray_type$$$function__10__get_elements_raw$$$function__1_keep_safearray,
    impl_comtypes$safearray$$$function__1___enter__,
    impl_comtypes$safearray$$$function__2___exit__,
    impl_comtypes$safearray$$$function__3___bool__,
    impl_comtypes$safearray$$$function__4__midlSAFEARRAY,
    impl_comtypes$safearray$$$function__5__make_safearray_type,
    impl_comtypes$safearray$$$function__6__ndarray_to_variant_array,
    impl_comtypes$safearray$$$function__7__datetime64_ndarray_to_variant_array,
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

    function_impl_code *current = functable_comtypes$safearray;
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

    if (offset > sizeof(functable_comtypes$safearray) || offset < 0) {
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
        functable_comtypes$safearray[offset],
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
        module_comtypes$safearray,
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
PyObject *modulecode_comtypes$safearray(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("comtypes.safearray");

    // Store the module for future use.
    module_comtypes$safearray = module;

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
        PRINT_STRING("comtypes.safearray: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.safearray: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.safearray: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcomtypes$safearray\n");

    moduledict_comtypes$safearray = MODULE_DICT(module_comtypes$safearray);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_comtypes$safearray,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_comtypes$safearray,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[228]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_comtypes$safearray,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$safearray,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$safearray,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_comtypes$safearray);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_comtypes$safearray, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_comtypes$safearray, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_comtypes$safearray, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_comtypes$safearray);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_5db1f1928da6d5b4865aafb56e09b3c0;
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
    PyObject *locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_3b19feafec4520de5502a73d6c05254d_2;
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
        UPDATE_STRING_DICT0(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_2);
    }
    frame_5db1f1928da6d5b4865aafb56e09b3c0 = MAKE_MODULE_FRAME(codeobj_5db1f1928da6d5b4865aafb56e09b3c0, module_comtypes$safearray);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5db1f1928da6d5b4865aafb56e09b3c0);
    assert(Py_REFCNT(frame_5db1f1928da6d5b4865aafb56e09b3c0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[176];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[179], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[180], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[182];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_5db1f1928da6d5b4865aafb56e09b3c0->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[87];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[3];
        frame_5db1f1928da6d5b4865aafb56e09b3c0->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[5],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[5]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[21],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[21]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[86],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[86]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[84],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[84]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[135],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[135]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[91],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[91]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[27],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[27]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[90],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[90]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[183];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[184];
        tmp_level_value_3 = mod_consts[3];
        frame_5db1f1928da6d5b4865aafb56e09b3c0->m_frame.f_lineno = 5;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[16],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[16]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[29],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[29]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[137],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[137]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[80],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[80]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_19);
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
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[185];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_comtypes$safearray;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[186];
        tmp_level_value_4 = mod_consts[3];
        frame_5db1f1928da6d5b4865aafb56e09b3c0->m_frame.f_lineno = 6;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_comtypes$safearray,
                mod_consts[36],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[109]);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_22);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[30];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_23 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
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
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
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
        tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[31]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_tuple_element_1 = mod_consts[187];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_5db1f1928da6d5b4865aafb56e09b3c0->m_frame.f_lineno = 12;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[33]);
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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[34];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[20];
        tmp_getattr_default_1 = mod_consts[35];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[20]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_27;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[188];
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[187];
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        frame_3b19feafec4520de5502a73d6c05254d_2 = MAKE_CLASS_FRAME(codeobj_3b19feafec4520de5502a73d6c05254d, module_comtypes$safearray, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3b19feafec4520de5502a73d6c05254d_2);
        assert(Py_REFCNT(frame_3b19feafec4520de5502a73d6c05254d_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12, mod_consts[182]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[182]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 27;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_3b19feafec4520de5502a73d6c05254d_2->m_frame.f_lineno = 27;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[189]);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__1___enter__();

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12, mod_consts[190], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__2___exit__();

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12, mod_consts[192], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$safearray$$$function__3___bool__();

        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12, mod_consts[194], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12, mod_consts[194]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[194]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12, mod_consts[196], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3b19feafec4520de5502a73d6c05254d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3b19feafec4520de5502a73d6c05254d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3b19feafec4520de5502a73d6c05254d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3b19feafec4520de5502a73d6c05254d_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_3b19feafec4520de5502a73d6c05254d_2);

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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[30];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyObject_SetItem(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[187];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_5db1f1928da6d5b4865aafb56e09b3c0->m_frame.f_lineno = 12;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_28 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12);
        locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12 = NULL;
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

        Py_DECREF(locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12);
        locals_comtypes$safearray$$$class__1__SafeArrayAsNdArrayContextManager_12 = NULL;
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
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_28);
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
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_5db1f1928da6d5b4865aafb56e09b3c0->m_frame.f_lineno = 48;
        tmp_assign_source_30 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_30);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5db1f1928da6d5b4865aafb56e09b3c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5db1f1928da6d5b4865aafb56e09b3c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5db1f1928da6d5b4865aafb56e09b3c0, exception_lineno);
    }



    assertFrameObject(frame_5db1f1928da6d5b4865aafb56e09b3c0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_comtypes$safearray$$$function__4__midlSAFEARRAY();

        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_comtypes$safearray$$$function__5__make_safearray_type();

        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_comtypes$safearray$$$function__6__ndarray_to_variant_array();

        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_comtypes$safearray$$$function__7__datetime64_ndarray_to_variant_array();

        UPDATE_STRING_DICT1(moduledict_comtypes$safearray, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_34);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("comtypes.safearray", false);

    Py_INCREF(module_comtypes$safearray);
    return module_comtypes$safearray;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$safearray, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("comtypes$safearray", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
