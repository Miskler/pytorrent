/* Generated code for Python module 'httpcore._sync.http_proxy'
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

/* The "module_httpcore$_sync$http_proxy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpcore$_sync$http_proxy;
PyDictObject *moduledict_httpcore$_sync$http_proxy;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[230];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[230];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("httpcore._sync.http_proxy"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 230; i++) {
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
void checkModuleConstants_httpcore$_sync$http_proxy(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 230; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e2e0356d16bf421dfa235cba47806de7;
static PyCodeObject *codeobj_b8c33fcd2a50633dcd966b068d35690b;
static PyCodeObject *codeobj_967afd9d231ed7c76382f329c3fc74e6;
static PyCodeObject *codeobj_d304e5f337b00d973de2fc61c7d03fa0;
static PyCodeObject *codeobj_d0e6ce907c6edb3f0b639b2b32ce0de0;
static PyCodeObject *codeobj_ea4f2071316db79c29e4c4b8a5dbe06d;
static PyCodeObject *codeobj_380db32a26f240361666dd95b31d6b44;
static PyCodeObject *codeobj_d0170fba690c5e8c8c73bed5ccbee0c8;
static PyCodeObject *codeobj_24b1456942f31f9ca4b7077a903543ad;
static PyCodeObject *codeobj_54bc060b2031d6979b47b897a172dc80;
static PyCodeObject *codeobj_df6ccefbcff783c087d6f01ebd3bc81b;
static PyCodeObject *codeobj_96ae05e591f79dc4e006f20595b26e89;
static PyCodeObject *codeobj_9ee77d90caa7ab26246cff316b85fb16;
static PyCodeObject *codeobj_243268a74ec7bd0378ccef8e2118a56a;
static PyCodeObject *codeobj_0079977af1939399837e5660ba64092f;
static PyCodeObject *codeobj_1b928532f322f72473ad9434366923d4;
static PyCodeObject *codeobj_6506c4a30d815ca9f80356984b237546;
static PyCodeObject *codeobj_614cc4f792fff08707fef513b566c22f;
static PyCodeObject *codeobj_250e45e3ff6ae4ff2697bd80ebcd6055;
static PyCodeObject *codeobj_c05cb84e99ad6f65ca658d92d407844f;
static PyCodeObject *codeobj_32d378cd5a3f7038c3415a8487f8b2fc;
static PyCodeObject *codeobj_88c9f9790637674c2d0cd7de04184f0b;
static PyCodeObject *codeobj_edba3947798a6edcd3c0302004271a84;
static PyCodeObject *codeobj_fd88c6ccd1a22c9f5dae637eac0c7e41;
static PyCodeObject *codeobj_dd0276910a811ff360bb0ec52ebc8ae4;
static PyCodeObject *codeobj_a99ab251c818fc9cd085d2d76a4fcfed;
static PyCodeObject *codeobj_4d6958bff468c9f684cd844d03cd3d9c;
static PyCodeObject *codeobj_d781c82d1305030858db1a07d3fc76a2;
static PyCodeObject *codeobj_be72b014c60428c4a1075c6f95284182;
static PyCodeObject *codeobj_3ff7297c1c072aefa8cad9a7f1112074;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[109]; CHECK_OBJECT(module_filename_obj);
    codeobj_e2e0356d16bf421dfa235cba47806de7 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[216], NULL, 1, 0, 0);
    codeobj_b8c33fcd2a50633dcd966b068d35690b = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[217], mod_consts[217], mod_consts[218], NULL, 1, 0, 0);
    codeobj_967afd9d231ed7c76382f329c3fc74e6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[219], mod_consts[219], NULL, NULL, 0, 0, 0);
    codeobj_d304e5f337b00d973de2fc61c7d03fa0 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[220], NULL, 0, 0, 0);
    codeobj_d0e6ce907c6edb3f0b639b2b32ce0de0 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[220], NULL, 0, 0, 0);
    codeobj_ea4f2071316db79c29e4c4b8a5dbe06d = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[220], NULL, 0, 0, 0);
    codeobj_380db32a26f240361666dd95b31d6b44 = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[221], NULL, 6, 0, 0);
    codeobj_d0170fba690c5e8c8c73bed5ccbee0c8 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[222], NULL, 9, 0, 0);
    codeobj_24b1456942f31f9ca4b7077a903543ad = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[9], mod_consts[9], mod_consts[223], mod_consts[220], 14, 0, 0);
    codeobj_54bc060b2031d6979b47b897a172dc80 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[203], mod_consts[203], mod_consts[224], NULL, 1, 0, 0);
    codeobj_df6ccefbcff783c087d6f01ebd3bc81b = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[203], mod_consts[203], mod_consts[224], NULL, 1, 0, 0);
    codeobj_96ae05e591f79dc4e006f20595b26e89 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[225], NULL, 2, 0, 0);
    codeobj_9ee77d90caa7ab26246cff316b85fb16 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[226], NULL, 2, 0, 0);
    codeobj_243268a74ec7bd0378ccef8e2118a56a = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[226], NULL, 2, 0, 0);
    codeobj_0079977af1939399837e5660ba64092f = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[224], NULL, 1, 0, 0);
    codeobj_1b928532f322f72473ad9434366923d4 = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[224], NULL, 1, 0, 0);
    codeobj_6506c4a30d815ca9f80356984b237546 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[186], mod_consts[186], mod_consts[226], NULL, 2, 0, 0);
    codeobj_614cc4f792fff08707fef513b566c22f = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[227], NULL, 2, 0, 0);
    codeobj_250e45e3ff6ae4ff2697bd80ebcd6055 = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[228], NULL, 2, 0, 0);
    codeobj_c05cb84e99ad6f65ca658d92d407844f = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[224], NULL, 1, 0, 0);
    codeobj_32d378cd5a3f7038c3415a8487f8b2fc = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[224], NULL, 1, 0, 0);
    codeobj_88c9f9790637674c2d0cd7de04184f0b = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[224], NULL, 1, 0, 0);
    codeobj_edba3947798a6edcd3c0302004271a84 = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[224], NULL, 1, 0, 0);
    codeobj_fd88c6ccd1a22c9f5dae637eac0c7e41 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[224], NULL, 1, 0, 0);
    codeobj_dd0276910a811ff360bb0ec52ebc8ae4 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[224], NULL, 1, 0, 0);
    codeobj_a99ab251c818fc9cd085d2d76a4fcfed = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 1, 0, 0);
    codeobj_4d6958bff468c9f684cd844d03cd3d9c = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[224], NULL, 1, 0, 0);
    codeobj_d781c82d1305030858db1a07d3fc76a2 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[224], NULL, 1, 0, 0);
    codeobj_be72b014c60428c4a1075c6f95284182 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[224], NULL, 1, 0, 0);
    codeobj_3ff7297c1c072aefa8cad9a7f1112074 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[229], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpcore$_sync$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__10_is_available(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__11_has_expired(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__12_is_idle(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__13_is_closed(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__14___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__15___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__16_handle_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__17_can_handle_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__18_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__19_info(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__1_merge_headers(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__20_is_available(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__21_has_expired(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__22_is_idle(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__23_is_closed(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__24___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__2_build_auth_header(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__3___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__4_create_connection(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__5___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__6_handle_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__7_can_handle_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__8_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__9_info(PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpcore$_sync$http_proxy$$$function__1_merge_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_default_headers = python_pars[0];
    PyObject *par_override_headers = python_pars[1];
    PyObject *var_has_override = NULL;
    PyObject *outline_0_var_key = NULL;
    PyObject *outline_0_var_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_3ff7297c1c072aefa8cad9a7f1112074;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_b8c33fcd2a50633dcd966b068d35690b_2;
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
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b8c33fcd2a50633dcd966b068d35690b_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3ff7297c1c072aefa8cad9a7f1112074 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3ff7297c1c072aefa8cad9a7f1112074)) {
        Py_XDECREF(cache_frame_3ff7297c1c072aefa8cad9a7f1112074);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ff7297c1c072aefa8cad9a7f1112074 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ff7297c1c072aefa8cad9a7f1112074 = MAKE_FUNCTION_FRAME(codeobj_3ff7297c1c072aefa8cad9a7f1112074, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ff7297c1c072aefa8cad9a7f1112074->m_type_description == NULL);
    frame_3ff7297c1c072aefa8cad9a7f1112074 = cache_frame_3ff7297c1c072aefa8cad9a7f1112074;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3ff7297c1c072aefa8cad9a7f1112074);
    assert(Py_REFCNT(frame_3ff7297c1c072aefa8cad9a7f1112074) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(par_default_headers);
        tmp_cmp_expr_left_1 = par_default_headers;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_default_headers);
        tmp_list_arg_1 = par_default_headers;
        tmp_assign_source_1 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        {
            PyObject *old = par_default_headers;
            par_default_headers = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_list_arg_2;
        CHECK_OBJECT(par_override_headers);
        tmp_cmp_expr_left_2 = par_override_headers;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(par_override_headers);
        tmp_list_arg_2 = par_override_headers;
        tmp_assign_source_2 = MAKE_LIST(tmp_list_arg_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        {
            PyObject *old = par_override_headers;
            par_override_headers = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_set_arg_1;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_override_headers);
            tmp_iter_arg_1 = par_override_headers;
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_4;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_set_arg_1 = MAKE_GENERATOR_httpcore$_sync$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_assign_source_3 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_has_override == NULL);
        var_has_override = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_default_headers);
            tmp_iter_arg_2 = par_default_headers;
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_7;
        }
        if (isFrameUnusable(cache_frame_b8c33fcd2a50633dcd966b068d35690b_2)) {
            Py_XDECREF(cache_frame_b8c33fcd2a50633dcd966b068d35690b_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b8c33fcd2a50633dcd966b068d35690b_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b8c33fcd2a50633dcd966b068d35690b_2 = MAKE_FUNCTION_FRAME(codeobj_b8c33fcd2a50633dcd966b068d35690b, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_b8c33fcd2a50633dcd966b068d35690b_2->m_type_description == NULL);
        frame_b8c33fcd2a50633dcd966b068d35690b_2 = cache_frame_b8c33fcd2a50633dcd966b068d35690b_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b8c33fcd2a50633dcd966b068d35690b_2);
        assert(Py_REFCNT(frame_b8c33fcd2a50633dcd966b068d35690b_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 39;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_3 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                type_description_2 = "ooo";
                exception_lineno = 39;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                type_description_2 = "ooo";
                exception_lineno = 39;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_11;
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

                        type_description_2 = "ooo";
                        exception_lineno = 39;
                        goto try_except_handler_6;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[0];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 39;
                goto try_except_handler_6;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_6:;
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

        goto try_except_handler_5;
        // End of try:
        try_end_1:;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_4;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_12 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_key;
                outline_0_var_key = tmp_assign_source_12;
                Py_INCREF(outline_0_var_key);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_13 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_value;
                outline_0_var_value = tmp_assign_source_13;
                Py_INCREF(outline_0_var_value);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            bool tmp_condition_result_3;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(outline_0_var_key);
            tmp_expression_value_1 = outline_0_var_key;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "ooo";
                goto try_except_handler_4;
            }
            frame_b8c33fcd2a50633dcd966b068d35690b_2->m_frame.f_lineno = 42;
            tmp_cmp_expr_left_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_cmp_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "ooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(var_has_override);
            tmp_cmp_expr_right_3 = var_has_override;
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
            Py_DECREF(tmp_cmp_expr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "ooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_3 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_3 != false) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_key);
            tmp_tuple_element_1 = outline_0_var_key;
            tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(outline_0_var_value);
            tmp_tuple_element_1 = outline_0_var_value;
            PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_1);
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "ooo";
                goto try_except_handler_4;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_2 = "ooo";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_5);
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

        goto try_return_handler_3;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b8c33fcd2a50633dcd966b068d35690b_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b8c33fcd2a50633dcd966b068d35690b_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b8c33fcd2a50633dcd966b068d35690b_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b8c33fcd2a50633dcd966b068d35690b_2,
            type_description_2,
            outline_0_var_key,
            outline_0_var_value,
            var_has_override
        );


        // Release cached frame if used for exception.
        if (frame_b8c33fcd2a50633dcd966b068d35690b_2 == cache_frame_b8c33fcd2a50633dcd966b068d35690b_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_b8c33fcd2a50633dcd966b068d35690b_2);
            cache_frame_b8c33fcd2a50633dcd966b068d35690b_2 = NULL;
        }

        assertFrameObject(frame_b8c33fcd2a50633dcd966b068d35690b_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
        Py_XDECREF(outline_0_var_value);
        outline_0_var_value = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
        Py_XDECREF(outline_0_var_value);
        outline_0_var_value = NULL;
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
        exception_lineno = 39;
        goto frame_exception_exit_1;
        outline_result_2:;
        {
            PyObject *old = par_default_headers;
            assert(old != NULL);
            par_default_headers = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_default_headers);
        tmp_add_expr_left_1 = par_default_headers;
        CHECK_OBJECT(par_override_headers);
        tmp_add_expr_right_1 = par_override_headers;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3ff7297c1c072aefa8cad9a7f1112074, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ff7297c1c072aefa8cad9a7f1112074->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ff7297c1c072aefa8cad9a7f1112074, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ff7297c1c072aefa8cad9a7f1112074,
        type_description_1,
        par_default_headers,
        par_override_headers,
        var_has_override
    );


    // Release cached frame if used for exception.
    if (frame_3ff7297c1c072aefa8cad9a7f1112074 == cache_frame_3ff7297c1c072aefa8cad9a7f1112074) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ff7297c1c072aefa8cad9a7f1112074);
        cache_frame_3ff7297c1c072aefa8cad9a7f1112074 = NULL;
    }

    assertFrameObject(frame_3ff7297c1c072aefa8cad9a7f1112074);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_default_headers);
    Py_DECREF(par_default_headers);
    par_default_headers = NULL;
    CHECK_OBJECT(par_override_headers);
    Py_DECREF(par_override_headers);
    par_override_headers = NULL;
    CHECK_OBJECT(var_has_override);
    Py_DECREF(var_has_override);
    var_has_override = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_default_headers);
    par_default_headers = NULL;
    Py_XDECREF(par_override_headers);
    par_override_headers = NULL;
    Py_XDECREF(var_has_override);
    var_has_override = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

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



#if 1
struct httpcore$_sync$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_locals {
    PyObject *var_key;
    PyObject *var_value;
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

static PyObject *httpcore$_sync$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_sync$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_locals *generator_heap = (struct httpcore$_sync$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_key = NULL;
    generator_heap->var_value = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_e2e0356d16bf421dfa235cba47806de7, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 38;
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


            generator_heap->exception_lineno = 38;
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
            generator_heap->exception_lineno = 38;
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
            generator_heap->exception_lineno = 38;
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
                    generator_heap->exception_lineno = 38;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[0];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 38;
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
            PyObject *old = generator_heap->var_key;
            generator_heap->var_key = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_key);
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
            PyObject *old = generator_heap->var_value;
            generator_heap->var_value = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_value);
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
        CHECK_OBJECT(generator_heap->var_key);
        tmp_expression_value_2 = generator_heap->var_key;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 38;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 38;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 38;
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


            generator_heap->exception_lineno = 38;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 38;
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
            generator_heap->var_key,
            generator_heap->var_value
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

    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;
    Py_XDECREF(generator_heap->var_value);
    generator_heap->var_value = NULL;
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
    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;
    Py_XDECREF(generator_heap->var_value);
    generator_heap->var_value = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpcore$_sync$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpcore$_sync$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_context,
        module_httpcore$_sync$http_proxy,
        mod_consts[3],
#if PYTHON_VERSION >= 0x350
        mod_consts[4],
#endif
        codeobj_e2e0356d16bf421dfa235cba47806de7,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_sync$http_proxy$$$function__1_merge_headers$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_sync$http_proxy$$$function__2_build_auth_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_username = python_pars[0];
    PyObject *par_password = python_pars[1];
    PyObject *var_userpass = NULL;
    struct Nuitka_FrameObject *frame_96ae05e591f79dc4e006f20595b26e89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_96ae05e591f79dc4e006f20595b26e89 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_96ae05e591f79dc4e006f20595b26e89)) {
        Py_XDECREF(cache_frame_96ae05e591f79dc4e006f20595b26e89);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96ae05e591f79dc4e006f20595b26e89 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96ae05e591f79dc4e006f20595b26e89 = MAKE_FUNCTION_FRAME(codeobj_96ae05e591f79dc4e006f20595b26e89, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96ae05e591f79dc4e006f20595b26e89->m_type_description == NULL);
    frame_96ae05e591f79dc4e006f20595b26e89 = cache_frame_96ae05e591f79dc4e006f20595b26e89;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96ae05e591f79dc4e006f20595b26e89);
    assert(Py_REFCNT(frame_96ae05e591f79dc4e006f20595b26e89) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_username);
        tmp_add_expr_left_2 = par_username;
        tmp_add_expr_right_2 = mod_consts[5];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_password);
        tmp_add_expr_right_1 = par_password;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_userpass == NULL);
        var_userpass = tmp_assign_source_1;
    }
    {
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_add_expr_left_3 = mod_consts[6];
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_userpass);
        tmp_args_element_value_1 = var_userpass;
        frame_96ae05e591f79dc4e006f20595b26e89->m_frame.f_lineno = 49;
        tmp_add_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_BYTES_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_96ae05e591f79dc4e006f20595b26e89, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96ae05e591f79dc4e006f20595b26e89->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96ae05e591f79dc4e006f20595b26e89, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96ae05e591f79dc4e006f20595b26e89,
        type_description_1,
        par_username,
        par_password,
        var_userpass
    );


    // Release cached frame if used for exception.
    if (frame_96ae05e591f79dc4e006f20595b26e89 == cache_frame_96ae05e591f79dc4e006f20595b26e89) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96ae05e591f79dc4e006f20595b26e89);
        cache_frame_96ae05e591f79dc4e006f20595b26e89 = NULL;
    }

    assertFrameObject(frame_96ae05e591f79dc4e006f20595b26e89);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_userpass);
    Py_DECREF(var_userpass);
    var_userpass = NULL;
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

    Py_XDECREF(var_userpass);
    var_userpass = NULL;
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
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http_proxy$$$function__3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_proxy_url = python_pars[1];
    PyObject *par_proxy_auth = python_pars[2];
    PyObject *par_proxy_headers = python_pars[3];
    PyObject *par_ssl_context = python_pars[4];
    PyObject *par_max_connections = python_pars[5];
    PyObject *par_max_keepalive_connections = python_pars[6];
    PyObject *par_keepalive_expiry = python_pars[7];
    PyObject *par_http1 = python_pars[8];
    PyObject *par_http2 = python_pars[9];
    PyObject *par_retries = python_pars[10];
    PyObject *par_local_address = python_pars[11];
    PyObject *par_uds = python_pars[12];
    PyObject *par_network_backend = python_pars[13];
    PyObject *var_username = NULL;
    PyObject *var_password = NULL;
    PyObject *var_authorization = NULL;
    struct Nuitka_FrameObject *frame_24b1456942f31f9ca4b7077a903543ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_24b1456942f31f9ca4b7077a903543ad = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_24b1456942f31f9ca4b7077a903543ad)) {
        Py_XDECREF(cache_frame_24b1456942f31f9ca4b7077a903543ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_24b1456942f31f9ca4b7077a903543ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_24b1456942f31f9ca4b7077a903543ad = MAKE_FUNCTION_FRAME(codeobj_24b1456942f31f9ca4b7077a903543ad, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_24b1456942f31f9ca4b7077a903543ad->m_type_description == NULL);
    frame_24b1456942f31f9ca4b7077a903543ad = cache_frame_24b1456942f31f9ca4b7077a903543ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_24b1456942f31f9ca4b7077a903543ad);
    assert(Py_REFCNT(frame_24b1456942f31f9ca4b7077a903543ad) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_kw_call_value_9_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_httpcore$_sync$http_proxy, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ssl_context);
        tmp_kw_call_value_0_1 = par_ssl_context;
        CHECK_OBJECT(par_max_connections);
        tmp_kw_call_value_1_1 = par_max_connections;
        CHECK_OBJECT(par_max_keepalive_connections);
        tmp_kw_call_value_2_1 = par_max_keepalive_connections;
        CHECK_OBJECT(par_keepalive_expiry);
        tmp_kw_call_value_3_1 = par_keepalive_expiry;
        CHECK_OBJECT(par_http1);
        tmp_kw_call_value_4_1 = par_http1;
        CHECK_OBJECT(par_http2);
        tmp_kw_call_value_5_1 = par_http2;
        CHECK_OBJECT(par_network_backend);
        tmp_kw_call_value_6_1 = par_network_backend;
        CHECK_OBJECT(par_retries);
        tmp_kw_call_value_7_1 = par_retries;
        CHECK_OBJECT(par_local_address);
        tmp_kw_call_value_8_1 = par_local_address;
        CHECK_OBJECT(par_uds);
        tmp_kw_call_value_9_1 = par_uds;
        frame_24b1456942f31f9ca4b7077a903543ad->m_frame.f_lineno = 107;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_ssl_context);
        tmp_assattr_value_1 = par_ssl_context;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_proxy_url);
        tmp_tuple_element_1 = par_proxy_url;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[13]);
        frame_24b1456942f31f9ca4b7077a903543ad->m_frame.f_lineno = 120;
        tmp_assattr_value_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_proxy_headers);
        tmp_tuple_element_2 = par_proxy_headers;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[16]);
        frame_24b1456942f31f9ca4b7077a903543ad->m_frame.f_lineno = 121;
        tmp_assattr_value_3 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[17], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_proxy_auth);
        tmp_cmp_expr_left_1 = par_proxy_auth;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kwargs_value_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_proxy_auth);
        tmp_expression_value_2 = par_proxy_auth;
        tmp_subscript_value_1 = mod_consts[19];
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[20]);
        frame_24b1456942f31f9ca4b7077a903543ad->m_frame.f_lineno = 123;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_username == NULL);
        var_username = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kwargs_value_4;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_proxy_auth);
        tmp_expression_value_3 = par_proxy_auth;
        tmp_subscript_value_2 = mod_consts[21];
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_4);
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[20]);
        frame_24b1456942f31f9ca4b7077a903543ad->m_frame.f_lineno = 124;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_password == NULL);
        var_password = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_username);
        tmp_args_element_value_1 = var_username;
        CHECK_OBJECT(var_password);
        tmp_args_element_value_2 = var_password;
        frame_24b1456942f31f9ca4b7077a903543ad->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_authorization == NULL);
        var_authorization = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_tuple_element_5 = mod_consts[23];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_authorization);
        tmp_tuple_element_5 = var_authorization;
        PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_5);
        tmp_add_expr_left_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_add_expr_left_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[17], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_24b1456942f31f9ca4b7077a903543ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_24b1456942f31f9ca4b7077a903543ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_24b1456942f31f9ca4b7077a903543ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_24b1456942f31f9ca4b7077a903543ad,
        type_description_1,
        par_self,
        par_proxy_url,
        par_proxy_auth,
        par_proxy_headers,
        par_ssl_context,
        par_max_connections,
        par_max_keepalive_connections,
        par_keepalive_expiry,
        par_http1,
        par_http2,
        par_retries,
        par_local_address,
        par_uds,
        par_network_backend,
        var_username,
        var_password,
        var_authorization,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_24b1456942f31f9ca4b7077a903543ad == cache_frame_24b1456942f31f9ca4b7077a903543ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_24b1456942f31f9ca4b7077a903543ad);
        cache_frame_24b1456942f31f9ca4b7077a903543ad = NULL;
    }

    assertFrameObject(frame_24b1456942f31f9ca4b7077a903543ad);

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
    Py_XDECREF(var_username);
    var_username = NULL;
    Py_XDECREF(var_password);
    var_password = NULL;
    Py_XDECREF(var_authorization);
    var_authorization = NULL;
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

    Py_XDECREF(var_username);
    var_username = NULL;
    Py_XDECREF(var_password);
    var_password = NULL;
    Py_XDECREF(var_authorization);
    var_authorization = NULL;
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
    CHECK_OBJECT(par_proxy_url);
    Py_DECREF(par_proxy_url);
    CHECK_OBJECT(par_proxy_auth);
    Py_DECREF(par_proxy_auth);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_max_connections);
    Py_DECREF(par_max_connections);
    CHECK_OBJECT(par_max_keepalive_connections);
    Py_DECREF(par_max_keepalive_connections);
    CHECK_OBJECT(par_keepalive_expiry);
    Py_DECREF(par_keepalive_expiry);
    CHECK_OBJECT(par_http1);
    Py_DECREF(par_http1);
    CHECK_OBJECT(par_http2);
    Py_DECREF(par_http2);
    CHECK_OBJECT(par_retries);
    Py_DECREF(par_retries);
    CHECK_OBJECT(par_local_address);
    Py_DECREF(par_local_address);
    CHECK_OBJECT(par_uds);
    Py_DECREF(par_uds);
    CHECK_OBJECT(par_network_backend);
    Py_DECREF(par_network_backend);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_proxy_url);
    Py_DECREF(par_proxy_url);
    CHECK_OBJECT(par_proxy_auth);
    Py_DECREF(par_proxy_auth);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_max_connections);
    Py_DECREF(par_max_connections);
    CHECK_OBJECT(par_max_keepalive_connections);
    Py_DECREF(par_max_keepalive_connections);
    CHECK_OBJECT(par_keepalive_expiry);
    Py_DECREF(par_keepalive_expiry);
    CHECK_OBJECT(par_http1);
    Py_DECREF(par_http1);
    CHECK_OBJECT(par_http2);
    Py_DECREF(par_http2);
    CHECK_OBJECT(par_retries);
    Py_DECREF(par_retries);
    CHECK_OBJECT(par_local_address);
    Py_DECREF(par_local_address);
    CHECK_OBJECT(par_uds);
    Py_DECREF(par_uds);
    CHECK_OBJECT(par_network_backend);
    Py_DECREF(par_network_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http_proxy$$$function__4_create_connection(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_origin = python_pars[1];
    struct Nuitka_FrameObject *frame_6506c4a30d815ca9f80356984b237546;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6506c4a30d815ca9f80356984b237546 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6506c4a30d815ca9f80356984b237546)) {
        Py_XDECREF(cache_frame_6506c4a30d815ca9f80356984b237546);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6506c4a30d815ca9f80356984b237546 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6506c4a30d815ca9f80356984b237546 = MAKE_FUNCTION_FRAME(codeobj_6506c4a30d815ca9f80356984b237546, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6506c4a30d815ca9f80356984b237546->m_type_description == NULL);
    frame_6506c4a30d815ca9f80356984b237546 = cache_frame_6506c4a30d815ca9f80356984b237546;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6506c4a30d815ca9f80356984b237546);
    assert(Py_REFCNT(frame_6506c4a30d815ca9f80356984b237546) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_origin);
        tmp_expression_value_1 = par_origin;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[26];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[28]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 134;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_origin);
        tmp_kw_call_value_2_1 = par_origin;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[29]);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6506c4a30d815ca9f80356984b237546->m_frame.f_lineno = 132;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[31]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_expression_value_14;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[14]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[28]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[17]);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_origin);
        tmp_kw_call_value_2_2 = par_origin;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[11]);
        if (tmp_kw_call_value_3_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);

            exception_lineno = 143;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_kw_call_value_4_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[29]);
        if (tmp_kw_call_value_4_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_3_2);

            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[33]);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_3_2);
            Py_DECREF(tmp_kw_call_value_4_2);

            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_kw_call_value_6_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[34]);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_3_2);
            Py_DECREF(tmp_kw_call_value_4_2);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_kw_call_value_7_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[30]);
        if (tmp_kw_call_value_7_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_3_2);
            Py_DECREF(tmp_kw_call_value_4_2);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);

            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6506c4a30d815ca9f80356984b237546->m_frame.f_lineno = 139;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[35]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_1_2);
        Py_DECREF(tmp_kw_call_value_3_2);
        Py_DECREF(tmp_kw_call_value_4_2);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        Py_DECREF(tmp_kw_call_value_7_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
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
        exception_tb = MAKE_TRACEBACK(frame_6506c4a30d815ca9f80356984b237546, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6506c4a30d815ca9f80356984b237546->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6506c4a30d815ca9f80356984b237546, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6506c4a30d815ca9f80356984b237546,
        type_description_1,
        par_self,
        par_origin
    );


    // Release cached frame if used for exception.
    if (frame_6506c4a30d815ca9f80356984b237546 == cache_frame_6506c4a30d815ca9f80356984b237546) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6506c4a30d815ca9f80356984b237546);
        cache_frame_6506c4a30d815ca9f80356984b237546 = NULL;
    }

    assertFrameObject(frame_6506c4a30d815ca9f80356984b237546);

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
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http_proxy$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_proxy_origin = python_pars[1];
    PyObject *par_remote_origin = python_pars[2];
    PyObject *par_proxy_headers = python_pars[3];
    PyObject *par_keepalive_expiry = python_pars[4];
    PyObject *par_network_backend = python_pars[5];
    struct Nuitka_FrameObject *frame_380db32a26f240361666dd95b31d6b44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_380db32a26f240361666dd95b31d6b44 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_380db32a26f240361666dd95b31d6b44)) {
        Py_XDECREF(cache_frame_380db32a26f240361666dd95b31d6b44);

#if _DEBUG_REFCOUNTS
        if (cache_frame_380db32a26f240361666dd95b31d6b44 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_380db32a26f240361666dd95b31d6b44 = MAKE_FUNCTION_FRAME(codeobj_380db32a26f240361666dd95b31d6b44, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_380db32a26f240361666dd95b31d6b44->m_type_description == NULL);
    frame_380db32a26f240361666dd95b31d6b44 = cache_frame_380db32a26f240361666dd95b31d6b44;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_380db32a26f240361666dd95b31d6b44);
    assert(Py_REFCNT(frame_380db32a26f240361666dd95b31d6b44) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_proxy_origin);
        tmp_kw_call_value_0_1 = par_proxy_origin;
        CHECK_OBJECT(par_keepalive_expiry);
        tmp_kw_call_value_1_1 = par_keepalive_expiry;
        CHECK_OBJECT(par_network_backend);
        tmp_kw_call_value_2_1 = par_network_backend;
        frame_380db32a26f240361666dd95b31d6b44->m_frame.f_lineno = 160;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[37]);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_proxy_origin);
        tmp_assattr_value_2 = par_proxy_origin;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_proxy_headers);
        tmp_tuple_element_1 = par_proxy_headers;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[16]);
        frame_380db32a26f240361666dd95b31d6b44->m_frame.f_lineno = 166;
        tmp_assattr_value_3 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[17], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_remote_origin);
        tmp_assattr_value_4 = par_remote_origin;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[40], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_380db32a26f240361666dd95b31d6b44, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_380db32a26f240361666dd95b31d6b44->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_380db32a26f240361666dd95b31d6b44, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_380db32a26f240361666dd95b31d6b44,
        type_description_1,
        par_self,
        par_proxy_origin,
        par_remote_origin,
        par_proxy_headers,
        par_keepalive_expiry,
        par_network_backend
    );


    // Release cached frame if used for exception.
    if (frame_380db32a26f240361666dd95b31d6b44 == cache_frame_380db32a26f240361666dd95b31d6b44) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_380db32a26f240361666dd95b31d6b44);
        cache_frame_380db32a26f240361666dd95b31d6b44 = NULL;
    }

    assertFrameObject(frame_380db32a26f240361666dd95b31d6b44);

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
    CHECK_OBJECT(par_proxy_origin);
    Py_DECREF(par_proxy_origin);
    CHECK_OBJECT(par_remote_origin);
    Py_DECREF(par_remote_origin);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_keepalive_expiry);
    Py_DECREF(par_keepalive_expiry);
    CHECK_OBJECT(par_network_backend);
    Py_DECREF(par_network_backend);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_proxy_origin);
    Py_DECREF(par_proxy_origin);
    CHECK_OBJECT(par_remote_origin);
    Py_DECREF(par_remote_origin);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_keepalive_expiry);
    Py_DECREF(par_keepalive_expiry);
    CHECK_OBJECT(par_network_backend);
    Py_DECREF(par_network_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http_proxy$$$function__6_handle_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_headers = NULL;
    PyObject *var_url = NULL;
    PyObject *var_proxy_request = NULL;
    struct Nuitka_FrameObject *frame_614cc4f792fff08707fef513b566c22f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_614cc4f792fff08707fef513b566c22f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_614cc4f792fff08707fef513b566c22f)) {
        Py_XDECREF(cache_frame_614cc4f792fff08707fef513b566c22f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_614cc4f792fff08707fef513b566c22f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_614cc4f792fff08707fef513b566c22f = MAKE_FUNCTION_FRAME(codeobj_614cc4f792fff08707fef513b566c22f, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_614cc4f792fff08707fef513b566c22f->m_type_description == NULL);
    frame_614cc4f792fff08707fef513b566c22f = cache_frame_614cc4f792fff08707fef513b566c22f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_614cc4f792fff08707fef513b566c22f);
    assert(Py_REFCNT(frame_614cc4f792fff08707fef513b566c22f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_expression_value_2 = par_request;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 170;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_614cc4f792fff08707fef513b566c22f->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_headers == NULL);
        var_headers = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_bytes_arg_1;
        PyObject *tmp_expression_value_9;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[39]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[39]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 173;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[44]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 173;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[39]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[45]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_expression_value_9 = par_request;
        tmp_bytes_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[46]);
        if (tmp_bytes_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 175;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_1 = BUILTIN_BYTES1(tmp_bytes_arg_1);
        Py_DECREF(tmp_bytes_arg_1);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 175;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_614cc4f792fff08707fef513b566c22f->m_frame.f_lineno = 171;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_url == NULL);
        var_url = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_12;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_expression_value_10 = par_request;
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[49]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_url);
        tmp_kw_call_value_1_2 = var_url;
        CHECK_OBJECT(var_headers);
        tmp_kw_call_value_2_2 = var_headers;
        CHECK_OBJECT(par_request);
        tmp_expression_value_11 = par_request;
        tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[50]);
        if (tmp_kw_call_value_3_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 181;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_expression_value_12 = par_request;
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[51]);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_3_2);

            exception_lineno = 182;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_614cc4f792fff08707fef513b566c22f->m_frame.f_lineno = 177;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_3_2);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proxy_request == NULL);
        var_proxy_request = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_proxy_request);
        tmp_args_element_value_3 = var_proxy_request;
        frame_614cc4f792fff08707fef513b566c22f->m_frame.f_lineno = 184;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[53], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
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
        exception_tb = MAKE_TRACEBACK(frame_614cc4f792fff08707fef513b566c22f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_614cc4f792fff08707fef513b566c22f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_614cc4f792fff08707fef513b566c22f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_614cc4f792fff08707fef513b566c22f,
        type_description_1,
        par_self,
        par_request,
        var_headers,
        var_url,
        var_proxy_request
    );


    // Release cached frame if used for exception.
    if (frame_614cc4f792fff08707fef513b566c22f == cache_frame_614cc4f792fff08707fef513b566c22f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_614cc4f792fff08707fef513b566c22f);
        cache_frame_614cc4f792fff08707fef513b566c22f = NULL;
    }

    assertFrameObject(frame_614cc4f792fff08707fef513b566c22f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_headers);
    Py_DECREF(var_headers);
    var_headers = NULL;
    CHECK_OBJECT(var_url);
    Py_DECREF(var_url);
    var_url = NULL;
    CHECK_OBJECT(var_proxy_request);
    Py_DECREF(var_proxy_request);
    var_proxy_request = NULL;
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

    Py_XDECREF(var_headers);
    var_headers = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_proxy_request);
    var_proxy_request = NULL;
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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http_proxy$$$function__7_can_handle_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_origin = python_pars[1];
    struct Nuitka_FrameObject *frame_9ee77d90caa7ab26246cff316b85fb16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ee77d90caa7ab26246cff316b85fb16 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ee77d90caa7ab26246cff316b85fb16)) {
        Py_XDECREF(cache_frame_9ee77d90caa7ab26246cff316b85fb16);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ee77d90caa7ab26246cff316b85fb16 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ee77d90caa7ab26246cff316b85fb16 = MAKE_FUNCTION_FRAME(codeobj_9ee77d90caa7ab26246cff316b85fb16, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ee77d90caa7ab26246cff316b85fb16->m_type_description == NULL);
    frame_9ee77d90caa7ab26246cff316b85fb16 = cache_frame_9ee77d90caa7ab26246cff316b85fb16;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9ee77d90caa7ab26246cff316b85fb16);
    assert(Py_REFCNT(frame_9ee77d90caa7ab26246cff316b85fb16) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_origin);
        tmp_cmp_expr_left_1 = par_origin;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
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
        exception_tb = MAKE_TRACEBACK(frame_9ee77d90caa7ab26246cff316b85fb16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ee77d90caa7ab26246cff316b85fb16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ee77d90caa7ab26246cff316b85fb16, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ee77d90caa7ab26246cff316b85fb16,
        type_description_1,
        par_self,
        par_origin
    );


    // Release cached frame if used for exception.
    if (frame_9ee77d90caa7ab26246cff316b85fb16 == cache_frame_9ee77d90caa7ab26246cff316b85fb16) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ee77d90caa7ab26246cff316b85fb16);
        cache_frame_9ee77d90caa7ab26246cff316b85fb16 = NULL;
    }

    assertFrameObject(frame_9ee77d90caa7ab26246cff316b85fb16);

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
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http_proxy$$$function__8_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0079977af1939399837e5660ba64092f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0079977af1939399837e5660ba64092f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0079977af1939399837e5660ba64092f)) {
        Py_XDECREF(cache_frame_0079977af1939399837e5660ba64092f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0079977af1939399837e5660ba64092f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0079977af1939399837e5660ba64092f = MAKE_FUNCTION_FRAME(codeobj_0079977af1939399837e5660ba64092f, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0079977af1939399837e5660ba64092f->m_type_description == NULL);
    frame_0079977af1939399837e5660ba64092f = cache_frame_0079977af1939399837e5660ba64092f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0079977af1939399837e5660ba64092f);
    assert(Py_REFCNT(frame_0079977af1939399837e5660ba64092f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0079977af1939399837e5660ba64092f->m_frame.f_lineno = 190;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[54]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0079977af1939399837e5660ba64092f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0079977af1939399837e5660ba64092f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0079977af1939399837e5660ba64092f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0079977af1939399837e5660ba64092f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0079977af1939399837e5660ba64092f == cache_frame_0079977af1939399837e5660ba64092f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0079977af1939399837e5660ba64092f);
        cache_frame_0079977af1939399837e5660ba64092f = NULL;
    }

    assertFrameObject(frame_0079977af1939399837e5660ba64092f);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__9_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_88c9f9790637674c2d0cd7de04184f0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_88c9f9790637674c2d0cd7de04184f0b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_88c9f9790637674c2d0cd7de04184f0b)) {
        Py_XDECREF(cache_frame_88c9f9790637674c2d0cd7de04184f0b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88c9f9790637674c2d0cd7de04184f0b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88c9f9790637674c2d0cd7de04184f0b = MAKE_FUNCTION_FRAME(codeobj_88c9f9790637674c2d0cd7de04184f0b, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_88c9f9790637674c2d0cd7de04184f0b->m_type_description == NULL);
    frame_88c9f9790637674c2d0cd7de04184f0b = cache_frame_88c9f9790637674c2d0cd7de04184f0b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_88c9f9790637674c2d0cd7de04184f0b);
    assert(Py_REFCNT(frame_88c9f9790637674c2d0cd7de04184f0b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_88c9f9790637674c2d0cd7de04184f0b->m_frame.f_lineno = 193;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[55]);
        Py_DECREF(tmp_called_instance_1);
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
        exception_tb = MAKE_TRACEBACK(frame_88c9f9790637674c2d0cd7de04184f0b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88c9f9790637674c2d0cd7de04184f0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88c9f9790637674c2d0cd7de04184f0b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88c9f9790637674c2d0cd7de04184f0b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_88c9f9790637674c2d0cd7de04184f0b == cache_frame_88c9f9790637674c2d0cd7de04184f0b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_88c9f9790637674c2d0cd7de04184f0b);
        cache_frame_88c9f9790637674c2d0cd7de04184f0b = NULL;
    }

    assertFrameObject(frame_88c9f9790637674c2d0cd7de04184f0b);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__10_is_available(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fd88c6ccd1a22c9f5dae637eac0c7e41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd88c6ccd1a22c9f5dae637eac0c7e41 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd88c6ccd1a22c9f5dae637eac0c7e41)) {
        Py_XDECREF(cache_frame_fd88c6ccd1a22c9f5dae637eac0c7e41);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd88c6ccd1a22c9f5dae637eac0c7e41 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd88c6ccd1a22c9f5dae637eac0c7e41 = MAKE_FUNCTION_FRAME(codeobj_fd88c6ccd1a22c9f5dae637eac0c7e41, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd88c6ccd1a22c9f5dae637eac0c7e41->m_type_description == NULL);
    frame_fd88c6ccd1a22c9f5dae637eac0c7e41 = cache_frame_fd88c6ccd1a22c9f5dae637eac0c7e41;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fd88c6ccd1a22c9f5dae637eac0c7e41);
    assert(Py_REFCNT(frame_fd88c6ccd1a22c9f5dae637eac0c7e41) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fd88c6ccd1a22c9f5dae637eac0c7e41->m_frame.f_lineno = 196;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[56]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
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
        exception_tb = MAKE_TRACEBACK(frame_fd88c6ccd1a22c9f5dae637eac0c7e41, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd88c6ccd1a22c9f5dae637eac0c7e41->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd88c6ccd1a22c9f5dae637eac0c7e41, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd88c6ccd1a22c9f5dae637eac0c7e41,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fd88c6ccd1a22c9f5dae637eac0c7e41 == cache_frame_fd88c6ccd1a22c9f5dae637eac0c7e41) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd88c6ccd1a22c9f5dae637eac0c7e41);
        cache_frame_fd88c6ccd1a22c9f5dae637eac0c7e41 = NULL;
    }

    assertFrameObject(frame_fd88c6ccd1a22c9f5dae637eac0c7e41);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__11_has_expired(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c05cb84e99ad6f65ca658d92d407844f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c05cb84e99ad6f65ca658d92d407844f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c05cb84e99ad6f65ca658d92d407844f)) {
        Py_XDECREF(cache_frame_c05cb84e99ad6f65ca658d92d407844f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c05cb84e99ad6f65ca658d92d407844f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c05cb84e99ad6f65ca658d92d407844f = MAKE_FUNCTION_FRAME(codeobj_c05cb84e99ad6f65ca658d92d407844f, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c05cb84e99ad6f65ca658d92d407844f->m_type_description == NULL);
    frame_c05cb84e99ad6f65ca658d92d407844f = cache_frame_c05cb84e99ad6f65ca658d92d407844f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c05cb84e99ad6f65ca658d92d407844f);
    assert(Py_REFCNT(frame_c05cb84e99ad6f65ca658d92d407844f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c05cb84e99ad6f65ca658d92d407844f->m_frame.f_lineno = 199;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[57]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
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
        exception_tb = MAKE_TRACEBACK(frame_c05cb84e99ad6f65ca658d92d407844f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c05cb84e99ad6f65ca658d92d407844f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c05cb84e99ad6f65ca658d92d407844f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c05cb84e99ad6f65ca658d92d407844f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c05cb84e99ad6f65ca658d92d407844f == cache_frame_c05cb84e99ad6f65ca658d92d407844f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c05cb84e99ad6f65ca658d92d407844f);
        cache_frame_c05cb84e99ad6f65ca658d92d407844f = NULL;
    }

    assertFrameObject(frame_c05cb84e99ad6f65ca658d92d407844f);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__12_is_idle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d781c82d1305030858db1a07d3fc76a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d781c82d1305030858db1a07d3fc76a2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d781c82d1305030858db1a07d3fc76a2)) {
        Py_XDECREF(cache_frame_d781c82d1305030858db1a07d3fc76a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d781c82d1305030858db1a07d3fc76a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d781c82d1305030858db1a07d3fc76a2 = MAKE_FUNCTION_FRAME(codeobj_d781c82d1305030858db1a07d3fc76a2, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d781c82d1305030858db1a07d3fc76a2->m_type_description == NULL);
    frame_d781c82d1305030858db1a07d3fc76a2 = cache_frame_d781c82d1305030858db1a07d3fc76a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d781c82d1305030858db1a07d3fc76a2);
    assert(Py_REFCNT(frame_d781c82d1305030858db1a07d3fc76a2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d781c82d1305030858db1a07d3fc76a2->m_frame.f_lineno = 202;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[58]);
        Py_DECREF(tmp_called_instance_1);
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
        exception_tb = MAKE_TRACEBACK(frame_d781c82d1305030858db1a07d3fc76a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d781c82d1305030858db1a07d3fc76a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d781c82d1305030858db1a07d3fc76a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d781c82d1305030858db1a07d3fc76a2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d781c82d1305030858db1a07d3fc76a2 == cache_frame_d781c82d1305030858db1a07d3fc76a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d781c82d1305030858db1a07d3fc76a2);
        cache_frame_d781c82d1305030858db1a07d3fc76a2 = NULL;
    }

    assertFrameObject(frame_d781c82d1305030858db1a07d3fc76a2);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__13_is_closed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a99ab251c818fc9cd085d2d76a4fcfed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a99ab251c818fc9cd085d2d76a4fcfed = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a99ab251c818fc9cd085d2d76a4fcfed)) {
        Py_XDECREF(cache_frame_a99ab251c818fc9cd085d2d76a4fcfed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a99ab251c818fc9cd085d2d76a4fcfed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a99ab251c818fc9cd085d2d76a4fcfed = MAKE_FUNCTION_FRAME(codeobj_a99ab251c818fc9cd085d2d76a4fcfed, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a99ab251c818fc9cd085d2d76a4fcfed->m_type_description == NULL);
    frame_a99ab251c818fc9cd085d2d76a4fcfed = cache_frame_a99ab251c818fc9cd085d2d76a4fcfed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a99ab251c818fc9cd085d2d76a4fcfed);
    assert(Py_REFCNT(frame_a99ab251c818fc9cd085d2d76a4fcfed) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a99ab251c818fc9cd085d2d76a4fcfed->m_frame.f_lineno = 205;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[59]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
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
        exception_tb = MAKE_TRACEBACK(frame_a99ab251c818fc9cd085d2d76a4fcfed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a99ab251c818fc9cd085d2d76a4fcfed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a99ab251c818fc9cd085d2d76a4fcfed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a99ab251c818fc9cd085d2d76a4fcfed,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a99ab251c818fc9cd085d2d76a4fcfed == cache_frame_a99ab251c818fc9cd085d2d76a4fcfed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a99ab251c818fc9cd085d2d76a4fcfed);
        cache_frame_a99ab251c818fc9cd085d2d76a4fcfed = NULL;
    }

    assertFrameObject(frame_a99ab251c818fc9cd085d2d76a4fcfed);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__14___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_54bc060b2031d6979b47b897a172dc80;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_54bc060b2031d6979b47b897a172dc80 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_54bc060b2031d6979b47b897a172dc80)) {
        Py_XDECREF(cache_frame_54bc060b2031d6979b47b897a172dc80);

#if _DEBUG_REFCOUNTS
        if (cache_frame_54bc060b2031d6979b47b897a172dc80 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_54bc060b2031d6979b47b897a172dc80 = MAKE_FUNCTION_FRAME(codeobj_54bc060b2031d6979b47b897a172dc80, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_54bc060b2031d6979b47b897a172dc80->m_type_description == NULL);
    frame_54bc060b2031d6979b47b897a172dc80 = cache_frame_54bc060b2031d6979b47b897a172dc80;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_54bc060b2031d6979b47b897a172dc80);
    assert(Py_REFCNT(frame_54bc060b2031d6979b47b897a172dc80) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[60];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[61]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[62];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            frame_54bc060b2031d6979b47b897a172dc80->m_frame.f_lineno = 208;
            tmp_format_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[55]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[62];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[62], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
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
        exception_tb = MAKE_TRACEBACK(frame_54bc060b2031d6979b47b897a172dc80, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_54bc060b2031d6979b47b897a172dc80->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_54bc060b2031d6979b47b897a172dc80, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_54bc060b2031d6979b47b897a172dc80,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_54bc060b2031d6979b47b897a172dc80 == cache_frame_54bc060b2031d6979b47b897a172dc80) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_54bc060b2031d6979b47b897a172dc80);
        cache_frame_54bc060b2031d6979b47b897a172dc80 = NULL;
    }

    assertFrameObject(frame_54bc060b2031d6979b47b897a172dc80);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__15___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_proxy_origin = python_pars[1];
    PyObject *par_remote_origin = python_pars[2];
    PyObject *par_ssl_context = python_pars[3];
    PyObject *par_proxy_headers = python_pars[4];
    PyObject *par_keepalive_expiry = python_pars[5];
    PyObject *par_http1 = python_pars[6];
    PyObject *par_http2 = python_pars[7];
    PyObject *par_network_backend = python_pars[8];
    struct Nuitka_FrameObject *frame_d0170fba690c5e8c8c73bed5ccbee0c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d0170fba690c5e8c8c73bed5ccbee0c8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0170fba690c5e8c8c73bed5ccbee0c8)) {
        Py_XDECREF(cache_frame_d0170fba690c5e8c8c73bed5ccbee0c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0170fba690c5e8c8c73bed5ccbee0c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0170fba690c5e8c8c73bed5ccbee0c8 = MAKE_FUNCTION_FRAME(codeobj_d0170fba690c5e8c8c73bed5ccbee0c8, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0170fba690c5e8c8c73bed5ccbee0c8->m_type_description == NULL);
    frame_d0170fba690c5e8c8c73bed5ccbee0c8 = cache_frame_d0170fba690c5e8c8c73bed5ccbee0c8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0170fba690c5e8c8c73bed5ccbee0c8);
    assert(Py_REFCNT(frame_d0170fba690c5e8c8c73bed5ccbee0c8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_proxy_origin);
        tmp_kw_call_value_0_1 = par_proxy_origin;
        CHECK_OBJECT(par_keepalive_expiry);
        tmp_kw_call_value_1_1 = par_keepalive_expiry;
        CHECK_OBJECT(par_network_backend);
        tmp_kw_call_value_2_1 = par_network_backend;
        frame_d0170fba690c5e8c8c73bed5ccbee0c8->m_frame.f_lineno = 223;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[37]);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_proxy_origin);
        tmp_assattr_value_2 = par_proxy_origin;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_remote_origin);
        tmp_assattr_value_3 = par_remote_origin;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[40], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_ssl_context);
        tmp_assattr_value_4 = par_ssl_context;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[11], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_proxy_headers);
        tmp_tuple_element_1 = par_proxy_headers;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[16]);
        frame_d0170fba690c5e8c8c73bed5ccbee0c8->m_frame.f_lineno = 231;
        tmp_assattr_value_5 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[17], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_keepalive_expiry);
        tmp_assattr_value_6 = par_keepalive_expiry;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[29], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_http1);
        tmp_assattr_value_7 = par_http1;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[33], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_http2);
        tmp_assattr_value_8 = par_http2;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[34], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_9;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d0170fba690c5e8c8c73bed5ccbee0c8->m_frame.f_lineno = 235;
        tmp_assattr_value_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[66], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_value_10 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[67], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0170fba690c5e8c8c73bed5ccbee0c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0170fba690c5e8c8c73bed5ccbee0c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0170fba690c5e8c8c73bed5ccbee0c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0170fba690c5e8c8c73bed5ccbee0c8,
        type_description_1,
        par_self,
        par_proxy_origin,
        par_remote_origin,
        par_ssl_context,
        par_proxy_headers,
        par_keepalive_expiry,
        par_http1,
        par_http2,
        par_network_backend
    );


    // Release cached frame if used for exception.
    if (frame_d0170fba690c5e8c8c73bed5ccbee0c8 == cache_frame_d0170fba690c5e8c8c73bed5ccbee0c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0170fba690c5e8c8c73bed5ccbee0c8);
        cache_frame_d0170fba690c5e8c8c73bed5ccbee0c8 = NULL;
    }

    assertFrameObject(frame_d0170fba690c5e8c8c73bed5ccbee0c8);

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
    CHECK_OBJECT(par_proxy_origin);
    Py_DECREF(par_proxy_origin);
    CHECK_OBJECT(par_remote_origin);
    Py_DECREF(par_remote_origin);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_keepalive_expiry);
    Py_DECREF(par_keepalive_expiry);
    CHECK_OBJECT(par_http1);
    Py_DECREF(par_http1);
    CHECK_OBJECT(par_http2);
    Py_DECREF(par_http2);
    CHECK_OBJECT(par_network_backend);
    Py_DECREF(par_network_backend);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_proxy_origin);
    Py_DECREF(par_proxy_origin);
    CHECK_OBJECT(par_remote_origin);
    Py_DECREF(par_remote_origin);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_keepalive_expiry);
    Py_DECREF(par_keepalive_expiry);
    CHECK_OBJECT(par_http1);
    Py_DECREF(par_http1);
    CHECK_OBJECT(par_http2);
    Py_DECREF(par_http2);
    CHECK_OBJECT(par_network_backend);
    Py_DECREF(par_network_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http_proxy$$$function__16_handle_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_timeouts = NULL;
    PyObject *var_timeout = NULL;
    PyObject *var_target = NULL;
    PyObject *var_connect_url = NULL;
    PyObject *var_connect_headers = NULL;
    PyObject *var_connect_request = NULL;
    PyObject *var_connect_response = NULL;
    PyObject *var_reason_bytes = NULL;
    PyObject *var_reason_str = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_stream = NULL;
    PyObject *var_ssl_context = NULL;
    PyObject *var_alpn_protocols = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_trace = NULL;
    PyObject *var_ssl_object = NULL;
    PyObject *var_http2_negotiated = NULL;
    PyObject *var_HTTP2Connection = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_250e45e3ff6ae4ff2697bd80ebcd6055;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_250e45e3ff6ae4ff2697bd80ebcd6055 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_250e45e3ff6ae4ff2697bd80ebcd6055)) {
        Py_XDECREF(cache_frame_250e45e3ff6ae4ff2697bd80ebcd6055);

#if _DEBUG_REFCOUNTS
        if (cache_frame_250e45e3ff6ae4ff2697bd80ebcd6055 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_250e45e3ff6ae4ff2697bd80ebcd6055 = MAKE_FUNCTION_FRAME(codeobj_250e45e3ff6ae4ff2697bd80ebcd6055, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_type_description == NULL);
    frame_250e45e3ff6ae4ff2697bd80ebcd6055 = cache_frame_250e45e3ff6ae4ff2697bd80ebcd6055;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_250e45e3ff6ae4ff2697bd80ebcd6055);
    assert(Py_REFCNT(frame_250e45e3ff6ae4ff2697bd80ebcd6055) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(par_request);
        tmp_expression_value_2 = par_request;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[51]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[68]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[69];
        tmp_call_arg_element_2 = MAKE_DICT_EMPTY();
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_timeouts == NULL);
        var_timeouts = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_timeouts);
        tmp_expression_value_3 = var_timeouts;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[68]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 240;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[70]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_timeout == NULL);
        var_timeout = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[66]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_5 = tmp_with_2__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tmp_expression_value_5, mod_consts[71]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 242;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_6 = tmp_with_2__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL(tmp_expression_value_6, mod_consts[72]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[67]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        tmp_mod_expr_left_1 = mod_consts[73];
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[40]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[44]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_11 = par_self;
            tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[40]);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[45]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_7 = BINARY_OPERATION_MOD_OBJECT_BYTES_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_target == NULL);
        var_target = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[39]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[25]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[39]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[44]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[39]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[45]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_target);
        tmp_kw_call_value_3_1 = var_target;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 246;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_assign_source_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_connect_url == NULL);
        var_connect_url = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_18;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[74];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_target);
        tmp_tuple_element_2 = var_target;
        PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_2);
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[75];
        PyList_SET_ITEM0(tmp_args_element_value_1, 1, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[17]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_connect_headers == NULL);
        var_connect_headers = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_expression_value_19;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_value_0_2 = mod_consts[76];
        CHECK_OBJECT(var_connect_url);
        tmp_kw_call_value_1_2 = var_connect_url;
        CHECK_OBJECT(var_connect_headers);
        tmp_kw_call_value_2_2 = var_connect_headers;
        CHECK_OBJECT(par_request);
        tmp_expression_value_19 = par_request;
        tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[51]);
        if (tmp_kw_call_value_3_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 255;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2};

            tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[77]);
        }

        Py_DECREF(tmp_kw_call_value_3_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_connect_request == NULL);
        var_connect_request = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_connect_request);
        tmp_args_element_value_3 = var_connect_request;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 261;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[53], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_connect_response == NULL);
        var_connect_response = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(var_connect_response);
        tmp_expression_value_21 = var_connect_response;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[78]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_1 = mod_consts[79];
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_connect_response);
        tmp_expression_value_22 = var_connect_response;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[78]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_2 = mod_consts[80];
        tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(var_connect_response);
        tmp_expression_value_24 = var_connect_response;
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[51]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[68]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 266;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_7, mod_consts[81]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_reason_bytes == NULL);
        var_reason_bytes = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(var_reason_bytes);
        tmp_expression_value_25 = var_reason_bytes;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[82]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 267;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[83], 0), mod_consts[84]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_reason_str == NULL);
        var_reason_str = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_26;
        tmp_mod_expr_left_2 = mod_consts[85];
        CHECK_OBJECT(var_connect_response);
        tmp_expression_value_26 = var_connect_response;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[78]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_reason_str);
        tmp_tuple_element_3 = var_reason_str;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
        tmp_assign_source_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_27 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[38]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 269;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[54]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_4 = var_msg;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 270;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_4);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 270;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_4;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_connect_response);
        tmp_expression_value_29 = var_connect_response;
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[51]);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_value_1 = mod_consts[87];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_stream == NULL);
        var_stream = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(par_self);
        tmp_expression_value_30 = par_self;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[11]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 276;
        tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_31 = par_self;
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[11]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        condexpr_end_1:;
        assert(var_ssl_context == NULL);
        var_ssl_context = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_32 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[34]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_17 = MAKE_LIST2(mod_consts[89],mod_consts[90]);
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_17 = MAKE_LIST1(mod_consts[89]);
        condexpr_end_2:;
        assert(var_alpn_protocols == NULL);
        var_alpn_protocols = tmp_assign_source_17;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_ssl_context);
        tmp_called_instance_3 = var_ssl_context;
        CHECK_OBJECT(var_alpn_protocols);
        tmp_args_element_value_5 = var_alpn_protocols;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 281;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[91], tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[92];
        CHECK_OBJECT(var_ssl_context);
        tmp_dict_value_1 = var_ssl_context;
        tmp_assign_source_18 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[93];
            CHECK_OBJECT(par_self);
            tmp_expression_value_35 = par_self;
            tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[40]);
            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[44]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[82]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 285;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[94]);

            Py_DECREF(tmp_called_value_11);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[69];
            CHECK_OBJECT(var_timeout);
            tmp_dict_value_1 = var_timeout;
            tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_18);
        goto try_except_handler_4;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_6 = mod_consts[96];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_7 = par_request;
        CHECK_OBJECT(var_kwargs);
        tmp_args_element_value_8 = var_kwargs;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_36 = tmp_with_1__source;
        tmp_called_value_13 = LOOKUP_SPECIAL(tmp_expression_value_36, mod_consts[71]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 288;
        tmp_assign_source_20 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        Py_DECREF(tmp_called_value_13);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_37 = tmp_with_1__source;
        tmp_assign_source_21 = LOOKUP_SPECIAL(tmp_expression_value_37, mod_consts[72]);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_assign_source_22;
        tmp_assign_source_22 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_23 = tmp_with_1__enter;
        assert(var_trace == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_trace = tmp_assign_source_23;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(var_stream);
        tmp_expression_value_38 = var_stream;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[97]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg2_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_24 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_stream;
            assert(old != NULL);
            var_stream = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_stream);
        tmp_assattr_value_1 = var_stream;
        CHECK_OBJECT(var_trace);
        tmp_assattr_target_1 = var_trace;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[98], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_7:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_250e45e3ff6ae4ff2697bd80ebcd6055, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_250e45e3ff6ae4ff2697bd80ebcd6055, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_assign_source_25;
        tmp_assign_source_25 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_14 = tmp_with_1__exit;
        tmp_args_element_value_9 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_10 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_11 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_14, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 288;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame) frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 288;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame) frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
    branch_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_6;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_1__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_15 = tmp_with_1__exit;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 288;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_15, mod_consts[99]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_16 = tmp_with_1__exit;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 288;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_16, mod_consts[99]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_6:;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_4;
        if (var_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_4 = var_stream;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 293;
        tmp_assign_source_26 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[100],
            PyTuple_GET_ITEM(mod_consts[101], 0)
        );

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_ssl_object == NULL);
        var_ssl_object = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_ssl_object);
        tmp_cmp_expr_left_7 = var_ssl_object;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_ssl_object);
        tmp_called_instance_5 = var_ssl_object;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 296;
        tmp_cmp_expr_left_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[102]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_8 = mod_consts[90];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_27 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_assign_source_27 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_http2_negotiated == NULL);
        var_http2_negotiated = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        int tmp_truth_name_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(var_http2_negotiated);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_http2_negotiated);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_39 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[34]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_40 = par_self;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[33]);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_right_value_2 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_9 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_9 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[103];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[104];
        tmp_level_value_1 = mod_consts[21];
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 301;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[105],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[105]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_HTTP2Connection == NULL);
        var_HTTP2Connection = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_17;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_HTTP2Connection);
        tmp_called_value_17 = var_HTTP2Connection;
        CHECK_OBJECT(par_self);
        tmp_expression_value_41 = par_self;
        tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[40]);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_stream == NULL) {
            Py_DECREF(tmp_kw_call_value_0_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_kw_call_value_1_3 = var_stream;
        CHECK_OBJECT(par_self);
        tmp_expression_value_42 = par_self;
        tmp_kw_call_value_2_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[29]);
        if (tmp_kw_call_value_2_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_3);

            exception_lineno = 306;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 303;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};

            tmp_assattr_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, kw_values, mod_consts[106]);
        }

        Py_DECREF(tmp_kw_call_value_0_3);
        Py_DECREF(tmp_kw_call_value_2_3);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[38], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_18;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_43 = par_self;
        tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[40]);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_stream == NULL) {
            Py_DECREF(tmp_kw_call_value_0_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_kw_call_value_1_4 = var_stream;
        CHECK_OBJECT(par_self);
        tmp_expression_value_44 = par_self;
        tmp_kw_call_value_2_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[29]);
        if (tmp_kw_call_value_2_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_4);

            exception_lineno = 312;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 309;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4};

            tmp_assattr_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_18, kw_values, mod_consts[106]);
        }

        Py_DECREF(tmp_kw_call_value_0_4);
        Py_DECREF(tmp_kw_call_value_2_4);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[38], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    branch_end_7:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[67], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    branch_no_1:;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_250e45e3ff6ae4ff2697bd80ebcd6055, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_250e45e3ff6ae4ff2697bd80ebcd6055, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_9 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        nuitka_bool tmp_assign_source_29;
        tmp_assign_source_29 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_19 = tmp_with_2__exit;
        tmp_args_element_value_12 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_13 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_14 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_19, call_args);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 242;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame) frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 242;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame) frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
    branch_end_8:;
    goto try_end_6;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_3;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_12;
        nuitka_bool tmp_cmp_expr_left_10;
        nuitka_bool tmp_cmp_expr_right_10;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_10 = tmp_with_2__indicator;
        tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_20 = tmp_with_2__exit;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 242;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_20, mod_consts[99]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_7);
            Py_XDECREF(exception_keeper_value_7);
            Py_XDECREF(exception_keeper_tb_7);

            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_10:;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_2;
    // End of try:
    try_end_7:;
    {
        bool tmp_condition_result_13;
        nuitka_bool tmp_cmp_expr_left_11;
        nuitka_bool tmp_cmp_expr_right_11;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_11 = tmp_with_2__indicator;
        tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
        tmp_condition_result_13 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_21 = tmp_with_2__exit;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 242;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_21, mod_consts[99]);

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_11:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_45 = par_self;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[38]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_args_element_value_15 = par_request;
        frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame.f_lineno = 316;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[53], tmp_args_element_value_15);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_250e45e3ff6ae4ff2697bd80ebcd6055, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_250e45e3ff6ae4ff2697bd80ebcd6055->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_250e45e3ff6ae4ff2697bd80ebcd6055, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_250e45e3ff6ae4ff2697bd80ebcd6055,
        type_description_1,
        par_self,
        par_request,
        var_timeouts,
        var_timeout,
        var_target,
        var_connect_url,
        var_connect_headers,
        var_connect_request,
        var_connect_response,
        var_reason_bytes,
        var_reason_str,
        var_msg,
        var_stream,
        var_ssl_context,
        var_alpn_protocols,
        var_kwargs,
        var_trace,
        var_ssl_object,
        var_http2_negotiated,
        var_HTTP2Connection
    );


    // Release cached frame if used for exception.
    if (frame_250e45e3ff6ae4ff2697bd80ebcd6055 == cache_frame_250e45e3ff6ae4ff2697bd80ebcd6055) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_250e45e3ff6ae4ff2697bd80ebcd6055);
        cache_frame_250e45e3ff6ae4ff2697bd80ebcd6055 = NULL;
    }

    assertFrameObject(frame_250e45e3ff6ae4ff2697bd80ebcd6055);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_timeouts);
    Py_DECREF(var_timeouts);
    var_timeouts = NULL;
    CHECK_OBJECT(var_timeout);
    Py_DECREF(var_timeout);
    var_timeout = NULL;
    Py_XDECREF(var_target);
    var_target = NULL;
    Py_XDECREF(var_connect_url);
    var_connect_url = NULL;
    Py_XDECREF(var_connect_headers);
    var_connect_headers = NULL;
    Py_XDECREF(var_connect_request);
    var_connect_request = NULL;
    Py_XDECREF(var_connect_response);
    var_connect_response = NULL;
    Py_XDECREF(var_reason_bytes);
    var_reason_bytes = NULL;
    Py_XDECREF(var_reason_str);
    var_reason_str = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_stream);
    var_stream = NULL;
    Py_XDECREF(var_ssl_context);
    var_ssl_context = NULL;
    Py_XDECREF(var_alpn_protocols);
    var_alpn_protocols = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_trace);
    var_trace = NULL;
    Py_XDECREF(var_ssl_object);
    var_ssl_object = NULL;
    Py_XDECREF(var_http2_negotiated);
    var_http2_negotiated = NULL;
    Py_XDECREF(var_HTTP2Connection);
    var_HTTP2Connection = NULL;
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

    Py_XDECREF(var_timeouts);
    var_timeouts = NULL;
    Py_XDECREF(var_timeout);
    var_timeout = NULL;
    Py_XDECREF(var_target);
    var_target = NULL;
    Py_XDECREF(var_connect_url);
    var_connect_url = NULL;
    Py_XDECREF(var_connect_headers);
    var_connect_headers = NULL;
    Py_XDECREF(var_connect_request);
    var_connect_request = NULL;
    Py_XDECREF(var_connect_response);
    var_connect_response = NULL;
    Py_XDECREF(var_reason_bytes);
    var_reason_bytes = NULL;
    Py_XDECREF(var_reason_str);
    var_reason_str = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_stream);
    var_stream = NULL;
    Py_XDECREF(var_ssl_context);
    var_ssl_context = NULL;
    Py_XDECREF(var_alpn_protocols);
    var_alpn_protocols = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_trace);
    var_trace = NULL;
    Py_XDECREF(var_ssl_object);
    var_ssl_object = NULL;
    Py_XDECREF(var_http2_negotiated);
    var_http2_negotiated = NULL;
    Py_XDECREF(var_HTTP2Connection);
    var_HTTP2Connection = NULL;
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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http_proxy$$$function__17_can_handle_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_origin = python_pars[1];
    struct Nuitka_FrameObject *frame_243268a74ec7bd0378ccef8e2118a56a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_243268a74ec7bd0378ccef8e2118a56a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_243268a74ec7bd0378ccef8e2118a56a)) {
        Py_XDECREF(cache_frame_243268a74ec7bd0378ccef8e2118a56a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_243268a74ec7bd0378ccef8e2118a56a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_243268a74ec7bd0378ccef8e2118a56a = MAKE_FUNCTION_FRAME(codeobj_243268a74ec7bd0378ccef8e2118a56a, module_httpcore$_sync$http_proxy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_243268a74ec7bd0378ccef8e2118a56a->m_type_description == NULL);
    frame_243268a74ec7bd0378ccef8e2118a56a = cache_frame_243268a74ec7bd0378ccef8e2118a56a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_243268a74ec7bd0378ccef8e2118a56a);
    assert(Py_REFCNT(frame_243268a74ec7bd0378ccef8e2118a56a) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_origin);
        tmp_cmp_expr_left_1 = par_origin;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
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
        exception_tb = MAKE_TRACEBACK(frame_243268a74ec7bd0378ccef8e2118a56a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_243268a74ec7bd0378ccef8e2118a56a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_243268a74ec7bd0378ccef8e2118a56a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_243268a74ec7bd0378ccef8e2118a56a,
        type_description_1,
        par_self,
        par_origin
    );


    // Release cached frame if used for exception.
    if (frame_243268a74ec7bd0378ccef8e2118a56a == cache_frame_243268a74ec7bd0378ccef8e2118a56a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_243268a74ec7bd0378ccef8e2118a56a);
        cache_frame_243268a74ec7bd0378ccef8e2118a56a = NULL;
    }

    assertFrameObject(frame_243268a74ec7bd0378ccef8e2118a56a);

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
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http_proxy$$$function__18_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1b928532f322f72473ad9434366923d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1b928532f322f72473ad9434366923d4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1b928532f322f72473ad9434366923d4)) {
        Py_XDECREF(cache_frame_1b928532f322f72473ad9434366923d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b928532f322f72473ad9434366923d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b928532f322f72473ad9434366923d4 = MAKE_FUNCTION_FRAME(codeobj_1b928532f322f72473ad9434366923d4, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b928532f322f72473ad9434366923d4->m_type_description == NULL);
    frame_1b928532f322f72473ad9434366923d4 = cache_frame_1b928532f322f72473ad9434366923d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1b928532f322f72473ad9434366923d4);
    assert(Py_REFCNT(frame_1b928532f322f72473ad9434366923d4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1b928532f322f72473ad9434366923d4->m_frame.f_lineno = 322;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[54]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b928532f322f72473ad9434366923d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b928532f322f72473ad9434366923d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b928532f322f72473ad9434366923d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b928532f322f72473ad9434366923d4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1b928532f322f72473ad9434366923d4 == cache_frame_1b928532f322f72473ad9434366923d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b928532f322f72473ad9434366923d4);
        cache_frame_1b928532f322f72473ad9434366923d4 = NULL;
    }

    assertFrameObject(frame_1b928532f322f72473ad9434366923d4);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__19_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_edba3947798a6edcd3c0302004271a84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_edba3947798a6edcd3c0302004271a84 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_edba3947798a6edcd3c0302004271a84)) {
        Py_XDECREF(cache_frame_edba3947798a6edcd3c0302004271a84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_edba3947798a6edcd3c0302004271a84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_edba3947798a6edcd3c0302004271a84 = MAKE_FUNCTION_FRAME(codeobj_edba3947798a6edcd3c0302004271a84, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_edba3947798a6edcd3c0302004271a84->m_type_description == NULL);
    frame_edba3947798a6edcd3c0302004271a84 = cache_frame_edba3947798a6edcd3c0302004271a84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_edba3947798a6edcd3c0302004271a84);
    assert(Py_REFCNT(frame_edba3947798a6edcd3c0302004271a84) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_edba3947798a6edcd3c0302004271a84->m_frame.f_lineno = 325;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[55]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
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
        exception_tb = MAKE_TRACEBACK(frame_edba3947798a6edcd3c0302004271a84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_edba3947798a6edcd3c0302004271a84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_edba3947798a6edcd3c0302004271a84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_edba3947798a6edcd3c0302004271a84,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_edba3947798a6edcd3c0302004271a84 == cache_frame_edba3947798a6edcd3c0302004271a84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_edba3947798a6edcd3c0302004271a84);
        cache_frame_edba3947798a6edcd3c0302004271a84 = NULL;
    }

    assertFrameObject(frame_edba3947798a6edcd3c0302004271a84);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__20_is_available(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_dd0276910a811ff360bb0ec52ebc8ae4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dd0276910a811ff360bb0ec52ebc8ae4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dd0276910a811ff360bb0ec52ebc8ae4)) {
        Py_XDECREF(cache_frame_dd0276910a811ff360bb0ec52ebc8ae4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd0276910a811ff360bb0ec52ebc8ae4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd0276910a811ff360bb0ec52ebc8ae4 = MAKE_FUNCTION_FRAME(codeobj_dd0276910a811ff360bb0ec52ebc8ae4, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd0276910a811ff360bb0ec52ebc8ae4->m_type_description == NULL);
    frame_dd0276910a811ff360bb0ec52ebc8ae4 = cache_frame_dd0276910a811ff360bb0ec52ebc8ae4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dd0276910a811ff360bb0ec52ebc8ae4);
    assert(Py_REFCNT(frame_dd0276910a811ff360bb0ec52ebc8ae4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_dd0276910a811ff360bb0ec52ebc8ae4->m_frame.f_lineno = 328;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[56]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
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
        exception_tb = MAKE_TRACEBACK(frame_dd0276910a811ff360bb0ec52ebc8ae4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd0276910a811ff360bb0ec52ebc8ae4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd0276910a811ff360bb0ec52ebc8ae4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd0276910a811ff360bb0ec52ebc8ae4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_dd0276910a811ff360bb0ec52ebc8ae4 == cache_frame_dd0276910a811ff360bb0ec52ebc8ae4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd0276910a811ff360bb0ec52ebc8ae4);
        cache_frame_dd0276910a811ff360bb0ec52ebc8ae4 = NULL;
    }

    assertFrameObject(frame_dd0276910a811ff360bb0ec52ebc8ae4);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__21_has_expired(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_32d378cd5a3f7038c3415a8487f8b2fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_32d378cd5a3f7038c3415a8487f8b2fc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32d378cd5a3f7038c3415a8487f8b2fc)) {
        Py_XDECREF(cache_frame_32d378cd5a3f7038c3415a8487f8b2fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32d378cd5a3f7038c3415a8487f8b2fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32d378cd5a3f7038c3415a8487f8b2fc = MAKE_FUNCTION_FRAME(codeobj_32d378cd5a3f7038c3415a8487f8b2fc, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32d378cd5a3f7038c3415a8487f8b2fc->m_type_description == NULL);
    frame_32d378cd5a3f7038c3415a8487f8b2fc = cache_frame_32d378cd5a3f7038c3415a8487f8b2fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_32d378cd5a3f7038c3415a8487f8b2fc);
    assert(Py_REFCNT(frame_32d378cd5a3f7038c3415a8487f8b2fc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_32d378cd5a3f7038c3415a8487f8b2fc->m_frame.f_lineno = 331;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[57]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
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
        exception_tb = MAKE_TRACEBACK(frame_32d378cd5a3f7038c3415a8487f8b2fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32d378cd5a3f7038c3415a8487f8b2fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32d378cd5a3f7038c3415a8487f8b2fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32d378cd5a3f7038c3415a8487f8b2fc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_32d378cd5a3f7038c3415a8487f8b2fc == cache_frame_32d378cd5a3f7038c3415a8487f8b2fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32d378cd5a3f7038c3415a8487f8b2fc);
        cache_frame_32d378cd5a3f7038c3415a8487f8b2fc = NULL;
    }

    assertFrameObject(frame_32d378cd5a3f7038c3415a8487f8b2fc);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__22_is_idle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_be72b014c60428c4a1075c6f95284182;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be72b014c60428c4a1075c6f95284182 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_be72b014c60428c4a1075c6f95284182)) {
        Py_XDECREF(cache_frame_be72b014c60428c4a1075c6f95284182);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be72b014c60428c4a1075c6f95284182 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be72b014c60428c4a1075c6f95284182 = MAKE_FUNCTION_FRAME(codeobj_be72b014c60428c4a1075c6f95284182, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be72b014c60428c4a1075c6f95284182->m_type_description == NULL);
    frame_be72b014c60428c4a1075c6f95284182 = cache_frame_be72b014c60428c4a1075c6f95284182;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be72b014c60428c4a1075c6f95284182);
    assert(Py_REFCNT(frame_be72b014c60428c4a1075c6f95284182) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_be72b014c60428c4a1075c6f95284182->m_frame.f_lineno = 334;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[58]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
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
        exception_tb = MAKE_TRACEBACK(frame_be72b014c60428c4a1075c6f95284182, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be72b014c60428c4a1075c6f95284182->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be72b014c60428c4a1075c6f95284182, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be72b014c60428c4a1075c6f95284182,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_be72b014c60428c4a1075c6f95284182 == cache_frame_be72b014c60428c4a1075c6f95284182) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be72b014c60428c4a1075c6f95284182);
        cache_frame_be72b014c60428c4a1075c6f95284182 = NULL;
    }

    assertFrameObject(frame_be72b014c60428c4a1075c6f95284182);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__23_is_closed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4d6958bff468c9f684cd844d03cd3d9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d6958bff468c9f684cd844d03cd3d9c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d6958bff468c9f684cd844d03cd3d9c)) {
        Py_XDECREF(cache_frame_4d6958bff468c9f684cd844d03cd3d9c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d6958bff468c9f684cd844d03cd3d9c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d6958bff468c9f684cd844d03cd3d9c = MAKE_FUNCTION_FRAME(codeobj_4d6958bff468c9f684cd844d03cd3d9c, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d6958bff468c9f684cd844d03cd3d9c->m_type_description == NULL);
    frame_4d6958bff468c9f684cd844d03cd3d9c = cache_frame_4d6958bff468c9f684cd844d03cd3d9c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4d6958bff468c9f684cd844d03cd3d9c);
    assert(Py_REFCNT(frame_4d6958bff468c9f684cd844d03cd3d9c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4d6958bff468c9f684cd844d03cd3d9c->m_frame.f_lineno = 337;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[59]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
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
        exception_tb = MAKE_TRACEBACK(frame_4d6958bff468c9f684cd844d03cd3d9c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d6958bff468c9f684cd844d03cd3d9c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d6958bff468c9f684cd844d03cd3d9c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d6958bff468c9f684cd844d03cd3d9c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4d6958bff468c9f684cd844d03cd3d9c == cache_frame_4d6958bff468c9f684cd844d03cd3d9c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d6958bff468c9f684cd844d03cd3d9c);
        cache_frame_4d6958bff468c9f684cd844d03cd3d9c = NULL;
    }

    assertFrameObject(frame_4d6958bff468c9f684cd844d03cd3d9c);

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


static PyObject *impl_httpcore$_sync$http_proxy$$$function__24___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_df6ccefbcff783c087d6f01ebd3bc81b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_df6ccefbcff783c087d6f01ebd3bc81b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_df6ccefbcff783c087d6f01ebd3bc81b)) {
        Py_XDECREF(cache_frame_df6ccefbcff783c087d6f01ebd3bc81b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df6ccefbcff783c087d6f01ebd3bc81b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df6ccefbcff783c087d6f01ebd3bc81b = MAKE_FUNCTION_FRAME(codeobj_df6ccefbcff783c087d6f01ebd3bc81b, module_httpcore$_sync$http_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_df6ccefbcff783c087d6f01ebd3bc81b->m_type_description == NULL);
    frame_df6ccefbcff783c087d6f01ebd3bc81b = cache_frame_df6ccefbcff783c087d6f01ebd3bc81b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_df6ccefbcff783c087d6f01ebd3bc81b);
    assert(Py_REFCNT(frame_df6ccefbcff783c087d6f01ebd3bc81b) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[60];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[61]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[62];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            frame_df6ccefbcff783c087d6f01ebd3bc81b->m_frame.f_lineno = 340;
            tmp_format_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[55]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[62];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[62], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
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
        exception_tb = MAKE_TRACEBACK(frame_df6ccefbcff783c087d6f01ebd3bc81b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df6ccefbcff783c087d6f01ebd3bc81b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df6ccefbcff783c087d6f01ebd3bc81b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df6ccefbcff783c087d6f01ebd3bc81b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_df6ccefbcff783c087d6f01ebd3bc81b == cache_frame_df6ccefbcff783c087d6f01ebd3bc81b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_df6ccefbcff783c087d6f01ebd3bc81b);
        cache_frame_df6ccefbcff783c087d6f01ebd3bc81b = NULL;
    }

    assertFrameObject(frame_df6ccefbcff783c087d6f01ebd3bc81b);

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



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__10_is_available(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__10_is_available,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_fd88c6ccd1a22c9f5dae637eac0c7e41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__11_has_expired(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__11_has_expired,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_c05cb84e99ad6f65ca658d92d407844f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__12_is_idle(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__12_is_idle,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_d781c82d1305030858db1a07d3fc76a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__13_is_closed(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__13_is_closed,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_a99ab251c818fc9cd085d2d76a4fcfed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__14___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__14___repr__,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_54bc060b2031d6979b47b897a172dc80,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__15___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__15___init__,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_d0170fba690c5e8c8c73bed5ccbee0c8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__16_handle_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__16_handle_request,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_250e45e3ff6ae4ff2697bd80ebcd6055,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__17_can_handle_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__17_can_handle_request,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_243268a74ec7bd0378ccef8e2118a56a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__18_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__18_close,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_1b928532f322f72473ad9434366923d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__19_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__19_info,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_edba3947798a6edcd3c0302004271a84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__1_merge_headers(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__1_merge_headers,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3ff7297c1c072aefa8cad9a7f1112074,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__20_is_available(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__20_is_available,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_dd0276910a811ff360bb0ec52ebc8ae4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__21_has_expired(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__21_has_expired,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_32d378cd5a3f7038c3415a8487f8b2fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__22_is_idle(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__22_is_idle,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_be72b014c60428c4a1075c6f95284182,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__23_is_closed(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__23_is_closed,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        codeobj_4d6958bff468c9f684cd844d03cd3d9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__24___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__24___repr__,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_df6ccefbcff783c087d6f01ebd3bc81b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__2_build_auth_header(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__2_build_auth_header,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96ae05e591f79dc4e006f20595b26e89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__3___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__3___init__,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_24b1456942f31f9ca4b7077a903543ad,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        mod_consts[24],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__4_create_connection(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__4_create_connection,
        mod_consts[186],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_6506c4a30d815ca9f80356984b237546,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__5___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__5___init__,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_380db32a26f240361666dd95b31d6b44,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__6_handle_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__6_handle_request,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_614cc4f792fff08707fef513b566c22f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__7_can_handle_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__7_can_handle_request,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_9ee77d90caa7ab26246cff316b85fb16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__8_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__8_close,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_0079977af1939399837e5660ba64092f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__9_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http_proxy$$$function__9_info,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_88c9f9790637674c2d0cd7de04184f0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http_proxy,
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

function_impl_code functable_httpcore$_sync$http_proxy[] = {
    impl_httpcore$_sync$http_proxy$$$function__1_merge_headers,
    impl_httpcore$_sync$http_proxy$$$function__2_build_auth_header,
    impl_httpcore$_sync$http_proxy$$$function__3___init__,
    impl_httpcore$_sync$http_proxy$$$function__4_create_connection,
    impl_httpcore$_sync$http_proxy$$$function__5___init__,
    impl_httpcore$_sync$http_proxy$$$function__6_handle_request,
    impl_httpcore$_sync$http_proxy$$$function__7_can_handle_request,
    impl_httpcore$_sync$http_proxy$$$function__8_close,
    impl_httpcore$_sync$http_proxy$$$function__9_info,
    impl_httpcore$_sync$http_proxy$$$function__10_is_available,
    impl_httpcore$_sync$http_proxy$$$function__11_has_expired,
    impl_httpcore$_sync$http_proxy$$$function__12_is_idle,
    impl_httpcore$_sync$http_proxy$$$function__13_is_closed,
    impl_httpcore$_sync$http_proxy$$$function__14___repr__,
    impl_httpcore$_sync$http_proxy$$$function__15___init__,
    impl_httpcore$_sync$http_proxy$$$function__16_handle_request,
    impl_httpcore$_sync$http_proxy$$$function__17_can_handle_request,
    impl_httpcore$_sync$http_proxy$$$function__18_close,
    impl_httpcore$_sync$http_proxy$$$function__19_info,
    impl_httpcore$_sync$http_proxy$$$function__20_is_available,
    impl_httpcore$_sync$http_proxy$$$function__21_has_expired,
    impl_httpcore$_sync$http_proxy$$$function__22_is_idle,
    impl_httpcore$_sync$http_proxy$$$function__23_is_closed,
    impl_httpcore$_sync$http_proxy$$$function__24___repr__,
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

    function_impl_code *current = functable_httpcore$_sync$http_proxy;
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

    if (offset > sizeof(functable_httpcore$_sync$http_proxy) || offset < 0) {
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
        functable_httpcore$_sync$http_proxy[offset],
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
        module_httpcore$_sync$http_proxy,
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
PyObject *modulecode_httpcore$_sync$http_proxy(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpcore._sync.http_proxy");

    // Store the module for future use.
    module_httpcore$_sync$http_proxy = module;

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
        PRINT_STRING("httpcore._sync.http_proxy: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore._sync.http_proxy: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore._sync.http_proxy: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpcore$_sync$http_proxy\n");

    moduledict_httpcore$_sync$http_proxy = MODULE_DICT(module_httpcore$_sync$http_proxy);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpcore$_sync$http_proxy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpcore$_sync$http_proxy,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[62]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpcore$_sync$http_proxy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_sync$http_proxy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_sync$http_proxy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpcore$_sync$http_proxy);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_httpcore$_sync$http_proxy);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
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
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_967afd9d231ed7c76382f329c3fc74e6;
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
    PyObject *locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d0e6ce907c6edb3f0b639b2b32ce0de0_2;
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
    PyObject *locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151 = NULL;
    struct Nuitka_FrameObject *frame_d304e5f337b00d973de2fc61c7d03fa0_3;
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
    PyObject *locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211 = NULL;
    struct Nuitka_FrameObject *frame_ea4f2071316db79c29e4c4b8a5dbe06d_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_2);
    }
    frame_967afd9d231ed7c76382f329c3fc74e6 = MAKE_MODULE_FRAME(codeobj_967afd9d231ed7c76382f329c3fc74e6, module_httpcore$_sync$http_proxy);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_967afd9d231ed7c76382f329c3fc74e6);
    assert(Py_REFCNT(frame_967afd9d231ed7c76382f329c3fc74e6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[109];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[112], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[114];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[19];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[115];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[116];
        tmp_level_value_2 = mod_consts[19];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[7],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[117],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[117]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[118],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[118]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[119],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[119]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[120],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[120]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[121],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[121]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[122],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[122]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[123];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[124];
        tmp_level_value_3 = mod_consts[125];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 5;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[86],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[86]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[126];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[127];
        tmp_level_value_4 = mod_consts[125];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 6;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[43],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[43]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[128],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[128]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[48],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[48]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[129],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[129]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[18],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[18]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[15],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[15]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[12],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[12]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_21);
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[130];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[131];
        tmp_level_value_5 = mod_consts[125];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 15;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[88],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[88]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[132];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[133];
        tmp_level_value_6 = mod_consts[125];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 16;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[65],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[134];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[135];
        tmp_level_value_7 = mod_consts[125];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 17;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[95],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[136];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[137];
        tmp_level_value_8 = mod_consts[125];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 18;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[138],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[138]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[139];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[140];
        tmp_level_value_9 = mod_consts[21];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 19;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[36],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[141];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[142];
        tmp_level_value_10 = mod_consts[21];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 20;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[143],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_21, mod_consts[143]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[144];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[145];
        tmp_level_value_11 = mod_consts[21];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 21;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[107],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_22, mod_consts[107]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[146];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_httpcore$_sync$http_proxy;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[147];
        tmp_level_value_12 = mod_consts[21];
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 22;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_httpcore$_sync$http_proxy,
                mod_consts[148],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_23, mod_consts[148]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[149];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[122]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_4 = mod_consts[149];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

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


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[149];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_7;
            PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_2);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[122]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto tuple_build_exception_2;
            }
            tmp_subscript_value_7 = mod_consts[149];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

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
        tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        tmp_defaults_1 = mod_consts[152];
        tmp_dict_key_1 = mod_consts[153];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = mod_consts[154];
        tmp_subscript_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
        if (tmp_subscript_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_subscript_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_15;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[155];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_13 = mod_consts[154];
            tmp_subscript_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_13);
            if (tmp_subscript_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_12);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_subscript_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_11);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[156];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_15 = mod_consts[154];
            tmp_subscript_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_15);
            if (tmp_subscript_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_14);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

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
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_32 = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__1_merge_headers(tmp_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[157]);


        tmp_assign_source_33 = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__2_build_auth_header(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_33);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        tmp_assign_source_34 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_35 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

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
        tmp_expression_value_16 = tmp_class_creation_1__bases;
        tmp_subscript_value_16 = mod_consts[19];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_16, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_37 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_37;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_17 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[158]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_18 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[158]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        tmp_tuple_element_4 = mod_consts[159];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_4 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 52;
        tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_19 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[160]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

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
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[161];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[61];
        tmp_getattr_default_1 = mod_consts[162];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[61]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 52;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_39;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[163];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[164], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[165];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[159];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[166], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_5;
        }
        frame_d0e6ce907c6edb3f0b639b2b32ce0de0_2 = MAKE_CLASS_FRAME(codeobj_d0e6ce907c6edb3f0b639b2b32ce0de0, module_httpcore$_sync$http_proxy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d0e6ce907c6edb3f0b639b2b32ce0de0_2);
        assert(Py_REFCNT(frame_d0e6ce907c6edb3f0b639b2b32ce0de0_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_tuple_element_6;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_2 = mod_consts[167];
            tmp_dict_key_2 = mod_consts[168];
            tmp_expression_value_21 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[122]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[122]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 59;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_6 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[43]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[43]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_21);

                        exception_lineno = 59;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[169]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_17, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[170]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_17, 2, tmp_tuple_element_6);
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 14 );
            {
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_29;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[171];
                tmp_expression_value_22 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[119]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_23 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[121]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[121]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_22);

                            exception_lineno = 60;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_24 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[122]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_22);
                            Py_DECREF(tmp_expression_value_23);

                            exception_lineno = 60;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_8 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[169]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_20, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[170]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_20, 1, tmp_tuple_element_8);
                tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_22);
                    Py_DECREF(tmp_expression_value_23);

                    exception_lineno = 60;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_25;
                    PyObject *tmp_subscript_value_21;
                    PyObject *tmp_tuple_element_9;
                    PyTuple_SET_ITEM(tmp_subscript_value_19, 0, tmp_tuple_element_7);
                    tmp_expression_value_25 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[122]);

                    if (tmp_expression_value_25 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[122]);

                            if (unlikely(tmp_expression_value_25 == NULL)) {
                                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                            }

                            if (tmp_expression_value_25 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 60;
                                type_description_2 = "c";
                                goto tuple_build_exception_4;
                            }
                            Py_INCREF(tmp_expression_value_25);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    tmp_tuple_element_9 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[169]);

                    if (tmp_tuple_element_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_9 = (PyObject *)&PyBytes_Type;
                            Py_INCREF(tmp_tuple_element_9);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_21, 0, tmp_tuple_element_9);
                    tmp_tuple_element_9 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[170]);

                    if (tmp_tuple_element_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
                            Py_INCREF(tmp_tuple_element_9);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_21, 1, tmp_tuple_element_9);
                    tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_21);
                    Py_DECREF(tmp_expression_value_25);
                    Py_DECREF(tmp_subscript_value_21);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;
                        type_description_2 = "c";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_19, 1, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_19);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                tmp_subscript_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_subscript_value_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_22);

                    exception_lineno = 60;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[172];
                tmp_expression_value_26 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[122]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 61;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_10 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[151]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[151]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_26);

                            exception_lineno = 61;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[150]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[150]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 61;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_10);
                tmp_tuple_element_10 = Py_None;
                PyTuple_SET_ITEM0(tmp_subscript_value_22, 2, tmp_tuple_element_10);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_22);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[92];
                tmp_expression_value_27 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[119]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 62;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_28 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[114]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[114]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_27);

                            exception_lineno = 62;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[173]);
                Py_DECREF(tmp_expression_value_28);
                if (tmp_subscript_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_27);

                    exception_lineno = 62;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[174];
                tmp_expression_value_29 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[119]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 63;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_24 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[175]);

                if (tmp_subscript_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_24 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_24);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[176];
                tmp_expression_value_30 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[119]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 64;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_25 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[175]);

                if (tmp_subscript_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_25 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_25);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[177];
                tmp_expression_value_31 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[119]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 65;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_26 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[178]);

                if (tmp_subscript_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_26 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_26);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[179];
                tmp_dict_value_2 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[180]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[103];
                tmp_dict_value_2 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[180]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[181];
                tmp_dict_value_2 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[175]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[182];
                tmp_expression_value_32 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[119]);

                if (tmp_expression_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_32 == NULL)) {
                            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 69;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_32);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_27 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[170]);

                if (tmp_subscript_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_27 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_27);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_27);
                Py_DECREF(tmp_expression_value_32);
                Py_DECREF(tmp_subscript_value_27);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[183];
                tmp_expression_value_33 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[119]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 70;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_28 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[170]);

                if (tmp_subscript_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_28);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_28);
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_subscript_value_28);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[184];
                tmp_expression_value_34 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[119]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 71;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_29 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[138]);

                if (tmp_subscript_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[138]);

                        if (unlikely(tmp_subscript_value_29 == NULL)) {
                            tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
                        }

                        if (tmp_subscript_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_34);

                            exception_lineno = 71;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_29);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_29);
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[156];
                tmp_dict_value_2 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            Py_INCREF(tmp_defaults_2);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__3___init__(tmp_defaults_2, tmp_annotations_3, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[28];
            tmp_dict_value_3 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[128]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[156];
            tmp_dict_value_3 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[148]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[148]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
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
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__4_create_connection(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[186], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d0e6ce907c6edb3f0b639b2b32ce0de0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d0e6ce907c6edb3f0b639b2b32ce0de0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d0e6ce907c6edb3f0b639b2b32ce0de0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d0e6ce907c6edb3f0b639b2b32ce0de0_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_d0e6ce907c6edb3f0b639b2b32ce0de0_2);

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
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52, mod_consts[188], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_11 = mod_consts[159];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_11 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 52;
            tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto try_except_handler_5;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_41);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_40 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_40);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52);
        locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52 = NULL;
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

        Py_DECREF(locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52);
        locals_httpcore$_sync$http_proxy$$$class__1_HTTPProxy_52 = NULL;
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
        exception_lineno = 52;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_40);
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
        PyObject *tmp_assign_source_42;
        PyObject *tmp_tuple_element_12;
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_6;
        }
        tmp_assign_source_42 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_42, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_43 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_6;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_35 = tmp_class_creation_2__bases;
        tmp_subscript_value_30 = mod_consts[19];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_35, tmp_subscript_value_30, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_45 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_45;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_36 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_36, mod_consts[158]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_37 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[158]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_6;
        }
        tmp_tuple_element_13 = mod_consts[27];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_13 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 151;
        tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_46;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_38 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_38, mod_consts[160]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_6;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
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
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[161];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[61];
        tmp_getattr_default_2 = mod_consts[162];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_39;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_39 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_39 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[61]);
            Py_DECREF(tmp_expression_value_39);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 151;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_47;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_48;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[163];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[164], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[166], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_8;
        }
        frame_d304e5f337b00d973de2fc61c7d03fa0_3 = MAKE_CLASS_FRAME(codeobj_d304e5f337b00d973de2fc61c7d03fa0, module_httpcore$_sync$http_proxy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d304e5f337b00d973de2fc61c7d03fa0_3);
        assert(Py_REFCNT(frame_d304e5f337b00d973de2fc61c7d03fa0_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_defaults_3 = mod_consts[99];
            tmp_dict_key_4 = mod_consts[189];
            tmp_dict_value_4 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[128]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_subscript_value_33;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[190];
                tmp_dict_value_4 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[128]);

                if (tmp_dict_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[128]);

                        if (unlikely(tmp_dict_value_4 == NULL)) {
                            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                        }

                        if (tmp_dict_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 155;
                            type_description_2 = "o";
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
                tmp_dict_key_4 = mod_consts[172];
                tmp_expression_value_40 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[122]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 156;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_tuple_element_15 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[151]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[151]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_40);

                            exception_lineno = 156;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_31 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_subscript_value_31, 0, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[150]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[150]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 156;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_31, 1, tmp_tuple_element_15);
                tmp_tuple_element_15 = Py_None;
                PyTuple_SET_ITEM0(tmp_subscript_value_31, 2, tmp_tuple_element_15);
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_31);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 156;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[177];
                tmp_expression_value_41 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[119]);

                if (tmp_expression_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_41 == NULL)) {
                            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 157;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_41);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_32 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[178]);

                if (tmp_subscript_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_32 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_32);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[184];
                tmp_expression_value_42 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[119]);

                if (tmp_expression_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_42 == NULL)) {
                            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_42);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_33 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[138]);

                if (tmp_subscript_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_33 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[138]);

                        if (unlikely(tmp_subscript_value_33 == NULL)) {
                            tmp_subscript_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
                        }

                        if (tmp_subscript_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_42);

                            exception_lineno = 158;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_subscript_value_33);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_33);
                Py_DECREF(tmp_expression_value_42);
                Py_DECREF(tmp_subscript_value_33);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[156];
                tmp_dict_value_4 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__5___init__(tmp_defaults_3, tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_key_5 = mod_consts[192];
            tmp_dict_value_5 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[48]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[48]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 169;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[156];
            tmp_dict_value_5 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[129]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[129]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 169;
                        type_description_2 = "o";
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
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__6_handle_request(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_6 = mod_consts[28];
            tmp_dict_value_6 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[128]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 186;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[156];
            tmp_dict_value_6 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[180]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__7_can_handle_request(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[194], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[196]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__8_close(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[156];
            tmp_dict_value_7 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[170]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__9_info(tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[55], tmp_dictset_value);
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
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[156];
            tmp_dict_value_8 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[180]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__10_is_available(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_dict_key_9 = mod_consts[156];
            tmp_dict_value_9 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[180]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__11_has_expired(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_dict_key_10 = mod_consts[156];
            tmp_dict_value_10 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[180]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__12_is_idle(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_dict_key_11 = mod_consts[156];
            tmp_dict_value_11 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[180]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__13_is_closed(tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_key_12 = mod_consts[156];
            tmp_dict_value_12 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[170]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__14___repr__(tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[203], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d304e5f337b00d973de2fc61c7d03fa0_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d304e5f337b00d973de2fc61c7d03fa0_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d304e5f337b00d973de2fc61c7d03fa0_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d304e5f337b00d973de2fc61c7d03fa0_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_d304e5f337b00d973de2fc61c7d03fa0_3);

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
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151, mod_consts[188], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_8;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_16 = mod_consts[27];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_16 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 151;
            tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_49;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_48 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_48);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151);
        locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151 = NULL;
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

        Py_DECREF(locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151);
        locals_httpcore$_sync$http_proxy$$$class__2_ForwardHTTPConnection_151 = NULL;
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
        exception_lineno = 151;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_48);
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
        PyObject *tmp_assign_source_50;
        PyObject *tmp_tuple_element_17;
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_9;
        }
        tmp_assign_source_50 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_51 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_9;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_43 = tmp_class_creation_3__bases;
        tmp_subscript_value_34 = mod_consts[19];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_43, tmp_subscript_value_34, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_9;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_53 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_53;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_44 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_44, mod_consts[158]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_45 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[158]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_9;
        }
        tmp_tuple_element_18 = mod_consts[32];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_18 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 211;
        tmp_assign_source_54 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_54;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_46 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_46, mod_consts[160]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_9;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
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
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[161];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[61];
        tmp_getattr_default_3 = mod_consts[162];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_47;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_47 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_47 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[61]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 211;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_55;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_56;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[163];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[164], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[32];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[166], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_11;
        }
        frame_ea4f2071316db79c29e4c4b8a5dbe06d_4 = MAKE_CLASS_FRAME(codeobj_ea4f2071316db79c29e4c4b8a5dbe06d, module_httpcore$_sync$http_proxy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ea4f2071316db79c29e4c4b8a5dbe06d_4);
        assert(Py_REFCNT(frame_ea4f2071316db79c29e4c4b8a5dbe06d_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_defaults_4 = mod_consts[205];
            tmp_dict_key_13 = mod_consts[189];
            tmp_dict_value_13 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[128]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_13 == NULL)) {
                        tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 9 );
            {
                PyObject *tmp_expression_value_48;
                PyObject *tmp_subscript_value_35;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_expression_value_50;
                PyObject *tmp_subscript_value_36;
                PyObject *tmp_expression_value_51;
                PyObject *tmp_subscript_value_37;
                PyObject *tmp_expression_value_52;
                PyObject *tmp_subscript_value_38;
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_expression_value_53;
                PyObject *tmp_subscript_value_39;
                PyObject *tmp_expression_value_54;
                PyObject *tmp_subscript_value_40;
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[190];
                tmp_dict_value_13 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[128]);

                if (tmp_dict_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[128]);

                        if (unlikely(tmp_dict_value_13 == NULL)) {
                            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                        }

                        if (tmp_dict_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 215;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_dict_value_13);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[92];
                tmp_expression_value_48 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[119]);

                if (tmp_expression_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_48 == NULL)) {
                            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_48 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 216;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_48);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_expression_value_49 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[114]);

                if (tmp_expression_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[114]);

                        if (unlikely(tmp_expression_value_49 == NULL)) {
                            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                        }

                        if (tmp_expression_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_48);

                            exception_lineno = 216;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_49);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[173]);
                Py_DECREF(tmp_expression_value_49);
                if (tmp_subscript_value_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_48);

                    exception_lineno = 216;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_35);
                Py_DECREF(tmp_expression_value_48);
                Py_DECREF(tmp_subscript_value_35);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[172];
                tmp_expression_value_50 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[119]);

                if (tmp_expression_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_50 == NULL)) {
                            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 217;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_50);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_expression_value_51 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[120]);

                if (tmp_expression_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[120]);

                        if (unlikely(tmp_expression_value_51 == NULL)) {
                            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
                        }

                        if (tmp_expression_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_50);

                            exception_lineno = 217;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_51);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_expression_value_52 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[121]);

                if (tmp_expression_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[121]);

                        if (unlikely(tmp_expression_value_52 == NULL)) {
                            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
                        }

                        if (tmp_expression_value_52 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_50);
                            Py_DECREF(tmp_expression_value_51);

                            exception_lineno = 217;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_52);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_tuple_element_20 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[169]);

                if (tmp_tuple_element_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_20 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_tuple_element_20);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_38, 0, tmp_tuple_element_20);
                tmp_tuple_element_20 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[169]);

                if (tmp_tuple_element_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_20 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_tuple_element_20);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_38, 1, tmp_tuple_element_20);
                tmp_subscript_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_38);
                Py_DECREF(tmp_expression_value_52);
                Py_DECREF(tmp_subscript_value_38);
                if (tmp_subscript_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_50);
                    Py_DECREF(tmp_expression_value_51);

                    exception_lineno = 217;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_37);
                Py_DECREF(tmp_expression_value_51);
                Py_DECREF(tmp_subscript_value_37);
                if (tmp_subscript_value_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_50);

                    exception_lineno = 217;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_36);
                Py_DECREF(tmp_expression_value_50);
                Py_DECREF(tmp_subscript_value_36);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[177];
                tmp_expression_value_53 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[119]);

                if (tmp_expression_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_53 == NULL)) {
                            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_53 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 218;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_53);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_39 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[178]);

                if (tmp_subscript_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_39 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_39);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_39);
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_39);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 218;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[179];
                tmp_dict_value_13 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[180]);

                if (tmp_dict_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_13 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_13);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[103];
                tmp_dict_value_13 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[180]);

                if (tmp_dict_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_13 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_13);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[184];
                tmp_expression_value_54 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[119]);

                if (tmp_expression_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_expression_value_54 == NULL)) {
                            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_expression_value_54 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 221;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_54);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_40 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[138]);

                if (tmp_subscript_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_40 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[138]);

                        if (unlikely(tmp_subscript_value_40 == NULL)) {
                            tmp_subscript_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
                        }

                        if (tmp_subscript_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_54);

                            exception_lineno = 221;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_subscript_value_40);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_40);
                Py_DECREF(tmp_expression_value_54);
                Py_DECREF(tmp_subscript_value_40);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 221;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[156];
                tmp_dict_value_13 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_15);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__15___init__(tmp_defaults_4, tmp_annotations_15);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_dict_key_14 = mod_consts[192];
            tmp_dict_value_14 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[48]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[48]);

                    if (unlikely(tmp_dict_value_14 == NULL)) {
                        tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                    }

                    if (tmp_dict_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 238;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_16 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[156];
            tmp_dict_value_14 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[129]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[129]);

                    if (unlikely(tmp_dict_value_14 == NULL)) {
                        tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                    }

                    if (tmp_dict_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 238;
                        type_description_2 = "o";
                        goto dict_build_exception_7;
                    }
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto dict_build_exception_7;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_16);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__16_handle_request(tmp_annotations_16);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_dict_key_15 = mod_consts[28];
            tmp_dict_value_15 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[128]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_15 == NULL)) {
                        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 318;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_17 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[156];
            tmp_dict_value_15 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[180]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__17_can_handle_request(tmp_annotations_17);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[194], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_18;
            tmp_annotations_18 = DICT_COPY(mod_consts[196]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__18_close(tmp_annotations_18);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_dict_key_16 = mod_consts[156];
            tmp_dict_value_16 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[170]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_16 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_16);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__19_info(tmp_annotations_19);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            tmp_dict_key_17 = mod_consts[156];
            tmp_dict_value_17 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[180]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_17 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_17);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__20_is_available(tmp_annotations_20);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_dict_key_18 = mod_consts[156];
            tmp_dict_value_18 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[180]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__21_has_expired(tmp_annotations_21);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            tmp_dict_key_19 = mod_consts[156];
            tmp_dict_value_19 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[180]);

            if (tmp_dict_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_19 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_19);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__22_is_idle(tmp_annotations_22);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            tmp_dict_key_20 = mod_consts[156];
            tmp_dict_value_20 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[180]);

            if (tmp_dict_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_20 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_20);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__23_is_closed(tmp_annotations_23);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            tmp_dict_key_21 = mod_consts[156];
            tmp_dict_value_21 = PyObject_GetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[170]);

            if (tmp_dict_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_21 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_21);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http_proxy$$$function__24___repr__(tmp_annotations_24);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[203], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ea4f2071316db79c29e4c4b8a5dbe06d_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ea4f2071316db79c29e4c4b8a5dbe06d_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ea4f2071316db79c29e4c4b8a5dbe06d_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ea4f2071316db79c29e4c4b8a5dbe06d_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_ea4f2071316db79c29e4c4b8a5dbe06d_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211, mod_consts[188], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_11;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_21 = mod_consts[32];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_21 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_967afd9d231ed7c76382f329c3fc74e6->m_frame.f_lineno = 211;
            tmp_assign_source_57 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_57;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_56 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_56);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211);
        locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211 = NULL;
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

        Py_DECREF(locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211);
        locals_httpcore$_sync$http_proxy$$$class__3_TunnelHTTPConnection_211 = NULL;
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
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 211;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_56);
    }
    goto try_end_5;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_967afd9d231ed7c76382f329c3fc74e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_967afd9d231ed7c76382f329c3fc74e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_967afd9d231ed7c76382f329c3fc74e6, exception_lineno);
    }



    assertFrameObject(frame_967afd9d231ed7c76382f329c3fc74e6);

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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpcore._sync.http_proxy", false);

    Py_INCREF(module_httpcore$_sync$http_proxy);
    return module_httpcore$_sync$http_proxy;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http_proxy, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("httpcore$_sync$http_proxy", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
