/* Generated code for Python module 'rfc3986.parseresult'
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

/* The "module_rfc3986$parseresult" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rfc3986$parseresult;
PyDictObject *moduledict_rfc3986$parseresult;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[172];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[172];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("rfc3986.parseresult"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 172; i++) {
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
void checkModuleConstants_rfc3986$parseresult(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 172; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f12742baf204b995aa4126bbe632218d;
static PyCodeObject *codeobj_072c961440969027f60b782539b14047;
static PyCodeObject *codeobj_6fc217b849fceaa2fda782267bfb8c01;
static PyCodeObject *codeobj_2f65977bf0adae37cafdf722ca4e8afc;
static PyCodeObject *codeobj_3e1d32406c492229a3fea06fdbf1bba6;
static PyCodeObject *codeobj_ad82ca97858baca97facb74d4cd2f57a;
static PyCodeObject *codeobj_f8b7150f4829932f2d7a5c5bf66110d3;
static PyCodeObject *codeobj_bb5b577d688b830feca0539cb29de8b8;
static PyCodeObject *codeobj_5737b59591fff9e31d5638ef6da8937e;
static PyCodeObject *codeobj_cfd4077e62e77abe848d46adb3ee55a1;
static PyCodeObject *codeobj_ff89a7a1fdb77020bfe3f5e8356f4044;
static PyCodeObject *codeobj_90c4aa466ee4e94f539f23a042a93087;
static PyCodeObject *codeobj_e4f9fd62975478eface4b29452d92df5;
static PyCodeObject *codeobj_a9ae9bf427177261d29715a5e0ddaa93;
static PyCodeObject *codeobj_97aa01f754fde0aeaa9f8cd5ccb3b9bf;
static PyCodeObject *codeobj_e25c75ef4576ee8721127c8cf0b737b9;
static PyCodeObject *codeobj_52fd0c50b5dbd9dde538a0bbc213e890;
static PyCodeObject *codeobj_fa76f0c2daedc9122a4447011e557cb8;
static PyCodeObject *codeobj_1ad7e6f8ab90dc50faf6342abc206db7;
static PyCodeObject *codeobj_c037bfe7b387cde8c9e6ceb2bee8cc47;
static PyCodeObject *codeobj_100a9f3c3826efd9431d754d5dbf1a93;
static PyCodeObject *codeobj_6af24a58281a9bc60ce38f0495e4c13c;
static PyCodeObject *codeobj_8caa42b7378a4271f7d5baef49e045d4;
static PyCodeObject *codeobj_467ced52c66326093094a9234df6d3da;
static PyCodeObject *codeobj_1021ae9e19c9ca466b23c54e29647c2c;
static PyCodeObject *codeobj_377137a2d88de2d935c57bdcd97039e0;
static PyCodeObject *codeobj_967556453d8dbe1d04b50ceac93eab86;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[88]; CHECK_OBJECT(module_filename_obj);
    codeobj_f12742baf204b995aa4126bbe632218d = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[152], NULL, 1, 0, 0);
    codeobj_072c961440969027f60b782539b14047 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[153], NULL, 1, 0, 0);
    codeobj_6fc217b849fceaa2fda782267bfb8c01 = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[154], NULL, 1, 0, 0);
    codeobj_2f65977bf0adae37cafdf722ca4e8afc = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[155], mod_consts[155], NULL, NULL, 0, 0, 0);
    codeobj_3e1d32406c492229a3fea06fdbf1bba6 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[156], NULL, 0, 0, 0);
    codeobj_ad82ca97858baca97facb74d4cd2f57a = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[156], NULL, 0, 0, 0);
    codeobj_f8b7150f4829932f2d7a5c5bf66110d3 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[156], NULL, 0, 0, 0);
    codeobj_bb5b577d688b830feca0539cb29de8b8 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[157], NULL, 11, 0, 0);
    codeobj_5737b59591fff9e31d5638ef6da8937e = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[158], NULL, 10, 0, 0);
    codeobj_cfd4077e62e77abe848d46adb3ee55a1 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[159], NULL, 2, 0, 0);
    codeobj_ff89a7a1fdb77020bfe3f5e8356f4044 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[160], NULL, 1, 0, 0);
    codeobj_90c4aa466ee4e94f539f23a042a93087 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[160], NULL, 1, 0, 0);
    codeobj_e4f9fd62975478eface4b29452d92df5 = MAKE_CODE_OBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[161], NULL, 2, 0, 0);
    codeobj_a9ae9bf427177261d29715a5e0ddaa93 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[162], NULL, 8, 0, 0);
    codeobj_97aa01f754fde0aeaa9f8cd5ccb3b9bf = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[163], NULL, 9, 0, 0);
    codeobj_e25c75ef4576ee8721127c8cf0b737b9 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[164], NULL, 2, 0, 0);
    codeobj_52fd0c50b5dbd9dde538a0bbc213e890 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[165], NULL, 9, 0, 0);
    codeobj_fa76f0c2daedc9122a4447011e557cb8 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[166], NULL, 10, 0, 0);
    codeobj_1ad7e6f8ab90dc50faf6342abc206db7 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[167], NULL, 5, 0, 0);
    codeobj_c037bfe7b387cde8c9e6ceb2bee8cc47 = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[168], NULL, 5, 0, 0);
    codeobj_100a9f3c3826efd9431d754d5dbf1a93 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[160], NULL, 1, 0, 0);
    codeobj_6af24a58281a9bc60ce38f0495e4c13c = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[160], NULL, 1, 0, 0);
    codeobj_8caa42b7378a4271f7d5baef49e045d4 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[160], NULL, 1, 0, 0);
    codeobj_467ced52c66326093094a9234df6d3da = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[160], NULL, 1, 0, 0);
    codeobj_1021ae9e19c9ca466b23c54e29647c2c = MAKE_CODE_OBJECT(module_filename_obj, 433, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[169], NULL, 1, 0, 0);
    codeobj_377137a2d88de2d935c57bdcd97039e0 = MAKE_CODE_OBJECT(module_filename_obj, 414, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[170], NULL, 2, 0, 0);
    codeobj_967556453d8dbe1d04b50ceac93eab86 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[171], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_rfc3986$parseresult$$$function__1__generate_authority$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_rfc3986$parseresult$$$function__11_encode$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_rfc3986$parseresult$$$function__20_authority_from$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__12_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__10_copy_with(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__11_encode(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__12_unsplit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__13___new__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__14_from_parts(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__15_from_string(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__16_authority();


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__17_copy_with(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__18_unsplit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__19_split_authority();


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__1__generate_authority();


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__20_authority_from();


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__2_geturl();


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__3_hostname();


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__4_netloc();


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__5_params();


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__6___new__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__7_from_parts(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__8_from_string(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__9_authority();


// The module function definitions.
static PyObject *impl_rfc3986$parseresult$$$function__1__generate_authority(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_attributes = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_userinfo = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_cfd4077e62e77abe848d46adb3ee55a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cfd4077e62e77abe848d46adb3ee55a1 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cfd4077e62e77abe848d46adb3ee55a1)) {
        Py_XDECREF(cache_frame_cfd4077e62e77abe848d46adb3ee55a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cfd4077e62e77abe848d46adb3ee55a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cfd4077e62e77abe848d46adb3ee55a1 = MAKE_FUNCTION_FRAME(codeobj_cfd4077e62e77abe848d46adb3ee55a1, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cfd4077e62e77abe848d46adb3ee55a1->m_type_description == NULL);
    frame_cfd4077e62e77abe848d46adb3ee55a1 = cache_frame_cfd4077e62e77abe848d46adb3ee55a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cfd4077e62e77abe848d46adb3ee55a1);
    assert(Py_REFCNT(frame_cfd4077e62e77abe848d46adb3ee55a1) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_2;
            tmp_iter_arg_2 = mod_consts[0];
            tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
            assert(!(tmp_assign_source_2 == NULL));
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = par_attributes;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_iter_arg_1 = MAKE_GENERATOR_rfc3986$parseresult$$$function__1__generate_authority$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ocooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooo";
            exception_lineno = 41;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooo";
            exception_lineno = 41;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ocooo";
            exception_lineno = 41;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
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

                    type_description_1 = "ocooo";
                    exception_lineno = 41;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[1];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ocooo";
            exception_lineno = 41;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_userinfo == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_userinfo = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_host = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_port = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_userinfo);
        tmp_cmp_expr_right_1 = var_userinfo;
        tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_host);
        tmp_cmp_expr_right_2 = var_host;
        tmp_or_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_port);
        tmp_cmp_expr_right_3 = var_port;
        tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_port);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_port);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ocooo";
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[5];
        CHECK_OBJECT(var_port);
        tmp_kw_call_arg_value_1_1 = var_port;
        frame_cfd4077e62e77abe848d46adb3ee55a1->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_port;
            assert(old != NULL);
            var_port = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 53;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[9]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 53;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_userinfo);
        tmp_args_element_value_2 = var_userinfo;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 53;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        frame_cfd4077e62e77abe848d46adb3ee55a1->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 53;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_expression_value_8;
            PyTuple_SET_ITEM(tmp_args_element_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "ocooo";
                goto tuple_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[9]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "ocooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_host);
            tmp_args_element_value_4 = var_host;
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[10]);
            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 54;
                type_description_1 = "ocooo";
                goto tuple_build_exception_1;
            }
            frame_cfd4077e62e77abe848d46adb3ee55a1->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "ocooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_port);
            tmp_tuple_element_1 = var_port;
            PyTuple_SET_ITEM0(tmp_args_element_value_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_cfd4077e62e77abe848d46adb3ee55a1->m_frame.f_lineno = 51;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[11]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ocooo";
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
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[11]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[12]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        frame_cfd4077e62e77abe848d46adb3ee55a1->m_frame.f_lineno = 59;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[13]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[11]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ocooo";
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
        exception_tb = MAKE_TRACEBACK(frame_cfd4077e62e77abe848d46adb3ee55a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cfd4077e62e77abe848d46adb3ee55a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cfd4077e62e77abe848d46adb3ee55a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cfd4077e62e77abe848d46adb3ee55a1,
        type_description_1,
        par_self,
        par_attributes,
        var_userinfo,
        var_host,
        var_port
    );


    // Release cached frame if used for exception.
    if (frame_cfd4077e62e77abe848d46adb3ee55a1 == cache_frame_cfd4077e62e77abe848d46adb3ee55a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cfd4077e62e77abe848d46adb3ee55a1);
        cache_frame_cfd4077e62e77abe848d46adb3ee55a1 = NULL;
    }

    assertFrameObject(frame_cfd4077e62e77abe848d46adb3ee55a1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
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

    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
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
    CHECK_OBJECT(par_attributes);
    Py_DECREF(par_attributes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_attributes);
    Py_DECREF(par_attributes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct rfc3986$parseresult$$$function__1__generate_authority$$$genexpr__1_genexpr_locals {
    PyObject *var_p;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
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

static PyObject *rfc3986$parseresult$$$function__1__generate_authority$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct rfc3986$parseresult$$$function__1__generate_authority$$$genexpr__1_genexpr_locals *generator_heap = (struct rfc3986$parseresult$$$function__1__generate_authority$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_p = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_072c961440969027f60b782539b14047, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 41;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_p);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[14]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 42;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_p);
        tmp_subscript_value_1 = generator_heap->var_p;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 42;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 42;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 41;
        generator_heap->type_description_1 = "Noc";
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
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
            NULL,
            generator_heap->var_p,
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

    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_rfc3986$parseresult$$$function__1__generate_authority$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        rfc3986$parseresult$$$function__1__generate_authority$$$genexpr__1_genexpr_context,
        module_rfc3986$parseresult,
        mod_consts[15],
#if PYTHON_VERSION >= 0x350
        mod_consts[16],
#endif
        codeobj_072c961440969027f60b782539b14047,
        closure,
        2,
#if 1
        sizeof(struct rfc3986$parseresult$$$function__1__generate_authority$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_rfc3986$parseresult$$$function__2_geturl(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_100a9f3c3826efd9431d754d5dbf1a93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_100a9f3c3826efd9431d754d5dbf1a93 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_100a9f3c3826efd9431d754d5dbf1a93)) {
        Py_XDECREF(cache_frame_100a9f3c3826efd9431d754d5dbf1a93);

#if _DEBUG_REFCOUNTS
        if (cache_frame_100a9f3c3826efd9431d754d5dbf1a93 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_100a9f3c3826efd9431d754d5dbf1a93 = MAKE_FUNCTION_FRAME(codeobj_100a9f3c3826efd9431d754d5dbf1a93, module_rfc3986$parseresult, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_100a9f3c3826efd9431d754d5dbf1a93->m_type_description == NULL);
    frame_100a9f3c3826efd9431d754d5dbf1a93 = cache_frame_100a9f3c3826efd9431d754d5dbf1a93;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_100a9f3c3826efd9431d754d5dbf1a93);
    assert(Py_REFCNT(frame_100a9f3c3826efd9431d754d5dbf1a93) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_100a9f3c3826efd9431d754d5dbf1a93->m_frame.f_lineno = 64;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
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
        exception_tb = MAKE_TRACEBACK(frame_100a9f3c3826efd9431d754d5dbf1a93, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_100a9f3c3826efd9431d754d5dbf1a93->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_100a9f3c3826efd9431d754d5dbf1a93, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_100a9f3c3826efd9431d754d5dbf1a93,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_100a9f3c3826efd9431d754d5dbf1a93 == cache_frame_100a9f3c3826efd9431d754d5dbf1a93) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_100a9f3c3826efd9431d754d5dbf1a93);
        cache_frame_100a9f3c3826efd9431d754d5dbf1a93 = NULL;
    }

    assertFrameObject(frame_100a9f3c3826efd9431d754d5dbf1a93);

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


static PyObject *impl_rfc3986$parseresult$$$function__3_hostname(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6af24a58281a9bc60ce38f0495e4c13c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6af24a58281a9bc60ce38f0495e4c13c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6af24a58281a9bc60ce38f0495e4c13c)) {
        Py_XDECREF(cache_frame_6af24a58281a9bc60ce38f0495e4c13c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6af24a58281a9bc60ce38f0495e4c13c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6af24a58281a9bc60ce38f0495e4c13c = MAKE_FUNCTION_FRAME(codeobj_6af24a58281a9bc60ce38f0495e4c13c, module_rfc3986$parseresult, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6af24a58281a9bc60ce38f0495e4c13c->m_type_description == NULL);
    frame_6af24a58281a9bc60ce38f0495e4c13c = cache_frame_6af24a58281a9bc60ce38f0495e4c13c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6af24a58281a9bc60ce38f0495e4c13c);
    assert(Py_REFCNT(frame_6af24a58281a9bc60ce38f0495e4c13c) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
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
        exception_tb = MAKE_TRACEBACK(frame_6af24a58281a9bc60ce38f0495e4c13c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6af24a58281a9bc60ce38f0495e4c13c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6af24a58281a9bc60ce38f0495e4c13c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6af24a58281a9bc60ce38f0495e4c13c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6af24a58281a9bc60ce38f0495e4c13c == cache_frame_6af24a58281a9bc60ce38f0495e4c13c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6af24a58281a9bc60ce38f0495e4c13c);
        cache_frame_6af24a58281a9bc60ce38f0495e4c13c = NULL;
    }

    assertFrameObject(frame_6af24a58281a9bc60ce38f0495e4c13c);

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


static PyObject *impl_rfc3986$parseresult$$$function__4_netloc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8caa42b7378a4271f7d5baef49e045d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8caa42b7378a4271f7d5baef49e045d4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8caa42b7378a4271f7d5baef49e045d4)) {
        Py_XDECREF(cache_frame_8caa42b7378a4271f7d5baef49e045d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8caa42b7378a4271f7d5baef49e045d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8caa42b7378a4271f7d5baef49e045d4 = MAKE_FUNCTION_FRAME(codeobj_8caa42b7378a4271f7d5baef49e045d4, module_rfc3986$parseresult, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8caa42b7378a4271f7d5baef49e045d4->m_type_description == NULL);
    frame_8caa42b7378a4271f7d5baef49e045d4 = cache_frame_8caa42b7378a4271f7d5baef49e045d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8caa42b7378a4271f7d5baef49e045d4);
    assert(Py_REFCNT(frame_8caa42b7378a4271f7d5baef49e045d4) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
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
        exception_tb = MAKE_TRACEBACK(frame_8caa42b7378a4271f7d5baef49e045d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8caa42b7378a4271f7d5baef49e045d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8caa42b7378a4271f7d5baef49e045d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8caa42b7378a4271f7d5baef49e045d4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8caa42b7378a4271f7d5baef49e045d4 == cache_frame_8caa42b7378a4271f7d5baef49e045d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8caa42b7378a4271f7d5baef49e045d4);
        cache_frame_8caa42b7378a4271f7d5baef49e045d4 = NULL;
    }

    assertFrameObject(frame_8caa42b7378a4271f7d5baef49e045d4);

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


static PyObject *impl_rfc3986$parseresult$$$function__5_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_467ced52c66326093094a9234df6d3da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_467ced52c66326093094a9234df6d3da = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_467ced52c66326093094a9234df6d3da)) {
        Py_XDECREF(cache_frame_467ced52c66326093094a9234df6d3da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_467ced52c66326093094a9234df6d3da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_467ced52c66326093094a9234df6d3da = MAKE_FUNCTION_FRAME(codeobj_467ced52c66326093094a9234df6d3da, module_rfc3986$parseresult, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_467ced52c66326093094a9234df6d3da->m_type_description == NULL);
    frame_467ced52c66326093094a9234df6d3da = cache_frame_467ced52c66326093094a9234df6d3da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_467ced52c66326093094a9234df6d3da);
    assert(Py_REFCNT(frame_467ced52c66326093094a9234df6d3da) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
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
        exception_tb = MAKE_TRACEBACK(frame_467ced52c66326093094a9234df6d3da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_467ced52c66326093094a9234df6d3da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_467ced52c66326093094a9234df6d3da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_467ced52c66326093094a9234df6d3da,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_467ced52c66326093094a9234df6d3da == cache_frame_467ced52c66326093094a9234df6d3da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_467ced52c66326093094a9234df6d3da);
        cache_frame_467ced52c66326093094a9234df6d3da = NULL;
    }

    assertFrameObject(frame_467ced52c66326093094a9234df6d3da);

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


static PyObject *impl_rfc3986$parseresult$$$function__6___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_scheme = python_pars[1];
    PyObject *par_userinfo = python_pars[2];
    PyObject *par_host = python_pars[3];
    PyObject *par_port = python_pars[4];
    PyObject *par_path = python_pars[5];
    PyObject *par_query = python_pars[6];
    PyObject *par_fragment = python_pars[7];
    PyObject *par_uri_ref = python_pars[8];
    PyObject *par_encoding = python_pars[9];
    PyObject *var_parse_result = NULL;
    struct Nuitka_FrameObject *frame_5737b59591fff9e31d5638ef6da8937e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5737b59591fff9e31d5638ef6da8937e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5737b59591fff9e31d5638ef6da8937e)) {
        Py_XDECREF(cache_frame_5737b59591fff9e31d5638ef6da8937e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5737b59591fff9e31d5638ef6da8937e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5737b59591fff9e31d5638ef6da8937e = MAKE_FUNCTION_FRAME(codeobj_5737b59591fff9e31d5638ef6da8937e, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5737b59591fff9e31d5638ef6da8937e->m_type_description == NULL);
    frame_5737b59591fff9e31d5638ef6da8937e = cache_frame_5737b59591fff9e31d5638ef6da8937e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5737b59591fff9e31d5638ef6da8937e);
    assert(Py_REFCNT(frame_5737b59591fff9e31d5638ef6da8937e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_args_element_value_3;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_args_element_value_6;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_expression_value_1 = BUILTIN_SUPER2(moduledict_rfc3986$parseresult, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        CHECK_OBJECT(par_scheme);
        tmp_or_left_value_1 = par_scheme;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 108;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = Py_None;
        tmp_args_element_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_2 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_userinfo);
        tmp_or_left_value_2 = par_userinfo;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 109;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = Py_None;
        tmp_args_element_value_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_value_3 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT(par_host);
        tmp_args_element_value_4 = par_host;
        CHECK_OBJECT(par_port);
        tmp_or_left_value_3 = par_port;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 111;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = Py_None;
        tmp_args_element_value_5 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_args_element_value_5 = tmp_or_left_value_3;
        or_end_3:;
        CHECK_OBJECT(par_path);
        tmp_or_left_value_4 = par_path;
        tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 112;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        tmp_or_right_value_4 = Py_None;
        tmp_args_element_value_6 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_args_element_value_6 = tmp_or_left_value_4;
        or_end_4:;
        CHECK_OBJECT(par_query);
        tmp_args_element_value_7 = par_query;
        CHECK_OBJECT(par_fragment);
        tmp_args_element_value_8 = par_fragment;
        frame_5737b59591fff9e31d5638ef6da8937e->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        assert(var_parse_result == NULL);
        var_parse_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_encoding);
        tmp_assattr_value_1 = par_encoding;
        CHECK_OBJECT(var_parse_result);
        tmp_assattr_target_1 = var_parse_result;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_uri_ref);
        tmp_assattr_value_2 = par_uri_ref;
        CHECK_OBJECT(var_parse_result);
        tmp_assattr_target_2 = var_parse_result;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[23], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5737b59591fff9e31d5638ef6da8937e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5737b59591fff9e31d5638ef6da8937e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5737b59591fff9e31d5638ef6da8937e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5737b59591fff9e31d5638ef6da8937e,
        type_description_1,
        par_cls,
        par_scheme,
        par_userinfo,
        par_host,
        par_port,
        par_path,
        par_query,
        par_fragment,
        par_uri_ref,
        par_encoding,
        var_parse_result,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_5737b59591fff9e31d5638ef6da8937e == cache_frame_5737b59591fff9e31d5638ef6da8937e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5737b59591fff9e31d5638ef6da8937e);
        cache_frame_5737b59591fff9e31d5638ef6da8937e = NULL;
    }

    assertFrameObject(frame_5737b59591fff9e31d5638ef6da8937e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_parse_result);
    tmp_return_value = var_parse_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_parse_result);
    Py_DECREF(var_parse_result);
    var_parse_result = NULL;
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

    Py_XDECREF(var_parse_result);
    var_parse_result = NULL;
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
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_userinfo);
    Py_DECREF(par_userinfo);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_uri_ref);
    Py_DECREF(par_uri_ref);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_userinfo);
    Py_DECREF(par_userinfo);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_uri_ref);
    Py_DECREF(par_uri_ref);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$parseresult$$$function__7_from_parts(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_scheme = python_pars[1];
    PyObject *par_userinfo = python_pars[2];
    PyObject *par_host = python_pars[3];
    PyObject *par_port = python_pars[4];
    PyObject *par_path = python_pars[5];
    PyObject *par_query = python_pars[6];
    PyObject *par_fragment = python_pars[7];
    PyObject *par_encoding = python_pars[8];
    PyObject *var_authority = NULL;
    PyObject *var_uri_ref = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_52fd0c50b5dbd9dde538a0bbc213e890;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_52fd0c50b5dbd9dde538a0bbc213e890 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[25];
        assert(var_authority == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_authority = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_52fd0c50b5dbd9dde538a0bbc213e890)) {
        Py_XDECREF(cache_frame_52fd0c50b5dbd9dde538a0bbc213e890);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52fd0c50b5dbd9dde538a0bbc213e890 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52fd0c50b5dbd9dde538a0bbc213e890 = MAKE_FUNCTION_FRAME(codeobj_52fd0c50b5dbd9dde538a0bbc213e890, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_52fd0c50b5dbd9dde538a0bbc213e890->m_type_description == NULL);
    frame_52fd0c50b5dbd9dde538a0bbc213e890 = cache_frame_52fd0c50b5dbd9dde538a0bbc213e890;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_52fd0c50b5dbd9dde538a0bbc213e890);
    assert(Py_REFCNT(frame_52fd0c50b5dbd9dde538a0bbc213e890) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_userinfo);
        tmp_cmp_expr_left_1 = par_userinfo;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_authority);
        tmp_iadd_expr_left_1 = var_authority;
        CHECK_OBJECT(par_userinfo);
        tmp_add_expr_left_1 = par_userinfo;
        tmp_add_expr_right_1 = mod_consts[26];
        tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        var_authority = tmp_assign_source_2;

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_host);
        tmp_cmp_expr_left_2 = par_host;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_authority);
        tmp_iadd_expr_left_2 = var_authority;
        CHECK_OBJECT(par_host);
        tmp_iadd_expr_right_2 = par_host;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_2;
        var_authority = tmp_assign_source_3;

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_port);
        tmp_cmp_expr_left_3 = par_port;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        CHECK_OBJECT(var_authority);
        tmp_iadd_expr_left_3 = var_authority;
        tmp_kw_call_arg_value_0_1 = mod_consts[27];
        CHECK_OBJECT(par_port);
        tmp_kw_call_arg_value_1_1 = par_port;
        frame_52fd0c50b5dbd9dde538a0bbc213e890->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_iadd_expr_right_3 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_iadd_expr_left_3;
        var_authority = tmp_assign_source_4;

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scheme);
        tmp_kw_call_value_0_1 = par_scheme;
        CHECK_OBJECT(var_authority);
        tmp_kw_call_value_1_1 = var_authority;
        CHECK_OBJECT(par_path);
        tmp_kw_call_value_2_1 = par_path;
        CHECK_OBJECT(par_query);
        tmp_kw_call_value_3_1 = par_query;
        CHECK_OBJECT(par_fragment);
        tmp_kw_call_value_4_1 = par_fragment;
        CHECK_OBJECT(par_encoding);
        tmp_kw_call_value_5_1 = par_encoding;
        frame_52fd0c50b5dbd9dde538a0bbc213e890->m_frame.f_lineno = 140;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_called_instance_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[30]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_52fd0c50b5dbd9dde538a0bbc213e890->m_frame.f_lineno = 140;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[31]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_uri_ref == NULL);
        var_uri_ref = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_uri_ref);
        tmp_tuple_element_1 = var_uri_ref;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[33]);
        frame_52fd0c50b5dbd9dde538a0bbc213e890->m_frame.f_lineno = 148;
        tmp_iter_arg_1 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
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
            exception_lineno = 148;
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
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
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
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
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
                    exception_lineno = 148;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[1];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooo";
            exception_lineno = 148;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_userinfo;
            par_userinfo = tmp_assign_source_10;
            Py_INCREF(par_userinfo);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_host;
            par_host = tmp_assign_source_11;
            Py_INCREF(par_host);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_port;
            assert(old != NULL);
            par_port = tmp_assign_source_12;
            Py_INCREF(par_port);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_5_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        CHECK_OBJECT(par_cls);
        tmp_called_value_3 = par_cls;
        CHECK_OBJECT(var_uri_ref);
        tmp_expression_value_2 = var_uri_ref;
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[34]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_userinfo);
        tmp_kw_call_value_1_2 = par_userinfo;
        CHECK_OBJECT(par_host);
        tmp_kw_call_value_2_2 = par_host;
        CHECK_OBJECT(par_port);
        tmp_kw_call_value_3_2 = par_port;
        CHECK_OBJECT(var_uri_ref);
        tmp_expression_value_3 = var_uri_ref;
        tmp_kw_call_value_4_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[35]);
        if (tmp_kw_call_value_4_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_uri_ref);
        tmp_expression_value_4 = var_uri_ref;
        tmp_kw_call_value_5_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
        if (tmp_kw_call_value_5_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_4_2);

            exception_lineno = 155;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_uri_ref);
        tmp_expression_value_5 = var_uri_ref;
        tmp_kw_call_value_6_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[36]);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_4_2);
            Py_DECREF(tmp_kw_call_value_5_2);

            exception_lineno = 156;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_uri_ref);
        tmp_kw_call_value_7_1 = var_uri_ref;
        CHECK_OBJECT(par_encoding);
        tmp_kw_call_value_8_1 = par_encoding;
        frame_52fd0c50b5dbd9dde538a0bbc213e890->m_frame.f_lineno = 149;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_4_2);
        Py_DECREF(tmp_kw_call_value_5_2);
        Py_DECREF(tmp_kw_call_value_6_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_52fd0c50b5dbd9dde538a0bbc213e890, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52fd0c50b5dbd9dde538a0bbc213e890->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52fd0c50b5dbd9dde538a0bbc213e890, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52fd0c50b5dbd9dde538a0bbc213e890,
        type_description_1,
        par_cls,
        par_scheme,
        par_userinfo,
        par_host,
        par_port,
        par_path,
        par_query,
        par_fragment,
        par_encoding,
        var_authority,
        var_uri_ref
    );


    // Release cached frame if used for exception.
    if (frame_52fd0c50b5dbd9dde538a0bbc213e890 == cache_frame_52fd0c50b5dbd9dde538a0bbc213e890) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_52fd0c50b5dbd9dde538a0bbc213e890);
        cache_frame_52fd0c50b5dbd9dde538a0bbc213e890 = NULL;
    }

    assertFrameObject(frame_52fd0c50b5dbd9dde538a0bbc213e890);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_userinfo);
    Py_DECREF(par_userinfo);
    par_userinfo = NULL;
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    par_host = NULL;
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    par_port = NULL;
    CHECK_OBJECT(var_authority);
    Py_DECREF(var_authority);
    var_authority = NULL;
    CHECK_OBJECT(var_uri_ref);
    Py_DECREF(var_uri_ref);
    var_uri_ref = NULL;
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

    Py_XDECREF(par_userinfo);
    par_userinfo = NULL;
    Py_XDECREF(par_host);
    par_host = NULL;
    Py_XDECREF(par_port);
    par_port = NULL;
    Py_XDECREF(var_authority);
    var_authority = NULL;
    Py_XDECREF(var_uri_ref);
    var_uri_ref = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$parseresult$$$function__8_from_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_uri_string = python_pars[1];
    PyObject *par_encoding = python_pars[2];
    PyObject *par_strict = python_pars[3];
    PyObject *par_lazy_normalize = python_pars[4];
    PyObject *var_reference = NULL;
    PyObject *var_userinfo = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1ad7e6f8ab90dc50faf6342abc206db7;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1ad7e6f8ab90dc50faf6342abc206db7 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1ad7e6f8ab90dc50faf6342abc206db7)) {
        Py_XDECREF(cache_frame_1ad7e6f8ab90dc50faf6342abc206db7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ad7e6f8ab90dc50faf6342abc206db7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ad7e6f8ab90dc50faf6342abc206db7 = MAKE_FUNCTION_FRAME(codeobj_1ad7e6f8ab90dc50faf6342abc206db7, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1ad7e6f8ab90dc50faf6342abc206db7->m_type_description == NULL);
    frame_1ad7e6f8ab90dc50faf6342abc206db7 = cache_frame_1ad7e6f8ab90dc50faf6342abc206db7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1ad7e6f8ab90dc50faf6342abc206db7);
    assert(Py_REFCNT(frame_1ad7e6f8ab90dc50faf6342abc206db7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri_string);
        tmp_args_element_value_1 = par_uri_string;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_2 = par_encoding;
        frame_1ad7e6f8ab90dc50faf6342abc206db7->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[39],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reference == NULL);
        var_reference = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_lazy_normalize);
        tmp_operand_value_1 = par_lazy_normalize;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_reference);
        tmp_called_instance_2 = var_reference;
        frame_1ad7e6f8ab90dc50faf6342abc206db7->m_frame.f_lineno = 176;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[31]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_reference;
            assert(old != NULL);
            var_reference = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_reference);
        tmp_args_element_value_3 = var_reference;
        CHECK_OBJECT(par_strict);
        tmp_args_element_value_4 = par_strict;
        frame_1ad7e6f8ab90dc50faf6342abc206db7->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 177;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 177;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 177;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 177;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[1];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 177;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_userinfo == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_userinfo = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_host = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_port = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        CHECK_OBJECT(par_cls);
        tmp_called_value_2 = par_cls;
        CHECK_OBJECT(var_reference);
        tmp_expression_value_2 = var_reference;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[34]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_userinfo);
        tmp_kw_call_value_1_1 = var_userinfo;
        CHECK_OBJECT(var_host);
        tmp_kw_call_value_2_1 = var_host;
        CHECK_OBJECT(var_port);
        tmp_kw_call_value_3_1 = var_port;
        CHECK_OBJECT(var_reference);
        tmp_expression_value_3 = var_reference;
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[35]);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 184;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_reference);
        tmp_expression_value_4 = var_reference;
        tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 185;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_reference);
        tmp_expression_value_5 = var_reference;
        tmp_kw_call_value_6_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[36]);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 186;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_reference);
        tmp_kw_call_value_7_1 = var_reference;
        CHECK_OBJECT(par_encoding);
        tmp_kw_call_value_8_1 = par_encoding;
        frame_1ad7e6f8ab90dc50faf6342abc206db7->m_frame.f_lineno = 179;
        {
            PyObject *kw_values[9] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_1ad7e6f8ab90dc50faf6342abc206db7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ad7e6f8ab90dc50faf6342abc206db7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ad7e6f8ab90dc50faf6342abc206db7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ad7e6f8ab90dc50faf6342abc206db7,
        type_description_1,
        par_cls,
        par_uri_string,
        par_encoding,
        par_strict,
        par_lazy_normalize,
        var_reference,
        var_userinfo,
        var_host,
        var_port
    );


    // Release cached frame if used for exception.
    if (frame_1ad7e6f8ab90dc50faf6342abc206db7 == cache_frame_1ad7e6f8ab90dc50faf6342abc206db7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1ad7e6f8ab90dc50faf6342abc206db7);
        cache_frame_1ad7e6f8ab90dc50faf6342abc206db7 = NULL;
    }

    assertFrameObject(frame_1ad7e6f8ab90dc50faf6342abc206db7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_reference);
    Py_DECREF(var_reference);
    var_reference = NULL;
    CHECK_OBJECT(var_userinfo);
    Py_DECREF(var_userinfo);
    var_userinfo = NULL;
    CHECK_OBJECT(var_host);
    Py_DECREF(var_host);
    var_host = NULL;
    CHECK_OBJECT(var_port);
    Py_DECREF(var_port);
    var_port = NULL;
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

    Py_XDECREF(var_reference);
    var_reference = NULL;
    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_uri_string);
    Py_DECREF(par_uri_string);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_lazy_normalize);
    Py_DECREF(par_lazy_normalize);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_uri_string);
    Py_DECREF(par_uri_string);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_lazy_normalize);
    Py_DECREF(par_lazy_normalize);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$parseresult$$$function__9_authority(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ff89a7a1fdb77020bfe3f5e8356f4044;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ff89a7a1fdb77020bfe3f5e8356f4044 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff89a7a1fdb77020bfe3f5e8356f4044)) {
        Py_XDECREF(cache_frame_ff89a7a1fdb77020bfe3f5e8356f4044);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff89a7a1fdb77020bfe3f5e8356f4044 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff89a7a1fdb77020bfe3f5e8356f4044 = MAKE_FUNCTION_FRAME(codeobj_ff89a7a1fdb77020bfe3f5e8356f4044, module_rfc3986$parseresult, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff89a7a1fdb77020bfe3f5e8356f4044->m_type_description == NULL);
    frame_ff89a7a1fdb77020bfe3f5e8356f4044 = cache_frame_ff89a7a1fdb77020bfe3f5e8356f4044;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff89a7a1fdb77020bfe3f5e8356f4044);
    assert(Py_REFCNT(frame_ff89a7a1fdb77020bfe3f5e8356f4044) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[23]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        Py_DECREF(tmp_expression_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_ff89a7a1fdb77020bfe3f5e8356f4044, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff89a7a1fdb77020bfe3f5e8356f4044->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff89a7a1fdb77020bfe3f5e8356f4044, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff89a7a1fdb77020bfe3f5e8356f4044,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ff89a7a1fdb77020bfe3f5e8356f4044 == cache_frame_ff89a7a1fdb77020bfe3f5e8356f4044) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff89a7a1fdb77020bfe3f5e8356f4044);
        cache_frame_ff89a7a1fdb77020bfe3f5e8356f4044 = NULL;
    }

    assertFrameObject(frame_ff89a7a1fdb77020bfe3f5e8356f4044);

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


static PyObject *impl_rfc3986$parseresult$$$function__10_copy_with(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_scheme = python_pars[1];
    PyObject *par_userinfo = python_pars[2];
    PyObject *par_host = python_pars[3];
    PyObject *par_port = python_pars[4];
    PyObject *par_path = python_pars[5];
    PyObject *par_query = python_pars[6];
    PyObject *par_fragment = python_pars[7];
    PyObject *var_attributes = NULL;
    PyObject *var_attrs_dict = NULL;
    PyObject *var_name = NULL;
    PyObject *var_value = NULL;
    PyObject *var_authority = NULL;
    PyObject *var_ref = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a9ae9bf427177261d29715a5e0ddaa93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a9ae9bf427177261d29715a5e0ddaa93 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a9ae9bf427177261d29715a5e0ddaa93)) {
        Py_XDECREF(cache_frame_a9ae9bf427177261d29715a5e0ddaa93);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a9ae9bf427177261d29715a5e0ddaa93 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a9ae9bf427177261d29715a5e0ddaa93 = MAKE_FUNCTION_FRAME(codeobj_a9ae9bf427177261d29715a5e0ddaa93, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a9ae9bf427177261d29715a5e0ddaa93->m_type_description == NULL);
    frame_a9ae9bf427177261d29715a5e0ddaa93 = cache_frame_a9ae9bf427177261d29715a5e0ddaa93;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a9ae9bf427177261d29715a5e0ddaa93);
    assert(Py_REFCNT(frame_a9ae9bf427177261d29715a5e0ddaa93) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scheme);
        tmp_tuple_element_1 = par_scheme;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(7);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_userinfo);
        tmp_tuple_element_1 = par_userinfo;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_host);
        tmp_tuple_element_1 = par_host;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_port);
        tmp_tuple_element_1 = par_port;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_path);
        tmp_tuple_element_1 = par_path;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 4, tmp_tuple_element_1);
        CHECK_OBJECT(par_query);
        tmp_tuple_element_1 = par_query;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 5, tmp_tuple_element_1);
        CHECK_OBJECT(par_fragment);
        tmp_tuple_element_1 = par_fragment;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 6, tmp_tuple_element_1);
        frame_a9ae9bf427177261d29715a5e0ddaa93->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_attributes == NULL);
        var_attributes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_DICT_EMPTY();
        assert(var_attrs_dict == NULL);
        var_attrs_dict = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_attributes);
        tmp_iter_arg_1 = var_attributes;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooo";
                exception_lineno = 212;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 212;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 212;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 212;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 212;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_8;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_9;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_1 = var_value;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[45]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(par_self);
        tmp_getattr_target_1 = par_self;
        CHECK_OBJECT(var_name);
        tmp_getattr_attr_1 = var_name;
        tmp_assign_source_10 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_value);
        tmp_ass_subvalue_1 = var_value;
        if (var_attrs_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_attrs_dict;
        CHECK_OBJECT(var_name);
        tmp_ass_subscript_1 = var_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 212;
        type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[47]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = var_attrs_dict;
        frame_a9ae9bf427177261d29715a5e0ddaa93->m_frame.f_lineno = 216;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_authority == NULL);
        var_authority = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[23]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[48]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = var_attrs_dict;
        tmp_subscript_value_1 = mod_consts[34];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 218;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_authority);
        tmp_kw_call_value_1_1 = var_authority;
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_attrs_dict;
        tmp_subscript_value_2 = mod_consts[35];
        tmp_kw_call_value_2_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_attrs_dict;
        tmp_subscript_value_3 = mod_consts[20];
        tmp_kw_call_value_3_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_attrs_dict;
        tmp_subscript_value_4 = mod_consts[36];
        tmp_kw_call_value_4_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a9ae9bf427177261d29715a5e0ddaa93->m_frame.f_lineno = 217;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_assign_source_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ref == NULL);
        var_ref = tmp_assign_source_12;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[50];
        CHECK_OBJECT(var_ref);
        tmp_dict_value_1 = var_ref;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_9;
            tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            CHECK_OBJECT(par_self);
            tmp_expression_value_9 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "oooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 224;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = var_attrs_dict;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_a9ae9bf427177261d29715a5e0ddaa93, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a9ae9bf427177261d29715a5e0ddaa93->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a9ae9bf427177261d29715a5e0ddaa93, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a9ae9bf427177261d29715a5e0ddaa93,
        type_description_1,
        par_self,
        par_scheme,
        par_userinfo,
        par_host,
        par_port,
        par_path,
        par_query,
        par_fragment,
        var_attributes,
        var_attrs_dict,
        var_name,
        var_value,
        var_authority,
        var_ref
    );


    // Release cached frame if used for exception.
    if (frame_a9ae9bf427177261d29715a5e0ddaa93 == cache_frame_a9ae9bf427177261d29715a5e0ddaa93) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a9ae9bf427177261d29715a5e0ddaa93);
        cache_frame_a9ae9bf427177261d29715a5e0ddaa93 = NULL;
    }

    assertFrameObject(frame_a9ae9bf427177261d29715a5e0ddaa93);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_attributes);
    Py_DECREF(var_attributes);
    var_attributes = NULL;
    Py_XDECREF(var_attrs_dict);
    var_attrs_dict = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    CHECK_OBJECT(var_authority);
    Py_DECREF(var_authority);
    var_authority = NULL;
    CHECK_OBJECT(var_ref);
    Py_DECREF(var_ref);
    var_ref = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_attributes);
    var_attributes = NULL;
    Py_XDECREF(var_attrs_dict);
    var_attrs_dict = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_authority);
    var_authority = NULL;
    Py_XDECREF(var_ref);
    var_ref = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_userinfo);
    Py_DECREF(par_userinfo);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_userinfo);
    Py_DECREF(par_userinfo);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$parseresult$$$function__11_encode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_encoding = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_attrs = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_e25c75ef4576ee8721127c8cf0b737b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e25c75ef4576ee8721127c8cf0b737b9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e25c75ef4576ee8721127c8cf0b737b9)) {
        Py_XDECREF(cache_frame_e25c75ef4576ee8721127c8cf0b737b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e25c75ef4576ee8721127c8cf0b737b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e25c75ef4576ee8721127c8cf0b737b9 = MAKE_FUNCTION_FRAME(codeobj_e25c75ef4576ee8721127c8cf0b737b9, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e25c75ef4576ee8721127c8cf0b737b9->m_type_description == NULL);
    frame_e25c75ef4576ee8721127c8cf0b737b9 = cache_frame_e25c75ef4576ee8721127c8cf0b737b9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e25c75ef4576ee8721127c8cf0b737b9);
    assert(Py_REFCNT(frame_e25c75ef4576ee8721127c8cf0b737b9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_encoding));
        tmp_or_left_value_1 = Nuitka_Cell_GET(par_encoding);
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = Nuitka_Cell_GET(par_encoding);
            PyCell_SET(par_encoding, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 234;
                type_description_1 = "oco";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_1 = par_self;
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "oco";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_3;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = par_encoding;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_args_element_value_2 = MAKE_GENERATOR_rfc3986$parseresult$$$function__11_encode$$$genexpr__1_genexpr(tmp_closure_1);

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
        frame_e25c75ef4576ee8721127c8cf0b737b9->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_dict_seq_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        assert(var_attrs == NULL);
        var_attrs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[50];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[23]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oco";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(Nuitka_Cell_GET(par_encoding));
        tmp_dict_value_1 = Nuitka_Cell_GET(par_encoding);
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_attrs);
        tmp_dircall_arg3_1 = var_attrs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oco";
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
        exception_tb = MAKE_TRACEBACK(frame_e25c75ef4576ee8721127c8cf0b737b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e25c75ef4576ee8721127c8cf0b737b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e25c75ef4576ee8721127c8cf0b737b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e25c75ef4576ee8721127c8cf0b737b9,
        type_description_1,
        par_self,
        par_encoding,
        var_attrs
    );


    // Release cached frame if used for exception.
    if (frame_e25c75ef4576ee8721127c8cf0b737b9 == cache_frame_e25c75ef4576ee8721127c8cf0b737b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e25c75ef4576ee8721127c8cf0b737b9);
        cache_frame_e25c75ef4576ee8721127c8cf0b737b9 = NULL;
    }

    assertFrameObject(frame_e25c75ef4576ee8721127c8cf0b737b9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    par_encoding = NULL;
    CHECK_OBJECT(var_attrs);
    Py_DECREF(var_attrs);
    var_attrs = NULL;
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

    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    par_encoding = NULL;
    Py_XDECREF(var_attrs);
    var_attrs = NULL;
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



#if 1
struct rfc3986$parseresult$$$function__11_encode$$$genexpr__1_genexpr_locals {
    PyObject *var_attr;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
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

static PyObject *rfc3986$parseresult$$$function__11_encode$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct rfc3986$parseresult$$$function__11_encode$$$genexpr__1_genexpr_locals *generator_heap = (struct rfc3986$parseresult$$$function__11_encode$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_attr = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f12742baf204b995aa4126bbe632218d, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 232;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_attr;
            generator_heap->var_attr = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_attr);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_attr);
        tmp_expression_value_2 = generator_heap->var_attr;
        tmp_attribute_value_1 = mod_consts[55];
        generator_heap->tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 233;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(generator_heap->var_attr);
        tmp_expression_value_3 = generator_heap->var_attr;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[55]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 233;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 233;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 233;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 233;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(generator_heap->var_attr);
        tmp_expression_value_1 = generator_heap->var_attr;
        Py_INCREF(tmp_expression_value_1);
        condexpr_end_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_expression_value_2, sizeof(PyObject *), &tmp_attribute_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_expression_value_2, sizeof(PyObject *), &tmp_attribute_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 233;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 232;
        generator_heap->type_description_1 = "Noc";
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
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
            NULL,
            generator_heap->var_attr,
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

    Py_XDECREF(generator_heap->var_attr);
    generator_heap->var_attr = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_attr);
    generator_heap->var_attr = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_rfc3986$parseresult$$$function__11_encode$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        rfc3986$parseresult$$$function__11_encode$$$genexpr__1_genexpr_context,
        module_rfc3986$parseresult,
        mod_consts[15],
#if PYTHON_VERSION >= 0x350
        mod_consts[56],
#endif
        codeobj_f12742baf204b995aa4126bbe632218d,
        closure,
        2,
#if 1
        sizeof(struct rfc3986$parseresult$$$function__11_encode$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_rfc3986$parseresult$$$function__12_unsplit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_use_idna = python_pars[1];
    PyObject *var_parse_result = NULL;
    PyObject *var_hostbytes = NULL;
    PyObject *var_host = NULL;
    struct Nuitka_FrameObject *frame_967556453d8dbe1d04b50ceac93eab86;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_967556453d8dbe1d04b50ceac93eab86 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_self);
        tmp_assign_source_1 = par_self;
        assert(var_parse_result == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_parse_result = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_967556453d8dbe1d04b50ceac93eab86)) {
        Py_XDECREF(cache_frame_967556453d8dbe1d04b50ceac93eab86);

#if _DEBUG_REFCOUNTS
        if (cache_frame_967556453d8dbe1d04b50ceac93eab86 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_967556453d8dbe1d04b50ceac93eab86 = MAKE_FUNCTION_FRAME(codeobj_967556453d8dbe1d04b50ceac93eab86, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_967556453d8dbe1d04b50ceac93eab86->m_type_description == NULL);
    frame_967556453d8dbe1d04b50ceac93eab86 = cache_frame_967556453d8dbe1d04b50ceac93eab86;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_967556453d8dbe1d04b50ceac93eab86);
    assert(Py_REFCNT(frame_967556453d8dbe1d04b50ceac93eab86) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_use_idna);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_use_idna);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooo";
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
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 249;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[55]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_967556453d8dbe1d04b50ceac93eab86->m_frame.f_lineno = 250;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[57]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hostbytes == NULL);
        var_hostbytes = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_hostbytes);
        tmp_expression_value_4 = var_hostbytes;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[12]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 251;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_967556453d8dbe1d04b50ceac93eab86->m_frame.f_lineno = 251;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_host == NULL);
        var_host = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[48]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_host);
        tmp_kw_call_value_0_1 = var_host;
        frame_967556453d8dbe1d04b50ceac93eab86->m_frame.f_lineno = 252;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_parse_result;
            assert(old != NULL);
            var_parse_result = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_parse_result);
        tmp_expression_value_7 = var_parse_result;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[23]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_967556453d8dbe1d04b50ceac93eab86->m_frame.f_lineno = 253;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_967556453d8dbe1d04b50ceac93eab86, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_967556453d8dbe1d04b50ceac93eab86->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_967556453d8dbe1d04b50ceac93eab86, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_967556453d8dbe1d04b50ceac93eab86,
        type_description_1,
        par_self,
        par_use_idna,
        var_parse_result,
        var_hostbytes,
        var_host
    );


    // Release cached frame if used for exception.
    if (frame_967556453d8dbe1d04b50ceac93eab86 == cache_frame_967556453d8dbe1d04b50ceac93eab86) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_967556453d8dbe1d04b50ceac93eab86);
        cache_frame_967556453d8dbe1d04b50ceac93eab86 = NULL;
    }

    assertFrameObject(frame_967556453d8dbe1d04b50ceac93eab86);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_parse_result);
    Py_DECREF(var_parse_result);
    var_parse_result = NULL;
    Py_XDECREF(var_hostbytes);
    var_hostbytes = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
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

    Py_XDECREF(var_parse_result);
    var_parse_result = NULL;
    Py_XDECREF(var_hostbytes);
    var_hostbytes = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
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
    CHECK_OBJECT(par_use_idna);
    Py_DECREF(par_use_idna);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_use_idna);
    Py_DECREF(par_use_idna);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$parseresult$$$function__13___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_scheme = python_pars[1];
    PyObject *par_userinfo = python_pars[2];
    PyObject *par_host = python_pars[3];
    PyObject *par_port = python_pars[4];
    PyObject *par_path = python_pars[5];
    PyObject *par_query = python_pars[6];
    PyObject *par_fragment = python_pars[7];
    PyObject *par_uri_ref = python_pars[8];
    PyObject *par_encoding = python_pars[9];
    PyObject *par_lazy_normalize = python_pars[10];
    PyObject *var_parse_result = NULL;
    struct Nuitka_FrameObject *frame_bb5b577d688b830feca0539cb29de8b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_bb5b577d688b830feca0539cb29de8b8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bb5b577d688b830feca0539cb29de8b8)) {
        Py_XDECREF(cache_frame_bb5b577d688b830feca0539cb29de8b8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb5b577d688b830feca0539cb29de8b8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb5b577d688b830feca0539cb29de8b8 = MAKE_FUNCTION_FRAME(codeobj_bb5b577d688b830feca0539cb29de8b8, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb5b577d688b830feca0539cb29de8b8->m_type_description == NULL);
    frame_bb5b577d688b830feca0539cb29de8b8 = cache_frame_bb5b577d688b830feca0539cb29de8b8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bb5b577d688b830feca0539cb29de8b8);
    assert(Py_REFCNT(frame_bb5b577d688b830feca0539cb29de8b8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_args_element_value_3;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_args_element_value_6;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        PyObject *tmp_args_element_value_7;
        int tmp_or_left_truth_5;
        PyObject *tmp_or_left_value_5;
        PyObject *tmp_or_right_value_5;
        PyObject *tmp_args_element_value_8;
        int tmp_or_left_truth_6;
        PyObject *tmp_or_left_value_6;
        PyObject *tmp_or_right_value_6;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_expression_value_1 = BUILTIN_SUPER2(moduledict_rfc3986$parseresult, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        CHECK_OBJECT(par_scheme);
        tmp_or_left_value_1 = par_scheme;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 277;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = Py_None;
        tmp_args_element_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_2 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_userinfo);
        tmp_or_left_value_2 = par_userinfo;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 278;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = Py_None;
        tmp_args_element_value_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_value_3 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT(par_host);
        tmp_args_element_value_4 = par_host;
        CHECK_OBJECT(par_port);
        tmp_or_left_value_3 = par_port;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 280;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = Py_None;
        tmp_args_element_value_5 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_args_element_value_5 = tmp_or_left_value_3;
        or_end_3:;
        CHECK_OBJECT(par_path);
        tmp_or_left_value_4 = par_path;
        tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 281;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        tmp_or_right_value_4 = Py_None;
        tmp_args_element_value_6 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_args_element_value_6 = tmp_or_left_value_4;
        or_end_4:;
        CHECK_OBJECT(par_query);
        tmp_or_left_value_5 = par_query;
        tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
        if (tmp_or_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 282;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        tmp_or_right_value_5 = Py_None;
        tmp_args_element_value_7 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_args_element_value_7 = tmp_or_left_value_5;
        or_end_5:;
        CHECK_OBJECT(par_fragment);
        tmp_or_left_value_6 = par_fragment;
        tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
        if (tmp_or_left_truth_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 283;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_6 == 1) {
            goto or_left_6;
        } else {
            goto or_right_6;
        }
        or_right_6:;
        tmp_or_right_value_6 = Py_None;
        tmp_args_element_value_8 = tmp_or_right_value_6;
        goto or_end_6;
        or_left_6:;
        tmp_args_element_value_8 = tmp_or_left_value_6;
        or_end_6:;
        frame_bb5b577d688b830feca0539cb29de8b8->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert(var_parse_result == NULL);
        var_parse_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_encoding);
        tmp_assattr_value_1 = par_encoding;
        CHECK_OBJECT(var_parse_result);
        tmp_assattr_target_1 = var_parse_result;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_uri_ref);
        tmp_assattr_value_2 = par_uri_ref;
        CHECK_OBJECT(var_parse_result);
        tmp_assattr_target_2 = var_parse_result;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[23], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_lazy_normalize);
        tmp_assattr_value_3 = par_lazy_normalize;
        CHECK_OBJECT(var_parse_result);
        tmp_assattr_target_3 = var_parse_result;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[60], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb5b577d688b830feca0539cb29de8b8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb5b577d688b830feca0539cb29de8b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb5b577d688b830feca0539cb29de8b8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb5b577d688b830feca0539cb29de8b8,
        type_description_1,
        par_cls,
        par_scheme,
        par_userinfo,
        par_host,
        par_port,
        par_path,
        par_query,
        par_fragment,
        par_uri_ref,
        par_encoding,
        par_lazy_normalize,
        var_parse_result,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_bb5b577d688b830feca0539cb29de8b8 == cache_frame_bb5b577d688b830feca0539cb29de8b8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb5b577d688b830feca0539cb29de8b8);
        cache_frame_bb5b577d688b830feca0539cb29de8b8 = NULL;
    }

    assertFrameObject(frame_bb5b577d688b830feca0539cb29de8b8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_parse_result);
    tmp_return_value = var_parse_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_parse_result);
    Py_DECREF(var_parse_result);
    var_parse_result = NULL;
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

    Py_XDECREF(var_parse_result);
    var_parse_result = NULL;
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
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_userinfo);
    Py_DECREF(par_userinfo);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_uri_ref);
    Py_DECREF(par_uri_ref);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_lazy_normalize);
    Py_DECREF(par_lazy_normalize);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_userinfo);
    Py_DECREF(par_userinfo);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_uri_ref);
    Py_DECREF(par_uri_ref);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_lazy_normalize);
    Py_DECREF(par_lazy_normalize);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$parseresult$$$function__14_from_parts(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_scheme = python_pars[1];
    PyObject *par_userinfo = python_pars[2];
    PyObject *par_host = python_pars[3];
    PyObject *par_port = python_pars[4];
    PyObject *par_path = python_pars[5];
    PyObject *par_query = python_pars[6];
    PyObject *par_fragment = python_pars[7];
    PyObject *par_encoding = python_pars[8];
    PyObject *par_lazy_normalize = python_pars[9];
    PyObject *var_authority = NULL;
    PyObject *var_uri_ref = NULL;
    PyObject *var_to_bytes = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_fa76f0c2daedc9122a4447011e557cb8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fa76f0c2daedc9122a4447011e557cb8 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[25];
        assert(var_authority == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_authority = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_fa76f0c2daedc9122a4447011e557cb8)) {
        Py_XDECREF(cache_frame_fa76f0c2daedc9122a4447011e557cb8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa76f0c2daedc9122a4447011e557cb8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa76f0c2daedc9122a4447011e557cb8 = MAKE_FUNCTION_FRAME(codeobj_fa76f0c2daedc9122a4447011e557cb8, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa76f0c2daedc9122a4447011e557cb8->m_type_description == NULL);
    frame_fa76f0c2daedc9122a4447011e557cb8 = cache_frame_fa76f0c2daedc9122a4447011e557cb8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa76f0c2daedc9122a4447011e557cb8);
    assert(Py_REFCNT(frame_fa76f0c2daedc9122a4447011e557cb8) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_userinfo);
        tmp_cmp_expr_left_1 = par_userinfo;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_authority);
        tmp_iadd_expr_left_1 = var_authority;
        CHECK_OBJECT(par_userinfo);
        tmp_add_expr_left_1 = par_userinfo;
        tmp_add_expr_right_1 = mod_consts[26];
        tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        var_authority = tmp_assign_source_2;

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_host);
        tmp_cmp_expr_left_2 = par_host;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_authority);
        tmp_iadd_expr_left_2 = var_authority;
        CHECK_OBJECT(par_host);
        tmp_iadd_expr_right_2 = par_host;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_2;
        var_authority = tmp_assign_source_3;

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_port);
        tmp_cmp_expr_left_3 = par_port;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_authority);
        tmp_iadd_expr_left_3 = var_authority;
        tmp_kw_call_arg_value_0_1 = mod_consts[27];
        CHECK_OBJECT(par_port);
        tmp_int_arg_1 = par_port;
        tmp_kw_call_arg_value_1_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_fa76f0c2daedc9122a4447011e557cb8->m_frame.f_lineno = 310;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_iadd_expr_right_3 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_iadd_expr_left_3;
        var_authority = tmp_assign_source_4;

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scheme);
        tmp_kw_call_value_0_1 = par_scheme;
        CHECK_OBJECT(var_authority);
        tmp_kw_call_value_1_1 = var_authority;
        CHECK_OBJECT(par_path);
        tmp_kw_call_value_2_1 = par_path;
        CHECK_OBJECT(par_query);
        tmp_kw_call_value_3_1 = par_query;
        CHECK_OBJECT(par_fragment);
        tmp_kw_call_value_4_1 = par_fragment;
        CHECK_OBJECT(par_encoding);
        tmp_kw_call_value_5_1 = par_encoding;
        frame_fa76f0c2daedc9122a4447011e557cb8->m_frame.f_lineno = 311;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[30]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_uri_ref == NULL);
        var_uri_ref = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_lazy_normalize);
        tmp_operand_value_1 = par_lazy_normalize;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_uri_ref);
        tmp_called_instance_1 = var_uri_ref;
        frame_fa76f0c2daedc9122a4447011e557cb8->m_frame.f_lineno = 320;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[31]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_uri_ref;
            assert(old != NULL);
            var_uri_ref = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_to_bytes == NULL);
        var_to_bytes = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_uri_ref);
        tmp_tuple_element_1 = var_uri_ref;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[33]);
        frame_fa76f0c2daedc9122a4447011e557cb8->m_frame.f_lineno = 322;
        tmp_iter_arg_1 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 322;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 322;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 322;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 322;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[1];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 322;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
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
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_userinfo;
            par_userinfo = tmp_assign_source_12;
            Py_INCREF(par_userinfo);
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
            PyObject *old = par_host;
            par_host = tmp_assign_source_13;
            Py_INCREF(par_host);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_port;
            par_port = tmp_assign_source_14;
            Py_INCREF(par_port);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_kw_call_value_5_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_kw_call_value_9_1;
        CHECK_OBJECT(par_cls);
        tmp_called_value_3 = par_cls;
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_4 = var_to_bytes;
        CHECK_OBJECT(par_scheme);
        tmp_args_element_value_1 = par_scheme;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_2 = par_encoding;
        frame_fa76f0c2daedc9122a4447011e557cb8->m_frame.f_lineno = 324;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_5 = var_to_bytes;
        CHECK_OBJECT(par_userinfo);
        tmp_args_element_value_3 = par_userinfo;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_4 = par_encoding;
        frame_fa76f0c2daedc9122a4447011e557cb8->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_kw_call_value_1_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 325;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_6 = var_to_bytes;
        CHECK_OBJECT(par_host);
        tmp_args_element_value_5 = par_host;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_6 = par_encoding;
        frame_fa76f0c2daedc9122a4447011e557cb8->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_kw_call_value_2_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_kw_call_value_2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);

            exception_lineno = 326;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_port);
        tmp_kw_call_value_3_2 = par_port;
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_7 = var_to_bytes;
        CHECK_OBJECT(par_path);
        tmp_args_element_value_7 = par_path;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_8 = par_encoding;
        frame_fa76f0c2daedc9122a4447011e557cb8->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_kw_call_value_4_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        if (tmp_kw_call_value_4_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);

            exception_lineno = 328;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_8 = var_to_bytes;
        CHECK_OBJECT(par_query);
        tmp_args_element_value_9 = par_query;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_10 = par_encoding;
        frame_fa76f0c2daedc9122a4447011e557cb8->m_frame.f_lineno = 329;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_kw_call_value_5_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        if (tmp_kw_call_value_5_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);
            Py_DECREF(tmp_kw_call_value_4_2);

            exception_lineno = 329;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_9 = var_to_bytes;
        CHECK_OBJECT(par_fragment);
        tmp_args_element_value_11 = par_fragment;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_12 = par_encoding;
        frame_fa76f0c2daedc9122a4447011e557cb8->m_frame.f_lineno = 330;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_kw_call_value_6_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        if (tmp_kw_call_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);
            Py_DECREF(tmp_kw_call_value_4_2);
            Py_DECREF(tmp_kw_call_value_5_2);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_uri_ref);
        tmp_kw_call_value_7_1 = var_uri_ref;
        CHECK_OBJECT(par_encoding);
        tmp_kw_call_value_8_1 = par_encoding;
        CHECK_OBJECT(par_lazy_normalize);
        tmp_kw_call_value_9_1 = par_lazy_normalize;
        frame_fa76f0c2daedc9122a4447011e557cb8->m_frame.f_lineno = 323;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[63]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_1_2);
        Py_DECREF(tmp_kw_call_value_2_2);
        Py_DECREF(tmp_kw_call_value_4_2);
        Py_DECREF(tmp_kw_call_value_5_2);
        Py_DECREF(tmp_kw_call_value_6_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_fa76f0c2daedc9122a4447011e557cb8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa76f0c2daedc9122a4447011e557cb8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa76f0c2daedc9122a4447011e557cb8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa76f0c2daedc9122a4447011e557cb8,
        type_description_1,
        par_cls,
        par_scheme,
        par_userinfo,
        par_host,
        par_port,
        par_path,
        par_query,
        par_fragment,
        par_encoding,
        par_lazy_normalize,
        var_authority,
        var_uri_ref,
        var_to_bytes
    );


    // Release cached frame if used for exception.
    if (frame_fa76f0c2daedc9122a4447011e557cb8 == cache_frame_fa76f0c2daedc9122a4447011e557cb8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa76f0c2daedc9122a4447011e557cb8);
        cache_frame_fa76f0c2daedc9122a4447011e557cb8 = NULL;
    }

    assertFrameObject(frame_fa76f0c2daedc9122a4447011e557cb8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_userinfo);
    Py_DECREF(par_userinfo);
    par_userinfo = NULL;
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    par_host = NULL;
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    par_port = NULL;
    CHECK_OBJECT(var_authority);
    Py_DECREF(var_authority);
    var_authority = NULL;
    CHECK_OBJECT(var_uri_ref);
    Py_DECREF(var_uri_ref);
    var_uri_ref = NULL;
    CHECK_OBJECT(var_to_bytes);
    Py_DECREF(var_to_bytes);
    var_to_bytes = NULL;
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

    Py_XDECREF(par_userinfo);
    par_userinfo = NULL;
    Py_XDECREF(par_host);
    par_host = NULL;
    Py_XDECREF(par_port);
    par_port = NULL;
    Py_XDECREF(var_authority);
    var_authority = NULL;
    Py_XDECREF(var_uri_ref);
    var_uri_ref = NULL;
    Py_XDECREF(var_to_bytes);
    var_to_bytes = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_lazy_normalize);
    Py_DECREF(par_lazy_normalize);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_lazy_normalize);
    Py_DECREF(par_lazy_normalize);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$parseresult$$$function__15_from_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_uri_string = python_pars[1];
    PyObject *par_encoding = python_pars[2];
    PyObject *par_strict = python_pars[3];
    PyObject *par_lazy_normalize = python_pars[4];
    PyObject *var_reference = NULL;
    PyObject *var_userinfo = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_to_bytes = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c037bfe7b387cde8c9e6ceb2bee8cc47;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c037bfe7b387cde8c9e6ceb2bee8cc47 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c037bfe7b387cde8c9e6ceb2bee8cc47)) {
        Py_XDECREF(cache_frame_c037bfe7b387cde8c9e6ceb2bee8cc47);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c037bfe7b387cde8c9e6ceb2bee8cc47 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c037bfe7b387cde8c9e6ceb2bee8cc47 = MAKE_FUNCTION_FRAME(codeobj_c037bfe7b387cde8c9e6ceb2bee8cc47, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_type_description == NULL);
    frame_c037bfe7b387cde8c9e6ceb2bee8cc47 = cache_frame_c037bfe7b387cde8c9e6ceb2bee8cc47;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c037bfe7b387cde8c9e6ceb2bee8cc47);
    assert(Py_REFCNT(frame_c037bfe7b387cde8c9e6ceb2bee8cc47) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri_string);
        tmp_args_element_value_1 = par_uri_string;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_2 = par_encoding;
        frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_frame.f_lineno = 349;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[39],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reference == NULL);
        var_reference = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_lazy_normalize);
        tmp_operand_value_1 = par_lazy_normalize;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_reference);
        tmp_called_instance_2 = var_reference;
        frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_frame.f_lineno = 351;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[31]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_reference;
            assert(old != NULL);
            var_reference = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_reference);
        tmp_args_element_value_3 = var_reference;
        CHECK_OBJECT(par_strict);
        tmp_args_element_value_4 = par_strict;
        frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 352;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 352;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 352;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 352;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[1];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 352;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_userinfo == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_userinfo = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_host = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_port = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_to_bytes == NULL);
        var_to_bytes = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_kw_call_value_9_1;
        CHECK_OBJECT(par_cls);
        tmp_called_value_2 = par_cls;
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_3 = var_to_bytes;
        CHECK_OBJECT(var_reference);
        tmp_expression_value_3 = var_reference;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[34]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_6 = par_encoding;
        frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_frame.f_lineno = 356;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_4 = var_to_bytes;
        CHECK_OBJECT(var_userinfo);
        tmp_args_element_value_7 = var_userinfo;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_8 = par_encoding;
        frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 357;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_5 = var_to_bytes;
        CHECK_OBJECT(var_host);
        tmp_args_element_value_9 = var_host;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_10 = par_encoding;
        frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 358;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_port);
        tmp_kw_call_value_3_1 = var_port;
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_6 = var_to_bytes;
        CHECK_OBJECT(var_reference);
        tmp_expression_value_4 = var_reference;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[35]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 360;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_12 = par_encoding;
        frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_frame.f_lineno = 360;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_kw_call_value_4_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 360;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_7 = var_to_bytes;
        CHECK_OBJECT(var_reference);
        tmp_expression_value_5 = var_reference;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[20]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 361;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_14 = par_encoding;
        frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_kw_call_value_5_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_13);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 361;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_bytes);
        tmp_called_value_8 = var_to_bytes;
        CHECK_OBJECT(var_reference);
        tmp_expression_value_6 = var_reference;
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[36]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 362;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_16 = par_encoding;
        frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_kw_call_value_6_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 362;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_reference);
        tmp_kw_call_value_7_1 = var_reference;
        CHECK_OBJECT(par_encoding);
        tmp_kw_call_value_8_1 = par_encoding;
        CHECK_OBJECT(par_lazy_normalize);
        tmp_kw_call_value_9_1 = par_lazy_normalize;
        frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_frame.f_lineno = 355;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[63]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
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
        exception_tb = MAKE_TRACEBACK(frame_c037bfe7b387cde8c9e6ceb2bee8cc47, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c037bfe7b387cde8c9e6ceb2bee8cc47->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c037bfe7b387cde8c9e6ceb2bee8cc47, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c037bfe7b387cde8c9e6ceb2bee8cc47,
        type_description_1,
        par_cls,
        par_uri_string,
        par_encoding,
        par_strict,
        par_lazy_normalize,
        var_reference,
        var_userinfo,
        var_host,
        var_port,
        var_to_bytes
    );


    // Release cached frame if used for exception.
    if (frame_c037bfe7b387cde8c9e6ceb2bee8cc47 == cache_frame_c037bfe7b387cde8c9e6ceb2bee8cc47) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c037bfe7b387cde8c9e6ceb2bee8cc47);
        cache_frame_c037bfe7b387cde8c9e6ceb2bee8cc47 = NULL;
    }

    assertFrameObject(frame_c037bfe7b387cde8c9e6ceb2bee8cc47);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_reference);
    Py_DECREF(var_reference);
    var_reference = NULL;
    CHECK_OBJECT(var_userinfo);
    Py_DECREF(var_userinfo);
    var_userinfo = NULL;
    CHECK_OBJECT(var_host);
    Py_DECREF(var_host);
    var_host = NULL;
    CHECK_OBJECT(var_port);
    Py_DECREF(var_port);
    var_port = NULL;
    CHECK_OBJECT(var_to_bytes);
    Py_DECREF(var_to_bytes);
    var_to_bytes = NULL;
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

    Py_XDECREF(var_reference);
    var_reference = NULL;
    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_to_bytes);
    var_to_bytes = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_uri_string);
    Py_DECREF(par_uri_string);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_lazy_normalize);
    Py_DECREF(par_lazy_normalize);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_uri_string);
    Py_DECREF(par_uri_string);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_lazy_normalize);
    Py_DECREF(par_lazy_normalize);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$parseresult$$$function__16_authority(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_90c4aa466ee4e94f539f23a042a93087;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_90c4aa466ee4e94f539f23a042a93087 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_90c4aa466ee4e94f539f23a042a93087)) {
        Py_XDECREF(cache_frame_90c4aa466ee4e94f539f23a042a93087);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90c4aa466ee4e94f539f23a042a93087 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90c4aa466ee4e94f539f23a042a93087 = MAKE_FUNCTION_FRAME(codeobj_90c4aa466ee4e94f539f23a042a93087, module_rfc3986$parseresult, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_90c4aa466ee4e94f539f23a042a93087->m_type_description == NULL);
    frame_90c4aa466ee4e94f539f23a042a93087 = cache_frame_90c4aa466ee4e94f539f23a042a93087;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_90c4aa466ee4e94f539f23a042a93087);
    assert(Py_REFCNT(frame_90c4aa466ee4e94f539f23a042a93087) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 371;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_90c4aa466ee4e94f539f23a042a93087->m_frame.f_lineno = 371;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
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
        exception_tb = MAKE_TRACEBACK(frame_90c4aa466ee4e94f539f23a042a93087, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90c4aa466ee4e94f539f23a042a93087->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90c4aa466ee4e94f539f23a042a93087, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90c4aa466ee4e94f539f23a042a93087,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_90c4aa466ee4e94f539f23a042a93087 == cache_frame_90c4aa466ee4e94f539f23a042a93087) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90c4aa466ee4e94f539f23a042a93087);
        cache_frame_90c4aa466ee4e94f539f23a042a93087 = NULL;
    }

    assertFrameObject(frame_90c4aa466ee4e94f539f23a042a93087);

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


static PyObject *impl_rfc3986$parseresult$$$function__17_copy_with(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_scheme = python_pars[1];
    PyObject *par_userinfo = python_pars[2];
    PyObject *par_host = python_pars[3];
    PyObject *par_port = python_pars[4];
    PyObject *par_path = python_pars[5];
    PyObject *par_query = python_pars[6];
    PyObject *par_fragment = python_pars[7];
    PyObject *par_lazy_normalize = python_pars[8];
    PyObject *var_attributes = NULL;
    PyObject *var_attrs_dict = NULL;
    PyObject *var_name = NULL;
    PyObject *var_value = NULL;
    PyObject *var_authority = NULL;
    PyObject *var_to_str = NULL;
    PyObject *var_ref = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf)) {
        Py_XDECREF(cache_frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf = MAKE_FUNCTION_FRAME(codeobj_97aa01f754fde0aeaa9f8cd5ccb3b9bf, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_type_description == NULL);
    frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf = cache_frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf);
    assert(Py_REFCNT(frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scheme);
        tmp_tuple_element_1 = par_scheme;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(7);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_userinfo);
        tmp_tuple_element_1 = par_userinfo;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_host);
        tmp_tuple_element_1 = par_host;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_port);
        tmp_tuple_element_1 = par_port;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_path);
        tmp_tuple_element_1 = par_path;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 4, tmp_tuple_element_1);
        CHECK_OBJECT(par_query);
        tmp_tuple_element_1 = par_query;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 5, tmp_tuple_element_1);
        CHECK_OBJECT(par_fragment);
        tmp_tuple_element_1 = par_fragment;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 6, tmp_tuple_element_1);
        frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_attributes == NULL);
        var_attributes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_DICT_EMPTY();
        assert(var_attrs_dict == NULL);
        var_attrs_dict = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_attributes);
        tmp_iter_arg_1 = var_attributes;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooo";
                exception_lineno = 390;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 390;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 390;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "oooooooooooooooo";
                    exception_lineno = 390;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooo";
            exception_lineno = 390;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_8;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_9;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_1 = var_value;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[45]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 392;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_getattr_target_1 = par_self;
        CHECK_OBJECT(var_name);
        tmp_getattr_attr_1 = var_name;
        tmp_assign_source_10 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(var_value);
        tmp_isinstance_inst_1 = var_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_value);
        tmp_expression_value_2 = var_value;
        tmp_attribute_value_1 = mod_consts[55];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_value);
        tmp_expression_value_3 = var_value;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[55]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 394;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_frame.f_lineno = 394;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_value);
        tmp_ass_subvalue_1 = var_value;
        if (var_attrs_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 395;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_attrs_dict;
        CHECK_OBJECT(var_name);
        tmp_ass_subscript_1 = var_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 390;
        type_description_1 = "oooooooooooooooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[47]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = var_attrs_dict;
        frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_frame.f_lineno = 396;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_authority == NULL);
        var_authority = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[9]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_to_str == NULL);
        var_to_str = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_17;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[23]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[48]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_str);
        tmp_called_value_5 = var_to_str;
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_attrs_dict;
        tmp_subscript_value_1 = mod_consts[34];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 399;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[10]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 399;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_frame.f_lineno = 399;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 399;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_str);
        tmp_called_value_6 = var_to_str;
        CHECK_OBJECT(var_authority);
        tmp_args_element_value_7 = var_authority;
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[10]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 400;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 400;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_str);
        tmp_called_value_7 = var_to_str;
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_attrs_dict;
        tmp_subscript_value_2 = mod_consts[35];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_2);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 401;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_args_element_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[10]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 401;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 401;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_str);
        tmp_called_value_8 = var_to_str;
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = var_attrs_dict;
        tmp_subscript_value_3 = mod_consts[20];
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_3);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 402;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_args_element_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[10]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 402;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_frame.f_lineno = 402;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_kw_call_value_3_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 402;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_to_str);
        tmp_called_value_9 = var_to_str;
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = var_attrs_dict;
        tmp_subscript_value_4 = mod_consts[36];
        tmp_args_element_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_4);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_args_element_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[10]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_kw_call_value_4_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_frame.f_lineno = 398;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_assign_source_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ref == NULL);
        var_ref = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(par_lazy_normalize);
        tmp_operand_value_2 = par_lazy_normalize;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_ref);
        tmp_called_instance_1 = var_ref;
        frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_frame.f_lineno = 406;
        tmp_assign_source_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[31]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ref;
            assert(old != NULL);
            var_ref = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[50];
        CHECK_OBJECT(var_ref);
        tmp_dict_value_1 = var_ref;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_18;
            tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 409;
                type_description_1 = "oooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_18 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[10]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "oooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[60];
            CHECK_OBJECT(par_lazy_normalize);
            tmp_dict_value_1 = par_lazy_normalize;
            tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        if (var_attrs_dict == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = var_attrs_dict;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf,
        type_description_1,
        par_self,
        par_scheme,
        par_userinfo,
        par_host,
        par_port,
        par_path,
        par_query,
        par_fragment,
        par_lazy_normalize,
        var_attributes,
        var_attrs_dict,
        var_name,
        var_value,
        var_authority,
        var_to_str,
        var_ref
    );


    // Release cached frame if used for exception.
    if (frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf == cache_frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf);
        cache_frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf = NULL;
    }

    assertFrameObject(frame_97aa01f754fde0aeaa9f8cd5ccb3b9bf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_attributes);
    Py_DECREF(var_attributes);
    var_attributes = NULL;
    Py_XDECREF(var_attrs_dict);
    var_attrs_dict = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    CHECK_OBJECT(var_authority);
    Py_DECREF(var_authority);
    var_authority = NULL;
    CHECK_OBJECT(var_to_str);
    Py_DECREF(var_to_str);
    var_to_str = NULL;
    CHECK_OBJECT(var_ref);
    Py_DECREF(var_ref);
    var_ref = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_attributes);
    var_attributes = NULL;
    Py_XDECREF(var_attrs_dict);
    var_attrs_dict = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_authority);
    var_authority = NULL;
    Py_XDECREF(var_to_str);
    var_to_str = NULL;
    Py_XDECREF(var_ref);
    var_ref = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_userinfo);
    Py_DECREF(par_userinfo);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_lazy_normalize);
    Py_DECREF(par_lazy_normalize);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_userinfo);
    Py_DECREF(par_userinfo);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_lazy_normalize);
    Py_DECREF(par_lazy_normalize);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$parseresult$$$function__18_unsplit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_use_idna = python_pars[1];
    PyObject *var_parse_result = NULL;
    PyObject *var_host = NULL;
    PyObject *var_hostbytes = NULL;
    PyObject *var_uri = NULL;
    struct Nuitka_FrameObject *frame_377137a2d88de2d935c57bdcd97039e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_377137a2d88de2d935c57bdcd97039e0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_self);
        tmp_assign_source_1 = par_self;
        assert(var_parse_result == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_parse_result = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_377137a2d88de2d935c57bdcd97039e0)) {
        Py_XDECREF(cache_frame_377137a2d88de2d935c57bdcd97039e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_377137a2d88de2d935c57bdcd97039e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_377137a2d88de2d935c57bdcd97039e0 = MAKE_FUNCTION_FRAME(codeobj_377137a2d88de2d935c57bdcd97039e0, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_377137a2d88de2d935c57bdcd97039e0->m_type_description == NULL);
    frame_377137a2d88de2d935c57bdcd97039e0 = cache_frame_377137a2d88de2d935c57bdcd97039e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_377137a2d88de2d935c57bdcd97039e0);
    assert(Py_REFCNT(frame_377137a2d88de2d935c57bdcd97039e0) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_use_idna);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_use_idna);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooo";
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
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 421;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 424;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_377137a2d88de2d935c57bdcd97039e0->m_frame.f_lineno = 424;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_host == NULL);
        var_host = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_host);
        tmp_expression_value_5 = var_host;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[55]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_377137a2d88de2d935c57bdcd97039e0->m_frame.f_lineno = 425;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[57]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hostbytes == NULL);
        var_hostbytes = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[48]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hostbytes);
        tmp_kw_call_value_0_1 = var_hostbytes;
        frame_377137a2d88de2d935c57bdcd97039e0->m_frame.f_lineno = 426;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_parse_result;
            assert(old != NULL);
            var_parse_result = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[60]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 427;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_parse_result);
        tmp_expression_value_8 = var_parse_result;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[48]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_377137a2d88de2d935c57bdcd97039e0->m_frame.f_lineno = 428;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[65], 0), mod_consts[66]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_parse_result;
            assert(old != NULL);
            var_parse_result = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_parse_result);
        tmp_expression_value_9 = var_parse_result;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[23]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_377137a2d88de2d935c57bdcd97039e0->m_frame.f_lineno = 429;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_uri == NULL);
        var_uri = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_uri);
        tmp_expression_value_10 = var_uri;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[55]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[10]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_377137a2d88de2d935c57bdcd97039e0->m_frame.f_lineno = 430;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_377137a2d88de2d935c57bdcd97039e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_377137a2d88de2d935c57bdcd97039e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_377137a2d88de2d935c57bdcd97039e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_377137a2d88de2d935c57bdcd97039e0,
        type_description_1,
        par_self,
        par_use_idna,
        var_parse_result,
        var_host,
        var_hostbytes,
        var_uri
    );


    // Release cached frame if used for exception.
    if (frame_377137a2d88de2d935c57bdcd97039e0 == cache_frame_377137a2d88de2d935c57bdcd97039e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_377137a2d88de2d935c57bdcd97039e0);
        cache_frame_377137a2d88de2d935c57bdcd97039e0 = NULL;
    }

    assertFrameObject(frame_377137a2d88de2d935c57bdcd97039e0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_parse_result);
    Py_DECREF(var_parse_result);
    var_parse_result = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_hostbytes);
    var_hostbytes = NULL;
    CHECK_OBJECT(var_uri);
    Py_DECREF(var_uri);
    var_uri = NULL;
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

    Py_XDECREF(var_parse_result);
    var_parse_result = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_hostbytes);
    var_hostbytes = NULL;
    Py_XDECREF(var_uri);
    var_uri = NULL;
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
    CHECK_OBJECT(par_use_idna);
    Py_DECREF(par_use_idna);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_use_idna);
    Py_DECREF(par_use_idna);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$parseresult$$$function__19_split_authority(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_authority = python_pars[0];
    PyObject *var_userinfo = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_extra_host = NULL;
    PyObject *var_rest = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1021ae9e19c9ca466b23c54e29647c2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_1021ae9e19c9ca466b23c54e29647c2c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_userinfo == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_userinfo = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_host = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_port = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        assert(var_extra_host == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_extra_host = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(par_authority);
        tmp_assign_source_5 = par_authority;
        assert(var_rest == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_rest = tmp_assign_source_5;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_1021ae9e19c9ca466b23c54e29647c2c)) {
        Py_XDECREF(cache_frame_1021ae9e19c9ca466b23c54e29647c2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1021ae9e19c9ca466b23c54e29647c2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1021ae9e19c9ca466b23c54e29647c2c = MAKE_FUNCTION_FRAME(codeobj_1021ae9e19c9ca466b23c54e29647c2c, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1021ae9e19c9ca466b23c54e29647c2c->m_type_description == NULL);
    frame_1021ae9e19c9ca466b23c54e29647c2c = cache_frame_1021ae9e19c9ca466b23c54e29647c2c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1021ae9e19c9ca466b23c54e29647c2c);
    assert(Py_REFCNT(frame_1021ae9e19c9ca466b23c54e29647c2c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[26];
        CHECK_OBJECT(par_authority);
        tmp_cmp_expr_right_1 = par_authority;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_authority);
        tmp_expression_value_1 = par_authority;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[68]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_1021ae9e19c9ca466b23c54e29647c2c->m_frame.f_lineno = 442;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[69]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
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


            type_description_1 = "oooooo";
            exception_lineno = 442;
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


            type_description_1 = "oooooo";
            exception_lineno = 442;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 442;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 442;
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
        {
            PyObject *old = var_userinfo;
            assert(old != NULL);
            var_userinfo = tmp_assign_source_9;
            Py_INCREF(var_userinfo);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_rest;
            assert(old != NULL);
            var_rest = tmp_assign_source_10;
            Py_INCREF(var_rest);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_rest);
        tmp_expression_value_2 = var_rest;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[70]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1021ae9e19c9ca466b23c54e29647c2c->m_frame.f_lineno = 445;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[71]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 445;
            type_description_1 = "oooooo";
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
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_rest);
        tmp_expression_value_3 = var_rest;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[72]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_1021ae9e19c9ca466b23c54e29647c2c->m_frame.f_lineno = 446;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[73]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 446;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 446;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 446;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 446;
            goto try_except_handler_5;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_host;
            assert(old != NULL);
            var_host = tmp_assign_source_14;
            Py_INCREF(var_host);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_rest;
            assert(old != NULL);
            var_rest = tmp_assign_source_15;
            Py_INCREF(var_rest);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_host);
        tmp_iadd_expr_left_1 = var_host;
        tmp_iadd_expr_right_1 = mod_consts[74];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = tmp_iadd_expr_left_1;
        var_host = tmp_assign_source_16;

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = mod_consts[75];
        if (var_rest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = var_rest;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        if (var_rest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 450;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_4 = var_rest;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[72]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        frame_1021ae9e19c9ca466b23c54e29647c2c->m_frame.f_lineno = 450;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[77]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 450;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 450;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 450;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 450;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_20 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_extra_host;
            assert(old != NULL);
            var_extra_host = tmp_assign_source_20;
            Py_INCREF(var_extra_host);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_21 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_port;
            assert(old != NULL);
            var_port = tmp_assign_source_21;
            Py_INCREF(var_port);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_host);
        tmp_operand_value_1 = var_host;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_rest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(var_rest);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_22;
        if (var_rest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 452;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_22 = var_rest;
        {
            PyObject *old = var_host;
            assert(old != NULL);
            var_host = tmp_assign_source_22;
            Py_INCREF(var_host);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    branch_end_3:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_3;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_extra_host);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_extra_host);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_host);
        tmp_operand_value_2 = var_host;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_5 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(var_extra_host);
        tmp_assign_source_23 = var_extra_host;
        {
            PyObject *old = var_host;
            assert(old != NULL);
            var_host = tmp_assign_source_23;
            Py_INCREF(var_host);
            Py_DECREF(old);
        }

    }
    branch_no_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1021ae9e19c9ca466b23c54e29647c2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1021ae9e19c9ca466b23c54e29647c2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1021ae9e19c9ca466b23c54e29647c2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1021ae9e19c9ca466b23c54e29647c2c,
        type_description_1,
        par_authority,
        var_userinfo,
        var_host,
        var_port,
        var_extra_host,
        var_rest
    );


    // Release cached frame if used for exception.
    if (frame_1021ae9e19c9ca466b23c54e29647c2c == cache_frame_1021ae9e19c9ca466b23c54e29647c2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1021ae9e19c9ca466b23c54e29647c2c);
        cache_frame_1021ae9e19c9ca466b23c54e29647c2c = NULL;
    }

    assertFrameObject(frame_1021ae9e19c9ca466b23c54e29647c2c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_userinfo);
        tmp_tuple_element_1 = var_userinfo;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_host);
        tmp_tuple_element_1 = var_host;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_port);
        tmp_tuple_element_1 = var_port;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_userinfo);
    Py_DECREF(var_userinfo);
    var_userinfo = NULL;
    CHECK_OBJECT(var_host);
    Py_DECREF(var_host);
    var_host = NULL;
    CHECK_OBJECT(var_port);
    Py_DECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_extra_host);
    var_extra_host = NULL;
    Py_XDECREF(var_rest);
    var_rest = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_userinfo);
    Py_DECREF(var_userinfo);
    var_userinfo = NULL;
    CHECK_OBJECT(var_host);
    Py_DECREF(var_host);
    var_host = NULL;
    CHECK_OBJECT(var_port);
    Py_DECREF(var_port);
    var_port = NULL;
    CHECK_OBJECT(var_extra_host);
    Py_DECREF(var_extra_host);
    var_extra_host = NULL;
    Py_XDECREF(var_rest);
    var_rest = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_authority);
    Py_DECREF(par_authority);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_authority);
    Py_DECREF(par_authority);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$parseresult$$$function__20_authority_from(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_reference = python_pars[0];
    PyObject *par_strict = python_pars[1];
    struct Nuitka_CellObject *var_subauthority = Nuitka_Cell_Empty();
    PyObject *var_userinfo = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e4f9fd62975478eface4b29452d92df5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_iterator_attempt;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e4f9fd62975478eface4b29452d92df5 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e4f9fd62975478eface4b29452d92df5)) {
        Py_XDECREF(cache_frame_e4f9fd62975478eface4b29452d92df5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4f9fd62975478eface4b29452d92df5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4f9fd62975478eface4b29452d92df5 = MAKE_FUNCTION_FRAME(codeobj_e4f9fd62975478eface4b29452d92df5, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e4f9fd62975478eface4b29452d92df5->m_type_description == NULL);
    frame_e4f9fd62975478eface4b29452d92df5 = cache_frame_e4f9fd62975478eface4b29452d92df5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e4f9fd62975478eface4b29452d92df5);
    assert(Py_REFCNT(frame_e4f9fd62975478eface4b29452d92df5) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_reference);
        tmp_called_instance_1 = par_reference;
        frame_e4f9fd62975478eface4b29452d92df5->m_frame.f_lineno = 462;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[78]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        assert(Nuitka_Cell_GET(var_subauthority) == NULL);
        PyCell_SET(var_subauthority, tmp_assign_source_2);

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

    {
        nuitka_bool tmp_assign_source_3;
        tmp_assign_source_3 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
    }
    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e4f9fd62975478eface4b29452d92df5, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e4f9fd62975478eface4b29452d92df5, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }
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
        int tmp_truth_name_1;
        CHECK_OBJECT(par_strict);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_strict);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oocooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 465;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4f9fd62975478eface4b29452d92df5->m_frame) frame_e4f9fd62975478eface4b29452d92df5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oocooo";
    goto try_except_handler_3;
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oocooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_reference);
        tmp_expression_value_2 = par_reference;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oocooo";
            goto try_except_handler_4;
        }
        frame_e4f9fd62975478eface4b29452d92df5->m_frame.f_lineno = 466;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oocooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oocooo";
            goto try_except_handler_4;
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
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oocooo";
            exception_lineno = 466;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oocooo";
            exception_lineno = 466;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oocooo";
            exception_lineno = 466;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
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

                    type_description_1 = "oocooo";
                    exception_lineno = 466;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[1];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oocooo";
            exception_lineno = 466;
            goto try_except_handler_5;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert(var_userinfo == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_userinfo = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_host = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_port = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 461;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4f9fd62975478eface4b29452d92df5->m_frame) frame_e4f9fd62975478eface4b29452d92df5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oocooo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            tmp_iter_arg_3 = mod_consts[0];
            tmp_assign_source_12 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
            assert(!(tmp_assign_source_12 == NULL));
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_12;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = var_subauthority;
            Py_INCREF(tmp_closure_1[1]);

            tmp_iter_arg_2 = MAKE_GENERATOR_rfc3986$parseresult$$$function__20_authority_from$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_7;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oocooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 0, 3);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oocooo";
            exception_lineno = 470;
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_5, 1, 3);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oocooo";
            exception_lineno = 470;
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_6, 2, 3);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oocooo";
            exception_lineno = 470;
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_15;
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

                    type_description_1 = "oocooo";
                    exception_lineno = 470;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[1];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oocooo";
            exception_lineno = 470;
            goto try_except_handler_8;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_userinfo;
            var_userinfo = tmp_assign_source_16;
            Py_INCREF(var_userinfo);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_host;
            var_host = tmp_assign_source_17;
            Py_INCREF(var_host);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_port;
            var_port = tmp_assign_source_18;
            Py_INCREF(var_port);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        if (var_port == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 474;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(var_port);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oocooo";
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
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_int_arg_1;
        if (var_port == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "oocooo";
            goto try_except_handler_9;
        }

        tmp_int_arg_1 = var_port;
        tmp_assign_source_19 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oocooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_port;
            var_port = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    goto try_end_7;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_e4f9fd62975478eface4b29452d92df5, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_e4f9fd62975478eface4b29452d92df5, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oocooo";
            goto try_except_handler_10;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[82]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oocooo";
            goto try_except_handler_10;
        }
        if (var_port == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 478;
            type_description_1 = "oocooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_2 = var_port;
        frame_e4f9fd62975478eface4b29452d92df5->m_frame.f_lineno = 478;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oocooo";
            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 478;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oocooo";
        goto try_except_handler_10;
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 475;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4f9fd62975478eface4b29452d92df5->m_frame) frame_e4f9fd62975478eface4b29452d92df5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oocooo";
    goto try_except_handler_10;
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_7:;
    branch_no_4:;
    {
        PyObject *tmp_tuple_element_1;
        if (var_userinfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 479;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_userinfo;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_host == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 479;
            type_description_1 = "oocooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_host;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        if (var_port == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 479;
            type_description_1 = "oocooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_port;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_e4f9fd62975478eface4b29452d92df5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4f9fd62975478eface4b29452d92df5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4f9fd62975478eface4b29452d92df5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4f9fd62975478eface4b29452d92df5,
        type_description_1,
        par_reference,
        par_strict,
        var_subauthority,
        var_userinfo,
        var_host,
        var_port
    );


    // Release cached frame if used for exception.
    if (frame_e4f9fd62975478eface4b29452d92df5 == cache_frame_e4f9fd62975478eface4b29452d92df5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e4f9fd62975478eface4b29452d92df5);
        cache_frame_e4f9fd62975478eface4b29452d92df5 = NULL;
    }

    assertFrameObject(frame_e4f9fd62975478eface4b29452d92df5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_subauthority);
    Py_DECREF(var_subauthority);
    var_subauthority = NULL;
    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
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

    CHECK_OBJECT(var_subauthority);
    Py_DECREF(var_subauthority);
    var_subauthority = NULL;
    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
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
    CHECK_OBJECT(par_reference);
    Py_DECREF(par_reference);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_reference);
    Py_DECREF(par_reference);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct rfc3986$parseresult$$$function__20_authority_from$$$genexpr__1_genexpr_locals {
    PyObject *var_p;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
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

static PyObject *rfc3986$parseresult$$$function__20_authority_from$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct rfc3986$parseresult$$$function__20_authority_from$$$genexpr__1_genexpr_locals *generator_heap = (struct rfc3986$parseresult$$$function__20_authority_from$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_p = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_6fc217b849fceaa2fda782267bfb8c01, module_rfc3986$parseresult, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 470;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_p);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[83]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 471;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 471;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_p);
        tmp_args_element_value_1 = generator_heap->var_p;
        generator->m_frame->m_frame.f_lineno = 471;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 471;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 471;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 470;
        generator_heap->type_description_1 = "Noc";
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
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
            NULL,
            generator_heap->var_p,
            generator->m_closure[1]
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

    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_rfc3986$parseresult$$$function__20_authority_from$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        rfc3986$parseresult$$$function__20_authority_from$$$genexpr__1_genexpr_context,
        module_rfc3986$parseresult,
        mod_consts[15],
#if PYTHON_VERSION >= 0x350
        mod_consts[85],
#endif
        codeobj_6fc217b849fceaa2fda782267bfb8c01,
        closure,
        2,
#if 1
        sizeof(struct rfc3986$parseresult$$$function__20_authority_from$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__10_copy_with(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__10_copy_with,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_a9ae9bf427177261d29715a5e0ddaa93,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__11_encode(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__11_encode,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_e25c75ef4576ee8721127c8cf0b737b9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__12_unsplit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__12_unsplit,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_967556453d8dbe1d04b50ceac93eab86,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__13___new__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__13___new__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_bb5b577d688b830feca0539cb29de8b8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__14_from_parts(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__14_from_parts,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_fa76f0c2daedc9122a4447011e557cb8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__15_from_string(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__15_from_string,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_c037bfe7b387cde8c9e6ceb2bee8cc47,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__16_authority() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__16_authority,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_90c4aa466ee4e94f539f23a042a93087,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__17_copy_with(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__17_copy_with,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_97aa01f754fde0aeaa9f8cd5ccb3b9bf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__18_unsplit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__18_unsplit,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_377137a2d88de2d935c57bdcd97039e0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__19_split_authority() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__19_split_authority,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1021ae9e19c9ca466b23c54e29647c2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__1__generate_authority() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__1__generate_authority,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_cfd4077e62e77abe848d46adb3ee55a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__20_authority_from() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__20_authority_from,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e4f9fd62975478eface4b29452d92df5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__2_geturl() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__2_geturl,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_100a9f3c3826efd9431d754d5dbf1a93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__3_hostname() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__3_hostname,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_6af24a58281a9bc60ce38f0495e4c13c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__4_netloc() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__4_netloc,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_8caa42b7378a4271f7d5baef49e045d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__5_params() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__5_params,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_467ced52c66326093094a9234df6d3da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__6___new__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__6___new__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_5737b59591fff9e31d5638ef6da8937e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__7_from_parts(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__7_from_parts,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_52fd0c50b5dbd9dde538a0bbc213e890,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__8_from_string(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__8_from_string,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_1ad7e6f8ab90dc50faf6342abc206db7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$parseresult$$$function__9_authority() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$parseresult$$$function__9_authority,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_ff89a7a1fdb77020bfe3f5e8356f4044,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$parseresult,
        mod_consts[41],
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

function_impl_code functable_rfc3986$parseresult[] = {
    impl_rfc3986$parseresult$$$function__1__generate_authority,
    impl_rfc3986$parseresult$$$function__2_geturl,
    impl_rfc3986$parseresult$$$function__3_hostname,
    impl_rfc3986$parseresult$$$function__4_netloc,
    impl_rfc3986$parseresult$$$function__5_params,
    impl_rfc3986$parseresult$$$function__6___new__,
    impl_rfc3986$parseresult$$$function__7_from_parts,
    impl_rfc3986$parseresult$$$function__8_from_string,
    impl_rfc3986$parseresult$$$function__9_authority,
    impl_rfc3986$parseresult$$$function__10_copy_with,
    impl_rfc3986$parseresult$$$function__11_encode,
    impl_rfc3986$parseresult$$$function__12_unsplit,
    impl_rfc3986$parseresult$$$function__13___new__,
    impl_rfc3986$parseresult$$$function__14_from_parts,
    impl_rfc3986$parseresult$$$function__15_from_string,
    impl_rfc3986$parseresult$$$function__16_authority,
    impl_rfc3986$parseresult$$$function__17_copy_with,
    impl_rfc3986$parseresult$$$function__18_unsplit,
    impl_rfc3986$parseresult$$$function__19_split_authority,
    impl_rfc3986$parseresult$$$function__20_authority_from,
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

    function_impl_code *current = functable_rfc3986$parseresult;
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

    if (offset > sizeof(functable_rfc3986$parseresult) || offset < 0) {
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
        functable_rfc3986$parseresult[offset],
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
        module_rfc3986$parseresult,
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
PyObject *modulecode_rfc3986$parseresult(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("rfc3986.parseresult");

    // Store the module for future use.
    module_rfc3986$parseresult = module;

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
        PRINT_STRING("rfc3986.parseresult: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("rfc3986.parseresult: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("rfc3986.parseresult: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initrfc3986$parseresult\n");

    moduledict_rfc3986$parseresult = MODULE_DICT(module_rfc3986$parseresult);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_rfc3986$parseresult,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_rfc3986$parseresult,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[25]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_rfc3986$parseresult,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_rfc3986$parseresult,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_rfc3986$parseresult,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_rfc3986$parseresult);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_rfc3986$parseresult);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    struct Nuitka_FrameObject *frame_2f65977bf0adae37cafdf722ca4e8afc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_f8b7150f4829932f2d7a5c5bf66110d3_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_rfc3986$parseresult$$$class__2_ParseResult_83 = NULL;
    struct Nuitka_FrameObject *frame_3e1d32406c492229a3fea06fdbf1bba6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257 = NULL;
    struct Nuitka_FrameObject *frame_ad82ca97858baca97facb74d4cd2f57a_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
        tmp_assign_source_1 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_2);
    }
    frame_2f65977bf0adae37cafdf722ca4e8afc = MAKE_MODULE_FRAME(codeobj_2f65977bf0adae37cafdf722ca4e8afc, module_rfc3986$parseresult);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2f65977bf0adae37cafdf722ca4e8afc);
    assert(Py_REFCNT(frame_2f65977bf0adae37cafdf722ca4e8afc) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[88];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[91], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[92], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[94];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_rfc3986$parseresult;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[95];
        tmp_level_value_1 = mod_consts[96];
        frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_rfc3986$parseresult,
                mod_consts[97],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[97]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[25];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_rfc3986$parseresult;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[98];
        tmp_level_value_2 = mod_consts[99];
        frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 18;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_rfc3986$parseresult,
                mod_consts[8],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[25];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_rfc3986$parseresult;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[100];
        tmp_level_value_3 = mod_consts[99];
        frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 19;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_rfc3986$parseresult,
                mod_consts[79],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[25];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_rfc3986$parseresult;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[101];
        tmp_level_value_4 = mod_consts[99];
        frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 20;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_rfc3986$parseresult,
                mod_consts[44],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[44]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[25];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_rfc3986$parseresult;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[102];
        tmp_level_value_5 = mod_consts[99];
        frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 21;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_rfc3986$parseresult,
                mod_consts[6],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[25];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_rfc3986$parseresult;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[103];
        tmp_level_value_6 = mod_consts[99];
        frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 22;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_rfc3986$parseresult,
                mod_consts[28],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[28]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[107];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_12 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
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


            exception_lineno = 37;

            goto try_except_handler_1;
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
        tmp_subscript_value_1 = mod_consts[96];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_14 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[108]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[108]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[109];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 37;
        tmp_assign_source_15 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[110]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
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
        tmp_mod_expr_left_1 = mod_consts[111];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[112];
        tmp_getattr_default_1 = mod_consts[113];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[112]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 37;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[115], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        frame_f8b7150f4829932f2d7a5c5bf66110d3_2 = MAKE_CLASS_FRAME(codeobj_f8b7150f4829932f2d7a5c5bf66110d3, module_rfc3986$parseresult, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f8b7150f4829932f2d7a5c5bf66110d3_2);
        assert(Py_REFCNT(frame_f8b7150f4829932f2d7a5c5bf66110d3_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_rfc3986$parseresult$$$function__1__generate_authority();

        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_rfc3986$parseresult$$$function__2_geturl();

        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
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
            tmp_called_value_2 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[120]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_rfc3986$parseresult$$$function__3_hostname();

            frame_f8b7150f4829932f2d7a5c5bf66110d3_2->m_frame.f_lineno = 66;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_rfc3986$parseresult$$$function__3_hostname();

            frame_f8b7150f4829932f2d7a5c5bf66110d3_2->m_frame.f_lineno = 66;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            tmp_res = MAPPING_HAS_ITEM(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
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
            tmp_called_value_4 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[120]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_rfc3986$parseresult$$$function__4_netloc();

            frame_f8b7150f4829932f2d7a5c5bf66110d3_2->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_4 = MAKE_FUNCTION_rfc3986$parseresult$$$function__4_netloc();

            frame_f8b7150f4829932f2d7a5c5bf66110d3_2->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_6;
            tmp_res = MAPPING_HAS_ITEM(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
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
            tmp_called_value_6 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[120]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_rfc3986$parseresult$$$function__5_params();

            frame_f8b7150f4829932f2d7a5c5bf66110d3_2->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_6 = MAKE_FUNCTION_rfc3986$parseresult$$$function__5_params();

            frame_f8b7150f4829932f2d7a5c5bf66110d3_2->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f8b7150f4829932f2d7a5c5bf66110d3_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f8b7150f4829932f2d7a5c5bf66110d3_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f8b7150f4829932f2d7a5c5bf66110d3_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f8b7150f4829932f2d7a5c5bf66110d3_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_f8b7150f4829932f2d7a5c5bf66110d3_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[107];
            tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37, mod_consts[127], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_8 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[109];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 37;
            tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37);
        locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF(locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37);
        locals_rfc3986$parseresult$$$class__1_ParseResultMixin_37 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 37;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_17);
    }
    goto try_end_1;
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

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        tmp_args_element_value_7 = mod_consts[21];
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        tmp_assign_source_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_19, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_19, 1, tmp_tuple_element_4);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_19);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_20 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[96];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_22 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[108]);
        tmp_condition_result_9 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[108]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        tmp_tuple_element_5 = mod_consts[21];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 83;
        tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[110]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
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
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[111];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[112];
        tmp_getattr_default_2 = mod_consts[113];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[112]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 83;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_24;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_rfc3986$parseresult$$$class__2_ParseResult_83 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[115], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[21];
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        frame_3e1d32406c492229a3fea06fdbf1bba6_3 = MAKE_CLASS_FRAME(codeobj_3e1d32406c492229a3fea06fdbf1bba6, module_rfc3986$parseresult, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3e1d32406c492229a3fea06fdbf1bba6_3);
        assert(Py_REFCNT(frame_3e1d32406c492229a3fea06fdbf1bba6_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[13];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_rfc3986$parseresult$$$function__6___new__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_defaults_2;
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_defaults_3;
            tmp_res = MAPPING_HAS_ITEM(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[132]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_11 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[132]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[132]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_2 = mod_consts[133];
            Py_INCREF(tmp_defaults_2);


            tmp_args_element_value_9 = MAKE_FUNCTION_rfc3986$parseresult$$$function__7_from_parts(tmp_defaults_2);

            frame_3e1d32406c492229a3fea06fdbf1bba6_3->m_frame.f_lineno = 120;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_defaults_3 = mod_consts[133];
            Py_INCREF(tmp_defaults_3);


            tmp_classmethod_arg_1 = MAKE_FUNCTION_rfc3986$parseresult$$$function__7_from_parts(tmp_defaults_3);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_defaults_4;
            PyObject *tmp_classmethod_arg_2;
            PyObject *tmp_defaults_5;
            tmp_res = MAPPING_HAS_ITEM(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[132]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_12 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[132]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[132]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_4 = mod_consts[136];
            Py_INCREF(tmp_defaults_4);


            tmp_args_element_value_10 = MAKE_FUNCTION_rfc3986$parseresult$$$function__8_from_string(tmp_defaults_4);

            frame_3e1d32406c492229a3fea06fdbf1bba6_3->m_frame.f_lineno = 161;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_defaults_5 = mod_consts[136];
            Py_INCREF(tmp_defaults_5);


            tmp_classmethod_arg_2 = MAKE_FUNCTION_rfc3986$parseresult$$$function__8_from_string(tmp_defaults_5);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_12;
            tmp_res = MAPPING_HAS_ITEM(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_13 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[120]);

            if (unlikely(tmp_called_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_rfc3986$parseresult$$$function__9_authority();

            frame_3e1d32406c492229a3fea06fdbf1bba6_3->m_frame.f_lineno = 191;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_12 = MAKE_FUNCTION_rfc3986$parseresult$$$function__9_authority();

            frame_3e1d32406c492229a3fea06fdbf1bba6_3->m_frame.f_lineno = 191;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_value_11;
            tmp_expression_value_11 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[44]);

            if (tmp_expression_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 198;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[45]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_6 = MAKE_TUPLE_EMPTY(7);
            {
                PyObject *tmp_expression_value_12;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_expression_value_17;
                PyTuple_SET_ITEM(tmp_defaults_6, 0, tmp_tuple_element_7);
                tmp_expression_value_12 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[44]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 199;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[45]);
                Py_DECREF(tmp_expression_value_12);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 199;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_6, 1, tmp_tuple_element_7);
                tmp_expression_value_13 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[44]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 200;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[45]);
                Py_DECREF(tmp_expression_value_13);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 200;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_6, 2, tmp_tuple_element_7);
                tmp_expression_value_14 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[44]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 201;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[45]);
                Py_DECREF(tmp_expression_value_14);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 201;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_6, 3, tmp_tuple_element_7);
                tmp_expression_value_15 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[44]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 202;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[45]);
                Py_DECREF(tmp_expression_value_15);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 202;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_6, 4, tmp_tuple_element_7);
                tmp_expression_value_16 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[44]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 203;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[45]);
                Py_DECREF(tmp_expression_value_16);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 203;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_6, 5, tmp_tuple_element_7);
                tmp_expression_value_17 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[44]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 204;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[45]);
                Py_DECREF(tmp_expression_value_17);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_6, 6, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_defaults_6);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_rfc3986$parseresult$$$function__10_copy_with(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[140];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_rfc3986$parseresult$$$function__11_encode(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = mod_consts[65];
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_rfc3986$parseresult$$$function__12_unsplit(tmp_defaults_8);

            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3e1d32406c492229a3fea06fdbf1bba6_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3e1d32406c492229a3fea06fdbf1bba6_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3e1d32406c492229a3fea06fdbf1bba6_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3e1d32406c492229a3fea06fdbf1bba6_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_3e1d32406c492229a3fea06fdbf1bba6_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__2_ParseResult_83, mod_consts[127], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_15 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[21];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_rfc3986$parseresult$$$class__2_ParseResult_83;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 83;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_25 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_rfc3986$parseresult$$$class__2_ParseResult_83);
        locals_rfc3986$parseresult$$$class__2_ParseResult_83 = NULL;
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

        Py_DECREF(locals_rfc3986$parseresult$$$class__2_ParseResult_83);
        locals_rfc3986$parseresult$$$class__2_ParseResult_83 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 83;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_25);
    }
    goto try_end_2;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        tmp_args_element_value_13 = mod_consts[53];
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_tuple_element_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_16, call_args);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_assign_source_27, 0, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_27, 1, tmp_tuple_element_9);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_assign_source_27);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_28 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        tmp_condition_result_15 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_18 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[96];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_19 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[108]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_20 = tmp_class_creation_3__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[108]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        tmp_tuple_element_10 = mod_consts[53];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 257;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_21 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_21, mod_consts[110]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[111];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[112];
        tmp_getattr_default_3 = mod_consts[113];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_22 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[112]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 257;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_32;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[115], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_9;
        }
        frame_ad82ca97858baca97facb74d4cd2f57a_4 = MAKE_CLASS_FRAME(codeobj_ad82ca97858baca97facb74d4cd2f57a, module_rfc3986$parseresult, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ad82ca97858baca97facb74d4cd2f57a_4);
        assert(Py_REFCNT(frame_ad82ca97858baca97facb74d4cd2f57a_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = mod_consts[144];
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_rfc3986$parseresult$$$function__13___new__(tmp_defaults_9);

            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_defaults_10;
            PyObject *tmp_classmethod_arg_3;
            PyObject *tmp_defaults_11;
            tmp_res = MAPPING_HAS_ITEM(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[132]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_18 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_18 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[132]);

            if (unlikely(tmp_called_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[132]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_defaults_10 = mod_consts[146];
            Py_INCREF(tmp_defaults_10);


            tmp_args_element_value_15 = MAKE_FUNCTION_rfc3986$parseresult$$$function__14_from_parts(tmp_defaults_10);

            frame_ad82ca97858baca97facb74d4cd2f57a_4->m_frame.f_lineno = 290;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_defaults_11 = mod_consts[146];
            Py_INCREF(tmp_defaults_11);


            tmp_classmethod_arg_3 = MAKE_FUNCTION_rfc3986$parseresult$$$function__14_from_parts(tmp_defaults_11);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_defaults_12;
            PyObject *tmp_classmethod_arg_4;
            PyObject *tmp_defaults_13;
            tmp_res = MAPPING_HAS_ITEM(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[132]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_19 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_19 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[132]);

            if (unlikely(tmp_called_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[132]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_defaults_12 = mod_consts[136];
            Py_INCREF(tmp_defaults_12);


            tmp_args_element_value_16 = MAKE_FUNCTION_rfc3986$parseresult$$$function__15_from_string(tmp_defaults_12);

            frame_ad82ca97858baca97facb74d4cd2f57a_4->m_frame.f_lineno = 336;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_defaults_13 = mod_consts[136];
            Py_INCREF(tmp_defaults_13);


            tmp_classmethod_arg_4 = MAKE_FUNCTION_rfc3986$parseresult$$$function__15_from_string(tmp_defaults_13);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_4);
            Py_DECREF(tmp_classmethod_arg_4);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_18;
            tmp_res = MAPPING_HAS_ITEM(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[120]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_20 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_20 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[120]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_17 = MAKE_FUNCTION_rfc3986$parseresult$$$function__16_authority();

            frame_ad82ca97858baca97facb74d4cd2f57a_4->m_frame.f_lineno = 368;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_18 = MAKE_FUNCTION_rfc3986$parseresult$$$function__16_authority();

            frame_ad82ca97858baca97facb74d4cd2f57a_4->m_frame.f_lineno = 368;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_14;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_expression_value_23;
            tmp_expression_value_23 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[44]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 375;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[45]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_defaults_14 = MAKE_TUPLE_EMPTY(8);
            {
                PyObject *tmp_expression_value_24;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_expression_value_29;
                PyTuple_SET_ITEM(tmp_defaults_14, 0, tmp_tuple_element_12);
                tmp_expression_value_24 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[44]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 376;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[45]);
                Py_DECREF(tmp_expression_value_24);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 376;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_defaults_14, 1, tmp_tuple_element_12);
                tmp_expression_value_25 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[44]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 377;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[45]);
                Py_DECREF(tmp_expression_value_25);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_defaults_14, 2, tmp_tuple_element_12);
                tmp_expression_value_26 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[44]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 378;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[45]);
                Py_DECREF(tmp_expression_value_26);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 378;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_defaults_14, 3, tmp_tuple_element_12);
                tmp_expression_value_27 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[44]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 379;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[45]);
                Py_DECREF(tmp_expression_value_27);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 379;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_defaults_14, 4, tmp_tuple_element_12);
                tmp_expression_value_28 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[44]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 380;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[45]);
                Py_DECREF(tmp_expression_value_28);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_defaults_14, 5, tmp_tuple_element_12);
                tmp_expression_value_29 = PyObject_GetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[44]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 381;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[45]);
                Py_DECREF(tmp_expression_value_29);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 381;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_defaults_14, 6, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_True;
                PyTuple_SET_ITEM0(tmp_defaults_14, 7, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_defaults_14);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_rfc3986$parseresult$$$function__17_copy_with(tmp_defaults_14);

            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_15;
            tmp_defaults_15 = mod_consts[65];
            Py_INCREF(tmp_defaults_15);


            tmp_dictset_value = MAKE_FUNCTION_rfc3986$parseresult$$$function__18_unsplit(tmp_defaults_15);

            tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ad82ca97858baca97facb74d4cd2f57a_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ad82ca97858baca97facb74d4cd2f57a_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ad82ca97858baca97facb74d4cd2f57a_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ad82ca97858baca97facb74d4cd2f57a_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_ad82ca97858baca97facb74d4cd2f57a_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257, mod_consts[127], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_22 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_13 = mod_consts[53];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_13 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame.f_lineno = 257;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_33 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257);
        locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257 = NULL;
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

        Py_DECREF(locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257);
        locals_rfc3986$parseresult$$$class__3_ParseResultBytes_257 = NULL;
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
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
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
        exception_lineno = 257;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_33);
    }
    goto try_end_3;
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

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f65977bf0adae37cafdf722ca4e8afc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f65977bf0adae37cafdf722ca4e8afc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f65977bf0adae37cafdf722ca4e8afc, exception_lineno);
    }



    assertFrameObject(frame_2f65977bf0adae37cafdf722ca4e8afc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_rfc3986$parseresult$$$function__19_split_authority();

        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_rfc3986$parseresult$$$function__20_authority_from();

        UPDATE_STRING_DICT1(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_36);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("rfc3986.parseresult", false);

    Py_INCREF(module_rfc3986$parseresult);
    return module_rfc3986$parseresult;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$parseresult, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("rfc3986$parseresult", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
