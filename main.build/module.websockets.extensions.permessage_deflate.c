/* Generated code for Python module 'websockets.extensions.permessage_deflate'
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

/* The "module_websockets$extensions$permessage_deflate" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websockets$extensions$permessage_deflate;
PyDictObject *moduledict_websockets$extensions$permessage_deflate;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[206];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[206];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("websockets.extensions.permessage_deflate"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 206; i++) {
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
void checkModuleConstants_websockets$extensions$permessage_deflate(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 206; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ebd7c8d6c9957feba755cc14e83304b1;
static PyCodeObject *codeobj_a0348609f40b50ca53b5ffb8b07fbd72;
static PyCodeObject *codeobj_dc3efc08c12fdb104a5c8d9f418e62d4;
static PyCodeObject *codeobj_4be1bea45e72691855c16e3a1d9cf713;
static PyCodeObject *codeobj_0fc1361a705e1aac08c0ad881bad3303;
static PyCodeObject *codeobj_c39bdbf34f62d20d6b98413fc58c1166;
static PyCodeObject *codeobj_4f81deeb6085234de6623151c1b3e09f;
static PyCodeObject *codeobj_dc8380e3c49de76bf7cd8e22df240fd5;
static PyCodeObject *codeobj_da0fe534de3f17af738e0089445e1729;
static PyCodeObject *codeobj_57261716cf0c1553e57cac5584857dbf;
static PyCodeObject *codeobj_2329b7cc7a4eedb4e5dfc336404a7264;
static PyCodeObject *codeobj_7a337d1cb94f879ad03f94c97465fcf3;
static PyCodeObject *codeobj_c0c740683438ff1d5cd13c5c3d349dca;
static PyCodeObject *codeobj_5d54adad5130acb707d851b6a8250509;
static PyCodeObject *codeobj_2e191bddc8b008d36173779a3f4f03ee;
static PyCodeObject *codeobj_62578c953a028af9a34626cc6a3c22ef;
static PyCodeObject *codeobj_03da0e97264c762266975c4476e24724;
static PyCodeObject *codeobj_b04adc4e47a9a1d29374e3000d41d700;
static PyCodeObject *codeobj_b77e1fe04dca872d7e7cd7c1dfa6a189;
static PyCodeObject *codeobj_32124394088885db4742c8c30ac4e39d;
static PyCodeObject *codeobj_e7fd2edfa12e68edb7dc62108fee2a6c;
static PyCodeObject *codeobj_989031ae06341dd84724de45fb27cd06;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[111]; CHECK_OBJECT(module_filename_obj);
    codeobj_ebd7c8d6c9957feba755cc14e83304b1 = MAKE_CODE_OBJECT(module_filename_obj, 650, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[89], mod_consts[89], mod_consts[189], NULL, 1, 0, 0);
    codeobj_a0348609f40b50ca53b5ffb8b07fbd72 = MAKE_CODE_OBJECT(module_filename_obj, 448, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[89], mod_consts[89], mod_consts[190], NULL, 1, 0, 0);
    codeobj_dc3efc08c12fdb104a5c8d9f418e62d4 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[89], mod_consts[89], mod_consts[191], NULL, 1, 0, 0);
    codeobj_4be1bea45e72691855c16e3a1d9cf713 = MAKE_CODE_OBJECT(module_filename_obj, 535, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[89], mod_consts[89], mod_consts[191], NULL, 1, 0, 0);
    codeobj_0fc1361a705e1aac08c0ad881bad3303 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[192], mod_consts[192], mod_consts[193], NULL, 1, 0, 0);
    codeobj_c39bdbf34f62d20d6b98413fc58c1166 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[194], mod_consts[194], NULL, NULL, 0, 0, 0);
    codeobj_4f81deeb6085234de6623151c1b3e09f = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[91], mod_consts[91], mod_consts[195], NULL, 0, 0, 0);
    codeobj_dc8380e3c49de76bf7cd8e22df240fd5 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[87], mod_consts[87], mod_consts[195], NULL, 0, 0, 0);
    codeobj_da0fe534de3f17af738e0089445e1729 = MAKE_CODE_OBJECT(module_filename_obj, 460, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[105], mod_consts[105], mod_consts[195], NULL, 0, 0, 0);
    codeobj_57261716cf0c1553e57cac5584857dbf = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[153], mod_consts[153], mod_consts[196], NULL, 6, 0, 0);
    codeobj_2329b7cc7a4eedb4e5dfc336404a7264 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[153], mod_consts[153], mod_consts[197], NULL, 6, 0, 0);
    codeobj_7a337d1cb94f879ad03f94c97465fcf3 = MAKE_CODE_OBJECT(module_filename_obj, 489, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[153], mod_consts[153], mod_consts[198], NULL, 7, 0, 0);
    codeobj_c0c740683438ff1d5cd13c5c3d349dca = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[156], mod_consts[156], mod_consts[199], NULL, 1, 0, 0);
    codeobj_5d54adad5130acb707d851b6a8250509 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[74], mod_consts[74], mod_consts[200], NULL, 4, 0, 0);
    codeobj_2e191bddc8b008d36173779a3f4f03ee = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[79], mod_consts[79], mod_consts[201], NULL, 1, 1, 0);
    codeobj_62578c953a028af9a34626cc6a3c22ef = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[160], mod_consts[160], mod_consts[202], NULL, 2, 1, 0);
    codeobj_03da0e97264c762266975c4476e24724 = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[179], mod_consts[179], mod_consts[203], NULL, 1, 0, 0);
    codeobj_b04adc4e47a9a1d29374e3000d41d700 = MAKE_CODE_OBJECT(module_filename_obj, 638, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[188], mod_consts[188], mod_consts[203], NULL, 1, 0, 0);
    codeobj_b77e1fe04dca872d7e7cd7c1dfa6a189 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[163], mod_consts[163], mod_consts[204], NULL, 2, 0, 0);
    codeobj_32124394088885db4742c8c30ac4e39d = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[173], mod_consts[173], mod_consts[199], NULL, 1, 0, 0);
    codeobj_e7fd2edfa12e68edb7dc62108fee2a6c = MAKE_CODE_OBJECT(module_filename_obj, 524, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[185], mod_consts[185], mod_consts[205], NULL, 3, 0, 0);
    codeobj_989031ae06341dd84724de45fb27cd06 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[176], mod_consts[176], mod_consts[205], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__12_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__11___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__12_process_request_params(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__2___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__3_decode(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__4_encode(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__5__build_parameters(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__6__extract_parameters(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__7___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__8_get_request_params(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__9_process_response_params(PyObject *annotations);


// The module function definitions.
static PyObject *impl_websockets$extensions$permessage_deflate$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_remote_no_context_takeover = python_pars[1];
    PyObject *par_local_no_context_takeover = python_pars[2];
    PyObject *par_remote_max_window_bits = python_pars[3];
    PyObject *par_local_max_window_bits = python_pars[4];
    PyObject *par_compress_settings = python_pars[5];
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_57261716cf0c1553e57cac5584857dbf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_57261716cf0c1553e57cac5584857dbf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_compress_settings);
        tmp_cmp_expr_left_1 = par_compress_settings;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        {
            PyObject *old = par_compress_settings;
            assert(old != NULL);
            par_compress_settings = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_57261716cf0c1553e57cac5584857dbf)) {
        Py_XDECREF(cache_frame_57261716cf0c1553e57cac5584857dbf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57261716cf0c1553e57cac5584857dbf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57261716cf0c1553e57cac5584857dbf = MAKE_FUNCTION_FRAME(codeobj_57261716cf0c1553e57cac5584857dbf, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_57261716cf0c1553e57cac5584857dbf->m_type_description == NULL);
    frame_57261716cf0c1553e57cac5584857dbf = cache_frame_57261716cf0c1553e57cac5584857dbf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_57261716cf0c1553e57cac5584857dbf);
    assert(Py_REFCNT(frame_57261716cf0c1553e57cac5584857dbf) == 2);

    // Framed code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_remote_no_context_takeover);
        tmp_cmp_expr_left_2 = par_remote_no_context_takeover;
        tmp_cmp_expr_right_2 = MAKE_LIST2(Py_False,Py_True);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooo";
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
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 48;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_local_no_context_takeover);
        tmp_cmp_expr_left_3 = par_local_no_context_takeover;
        tmp_cmp_expr_right_3 = MAKE_LIST2(Py_False,Py_True);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooo";
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
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 49;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        {
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT(par_remote_max_window_bits);
            tmp_assign_source_2 = par_remote_max_window_bits;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_2);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            tmp_cmp_expr_left_4 = mod_consts[0];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_4 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_3 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_3;
        }
        {
            bool tmp_condition_result_5;
            PyObject *tmp_operand_value_2;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_5 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_5 != false) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_operand_value_1);
        goto try_return_handler_2;
        branch_no_5:;
        {
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_5 = tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_5 = mod_consts[1];
            tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
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

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooo";
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
        PyObject *tmp_raise_type_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_lineno = 50;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_3;
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(par_local_max_window_bits);
            tmp_assign_source_4 = par_local_max_window_bits;
            assert(tmp_comparison_chain_2__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_4);
            tmp_comparison_chain_2__operand_2 = tmp_assign_source_4;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            tmp_cmp_expr_left_6 = mod_consts[0];
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_cmp_expr_right_6 = tmp_comparison_chain_2__operand_2;
            tmp_assign_source_5 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            assert(tmp_comparison_chain_2__comparison_result == NULL);
            tmp_comparison_chain_2__comparison_result = tmp_assign_source_5;
        }
        {
            bool tmp_condition_result_7;
            PyObject *tmp_operand_value_4;
            CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
            tmp_operand_value_4 = tmp_comparison_chain_2__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_7 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_7 != false) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        tmp_operand_value_3 = tmp_comparison_chain_2__comparison_result;
        Py_INCREF(tmp_operand_value_3);
        goto try_return_handler_3;
        branch_no_7:;
        {
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_cmp_expr_left_7 = tmp_comparison_chain_2__operand_2;
            tmp_cmp_expr_right_7 = mod_consts[1];
            tmp_operand_value_3 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_operand_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        Py_DECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        goto outline_result_2;
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

        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooo";
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
        PyObject *tmp_raise_type_4;
        tmp_raise_type_4 = PyExc_AssertionError;
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_lineno = 51;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        tmp_cmp_expr_left_8 = mod_consts[2];
        CHECK_OBJECT(par_compress_settings);
        tmp_cmp_expr_right_8 = par_compress_settings;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_5;
        tmp_raise_type_5 = PyExc_AssertionError;
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_lineno = 52;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_remote_no_context_takeover);
        tmp_assattr_value_1 = par_remote_no_context_takeover;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_local_no_context_takeover);
        tmp_assattr_value_2 = par_local_no_context_takeover;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_remote_max_window_bits);
        tmp_assattr_value_3 = par_remote_max_window_bits;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_local_max_window_bits);
        tmp_assattr_value_4 = par_local_max_window_bits;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_compress_settings);
        tmp_assattr_value_5 = par_compress_settings;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_6;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_operand_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_57261716cf0c1553e57cac5584857dbf->m_frame.f_lineno = 61;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assattr_value_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[11], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_operand_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[4]);
        if (tmp_operand_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        Py_DECREF(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[12]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_operand_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
        if (tmp_operand_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_8);
        Py_DECREF(tmp_operand_value_8);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_dircall_arg3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[7]);
        if (tmp_dircall_arg3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assattr_value_7 = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[13], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_10:;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[14], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_57261716cf0c1553e57cac5584857dbf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57261716cf0c1553e57cac5584857dbf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57261716cf0c1553e57cac5584857dbf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57261716cf0c1553e57cac5584857dbf,
        type_description_1,
        par_self,
        par_remote_no_context_takeover,
        par_local_no_context_takeover,
        par_remote_max_window_bits,
        par_local_max_window_bits,
        par_compress_settings
    );


    // Release cached frame if used for exception.
    if (frame_57261716cf0c1553e57cac5584857dbf == cache_frame_57261716cf0c1553e57cac5584857dbf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_57261716cf0c1553e57cac5584857dbf);
        cache_frame_57261716cf0c1553e57cac5584857dbf = NULL;
    }

    assertFrameObject(frame_57261716cf0c1553e57cac5584857dbf);

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
    CHECK_OBJECT(par_compress_settings);
    Py_DECREF(par_compress_settings);
    par_compress_settings = NULL;
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

    CHECK_OBJECT(par_compress_settings);
    Py_DECREF(par_compress_settings);
    par_compress_settings = NULL;
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
    CHECK_OBJECT(par_remote_no_context_takeover);
    Py_DECREF(par_remote_no_context_takeover);
    CHECK_OBJECT(par_local_no_context_takeover);
    Py_DECREF(par_local_no_context_takeover);
    CHECK_OBJECT(par_remote_max_window_bits);
    Py_DECREF(par_remote_max_window_bits);
    CHECK_OBJECT(par_local_max_window_bits);
    Py_DECREF(par_local_max_window_bits);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_remote_no_context_takeover);
    Py_DECREF(par_remote_no_context_takeover);
    CHECK_OBJECT(par_local_no_context_takeover);
    Py_DECREF(par_local_no_context_takeover);
    CHECK_OBJECT(par_remote_max_window_bits);
    Py_DECREF(par_remote_max_window_bits);
    CHECK_OBJECT(par_local_max_window_bits);
    Py_DECREF(par_local_max_window_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__2___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c0c740683438ff1d5cd13c5c3d349dca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c0c740683438ff1d5cd13c5c3d349dca = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c0c740683438ff1d5cd13c5c3d349dca)) {
        Py_XDECREF(cache_frame_c0c740683438ff1d5cd13c5c3d349dca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0c740683438ff1d5cd13c5c3d349dca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0c740683438ff1d5cd13c5c3d349dca = MAKE_FUNCTION_FRAME(codeobj_c0c740683438ff1d5cd13c5c3d349dca, module_websockets$extensions$permessage_deflate, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c0c740683438ff1d5cd13c5c3d349dca->m_type_description == NULL);
    frame_c0c740683438ff1d5cd13c5c3d349dca = cache_frame_c0c740683438ff1d5cd13c5c3d349dca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c0c740683438ff1d5cd13c5c3d349dca);
    assert(Py_REFCNT(frame_c0c740683438ff1d5cd13c5c3d349dca) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[16];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(9);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[17];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[18];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[17];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[17];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[17];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[21];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[17], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
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
        exception_tb = MAKE_TRACEBACK(frame_c0c740683438ff1d5cd13c5c3d349dca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0c740683438ff1d5cd13c5c3d349dca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0c740683438ff1d5cd13c5c3d349dca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0c740683438ff1d5cd13c5c3d349dca,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c0c740683438ff1d5cd13c5c3d349dca == cache_frame_c0c740683438ff1d5cd13c5c3d349dca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0c740683438ff1d5cd13c5c3d349dca);
        cache_frame_c0c740683438ff1d5cd13c5c3d349dca = NULL;
    }

    assertFrameObject(frame_c0c740683438ff1d5cd13c5c3d349dca);

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


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__3_decode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_frame = python_pars[1];
    PyObject *par_max_size = python_pars[2];
    PyObject *var_data = NULL;
    PyObject *var_max_length = NULL;
    PyObject *var_exc = NULL;
    struct Nuitka_FrameObject *frame_62578c953a028af9a34626cc6a3c22ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_62578c953a028af9a34626cc6a3c22ef = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_62578c953a028af9a34626cc6a3c22ef)) {
        Py_XDECREF(cache_frame_62578c953a028af9a34626cc6a3c22ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62578c953a028af9a34626cc6a3c22ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62578c953a028af9a34626cc6a3c22ef = MAKE_FUNCTION_FRAME(codeobj_62578c953a028af9a34626cc6a3c22ef, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_62578c953a028af9a34626cc6a3c22ef->m_type_description == NULL);
    frame_62578c953a028af9a34626cc6a3c22ef = cache_frame_62578c953a028af9a34626cc6a3c22ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_62578c953a028af9a34626cc6a3c22ef);
    assert(Py_REFCNT(frame_62578c953a028af9a34626cc6a3c22ef) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_1 = par_frame;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
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
    CHECK_OBJECT(par_frame);
    tmp_return_value = par_frame;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_3 = par_frame;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[14]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
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
    CHECK_OBJECT(par_frame);
    tmp_return_value = par_frame;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_6 = par_frame;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[26]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_7 = par_frame;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[27]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
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
    CHECK_OBJECT(par_frame);
    tmp_return_value = par_frame;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[29]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_tuple_element_1 = par_frame;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[30]);
        frame_62578c953a028af9a34626cc6a3c22ef->m_frame.f_lineno = 113;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_frame;
            assert(old != NULL);
            par_frame = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_9 = par_frame;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[26]);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[3]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[9]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = par_self;
        tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[5]);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_62578c953a028af9a34626cc6a3c22ef->m_frame.f_lineno = 119;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assattr_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[11], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_7:;
    branch_end_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_13;
        if (par_frame == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_frame;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[33]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        if (par_frame == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = par_frame;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[26]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_data);
        tmp_iadd_expr_left_1 = var_data;
        tmp_iadd_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_iadd_expr_right_1 == NULL)) {
            tmp_iadd_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        var_data = tmp_assign_source_3;

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_4;
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_max_size);
        tmp_cmp_expr_left_3 = par_max_size;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_4 = mod_consts[35];
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_max_size);
        tmp_assign_source_4 = par_max_size;
        condexpr_end_1:;
        assert(var_max_length == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_max_length = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_15 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_1 = var_data;
        CHECK_OBJECT(var_max_length);
        tmp_args_element_value_2 = var_max_length;
        frame_62578c953a028af9a34626cc6a3c22ef->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[36],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_data;
            assert(old != NULL);
            var_data = tmp_assign_source_5;
            Py_DECREF(old);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_62578c953a028af9a34626cc6a3c22ef, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_62578c953a028af9a34626cc6a3c22ef, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_16;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[37]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = EXC_VALUE(PyThreadState_GET());
        assert(var_exc == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_exc = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_raise_cause_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_62578c953a028af9a34626cc6a3c22ef->m_frame.f_lineno = 131;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_exc);
        tmp_raise_cause_1 = var_exc;
        exception_type = tmp_raise_type_1;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 131;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_exc);
    var_exc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 128;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_62578c953a028af9a34626cc6a3c22ef->m_frame) frame_62578c953a028af9a34626cc6a3c22ef->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_end_9:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_attribute_value_4;
        int tmp_truth_name_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = par_self;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[11]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[41]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_attribute_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_4);

            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_4);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[42]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[43];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_max_size);
            tmp_format_value_1 = par_max_size;
            tmp_format_spec_1 = mod_consts[17];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[44];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[17], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_62578c953a028af9a34626cc6a3c22ef->m_frame.f_lineno = 133;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 133;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_attribute_value_5;
        int tmp_truth_name_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_attribute_value_6;
        int tmp_truth_name_6;
        if (par_frame == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = par_frame;
        tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[26]);
        if (tmp_attribute_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_5);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_5);

            exception_lineno = 136;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_5);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_21 = par_self;
        tmp_attribute_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[3]);
        if (tmp_attribute_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_6);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_6);

            exception_lineno = 136;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_6);
        tmp_condition_result_12 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_12 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_attrdel_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_attrdel_target_1 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[11]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_11:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[29]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_frame == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_frame;
        CHECK_OBJECT(var_data);
        tmp_kw_call_dict_value_0_1 = var_data;
        frame_62578c953a028af9a34626cc6a3c22ef->m_frame.f_lineno = 139;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[45]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
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
        exception_tb = MAKE_TRACEBACK(frame_62578c953a028af9a34626cc6a3c22ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62578c953a028af9a34626cc6a3c22ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62578c953a028af9a34626cc6a3c22ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62578c953a028af9a34626cc6a3c22ef,
        type_description_1,
        par_self,
        par_frame,
        par_max_size,
        var_data,
        var_max_length,
        var_exc
    );


    // Release cached frame if used for exception.
    if (frame_62578c953a028af9a34626cc6a3c22ef == cache_frame_62578c953a028af9a34626cc6a3c22ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_62578c953a028af9a34626cc6a3c22ef);
        cache_frame_62578c953a028af9a34626cc6a3c22ef = NULL;
    }

    assertFrameObject(frame_62578c953a028af9a34626cc6a3c22ef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_frame);
    par_frame = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_max_length);
    var_max_length = NULL;
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

    Py_XDECREF(par_frame);
    par_frame = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_max_length);
    var_max_length = NULL;
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
    CHECK_OBJECT(par_max_size);
    Py_DECREF(par_max_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_max_size);
    Py_DECREF(par_max_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__4_encode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_frame = python_pars[1];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_b77e1fe04dca872d7e7cd7c1dfa6a189;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b77e1fe04dca872d7e7cd7c1dfa6a189 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b77e1fe04dca872d7e7cd7c1dfa6a189)) {
        Py_XDECREF(cache_frame_b77e1fe04dca872d7e7cd7c1dfa6a189);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b77e1fe04dca872d7e7cd7c1dfa6a189 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b77e1fe04dca872d7e7cd7c1dfa6a189 = MAKE_FUNCTION_FRAME(codeobj_b77e1fe04dca872d7e7cd7c1dfa6a189, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b77e1fe04dca872d7e7cd7c1dfa6a189->m_type_description == NULL);
    frame_b77e1fe04dca872d7e7cd7c1dfa6a189 = cache_frame_b77e1fe04dca872d7e7cd7c1dfa6a189;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b77e1fe04dca872d7e7cd7c1dfa6a189);
    assert(Py_REFCNT(frame_b77e1fe04dca872d7e7cd7c1dfa6a189) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_1 = par_frame;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
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
    CHECK_OBJECT(par_frame);
    tmp_return_value = par_frame;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_3 = par_frame;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[29]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_tuple_element_1 = par_frame;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[47]);
        frame_b77e1fe04dca872d7e7cd7c1dfa6a189->m_frame.f_lineno = 155;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_frame;
            assert(old != NULL);
            par_frame = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[4]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[12]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[6]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_dircall_arg3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[7]);
        if (tmp_dircall_arg3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assattr_value_1 = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_15;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[13]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[48]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_frame == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = par_frame;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[33]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b77e1fe04dca872d7e7cd7c1dfa6a189->m_frame.f_lineno = 163;
        tmp_add_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = par_self;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[13]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[49]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[50]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b77e1fe04dca872d7e7cd7c1dfa6a189->m_frame.f_lineno = 163;
        tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        int tmp_truth_name_3;
        if (par_frame == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_frame;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[26]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 164;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_data);
        tmp_expression_value_17 = var_data;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[51]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 164;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b77e1fe04dca872d7e7cd7c1dfa6a189->m_frame.f_lineno = 164;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 164;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_1;
        if (var_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_data;
        tmp_subscript_value_1 = mod_consts[52];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_4;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_attribute_value_4;
        int tmp_truth_name_5;
        if (par_frame == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = par_frame;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[26]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = par_self;
        tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[4]);
        if (tmp_attribute_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_4);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_4);

            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_4);
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
        PyObject *tmp_attrdel_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_attrdel_target_1 = par_self;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[13]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[29]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_frame == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_frame;
        if (var_data == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = var_data;
        frame_b77e1fe04dca872d7e7cd7c1dfa6a189->m_frame.f_lineno = 171;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[45]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
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
        exception_tb = MAKE_TRACEBACK(frame_b77e1fe04dca872d7e7cd7c1dfa6a189, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b77e1fe04dca872d7e7cd7c1dfa6a189->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b77e1fe04dca872d7e7cd7c1dfa6a189, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b77e1fe04dca872d7e7cd7c1dfa6a189,
        type_description_1,
        par_self,
        par_frame,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_b77e1fe04dca872d7e7cd7c1dfa6a189 == cache_frame_b77e1fe04dca872d7e7cd7c1dfa6a189) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b77e1fe04dca872d7e7cd7c1dfa6a189);
        cache_frame_b77e1fe04dca872d7e7cd7c1dfa6a189 = NULL;
    }

    assertFrameObject(frame_b77e1fe04dca872d7e7cd7c1dfa6a189);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_frame);
    par_frame = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(par_frame);
    par_frame = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__5__build_parameters(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_server_no_context_takeover = python_pars[0];
    PyObject *par_client_no_context_takeover = python_pars[1];
    PyObject *par_server_max_window_bits = python_pars[2];
    PyObject *par_client_max_window_bits = python_pars[3];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_5d54adad5130acb707d851b6a8250509;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5d54adad5130acb707d851b6a8250509 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_5d54adad5130acb707d851b6a8250509)) {
        Py_XDECREF(cache_frame_5d54adad5130acb707d851b6a8250509);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d54adad5130acb707d851b6a8250509 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d54adad5130acb707d851b6a8250509 = MAKE_FUNCTION_FRAME(codeobj_5d54adad5130acb707d851b6a8250509, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d54adad5130acb707d851b6a8250509->m_type_description == NULL);
    frame_5d54adad5130acb707d851b6a8250509 = cache_frame_5d54adad5130acb707d851b6a8250509;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d54adad5130acb707d851b6a8250509);
    assert(Py_REFCNT(frame_5d54adad5130acb707d851b6a8250509) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_server_no_context_takeover);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_server_no_context_takeover);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooo";
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
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        CHECK_OBJECT(var_params);
        tmp_list_arg_value_1 = var_params;
        tmp_item_value_1 = mod_consts[54];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_client_no_context_takeover);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_client_no_context_takeover);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        if (var_params == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_2 = var_params;
        tmp_item_value_2 = mod_consts[56];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_server_max_window_bits);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_server_max_window_bits);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        if (var_params == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = var_params;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[57]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[58];
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_unicode_arg_1;
            PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_server_max_window_bits);
            tmp_unicode_arg_1 = par_server_max_window_bits;
            tmp_tuple_element_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_5d54adad5130acb707d851b6a8250509->m_frame.f_lineno = 190;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_client_max_window_bits);
        tmp_cmp_expr_left_1 = par_client_max_window_bits;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_condition_result_4 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        if (var_params == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = var_params;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[57]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_5d54adad5130acb707d851b6a8250509->m_frame.f_lineno = 192;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[59]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_client_max_window_bits);
        tmp_truth_name_4 = CHECK_IF_TRUE(par_client_max_window_bits);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_2;
        if (var_params == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = var_params;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[57]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[60];
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_unicode_arg_2;
            PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_client_max_window_bits);
            tmp_unicode_arg_2 = par_client_max_window_bits;
            tmp_tuple_element_2 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_5d54adad5130acb707d851b6a8250509->m_frame.f_lineno = 194;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    branch_end_4:;
    if (var_params == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 195;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_params;
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
        exception_tb = MAKE_TRACEBACK(frame_5d54adad5130acb707d851b6a8250509, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d54adad5130acb707d851b6a8250509->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d54adad5130acb707d851b6a8250509, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d54adad5130acb707d851b6a8250509,
        type_description_1,
        par_server_no_context_takeover,
        par_client_no_context_takeover,
        par_server_max_window_bits,
        par_client_max_window_bits,
        var_params
    );


    // Release cached frame if used for exception.
    if (frame_5d54adad5130acb707d851b6a8250509 == cache_frame_5d54adad5130acb707d851b6a8250509) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d54adad5130acb707d851b6a8250509);
        cache_frame_5d54adad5130acb707d851b6a8250509 = NULL;
    }

    assertFrameObject(frame_5d54adad5130acb707d851b6a8250509);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_params);
    var_params = NULL;
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

    Py_XDECREF(var_params);
    var_params = NULL;
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
    CHECK_OBJECT(par_server_no_context_takeover);
    Py_DECREF(par_server_no_context_takeover);
    CHECK_OBJECT(par_client_no_context_takeover);
    Py_DECREF(par_client_no_context_takeover);
    CHECK_OBJECT(par_server_max_window_bits);
    Py_DECREF(par_server_max_window_bits);
    CHECK_OBJECT(par_client_max_window_bits);
    Py_DECREF(par_client_max_window_bits);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_server_no_context_takeover);
    Py_DECREF(par_server_no_context_takeover);
    CHECK_OBJECT(par_client_no_context_takeover);
    Py_DECREF(par_client_no_context_takeover);
    CHECK_OBJECT(par_server_max_window_bits);
    Py_DECREF(par_server_max_window_bits);
    CHECK_OBJECT(par_client_max_window_bits);
    Py_DECREF(par_client_max_window_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__6__extract_parameters(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_is_server = python_pars[1];
    PyObject *var_server_no_context_takeover = NULL;
    PyObject *var_client_no_context_takeover = NULL;
    PyObject *var_server_max_window_bits = NULL;
    PyObject *var_client_max_window_bits = NULL;
    PyObject *var_name = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2e191bddc8b008d36173779a3f4f03ee;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2e191bddc8b008d36173779a3f4f03ee = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_False;
        assert(var_server_no_context_takeover == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_server_no_context_takeover = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        assert(var_client_no_context_takeover == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_client_no_context_takeover = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        assert(var_server_max_window_bits == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_server_max_window_bits = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        assert(var_client_max_window_bits == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_client_max_window_bits = tmp_assign_source_4;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_2e191bddc8b008d36173779a3f4f03ee)) {
        Py_XDECREF(cache_frame_2e191bddc8b008d36173779a3f4f03ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e191bddc8b008d36173779a3f4f03ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e191bddc8b008d36173779a3f4f03ee = MAKE_FUNCTION_FRAME(codeobj_2e191bddc8b008d36173779a3f4f03ee, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e191bddc8b008d36173779a3f4f03ee->m_type_description == NULL);
    frame_2e191bddc8b008d36173779a3f4f03ee = cache_frame_2e191bddc8b008d36173779a3f4f03ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2e191bddc8b008d36173779a3f4f03ee);
    assert(Py_REFCNT(frame_2e191bddc8b008d36173779a3f4f03ee) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_params);
        tmp_iter_arg_1 = par_params;
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooo";
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
                type_description_1 = "oooooooo";
                exception_lineno = 213;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 213;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 213;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 213;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[62];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 213;
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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_10;
            Py_INCREF(var_name);
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
            PyObject *old = var_value;
            var_value = tmp_assign_source_11;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_1 = var_name;
        tmp_cmp_expr_right_1 = mod_consts[63];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
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
        int tmp_truth_name_1;
        if (var_server_no_context_takeover == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_server_no_context_takeover);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_1 = var_name;
        frame_2e191bddc8b008d36173779a3f4f03ee->m_frame.f_lineno = 217;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[64], tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 217;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_2 = var_value;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_True;
        {
            PyObject *old = var_server_no_context_takeover;
            var_server_no_context_takeover = tmp_assign_source_12;
            Py_INCREF(var_server_no_context_takeover);
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_2 = var_name;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_3 = var_value;
        frame_2e191bddc8b008d36173779a3f4f03ee->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_raise_type_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[65],
                call_args
            );
        }

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 221;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    branch_end_3:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_3 = var_name;
        tmp_cmp_expr_right_3 = mod_consts[66];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        if (var_client_no_context_takeover == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 224;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(var_client_no_context_takeover);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_4 = var_name;
        frame_2e191bddc8b008d36173779a3f4f03ee->m_frame.f_lineno = 225;
        tmp_raise_type_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[64], tmp_args_element_value_4);
        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 225;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_4 = var_value;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_True;
        {
            PyObject *old = var_client_no_context_takeover;
            var_client_no_context_takeover = tmp_assign_source_13;
            Py_INCREF(var_client_no_context_takeover);
            Py_XDECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_5 = var_name;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_6 = var_value;
        frame_2e191bddc8b008d36173779a3f4f03ee->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_raise_type_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[65],
                call_args
            );
        }

        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_4;
        exception_lineno = 229;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    branch_end_6:;
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_5 = var_name;
        tmp_cmp_expr_right_5 = mod_consts[58];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        if (var_server_max_window_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_6 = var_server_max_window_bits;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_7 = var_name;
        frame_2e191bddc8b008d36173779a3f4f03ee->m_frame.f_lineno = 233;
        tmp_raise_type_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[64], tmp_args_element_value_7);
        if (tmp_raise_type_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_5;
        exception_lineno = 233;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_7 = var_value;
        tmp_cmp_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
            tmp_cmp_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_9 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_value);
        tmp_int_arg_1 = var_value;
        tmp_assign_source_14 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_server_max_window_bits;
            var_server_max_window_bits = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_8 = var_name;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_9 = var_value;
        frame_2e191bddc8b008d36173779a3f4f03ee->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_raise_type_6 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[65],
                call_args
            );
        }

        if (tmp_raise_type_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_6;
        exception_lineno = 237;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    branch_end_9:;
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_8 = var_name;
        tmp_cmp_expr_right_8 = mod_consts[60];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        if (var_client_max_window_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 240;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_9 = var_client_max_window_bits;
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_10;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_10 = var_name;
        frame_2e191bddc8b008d36173779a3f4f03ee->m_frame.f_lineno = 241;
        tmp_raise_type_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[64], tmp_args_element_value_10);
        if (tmp_raise_type_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_7;
        exception_lineno = 241;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_3;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(par_is_server);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_is_server);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_10 = var_value;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_12 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_12 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_True;
        {
            PyObject *old = var_client_max_window_bits;
            var_client_max_window_bits = tmp_assign_source_15;
            Py_INCREF(var_client_max_window_bits);
            Py_XDECREF(old);
        }

    }
    goto branch_end_12;
    branch_no_12:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_11 = var_value;
        tmp_cmp_expr_right_11 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_cmp_expr_right_11 == NULL)) {
            tmp_cmp_expr_right_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_cmp_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_13 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_int_arg_2;
        CHECK_OBJECT(var_value);
        tmp_int_arg_2 = var_value;
        tmp_assign_source_16 = PyNumber_Int(tmp_int_arg_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_client_max_window_bits;
            var_client_max_window_bits = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_11 = var_name;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_12 = var_value;
        frame_2e191bddc8b008d36173779a3f4f03ee->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_raise_type_8 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_8,
                mod_consts[65],
                call_args
            );
        }

        if (tmp_raise_type_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_8;
        exception_lineno = 247;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    branch_end_13:;
    branch_end_12:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_13;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_13 = var_name;
        frame_2e191bddc8b008d36173779a3f4f03ee->m_frame.f_lineno = 250;
        tmp_raise_type_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[68], tmp_args_element_value_13);
        if (tmp_raise_type_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_9;
        exception_lineno = 250;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    branch_end_10:;
    branch_end_7:;
    branch_end_4:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 213;
        type_description_1 = "oooooooo";
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
        PyObject *tmp_tuple_element_1;
        if (var_server_no_context_takeover == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 253;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_server_no_context_takeover;
        tmp_return_value = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_client_no_context_takeover == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_client_no_context_takeover;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        if (var_server_max_window_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 255;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_server_max_window_bits;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        if (var_client_max_window_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_client_max_window_bits;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_2e191bddc8b008d36173779a3f4f03ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e191bddc8b008d36173779a3f4f03ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e191bddc8b008d36173779a3f4f03ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e191bddc8b008d36173779a3f4f03ee,
        type_description_1,
        par_params,
        par_is_server,
        var_server_no_context_takeover,
        var_client_no_context_takeover,
        var_server_max_window_bits,
        var_client_max_window_bits,
        var_name,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_2e191bddc8b008d36173779a3f4f03ee == cache_frame_2e191bddc8b008d36173779a3f4f03ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e191bddc8b008d36173779a3f4f03ee);
        cache_frame_2e191bddc8b008d36173779a3f4f03ee = NULL;
    }

    assertFrameObject(frame_2e191bddc8b008d36173779a3f4f03ee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_server_no_context_takeover);
    var_server_no_context_takeover = NULL;
    Py_XDECREF(var_client_no_context_takeover);
    var_client_no_context_takeover = NULL;
    Py_XDECREF(var_server_max_window_bits);
    var_server_max_window_bits = NULL;
    Py_XDECREF(var_client_max_window_bits);
    var_client_max_window_bits = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
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

    Py_XDECREF(var_server_no_context_takeover);
    var_server_no_context_takeover = NULL;
    Py_XDECREF(var_client_no_context_takeover);
    var_client_no_context_takeover = NULL;
    Py_XDECREF(var_server_max_window_bits);
    var_server_max_window_bits = NULL;
    Py_XDECREF(var_client_max_window_bits);
    var_client_max_window_bits = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_is_server);
    Py_DECREF(par_is_server);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_is_server);
    Py_DECREF(par_is_server);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__7___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_server_no_context_takeover = python_pars[1];
    PyObject *par_client_no_context_takeover = python_pars[2];
    PyObject *par_server_max_window_bits = python_pars[3];
    PyObject *par_client_max_window_bits = python_pars[4];
    PyObject *par_compress_settings = python_pars[5];
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_2329b7cc7a4eedb4e5dfc336404a7264;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2329b7cc7a4eedb4e5dfc336404a7264 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2329b7cc7a4eedb4e5dfc336404a7264)) {
        Py_XDECREF(cache_frame_2329b7cc7a4eedb4e5dfc336404a7264);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2329b7cc7a4eedb4e5dfc336404a7264 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2329b7cc7a4eedb4e5dfc336404a7264 = MAKE_FUNCTION_FRAME(codeobj_2329b7cc7a4eedb4e5dfc336404a7264, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2329b7cc7a4eedb4e5dfc336404a7264->m_type_description == NULL);
    frame_2329b7cc7a4eedb4e5dfc336404a7264 = cache_frame_2329b7cc7a4eedb4e5dfc336404a7264;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2329b7cc7a4eedb4e5dfc336404a7264);
    assert(Py_REFCNT(frame_2329b7cc7a4eedb4e5dfc336404a7264) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_server_max_window_bits);
        tmp_cmp_expr_left_1 = par_server_max_window_bits;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        {
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT(par_server_max_window_bits);
            tmp_assign_source_1 = par_server_max_window_bits;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_1);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            tmp_cmp_expr_left_2 = mod_consts[0];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_2 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooooo";
                goto try_except_handler_1;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            bool tmp_condition_result_2;
            PyObject *tmp_operand_value_2;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooooo";
                goto try_except_handler_1;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_or_right_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_or_right_value_1);
        goto try_return_handler_1;
        branch_no_2:;
        {
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_3 = tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_3 = mod_consts[1];
            tmp_or_right_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_or_right_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooooo";
                goto try_except_handler_1;
            }
            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
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

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_operand_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_operand_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooo";
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
        tmp_make_exception_arg_1 = mod_consts[70];
        frame_2329b7cc7a4eedb4e5dfc336404a7264->m_frame.f_lineno = 299;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 299;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_client_max_window_bits);
        tmp_cmp_expr_left_4 = par_client_max_window_bits;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_or_left_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? Py_True : Py_False;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_client_max_window_bits);
        tmp_cmp_expr_left_5 = par_client_max_window_bits;
        tmp_cmp_expr_right_5 = Py_True;
        tmp_or_left_value_3 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? Py_True : Py_False;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(par_client_max_window_bits);
            tmp_assign_source_3 = par_client_max_window_bits;
            assert(tmp_comparison_chain_2__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_3);
            tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            tmp_cmp_expr_left_6 = mod_consts[0];
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_cmp_expr_right_6 = tmp_comparison_chain_2__operand_2;
            tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_2__comparison_result == NULL);
            tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;
        }
        {
            bool tmp_condition_result_4;
            PyObject *tmp_operand_value_4;
            CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
            tmp_operand_value_4 = tmp_comparison_chain_2__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_1 = "oooooo";
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
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        tmp_or_right_value_3 = tmp_comparison_chain_2__comparison_result;
        Py_INCREF(tmp_or_right_value_3);
        goto try_return_handler_2;
        branch_no_4:;
        {
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_cmp_expr_left_7 = tmp_comparison_chain_2__operand_2;
            tmp_cmp_expr_right_7 = mod_consts[1];
            tmp_or_right_value_3 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_or_right_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        Py_DECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        goto outline_result_2;
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

        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        Py_INCREF(tmp_or_left_value_3);
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_operand_value_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_operand_value_3 = tmp_or_left_value_2;
        or_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooo";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[71];
        frame_2329b7cc7a4eedb4e5dfc336404a7264->m_frame.f_lineno = 305;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 305;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(par_compress_settings);
        tmp_cmp_expr_left_8 = par_compress_settings;
        tmp_cmp_expr_right_8 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_9 = mod_consts[2];
        CHECK_OBJECT(par_compress_settings);
        tmp_cmp_expr_right_9 = par_compress_settings;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? true : false;
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[72];
        frame_2329b7cc7a4eedb4e5dfc336404a7264->m_frame.f_lineno = 307;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 307;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_server_no_context_takeover);
        tmp_assattr_value_1 = par_server_no_context_takeover;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_client_no_context_takeover);
        tmp_assattr_value_2 = par_client_no_context_takeover;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[66], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        if (par_server_max_window_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_3 = par_server_max_window_bits;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[58], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        if (par_client_max_window_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 315;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_4 = par_client_max_window_bits;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[60], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_compress_settings);
        tmp_assattr_value_5 = par_compress_settings;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2329b7cc7a4eedb4e5dfc336404a7264, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2329b7cc7a4eedb4e5dfc336404a7264->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2329b7cc7a4eedb4e5dfc336404a7264, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2329b7cc7a4eedb4e5dfc336404a7264,
        type_description_1,
        par_self,
        par_server_no_context_takeover,
        par_client_no_context_takeover,
        par_server_max_window_bits,
        par_client_max_window_bits,
        par_compress_settings
    );


    // Release cached frame if used for exception.
    if (frame_2329b7cc7a4eedb4e5dfc336404a7264 == cache_frame_2329b7cc7a4eedb4e5dfc336404a7264) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2329b7cc7a4eedb4e5dfc336404a7264);
        cache_frame_2329b7cc7a4eedb4e5dfc336404a7264 = NULL;
    }

    assertFrameObject(frame_2329b7cc7a4eedb4e5dfc336404a7264);

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
    CHECK_OBJECT(par_server_no_context_takeover);
    Py_DECREF(par_server_no_context_takeover);
    CHECK_OBJECT(par_client_no_context_takeover);
    Py_DECREF(par_client_no_context_takeover);
    CHECK_OBJECT(par_server_max_window_bits);
    Py_DECREF(par_server_max_window_bits);
    CHECK_OBJECT(par_client_max_window_bits);
    Py_DECREF(par_client_max_window_bits);
    CHECK_OBJECT(par_compress_settings);
    Py_DECREF(par_compress_settings);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_server_no_context_takeover);
    Py_DECREF(par_server_no_context_takeover);
    CHECK_OBJECT(par_client_no_context_takeover);
    Py_DECREF(par_client_no_context_takeover);
    CHECK_OBJECT(par_server_max_window_bits);
    Py_DECREF(par_server_max_window_bits);
    CHECK_OBJECT(par_client_max_window_bits);
    Py_DECREF(par_client_max_window_bits);
    CHECK_OBJECT(par_compress_settings);
    Py_DECREF(par_compress_settings);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__8_get_request_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_32124394088885db4742c8c30ac4e39d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_32124394088885db4742c8c30ac4e39d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32124394088885db4742c8c30ac4e39d)) {
        Py_XDECREF(cache_frame_32124394088885db4742c8c30ac4e39d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32124394088885db4742c8c30ac4e39d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32124394088885db4742c8c30ac4e39d = MAKE_FUNCTION_FRAME(codeobj_32124394088885db4742c8c30ac4e39d, module_websockets$extensions$permessage_deflate, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32124394088885db4742c8c30ac4e39d->m_type_description == NULL);
    frame_32124394088885db4742c8c30ac4e39d = cache_frame_32124394088885db4742c8c30ac4e39d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_32124394088885db4742c8c30ac4e39d);
    assert(Py_REFCNT(frame_32124394088885db4742c8c30ac4e39d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[66]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 325;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[58]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 326;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[60]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 327;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_32124394088885db4742c8c30ac4e39d->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
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
        exception_tb = MAKE_TRACEBACK(frame_32124394088885db4742c8c30ac4e39d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32124394088885db4742c8c30ac4e39d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32124394088885db4742c8c30ac4e39d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32124394088885db4742c8c30ac4e39d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_32124394088885db4742c8c30ac4e39d == cache_frame_32124394088885db4742c8c30ac4e39d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32124394088885db4742c8c30ac4e39d);
        cache_frame_32124394088885db4742c8c30ac4e39d = NULL;
    }

    assertFrameObject(frame_32124394088885db4742c8c30ac4e39d);

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


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__9_process_response_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_params = python_pars[1];
    PyObject *par_accepted_extensions = python_pars[2];
    PyObject *var_server_no_context_takeover = NULL;
    PyObject *var_client_no_context_takeover = NULL;
    PyObject *var_server_max_window_bits = NULL;
    PyObject *var_client_max_window_bits = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_989031ae06341dd84724de45fb27cd06;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_989031ae06341dd84724de45fb27cd06 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_989031ae06341dd84724de45fb27cd06)) {
        Py_XDECREF(cache_frame_989031ae06341dd84724de45fb27cd06);

#if _DEBUG_REFCOUNTS
        if (cache_frame_989031ae06341dd84724de45fb27cd06 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_989031ae06341dd84724de45fb27cd06 = MAKE_FUNCTION_FRAME(codeobj_989031ae06341dd84724de45fb27cd06, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_989031ae06341dd84724de45fb27cd06->m_type_description == NULL);
    frame_989031ae06341dd84724de45fb27cd06 = cache_frame_989031ae06341dd84724de45fb27cd06;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_989031ae06341dd84724de45fb27cd06);
    assert(Py_REFCNT(frame_989031ae06341dd84724de45fb27cd06) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_accepted_extensions);
            tmp_iter_arg_1 = par_accepted_extensions;
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_1 = "coooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = par_self;
            Py_INCREF(tmp_closure_1[1]);

            tmp_any_arg_1 = MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_capi_result_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[76]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[77];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[78]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_1 = "coooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[17];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_1 = "coooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[17], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 342;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        frame_989031ae06341dd84724de45fb27cd06->m_frame.f_lineno = 342;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 342;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "coooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "coooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_params);
        tmp_tuple_element_2 = par_params;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[80]);
        frame_989031ae06341dd84724de45fb27cd06->m_frame.f_lineno = 352;
        tmp_iter_arg_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "coooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "coooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coooooo";
            exception_lineno = 347;
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coooooo";
            exception_lineno = 347;
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
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coooooo";
            exception_lineno = 347;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coooooo";
            exception_lineno = 347;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
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

                    type_description_1 = "coooooo";
                    exception_lineno = 347;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[81];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "coooooo";
            exception_lineno = 347;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
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
        assert(var_server_no_context_takeover == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_server_no_context_takeover = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_client_no_context_takeover == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_client_no_context_takeover = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert(var_server_max_window_bits == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_server_max_window_bits = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
        assert(var_client_max_window_bits == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_client_max_window_bits = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 366;
            type_description_1 = "coooooo";
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
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_server_no_context_takeover);
        tmp_operand_value_1 = var_server_no_context_takeover;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "coooooo";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        frame_989031ae06341dd84724de45fb27cd06->m_frame.f_lineno = 368;
        tmp_raise_type_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[82], 0)
        );

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 368;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "coooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[66]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 379;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_client_no_context_takeover);
        tmp_operand_value_2 = var_client_no_context_takeover;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "coooooo";
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
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_True;
        {
            PyObject *old = var_client_no_context_takeover;
            assert(old != NULL);
            var_client_no_context_takeover = tmp_assign_source_11;
            Py_INCREF(var_client_no_context_takeover);
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_5 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[58]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_server_max_window_bits);
        tmp_cmp_expr_left_2 = var_server_max_window_bits;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        frame_989031ae06341dd84724de45fb27cd06->m_frame.f_lineno = 398;
        tmp_raise_type_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[83], 0)
        );

        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 398;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "coooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_server_max_window_bits);
        tmp_cmp_expr_left_3 = var_server_max_window_bits;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[58]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        frame_989031ae06341dd84724de45fb27cd06->m_frame.f_lineno = 400;
        tmp_raise_type_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[84], 0)
        );

        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_4;
        exception_lineno = 400;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "coooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    branch_end_7:;
    branch_no_6:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_7 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[60]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_client_max_window_bits);
        tmp_cmp_expr_left_5 = var_client_max_window_bits;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        frame_989031ae06341dd84724de45fb27cd06->m_frame.f_lineno = 416;
        tmp_raise_type_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        if (tmp_raise_type_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_5;
        exception_lineno = 416;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "coooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_8 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[60]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = Py_True;
        tmp_condition_result_11 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_client_max_window_bits);
        tmp_cmp_expr_left_7 = var_client_max_window_bits;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_9 = Nuitka_Cell_GET(par_self);
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[60]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_client_max_window_bits;
            assert(old != NULL);
            var_client_max_window_bits = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(var_client_max_window_bits);
        tmp_cmp_expr_left_8 = var_client_max_window_bits;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_10 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[60]);
        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        frame_989031ae06341dd84724de45fb27cd06->m_frame.f_lineno = 425;
        tmp_raise_type_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[86], 0)
        );

        if (tmp_raise_type_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_6;
        exception_lineno = 425;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "coooooo";
        goto frame_exception_exit_1;
    }
    branch_no_13:;
    branch_end_12:;
    branch_no_11:;
    branch_end_9:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_args_element_value_5;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_11;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_server_no_context_takeover);
        tmp_args_element_value_2 = var_server_no_context_takeover;
        CHECK_OBJECT(var_client_no_context_takeover);
        tmp_args_element_value_3 = var_client_no_context_takeover;
        CHECK_OBJECT(var_server_max_window_bits);
        tmp_or_left_value_1 = var_server_max_window_bits;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[1];
        tmp_args_element_value_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_4 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(var_client_max_window_bits);
        tmp_or_left_value_2 = var_client_max_window_bits;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = mod_consts[1];
        tmp_args_element_value_5 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_value_5 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_11 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[7]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        frame_989031ae06341dd84724de45fb27cd06->m_frame.f_lineno = 427;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "coooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_989031ae06341dd84724de45fb27cd06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_989031ae06341dd84724de45fb27cd06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_989031ae06341dd84724de45fb27cd06, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_989031ae06341dd84724de45fb27cd06,
        type_description_1,
        par_self,
        par_params,
        par_accepted_extensions,
        var_server_no_context_takeover,
        var_client_no_context_takeover,
        var_server_max_window_bits,
        var_client_max_window_bits
    );


    // Release cached frame if used for exception.
    if (frame_989031ae06341dd84724de45fb27cd06 == cache_frame_989031ae06341dd84724de45fb27cd06) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_989031ae06341dd84724de45fb27cd06);
        cache_frame_989031ae06341dd84724de45fb27cd06 = NULL;
    }

    assertFrameObject(frame_989031ae06341dd84724de45fb27cd06);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_server_no_context_takeover);
    Py_DECREF(var_server_no_context_takeover);
    var_server_no_context_takeover = NULL;
    CHECK_OBJECT(var_client_no_context_takeover);
    Py_DECREF(var_client_no_context_takeover);
    var_client_no_context_takeover = NULL;
    CHECK_OBJECT(var_server_max_window_bits);
    Py_DECREF(var_server_max_window_bits);
    var_server_max_window_bits = NULL;
    CHECK_OBJECT(var_client_max_window_bits);
    Py_DECREF(var_client_max_window_bits);
    var_client_max_window_bits = NULL;
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

    Py_XDECREF(var_server_no_context_takeover);
    var_server_no_context_takeover = NULL;
    Py_XDECREF(var_client_no_context_takeover);
    var_client_no_context_takeover = NULL;
    Py_XDECREF(var_server_max_window_bits);
    var_server_max_window_bits = NULL;
    Py_XDECREF(var_client_max_window_bits);
    var_client_max_window_bits = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_accepted_extensions);
    Py_DECREF(par_accepted_extensions);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_accepted_extensions);
    Py_DECREF(par_accepted_extensions);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_locals {
    PyObject *var_other;
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

static PyObject *websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_locals *generator_heap = (struct websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_other = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_dc3efc08c12fdb104a5c8d9f418e62d4, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 341;
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
            PyObject *old = generator_heap->var_other;
            generator_heap->var_other = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_other);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_other);
        tmp_expression_value_2 = generator_heap->var_other;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[78]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[31]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[78]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 341;
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
            generator_heap->var_other,
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

    Py_XDECREF(generator_heap->var_other);
    generator_heap->var_other = NULL;
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
    Py_XDECREF(generator_heap->var_other);
    generator_heap->var_other = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_context,
        module_websockets$extensions$permessage_deflate,
        mod_consts[89],
#if PYTHON_VERSION >= 0x350
        mod_consts[90],
#endif
        codeobj_dc3efc08c12fdb104a5c8d9f418e62d4,
        closure,
        2,
#if 1
        sizeof(struct websockets$extensions$permessage_deflate$$$function__9_process_response_params$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_extensions = python_pars[0];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_03da0e97264c762266975c4476e24724;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_03da0e97264c762266975c4476e24724 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_extensions);
        tmp_cmp_expr_left_1 = par_extensions;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = par_extensions;
            assert(old != NULL);
            par_extensions = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_03da0e97264c762266975c4476e24724)) {
        Py_XDECREF(cache_frame_03da0e97264c762266975c4476e24724);

#if _DEBUG_REFCOUNTS
        if (cache_frame_03da0e97264c762266975c4476e24724 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_03da0e97264c762266975c4476e24724 = MAKE_FUNCTION_FRAME(codeobj_03da0e97264c762266975c4476e24724, module_websockets$extensions$permessage_deflate, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_03da0e97264c762266975c4476e24724->m_type_description == NULL);
    frame_03da0e97264c762266975c4476e24724 = cache_frame_03da0e97264c762266975c4476e24724;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_03da0e97264c762266975c4476e24724);
    assert(Py_REFCNT(frame_03da0e97264c762266975c4476e24724) == 2);

    // Framed code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_any_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_extensions);
            tmp_iter_arg_1 = par_extensions;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_operand_value_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_args_kwsplit_1;
        CHECK_OBJECT(par_extensions);
        tmp_list_arg_1 = par_extensions;
        tmp_add_expr_left_1 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 453;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[92], "d");
        frame_03da0e97264c762266975c4476e24724->m_frame.f_lineno = 453;
        tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[93]);
        Py_DECREF(tmp_call_args_kwsplit_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 453;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_add_expr_right_1, 0, tmp_list_element_1);
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        assert(!(tmp_assign_source_3 == NULL));
        {
            PyObject *old = par_extensions;
            assert(old != NULL);
            par_extensions = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    if (par_extensions == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 457;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_extensions;
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
        exception_tb = MAKE_TRACEBACK(frame_03da0e97264c762266975c4476e24724, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03da0e97264c762266975c4476e24724->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03da0e97264c762266975c4476e24724, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_03da0e97264c762266975c4476e24724,
        type_description_1,
        par_extensions
    );


    // Release cached frame if used for exception.
    if (frame_03da0e97264c762266975c4476e24724 == cache_frame_03da0e97264c762266975c4476e24724) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_03da0e97264c762266975c4476e24724);
        cache_frame_03da0e97264c762266975c4476e24724 = NULL;
    }

    assertFrameObject(frame_03da0e97264c762266975c4476e24724);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_extensions);
    par_extensions = NULL;
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

    Py_XDECREF(par_extensions);
    par_extensions = NULL;
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



#if 1
struct websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_locals {
    PyObject *var_extension_factory;
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

static PyObject *websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_locals *generator_heap = (struct websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_extension_factory = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_a0348609f40b50ca53b5ffb8b07fbd72, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 448;
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
            PyObject *old = generator_heap->var_extension_factory;
            generator_heap->var_extension_factory = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_extension_factory);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_extension_factory);
        tmp_expression_value_2 = generator_heap->var_extension_factory;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[78]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 449;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 449;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[78]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 449;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 449;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 449;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 448;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_extension_factory
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

    Py_XDECREF(generator_heap->var_extension_factory);
    generator_heap->var_extension_factory = NULL;
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
    Py_XDECREF(generator_heap->var_extension_factory);
    generator_heap->var_extension_factory = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_context,
        module_websockets$extensions$permessage_deflate,
        mod_consts[89],
#if PYTHON_VERSION >= 0x350
        mod_consts[96],
#endif
        codeobj_a0348609f40b50ca53b5ffb8b07fbd72,
        closure,
        1,
#if 1
        sizeof(struct websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__11___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_server_no_context_takeover = python_pars[1];
    PyObject *par_client_no_context_takeover = python_pars[2];
    PyObject *par_server_max_window_bits = python_pars[3];
    PyObject *par_client_max_window_bits = python_pars[4];
    PyObject *par_compress_settings = python_pars[5];
    PyObject *par_require_client_max_window_bits = python_pars[6];
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_7a337d1cb94f879ad03f94c97465fcf3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7a337d1cb94f879ad03f94c97465fcf3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a337d1cb94f879ad03f94c97465fcf3)) {
        Py_XDECREF(cache_frame_7a337d1cb94f879ad03f94c97465fcf3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a337d1cb94f879ad03f94c97465fcf3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a337d1cb94f879ad03f94c97465fcf3 = MAKE_FUNCTION_FRAME(codeobj_7a337d1cb94f879ad03f94c97465fcf3, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a337d1cb94f879ad03f94c97465fcf3->m_type_description == NULL);
    frame_7a337d1cb94f879ad03f94c97465fcf3 = cache_frame_7a337d1cb94f879ad03f94c97465fcf3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a337d1cb94f879ad03f94c97465fcf3);
    assert(Py_REFCNT(frame_7a337d1cb94f879ad03f94c97465fcf3) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_server_max_window_bits);
        tmp_cmp_expr_left_1 = par_server_max_window_bits;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        {
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT(par_server_max_window_bits);
            tmp_assign_source_1 = par_server_max_window_bits;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_1);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            tmp_cmp_expr_left_2 = mod_consts[0];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_2 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 502;
                type_description_1 = "ooooooo";
                goto try_except_handler_1;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            bool tmp_condition_result_2;
            PyObject *tmp_operand_value_2;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 502;
                type_description_1 = "ooooooo";
                goto try_except_handler_1;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_or_right_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_or_right_value_1);
        goto try_return_handler_1;
        branch_no_2:;
        {
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_3 = tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_3 = mod_consts[1];
            tmp_or_right_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_or_right_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 502;
                type_description_1 = "ooooooo";
                goto try_except_handler_1;
            }
            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
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

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_operand_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_operand_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[70];
        frame_7a337d1cb94f879ad03f94c97465fcf3->m_frame.f_lineno = 503;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 503;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_client_max_window_bits);
        tmp_cmp_expr_left_4 = par_client_max_window_bits;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_or_left_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? Py_True : Py_False;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(par_client_max_window_bits);
            tmp_assign_source_3 = par_client_max_window_bits;
            assert(tmp_comparison_chain_2__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_3);
            tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            tmp_cmp_expr_left_5 = mod_consts[0];
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_cmp_expr_right_5 = tmp_comparison_chain_2__operand_2;
            tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 504;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_2__comparison_result == NULL);
            tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;
        }
        {
            bool tmp_condition_result_4;
            PyObject *tmp_operand_value_4;
            CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
            tmp_operand_value_4 = tmp_comparison_chain_2__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 504;
                type_description_1 = "ooooooo";
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
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        tmp_or_right_value_2 = tmp_comparison_chain_2__comparison_result;
        Py_INCREF(tmp_or_right_value_2);
        goto try_return_handler_2;
        branch_no_4:;
        {
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_cmp_expr_left_6 = tmp_comparison_chain_2__operand_2;
            tmp_cmp_expr_right_6 = mod_consts[1];
            tmp_or_right_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_or_right_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 504;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        Py_DECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        goto outline_result_2;
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

        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_operand_value_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_operand_value_3 = tmp_or_left_value_2;
        or_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[71];
        frame_7a337d1cb94f879ad03f94c97465fcf3->m_frame.f_lineno = 505;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 505;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(par_compress_settings);
        tmp_cmp_expr_left_7 = par_compress_settings;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_8 = mod_consts[2];
        CHECK_OBJECT(par_compress_settings);
        tmp_cmp_expr_right_8 = par_compress_settings;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? true : false;
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[97];
        frame_7a337d1cb94f879ad03f94c97465fcf3->m_frame.f_lineno = 507;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 507;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        int tmp_truth_name_1;
        if (par_client_max_window_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 511;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_9 = par_client_max_window_bits;
        tmp_cmp_expr_right_9 = Py_None;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_require_client_max_window_bits);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_require_client_max_window_bits);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_6 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_make_exception_arg_4 = mod_consts[98];
        frame_7a337d1cb94f879ad03f94c97465fcf3->m_frame.f_lineno = 512;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 512;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_server_no_context_takeover);
        tmp_assattr_value_1 = par_server_no_context_takeover;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_client_no_context_takeover);
        tmp_assattr_value_2 = par_client_no_context_takeover;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[66], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        if (par_server_max_window_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 519;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_3 = par_server_max_window_bits;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[58], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        if (par_client_max_window_bits == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 520;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_4 = par_client_max_window_bits;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[60], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_compress_settings);
        tmp_assattr_value_5 = par_compress_settings;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_require_client_max_window_bits);
        tmp_assattr_value_6 = par_require_client_max_window_bits;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[99], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7a337d1cb94f879ad03f94c97465fcf3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a337d1cb94f879ad03f94c97465fcf3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a337d1cb94f879ad03f94c97465fcf3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a337d1cb94f879ad03f94c97465fcf3,
        type_description_1,
        par_self,
        par_server_no_context_takeover,
        par_client_no_context_takeover,
        par_server_max_window_bits,
        par_client_max_window_bits,
        par_compress_settings,
        par_require_client_max_window_bits
    );


    // Release cached frame if used for exception.
    if (frame_7a337d1cb94f879ad03f94c97465fcf3 == cache_frame_7a337d1cb94f879ad03f94c97465fcf3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a337d1cb94f879ad03f94c97465fcf3);
        cache_frame_7a337d1cb94f879ad03f94c97465fcf3 = NULL;
    }

    assertFrameObject(frame_7a337d1cb94f879ad03f94c97465fcf3);

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
    CHECK_OBJECT(par_server_no_context_takeover);
    Py_DECREF(par_server_no_context_takeover);
    CHECK_OBJECT(par_client_no_context_takeover);
    Py_DECREF(par_client_no_context_takeover);
    CHECK_OBJECT(par_server_max_window_bits);
    Py_DECREF(par_server_max_window_bits);
    CHECK_OBJECT(par_client_max_window_bits);
    Py_DECREF(par_client_max_window_bits);
    CHECK_OBJECT(par_compress_settings);
    Py_DECREF(par_compress_settings);
    CHECK_OBJECT(par_require_client_max_window_bits);
    Py_DECREF(par_require_client_max_window_bits);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_server_no_context_takeover);
    Py_DECREF(par_server_no_context_takeover);
    CHECK_OBJECT(par_client_no_context_takeover);
    Py_DECREF(par_client_no_context_takeover);
    CHECK_OBJECT(par_server_max_window_bits);
    Py_DECREF(par_server_max_window_bits);
    CHECK_OBJECT(par_client_max_window_bits);
    Py_DECREF(par_client_max_window_bits);
    CHECK_OBJECT(par_compress_settings);
    Py_DECREF(par_compress_settings);
    CHECK_OBJECT(par_require_client_max_window_bits);
    Py_DECREF(par_require_client_max_window_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__12_process_request_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_params = python_pars[1];
    PyObject *par_accepted_extensions = python_pars[2];
    PyObject *var_server_no_context_takeover = NULL;
    PyObject *var_client_no_context_takeover = NULL;
    PyObject *var_server_max_window_bits = NULL;
    PyObject *var_client_max_window_bits = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e7fd2edfa12e68edb7dc62108fee2a6c;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e7fd2edfa12e68edb7dc62108fee2a6c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e7fd2edfa12e68edb7dc62108fee2a6c)) {
        Py_XDECREF(cache_frame_e7fd2edfa12e68edb7dc62108fee2a6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7fd2edfa12e68edb7dc62108fee2a6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7fd2edfa12e68edb7dc62108fee2a6c = MAKE_FUNCTION_FRAME(codeobj_e7fd2edfa12e68edb7dc62108fee2a6c, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e7fd2edfa12e68edb7dc62108fee2a6c->m_type_description == NULL);
    frame_e7fd2edfa12e68edb7dc62108fee2a6c = cache_frame_e7fd2edfa12e68edb7dc62108fee2a6c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e7fd2edfa12e68edb7dc62108fee2a6c);
    assert(Py_REFCNT(frame_e7fd2edfa12e68edb7dc62108fee2a6c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_accepted_extensions);
            tmp_iter_arg_1 = par_accepted_extensions;
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 535;
                type_description_1 = "coooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = par_self;
            Py_INCREF(tmp_closure_1[1]);

            tmp_any_arg_1 = MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_capi_result_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[76]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[100];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[78]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 536;
                type_description_1 = "coooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[17];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 536;
                type_description_1 = "coooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[17], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 536;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        frame_e7fd2edfa12e68edb7dc62108fee2a6c->m_frame.f_lineno = 536;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 536;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "coooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "coooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_params);
        tmp_tuple_element_2 = par_params;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[101]);
        frame_e7fd2edfa12e68edb7dc62108fee2a6c->m_frame.f_lineno = 544;
        tmp_iter_arg_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "coooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "coooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coooooo";
            exception_lineno = 539;
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coooooo";
            exception_lineno = 539;
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
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coooooo";
            exception_lineno = 539;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coooooo";
            exception_lineno = 539;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
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

                    type_description_1 = "coooooo";
                    exception_lineno = 539;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[81];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "coooooo";
            exception_lineno = 539;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
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
        assert(var_server_no_context_takeover == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_server_no_context_takeover = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_client_no_context_takeover == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_client_no_context_takeover = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert(var_server_max_window_bits == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_server_max_window_bits = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
        assert(var_client_max_window_bits == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_client_max_window_bits = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 560;
            type_description_1 = "coooooo";
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
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_server_no_context_takeover);
        tmp_operand_value_1 = var_server_no_context_takeover;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "coooooo";
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
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_True;
        {
            PyObject *old = var_server_no_context_takeover;
            assert(old != NULL);
            var_server_no_context_takeover = tmp_assign_source_11;
            Py_INCREF(var_server_no_context_takeover);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[66]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 573;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_client_no_context_takeover);
        tmp_operand_value_2 = var_client_no_context_takeover;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "coooooo";
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
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_True;
        {
            PyObject *old = var_client_no_context_takeover;
            assert(old != NULL);
            var_client_no_context_takeover = tmp_assign_source_12;
            Py_INCREF(var_client_no_context_takeover);
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_5 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[58]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_server_max_window_bits);
        tmp_cmp_expr_left_2 = var_server_max_window_bits;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[58]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_server_max_window_bits;
            assert(old != NULL);
            var_server_max_window_bits = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_server_max_window_bits);
        tmp_cmp_expr_left_3 = var_server_max_window_bits;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_7 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[58]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_8 = Nuitka_Cell_GET(par_self);
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[58]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_server_max_window_bits;
            assert(old != NULL);
            var_server_max_window_bits = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    branch_end_7:;
    branch_no_6:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_9 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[60]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_client_max_window_bits);
        tmp_cmp_expr_left_5 = var_client_max_window_bits;
        tmp_cmp_expr_right_5 = Py_True;
        tmp_condition_result_10 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_10 = Nuitka_Cell_GET(par_self);
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[60]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_client_max_window_bits;
            assert(old != NULL);
            var_client_max_window_bits = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_client_max_window_bits);
        tmp_cmp_expr_left_6 = var_client_max_window_bits;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_11 = Nuitka_Cell_GET(par_self);
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[99]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 614;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        frame_e7fd2edfa12e68edb7dc62108fee2a6c->m_frame.f_lineno = 615;
        tmp_raise_type_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[102], 0)
        );

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 615;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "coooooo";
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_client_max_window_bits);
        tmp_cmp_expr_left_7 = var_client_max_window_bits;
        tmp_cmp_expr_right_7 = Py_True;
        tmp_condition_result_13 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_12 = Nuitka_Cell_GET(par_self);
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[60]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_client_max_window_bits;
            assert(old != NULL);
            var_client_max_window_bits = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    goto branch_end_13;
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_13 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[60]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_client_max_window_bits);
        tmp_cmp_expr_right_8 = var_client_max_window_bits;
        tmp_condition_result_14 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_14 = Nuitka_Cell_GET(par_self);
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[60]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 619;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_client_max_window_bits;
            assert(old != NULL);
            var_client_max_window_bits = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    branch_no_14:;
    branch_end_13:;
    branch_end_11:;
    branch_end_9:;
    {
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 622;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_server_no_context_takeover);
        tmp_args_element_value_2 = var_server_no_context_takeover;
        CHECK_OBJECT(var_client_no_context_takeover);
        tmp_args_element_value_3 = var_client_no_context_takeover;
        CHECK_OBJECT(var_server_max_window_bits);
        tmp_args_element_value_4 = var_server_max_window_bits;
        CHECK_OBJECT(var_client_max_window_bits);
        tmp_args_element_value_5 = var_client_max_window_bits;
        frame_e7fd2edfa12e68edb7dc62108fee2a6c->m_frame.f_lineno = 622;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 622;
            type_description_1 = "coooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            int tmp_or_left_truth_1;
            PyObject *tmp_or_left_value_1;
            PyObject *tmp_or_right_value_1;
            PyObject *tmp_args_element_value_9;
            int tmp_or_left_truth_2;
            PyObject *tmp_or_left_value_2;
            PyObject *tmp_or_right_value_2;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_expression_value_15;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_3);
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;
                type_description_1 = "coooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(var_client_no_context_takeover);
            tmp_args_element_value_6 = var_client_no_context_takeover;
            CHECK_OBJECT(var_server_no_context_takeover);
            tmp_args_element_value_7 = var_server_no_context_takeover;
            CHECK_OBJECT(var_client_max_window_bits);
            tmp_or_left_value_1 = var_client_max_window_bits;
            tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
            if (tmp_or_left_truth_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;
                type_description_1 = "coooooo";
                goto tuple_build_exception_2;
            }
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            tmp_or_right_value_1 = mod_consts[1];
            tmp_args_element_value_8 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_args_element_value_8 = tmp_or_left_value_1;
            or_end_1:;
            CHECK_OBJECT(var_server_max_window_bits);
            tmp_or_left_value_2 = var_server_max_window_bits;
            tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
            if (tmp_or_left_truth_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_1 = "coooooo";
                goto tuple_build_exception_2;
            }
            if (tmp_or_left_truth_2 == 1) {
                goto or_left_2;
            } else {
                goto or_right_2;
            }
            or_right_2:;
            tmp_or_right_value_2 = mod_consts[1];
            tmp_args_element_value_9 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_args_element_value_9 = tmp_or_left_value_2;
            or_end_2:;
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_expression_value_15 = Nuitka_Cell_GET(par_self);
            tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[7]);
            if (tmp_args_element_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 633;
                type_description_1 = "coooooo";
                goto tuple_build_exception_2;
            }
            frame_e7fd2edfa12e68edb7dc62108fee2a6c->m_frame.f_lineno = 628;
            {
                PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_4, call_args);
            }

            Py_DECREF(tmp_args_element_value_10);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 628;
                type_description_1 = "coooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_e7fd2edfa12e68edb7dc62108fee2a6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7fd2edfa12e68edb7dc62108fee2a6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7fd2edfa12e68edb7dc62108fee2a6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7fd2edfa12e68edb7dc62108fee2a6c,
        type_description_1,
        par_self,
        par_params,
        par_accepted_extensions,
        var_server_no_context_takeover,
        var_client_no_context_takeover,
        var_server_max_window_bits,
        var_client_max_window_bits
    );


    // Release cached frame if used for exception.
    if (frame_e7fd2edfa12e68edb7dc62108fee2a6c == cache_frame_e7fd2edfa12e68edb7dc62108fee2a6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e7fd2edfa12e68edb7dc62108fee2a6c);
        cache_frame_e7fd2edfa12e68edb7dc62108fee2a6c = NULL;
    }

    assertFrameObject(frame_e7fd2edfa12e68edb7dc62108fee2a6c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_server_no_context_takeover);
    Py_DECREF(var_server_no_context_takeover);
    var_server_no_context_takeover = NULL;
    CHECK_OBJECT(var_client_no_context_takeover);
    Py_DECREF(var_client_no_context_takeover);
    var_client_no_context_takeover = NULL;
    CHECK_OBJECT(var_server_max_window_bits);
    Py_DECREF(var_server_max_window_bits);
    var_server_max_window_bits = NULL;
    CHECK_OBJECT(var_client_max_window_bits);
    Py_DECREF(var_client_max_window_bits);
    var_client_max_window_bits = NULL;
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

    Py_XDECREF(var_server_no_context_takeover);
    var_server_no_context_takeover = NULL;
    Py_XDECREF(var_client_no_context_takeover);
    var_client_no_context_takeover = NULL;
    Py_XDECREF(var_server_max_window_bits);
    var_server_max_window_bits = NULL;
    Py_XDECREF(var_client_max_window_bits);
    var_client_max_window_bits = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_accepted_extensions);
    Py_DECREF(par_accepted_extensions);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_accepted_extensions);
    Py_DECREF(par_accepted_extensions);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_locals {
    PyObject *var_other;
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

static PyObject *websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_locals *generator_heap = (struct websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_other = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4be1bea45e72691855c16e3a1d9cf713, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 535;
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
            PyObject *old = generator_heap->var_other;
            generator_heap->var_other = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_other);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_other);
        tmp_expression_value_2 = generator_heap->var_other;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[78]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 535;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[31]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 535;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[78]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 535;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 535;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 535;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 535;
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
            generator_heap->var_other,
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

    Py_XDECREF(generator_heap->var_other);
    generator_heap->var_other = NULL;
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
    Py_XDECREF(generator_heap->var_other);
    generator_heap->var_other = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_context,
        module_websockets$extensions$permessage_deflate,
        mod_consts[89],
#if PYTHON_VERSION >= 0x350
        mod_consts[104],
#endif
        codeobj_4be1bea45e72691855c16e3a1d9cf713,
        closure,
        2,
#if 1
        sizeof(struct websockets$extensions$permessage_deflate$$$function__12_process_request_params$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_extensions = python_pars[0];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_b04adc4e47a9a1d29374e3000d41d700;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b04adc4e47a9a1d29374e3000d41d700 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_extensions);
        tmp_cmp_expr_left_1 = par_extensions;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = par_extensions;
            assert(old != NULL);
            par_extensions = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_b04adc4e47a9a1d29374e3000d41d700)) {
        Py_XDECREF(cache_frame_b04adc4e47a9a1d29374e3000d41d700);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b04adc4e47a9a1d29374e3000d41d700 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b04adc4e47a9a1d29374e3000d41d700 = MAKE_FUNCTION_FRAME(codeobj_b04adc4e47a9a1d29374e3000d41d700, module_websockets$extensions$permessage_deflate, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b04adc4e47a9a1d29374e3000d41d700->m_type_description == NULL);
    frame_b04adc4e47a9a1d29374e3000d41d700 = cache_frame_b04adc4e47a9a1d29374e3000d41d700;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b04adc4e47a9a1d29374e3000d41d700);
    assert(Py_REFCNT(frame_b04adc4e47a9a1d29374e3000d41d700) == 2);

    // Framed code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_any_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_extensions);
            tmp_iter_arg_1 = par_extensions;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 650;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr(tmp_closure_1);

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
        tmp_operand_value_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_args_kwsplit_1;
        CHECK_OBJECT(par_extensions);
        tmp_list_arg_1 = par_extensions;
        tmp_add_expr_left_1 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 654;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 655;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[106], "iid");
        frame_b04adc4e47a9a1d29374e3000d41d700->m_frame.f_lineno = 655;
        tmp_list_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[107]);
        Py_DECREF(tmp_call_args_kwsplit_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 655;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_add_expr_right_1, 0, tmp_list_element_1);
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        assert(!(tmp_assign_source_3 == NULL));
        {
            PyObject *old = par_extensions;
            assert(old != NULL);
            par_extensions = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    if (par_extensions == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 661;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_extensions;
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
        exception_tb = MAKE_TRACEBACK(frame_b04adc4e47a9a1d29374e3000d41d700, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b04adc4e47a9a1d29374e3000d41d700->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b04adc4e47a9a1d29374e3000d41d700, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b04adc4e47a9a1d29374e3000d41d700,
        type_description_1,
        par_extensions
    );


    // Release cached frame if used for exception.
    if (frame_b04adc4e47a9a1d29374e3000d41d700 == cache_frame_b04adc4e47a9a1d29374e3000d41d700) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b04adc4e47a9a1d29374e3000d41d700);
        cache_frame_b04adc4e47a9a1d29374e3000d41d700 = NULL;
    }

    assertFrameObject(frame_b04adc4e47a9a1d29374e3000d41d700);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_extensions);
    par_extensions = NULL;
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

    Py_XDECREF(par_extensions);
    par_extensions = NULL;
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



#if 1
struct websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_locals {
    PyObject *var_ext_factory;
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

static PyObject *websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_locals *generator_heap = (struct websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_ext_factory = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ebd7c8d6c9957feba755cc14e83304b1, module_websockets$extensions$permessage_deflate, sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 650;
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
            PyObject *old = generator_heap->var_ext_factory;
            generator_heap->var_ext_factory = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_ext_factory);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_ext_factory);
        tmp_expression_value_2 = generator_heap->var_ext_factory;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[78]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 651;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 651;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[78]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 651;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 651;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 651;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 650;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_ext_factory
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

    Py_XDECREF(generator_heap->var_ext_factory);
    generator_heap->var_ext_factory = NULL;
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
    Py_XDECREF(generator_heap->var_ext_factory);
    generator_heap->var_ext_factory = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_context,
        module_websockets$extensions$permessage_deflate,
        mod_consts[89],
#if PYTHON_VERSION >= 0x350
        mod_consts[109],
#endif
        codeobj_ebd7c8d6c9957feba755cc14e83304b1,
        closure,
        1,
#if 1
        sizeof(struct websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_03da0e97264c762266975c4476e24724,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__11___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__11___init__,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_7a337d1cb94f879ad03f94c97465fcf3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__12_process_request_params(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__12_process_request_params,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_e7fd2edfa12e68edb7dc62108fee2a6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[103],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b04adc4e47a9a1d29374e3000d41d700,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[108],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__1___init__,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_57261716cf0c1553e57cac5584857dbf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__2___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__2___repr__,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_c0c740683438ff1d5cd13c5c3d349dca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__3_decode(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__3_decode,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_62578c953a028af9a34626cc6a3c22ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__4_encode(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__4_encode,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_b77e1fe04dca872d7e7cd7c1dfa6a189,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__5__build_parameters(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__5__build_parameters,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d54adad5130acb707d851b6a8250509,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__6__extract_parameters(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__6__extract_parameters,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2e191bddc8b008d36173779a3f4f03ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__7___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__7___init__,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_2329b7cc7a4eedb4e5dfc336404a7264,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__8_get_request_params(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__8_get_request_params,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_32124394088885db4742c8c30ac4e39d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__9_process_response_params(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$extensions$permessage_deflate$$$function__9_process_response_params,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_989031ae06341dd84724de45fb27cd06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$extensions$permessage_deflate,
        mod_consts[88],
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

function_impl_code functable_websockets$extensions$permessage_deflate[] = {
    impl_websockets$extensions$permessage_deflate$$$function__1___init__,
    impl_websockets$extensions$permessage_deflate$$$function__2___repr__,
    impl_websockets$extensions$permessage_deflate$$$function__3_decode,
    impl_websockets$extensions$permessage_deflate$$$function__4_encode,
    impl_websockets$extensions$permessage_deflate$$$function__5__build_parameters,
    impl_websockets$extensions$permessage_deflate$$$function__6__extract_parameters,
    impl_websockets$extensions$permessage_deflate$$$function__7___init__,
    impl_websockets$extensions$permessage_deflate$$$function__8_get_request_params,
    impl_websockets$extensions$permessage_deflate$$$function__9_process_response_params,
    impl_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate,
    impl_websockets$extensions$permessage_deflate$$$function__11___init__,
    impl_websockets$extensions$permessage_deflate$$$function__12_process_request_params,
    impl_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate,
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

    function_impl_code *current = functable_websockets$extensions$permessage_deflate;
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

    if (offset > sizeof(functable_websockets$extensions$permessage_deflate) || offset < 0) {
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
        functable_websockets$extensions$permessage_deflate[offset],
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
        module_websockets$extensions$permessage_deflate,
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
PyObject *modulecode_websockets$extensions$permessage_deflate(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websockets.extensions.permessage_deflate");

    // Store the module for future use.
    module_websockets$extensions$permessage_deflate = module;

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
        PRINT_STRING("websockets.extensions.permessage_deflate: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websockets.extensions.permessage_deflate: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websockets.extensions.permessage_deflate: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwebsockets$extensions$permessage_deflate\n");

    moduledict_websockets$extensions$permessage_deflate = MODULE_DICT(module_websockets$extensions$permessage_deflate);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websockets$extensions$permessage_deflate,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websockets$extensions$permessage_deflate,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[17]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websockets$extensions$permessage_deflate,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$extensions$permessage_deflate,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$extensions$permessage_deflate,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websockets$extensions$permessage_deflate);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_websockets$extensions$permessage_deflate);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_bits = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
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
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_c39bdbf34f62d20d6b98413fc58c1166;
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
    struct Nuitka_FrameObject *frame_0fc1361a705e1aac08c0ad881bad3303_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_0fc1361a705e1aac08c0ad881bad3303_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_res;
    PyObject *locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_dc8380e3c49de76bf7cd8e22df240fd5_3;
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
    PyObject *locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260 = NULL;
    struct Nuitka_FrameObject *frame_4f81deeb6085234de6623151c1b3e09f_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460 = NULL;
    struct Nuitka_FrameObject *frame_da0fe534de3f17af738e0089445e1729_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_2);
    }
    frame_c39bdbf34f62d20d6b98413fc58c1166 = MAKE_MODULE_FRAME(codeobj_c39bdbf34f62d20d6b98413fc58c1166, module_websockets$extensions$permessage_deflate);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c39bdbf34f62d20d6b98413fc58c1166);
    assert(Py_REFCNT(frame_c39bdbf34f62d20d6b98413fc58c1166) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[111];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[113]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[113]);

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
        UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[117]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[28];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_websockets$extensions$permessage_deflate;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[35];
        frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[8];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_websockets$extensions$permessage_deflate;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[35];
        frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[118],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[118]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[119],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[119]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[120],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[120]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[121],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[121]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[122],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[122]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[123],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[123]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[124],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[124]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_14);
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
        tmp_name_value_3 = mod_consts[17];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_websockets$extensions$permessage_deflate;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[125];
        tmp_level_value_3 = mod_consts[126];
        frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame.f_lineno = 7;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[38],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[38]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[23],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[23]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_17);
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[127];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_websockets$extensions$permessage_deflate;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[128];
        tmp_level_value_4 = mod_consts[126];
        frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame.f_lineno = 8;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[129],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[129]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[130],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[130]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_20);
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[131];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_websockets$extensions$permessage_deflate;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[132];
        tmp_level_value_5 = mod_consts[133];
        frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame.f_lineno = 9;
        tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[134],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[134]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[135],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[135]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_websockets$extensions$permessage_deflate,
                mod_consts[136],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[136]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_24);
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_LIST5(mod_consts[137]);
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = mod_consts[140];
            tmp_assign_source_28 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            assert(!(tmp_assign_source_28 == NULL));
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_29;
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_0fc1361a705e1aac08c0ad881bad3303_2)) {
            Py_XDECREF(cache_frame_0fc1361a705e1aac08c0ad881bad3303_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0fc1361a705e1aac08c0ad881bad3303_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0fc1361a705e1aac08c0ad881bad3303_2 = MAKE_FUNCTION_FRAME(codeobj_0fc1361a705e1aac08c0ad881bad3303, module_websockets$extensions$permessage_deflate, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0fc1361a705e1aac08c0ad881bad3303_2->m_type_description == NULL);
        frame_0fc1361a705e1aac08c0ad881bad3303_2 = cache_frame_0fc1361a705e1aac08c0ad881bad3303_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0fc1361a705e1aac08c0ad881bad3303_2);
        assert(Py_REFCNT(frame_0fc1361a705e1aac08c0ad881bad3303_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_30 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_30 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 22;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_30;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_31 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_bits;
                outline_0_var_bits = tmp_assign_source_31;
                Py_INCREF(outline_0_var_bits);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_unicode_arg_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_bits);
            tmp_unicode_arg_1 = outline_0_var_bits;
            tmp_append_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_27 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0fc1361a705e1aac08c0ad881bad3303_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0fc1361a705e1aac08c0ad881bad3303_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0fc1361a705e1aac08c0ad881bad3303_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0fc1361a705e1aac08c0ad881bad3303_2,
            type_description_2,
            outline_0_var_bits
        );


        // Release cached frame if used for exception.
        if (frame_0fc1361a705e1aac08c0ad881bad3303_2 == cache_frame_0fc1361a705e1aac08c0ad881bad3303_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0fc1361a705e1aac08c0ad881bad3303_2);
            cache_frame_0fc1361a705e1aac08c0ad881bad3303_2 = NULL;
        }

        assertFrameObject(frame_0fc1361a705e1aac08c0ad881bad3303_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_bits);
        outline_0_var_bits = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_bits);
        outline_0_var_bits = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 22;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_27);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        tmp_assign_source_32 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_32, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_33 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
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


            exception_lineno = 25;

            goto try_except_handler_7;
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
        tmp_subscript_value_1 = mod_consts[35];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_35 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[141]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[141]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        tmp_tuple_element_2 = mod_consts[87];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame.f_lineno = 25;
        tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[142]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
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
        tmp_mod_expr_left_1 = mod_consts[143];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[144];
        tmp_getattr_default_1 = mod_consts[145];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[144]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 25;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_37;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[146];
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25, mod_consts[147], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25, mod_consts[149], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_9;
        }
        frame_dc8380e3c49de76bf7cd8e22df240fd5_3 = MAKE_CLASS_FRAME(codeobj_dc8380e3c49de76bf7cd8e22df240fd5, module_websockets$extensions$permessage_deflate, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_dc8380e3c49de76bf7cd8e22df240fd5_3);
        assert(Py_REFCNT(frame_dc8380e3c49de76bf7cd8e22df240fd5_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_2;
            tmp_called_value_2 = PyObject_GetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25, mod_consts[129]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[129]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dc8380e3c49de76bf7cd8e22df240fd5_3->m_frame.f_lineno = 31;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[150]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            tmp_defaults_1 = mod_consts[151];
            tmp_annotations_1 = DICT_COPY(mod_consts[152]);
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[155]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__2___repr__(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25, mod_consts[156], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_3;
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[158]);
            tmp_annotations_3 = DICT_COPY(mod_consts[159]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__3_decode(tmp_kw_defaults_1, tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(mod_consts[162]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__4_encode(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dc8380e3c49de76bf7cd8e22df240fd5_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dc8380e3c49de76bf7cd8e22df240fd5_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dc8380e3c49de76bf7cd8e22df240fd5_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dc8380e3c49de76bf7cd8e22df240fd5_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_dc8380e3c49de76bf7cd8e22df240fd5_3);

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


                exception_lineno = 25;

                goto try_except_handler_9;
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
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_9;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[87];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame.f_lineno = 25;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_38 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25);
        locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25 = NULL;
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

        Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25);
        locals_websockets$extensions$permessage_deflate$$$class__1_PerMessageDeflate_25 = NULL;
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
        exception_lineno = 25;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_38);
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_assign_source_40;
        PyObject *tmp_annotations_5;
        tmp_annotations_5 = DICT_COPY(mod_consts[166]);


        tmp_assign_source_40 = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__5__build_parameters(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_annotations_6;
        tmp_annotations_6 = DICT_COPY(mod_consts[167]);


        tmp_assign_source_41 = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__6__extract_parameters(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_41);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_10;
        }
        tmp_assign_source_42 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_42, 0, tmp_tuple_element_5);
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


            exception_lineno = 260;

            goto try_except_handler_10;
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
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_10;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[35];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_10;
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


            exception_lineno = 260;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_45;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[141]);
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
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[141]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_10;
        }
        tmp_tuple_element_6 = mod_consts[91];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame.f_lineno = 260;
        tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_46;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[142]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_10;
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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[143];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[144];
        tmp_getattr_default_2 = mod_consts[145];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[144]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 260;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
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
            locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[146];
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260, mod_consts[147], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260, mod_consts[149], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_12;
        }
        frame_4f81deeb6085234de6623151c1b3e09f_4 = MAKE_CLASS_FRAME(codeobj_4f81deeb6085234de6623151c1b3e09f, module_websockets$extensions$permessage_deflate, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4f81deeb6085234de6623151c1b3e09f_4);
        assert(Py_REFCNT(frame_4f81deeb6085234de6623151c1b3e09f_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_5;
            tmp_called_value_5 = PyObject_GetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260, mod_consts[129]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[129]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 284;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_4f81deeb6085234de6623151c1b3e09f_4->m_frame.f_lineno = 284;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[150]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_7;
            tmp_defaults_2 = mod_consts[169];
            tmp_annotations_7 = DICT_COPY(mod_consts[170]);
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__7___init__(tmp_defaults_2, tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[172]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__8_get_request_params(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260, mod_consts[173], tmp_dictset_value);
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
            PyObject *tmp_annotations_9;
            tmp_annotations_9 = DICT_COPY(mod_consts[175]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__9_process_response_params(tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4f81deeb6085234de6623151c1b3e09f_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4f81deeb6085234de6623151c1b3e09f_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4f81deeb6085234de6623151c1b3e09f_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4f81deeb6085234de6623151c1b3e09f_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_4f81deeb6085234de6623151c1b3e09f_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_12;
        skip_nested_handling_3:;
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


                exception_lineno = 260;

                goto try_except_handler_12;
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
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_12;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[91];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame.f_lineno = 260;
            tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_49;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_48 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_48);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260);
        locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260);
        locals_websockets$extensions$permessage_deflate$$$class__2_ClientPerMessageDeflateFactory_260 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 260;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_48);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_annotations_10;
        tmp_annotations_10 = DICT_COPY(mod_consts[178]);


        tmp_assign_source_50 = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__10_enable_client_permessage_deflate(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_50);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_13;
        }
        tmp_assign_source_51 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_52 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_13;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_11 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[35];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_13;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_54 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[141]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[141]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_13;
        }
        tmp_tuple_element_10 = mod_consts[105];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame.f_lineno = 460;
        tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[142]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_13;
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
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[143];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[144];
        tmp_getattr_default_3 = mod_consts[145];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[144]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 460;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_56;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[146];
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460, mod_consts[147], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460, mod_consts[149], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_15;
        }
        frame_da0fe534de3f17af738e0089445e1729_5 = MAKE_CLASS_FRAME(codeobj_da0fe534de3f17af738e0089445e1729, module_websockets$extensions$permessage_deflate, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_da0fe534de3f17af738e0089445e1729_5);
        assert(Py_REFCNT(frame_da0fe534de3f17af738e0089445e1729_5) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_8;
            tmp_called_value_8 = PyObject_GetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460, mod_consts[129]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[129]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 487;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_da0fe534de3f17af738e0089445e1729_5->m_frame.f_lineno = 487;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[150]);

            Py_DECREF(tmp_called_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_11;
            tmp_defaults_3 = mod_consts[181];
            tmp_annotations_11 = DICT_COPY(mod_consts[182]);
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__11___init__(tmp_defaults_3, tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[184]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__12_process_request_params(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460, mod_consts[185], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 524;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_da0fe534de3f17af738e0089445e1729_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_da0fe534de3f17af738e0089445e1729_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_da0fe534de3f17af738e0089445e1729_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_da0fe534de3f17af738e0089445e1729_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_da0fe534de3f17af738e0089445e1729_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_15;
        skip_nested_handling_4:;
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


                exception_lineno = 460;

                goto try_except_handler_15;
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
        tmp_res = PyObject_SetItem(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto try_except_handler_15;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_9 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[105];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame.f_lineno = 460;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto try_except_handler_15;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_57 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460);
        locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460);
        locals_websockets$extensions$permessage_deflate$$$class__3_ServerPerMessageDeflateFactory_460 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 460;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_57);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c39bdbf34f62d20d6b98413fc58c1166, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c39bdbf34f62d20d6b98413fc58c1166->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c39bdbf34f62d20d6b98413fc58c1166, exception_lineno);
    }



    assertFrameObject(frame_c39bdbf34f62d20d6b98413fc58c1166);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
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
        PyObject *tmp_assign_source_59;
        PyObject *tmp_annotations_13;
        tmp_annotations_13 = DICT_COPY(mod_consts[187]);


        tmp_assign_source_59 = MAKE_FUNCTION_websockets$extensions$permessage_deflate$$$function__13_enable_server_permessage_deflate(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_59);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websockets.extensions.permessage_deflate", false);

    Py_INCREF(module_websockets$extensions$permessage_deflate);
    return module_websockets$extensions$permessage_deflate;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$extensions$permessage_deflate, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("websockets$extensions$permessage_deflate", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
