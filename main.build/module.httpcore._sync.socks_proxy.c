/* Generated code for Python module 'httpcore._sync.socks_proxy'
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

/* The "module_httpcore$_sync$socks_proxy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpcore$_sync$socks_proxy;
PyDictObject *moduledict_httpcore$_sync$socks_proxy;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[215];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[215];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("httpcore._sync.socks_proxy"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 215; i++) {
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
void checkModuleConstants_httpcore$_sync$socks_proxy(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 215; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a5df2ded4636c2cc8c7bac242b8f9089;
static PyCodeObject *codeobj_11f3e12feceac5985c29700e390b11b9;
static PyCodeObject *codeobj_4bbf4b153f50a365e0b4a68620e6e3fb;
static PyCodeObject *codeobj_1ba2bfe5e9d4addd5326e5ad06cd14eb;
static PyCodeObject *codeobj_c8d6622cfb7ee8b23d717f131ccb4e0b;
static PyCodeObject *codeobj_2940b7f0da5d32b4c23722e4c79edf5b;
static PyCodeObject *codeobj_d294fb93c377f0abba922d618c2c0961;
static PyCodeObject *codeobj_8a36e52276da682d9b3914962a7b4c96;
static PyCodeObject *codeobj_ff90d37399ed3a3ca59dac9239a3945b;
static PyCodeObject *codeobj_6fdc88108ed874677386fff4ea0112bd;
static PyCodeObject *codeobj_5cbb8a9b13ddac6ed7965ebbb57d6476;
static PyCodeObject *codeobj_58db6fdc94df4477bf8b7d1df8da1b2a;
static PyCodeObject *codeobj_a4eb8cf469801d9bcd4a8bc6c52a831c;
static PyCodeObject *codeobj_cf9744bb84225cff0ed1fe8e1b963697;
static PyCodeObject *codeobj_bf6c225c9bd0049bf12bec5bb3b9d09e;
static PyCodeObject *codeobj_eec930289bcd27ca0af4c1b6da1d6ad0;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[117]; CHECK_OBJECT(module_filename_obj);
    codeobj_a5df2ded4636c2cc8c7bac242b8f9089 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[207], mod_consts[207], NULL, NULL, 0, 0, 0);
    codeobj_11f3e12feceac5985c29700e390b11b9 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[208], NULL, 0, 0, 0);
    codeobj_4bbf4b153f50a365e0b4a68620e6e3fb = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[208], NULL, 0, 0, 0);
    codeobj_1ba2bfe5e9d4addd5326e5ad06cd14eb = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[209], NULL, 9, 0, 0);
    codeobj_c8d6622cfb7ee8b23d717f131ccb4e0b = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[210], mod_consts[208], 10, 0, 0);
    codeobj_2940b7f0da5d32b4c23722e4c79edf5b = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[211], NULL, 1, 0, 0);
    codeobj_d294fb93c377f0abba922d618c2c0961 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[212], NULL, 1, 3, 0);
    codeobj_8a36e52276da682d9b3914962a7b4c96 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[196], mod_consts[196], mod_consts[213], NULL, 2, 0, 0);
    codeobj_ff90d37399ed3a3ca59dac9239a3945b = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[105], mod_consts[105], mod_consts[211], NULL, 1, 0, 0);
    codeobj_6fdc88108ed874677386fff4ea0112bd = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[187], mod_consts[187], mod_consts[213], NULL, 2, 0, 0);
    codeobj_5cbb8a9b13ddac6ed7965ebbb57d6476 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[214], NULL, 2, 0, 0);
    codeobj_58db6fdc94df4477bf8b7d1df8da1b2a = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[211], NULL, 1, 0, 0);
    codeobj_a4eb8cf469801d9bcd4a8bc6c52a831c = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[211], NULL, 1, 0, 0);
    codeobj_cf9744bb84225cff0ed1fe8e1b963697 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[211], NULL, 1, 0, 0);
    codeobj_bf6c225c9bd0049bf12bec5bb3b9d09e = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[211], NULL, 1, 0, 0);
    codeobj_eec930289bcd27ca0af4c1b6da1d6ad0 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[211], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__10_is_idle(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__11_is_closed(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__12_info(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__13___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__1__init_socks5_connection(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__2___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__3_create_connection(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__4___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__5_handle_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__6_can_handle_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__7_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__8_is_available(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__9_has_expired(PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpcore$_sync$socks_proxy$$$function__1__init_socks5_connection(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_auth = python_pars[3];
    PyObject *var_conn = NULL;
    PyObject *var_auth_method = NULL;
    PyObject *var_outgoing_bytes = NULL;
    PyObject *var_incoming_bytes = NULL;
    PyObject *var_response = NULL;
    PyObject *var_requested = NULL;
    PyObject *var_responded = NULL;
    PyObject *var_username = NULL;
    PyObject *var_password = NULL;
    PyObject *var_reply_code = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d294fb93c377f0abba922d618c2c0961;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_d294fb93c377f0abba922d618c2c0961 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d294fb93c377f0abba922d618c2c0961)) {
        Py_XDECREF(cache_frame_d294fb93c377f0abba922d618c2c0961);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d294fb93c377f0abba922d618c2c0961 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d294fb93c377f0abba922d618c2c0961 = MAKE_FUNCTION_FRAME(codeobj_d294fb93c377f0abba922d618c2c0961, module_httpcore$_sync$socks_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d294fb93c377f0abba922d618c2c0961->m_type_description == NULL);
    frame_d294fb93c377f0abba922d618c2c0961 = cache_frame_d294fb93c377f0abba922d618c2c0961;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d294fb93c377f0abba922d618c2c0961);
    assert(Py_REFCNT(frame_d294fb93c377f0abba922d618c2c0961) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 44;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_conn == NULL);
        var_conn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_auth);
        tmp_cmp_expr_left_1 = par_auth;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_auth_method == NULL);
        var_auth_method = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_conn);
        tmp_expression_value_5 = var_conn;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_auth_method);
        tmp_list_element_1 = var_auth_method;
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_1);
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 52;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[6], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 52;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_conn);
        tmp_called_instance_3 = var_conn;
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 53;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[7]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outgoing_bytes == NULL);
        var_outgoing_bytes = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_stream);
        tmp_called_instance_4 = par_stream;
        CHECK_OBJECT(var_outgoing_bytes);
        tmp_args_element_value_3 = var_outgoing_bytes;
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 54;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[8], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_stream);
        tmp_expression_value_6 = par_stream;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[9]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 57;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[10], 0), mod_consts[11]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_incoming_bytes == NULL);
        var_incoming_bytes = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_conn);
        tmp_called_instance_5 = var_conn;
        CHECK_OBJECT(var_incoming_bytes);
        tmp_args_element_value_4 = var_incoming_bytes;
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 58;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[12], tmp_args_element_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_response == NULL);
        var_response = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_response);
        tmp_isinstance_inst_1 = var_response;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[13]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 59;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_response);
        tmp_expression_value_8 = var_response;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[14]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_auth_method);
        tmp_cmp_expr_right_2 = var_auth_method;
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[16]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_auth_method);
        tmp_args_element_value_5 = var_auth_method;
        tmp_args_element_value_6 = mod_consts[17];
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_requested == NULL);
        var_requested = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[16]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_response);
        tmp_expression_value_11 = var_response;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[14]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 62;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[17];
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_responded == NULL);
        var_responded = tmp_assign_source_7;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[19];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_requested);
            tmp_format_value_1 = var_requested;
            tmp_format_spec_1 = mod_consts[20];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[21];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_responded);
            tmp_format_value_2 = var_responded;
            tmp_format_spec_2 = mod_consts[20];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_9 = PyUnicode_Join(mod_consts[20], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 63;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 63;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_response);
        tmp_expression_value_12 = var_response;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[14]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[2]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[4]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_auth);
        tmp_cmp_expr_left_4 = par_auth;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
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
        exception_lineno = 69;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_auth);
        tmp_iter_arg_1 = par_auth;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooo";
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
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 70;
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
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 70;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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
                    exception_lineno = 70;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[23];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 70;
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
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        assert(var_username == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_username = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        assert(var_password == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_password = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(var_conn);
        tmp_expression_value_15 = var_conn;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[5]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_username);
        tmp_args_element_value_11 = var_username;
        CHECK_OBJECT(var_password);
        tmp_args_element_value_12 = var_password;
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_args_element_value_10 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 71;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(var_conn);
        tmp_called_instance_7 = var_conn;
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 72;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[7]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_outgoing_bytes;
            assert(old != NULL);
            var_outgoing_bytes = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_stream);
        tmp_called_instance_8 = par_stream;
        CHECK_OBJECT(var_outgoing_bytes);
        tmp_args_element_value_13 = var_outgoing_bytes;
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 73;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[8], tmp_args_element_value_13);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_stream);
        tmp_expression_value_16 = par_stream;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[9]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 76;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[10], 0), mod_consts[11]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_incoming_bytes;
            assert(old != NULL);
            var_incoming_bytes = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(var_conn);
        tmp_called_instance_9 = var_conn;
        CHECK_OBJECT(var_incoming_bytes);
        tmp_args_element_value_14 = var_incoming_bytes;
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 77;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[12], tmp_args_element_value_14);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_response;
            assert(old != NULL);
            var_response = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_response);
        tmp_isinstance_inst_2 = var_response;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[25]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_4;
        tmp_raise_type_4 = PyExc_AssertionError;
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_lineno = 78;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(var_response);
        tmp_expression_value_18 = var_response;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[26]);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 80;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[27]);

        if (tmp_raise_type_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_5;
        exception_lineno = 80;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    branch_no_3:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_conn);
        tmp_expression_value_19 = var_conn;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[5]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[28]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[29]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[30]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[31]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_tuple_element_2 = par_host;
        tmp_args_element_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_17, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_port);
        tmp_tuple_element_2 = par_port;
        PyTuple_SET_ITEM0(tmp_args_element_value_17, 1, tmp_tuple_element_2);
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_args_element_value_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 83;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_10;
        CHECK_OBJECT(var_conn);
        tmp_called_instance_10 = var_conn;
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 88;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[7]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_outgoing_bytes;
            var_outgoing_bytes = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(par_stream);
        tmp_called_instance_11 = par_stream;
        CHECK_OBJECT(var_outgoing_bytes);
        tmp_args_element_value_18 = var_outgoing_bytes;
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 89;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[8], tmp_args_element_value_18);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(par_stream);
        tmp_expression_value_24 = par_stream;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[9]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 92;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[10], 0), mod_consts[11]);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_incoming_bytes;
            var_incoming_bytes = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(var_conn);
        tmp_called_instance_12 = var_conn;
        CHECK_OBJECT(var_incoming_bytes);
        tmp_args_element_value_19 = var_incoming_bytes;
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 93;
        tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[12], tmp_args_element_value_19);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_response;
            var_response = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(var_response);
        tmp_isinstance_inst_3 = var_response;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[32]);
        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        Py_DECREF(tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_6;
        tmp_raise_type_6 = PyExc_AssertionError;
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_lineno = 94;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(var_response);
        tmp_expression_value_26 = var_response;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[33]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[34]);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[35]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_21;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[16]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_response);
        tmp_expression_value_30 = var_response;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[33]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = mod_consts[37];
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reply_code == NULL);
        var_reply_code = tmp_assign_source_19;
    }
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_3;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[38];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_reply_code);
            tmp_format_value_3 = var_reply_code;
            tmp_format_spec_3 = mod_consts[20];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_22 = PyUnicode_Join(mod_consts[20], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d294fb93c377f0abba922d618c2c0961->m_frame.f_lineno = 97;
        tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_raise_type_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_7;
        exception_lineno = 97;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d294fb93c377f0abba922d618c2c0961, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d294fb93c377f0abba922d618c2c0961->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d294fb93c377f0abba922d618c2c0961, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d294fb93c377f0abba922d618c2c0961,
        type_description_1,
        par_stream,
        par_host,
        par_port,
        par_auth,
        var_conn,
        var_auth_method,
        var_outgoing_bytes,
        var_incoming_bytes,
        var_response,
        var_requested,
        var_responded,
        var_username,
        var_password,
        var_reply_code
    );


    // Release cached frame if used for exception.
    if (frame_d294fb93c377f0abba922d618c2c0961 == cache_frame_d294fb93c377f0abba922d618c2c0961) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d294fb93c377f0abba922d618c2c0961);
        cache_frame_d294fb93c377f0abba922d618c2c0961 = NULL;
    }

    assertFrameObject(frame_d294fb93c377f0abba922d618c2c0961);

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
    CHECK_OBJECT(var_conn);
    Py_DECREF(var_conn);
    var_conn = NULL;
    CHECK_OBJECT(var_auth_method);
    Py_DECREF(var_auth_method);
    var_auth_method = NULL;
    CHECK_OBJECT(var_outgoing_bytes);
    Py_DECREF(var_outgoing_bytes);
    var_outgoing_bytes = NULL;
    CHECK_OBJECT(var_incoming_bytes);
    Py_DECREF(var_incoming_bytes);
    var_incoming_bytes = NULL;
    CHECK_OBJECT(var_response);
    Py_DECREF(var_response);
    var_response = NULL;
    Py_XDECREF(var_username);
    var_username = NULL;
    Py_XDECREF(var_password);
    var_password = NULL;
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

    Py_XDECREF(var_conn);
    var_conn = NULL;
    Py_XDECREF(var_auth_method);
    var_auth_method = NULL;
    Py_XDECREF(var_outgoing_bytes);
    var_outgoing_bytes = NULL;
    Py_XDECREF(var_incoming_bytes);
    var_incoming_bytes = NULL;
    Py_XDECREF(var_response);
    var_response = NULL;
    Py_XDECREF(var_requested);
    var_requested = NULL;
    Py_XDECREF(var_responded);
    var_responded = NULL;
    Py_XDECREF(var_username);
    var_username = NULL;
    Py_XDECREF(var_password);
    var_password = NULL;
    Py_XDECREF(var_reply_code);
    var_reply_code = NULL;
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
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_auth);
    Py_DECREF(par_auth);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_proxy_url = python_pars[1];
    PyObject *par_proxy_auth = python_pars[2];
    PyObject *par_ssl_context = python_pars[3];
    PyObject *par_max_connections = python_pars[4];
    PyObject *par_max_keepalive_connections = python_pars[5];
    PyObject *par_keepalive_expiry = python_pars[6];
    PyObject *par_http1 = python_pars[7];
    PyObject *par_http2 = python_pars[8];
    PyObject *par_network_backend = python_pars[9];
    PyObject *var_username = NULL;
    PyObject *var_password = NULL;
    PyObject *var_username_bytes = NULL;
    PyObject *var_password_bytes = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c8d6622cfb7ee8b23d717f131ccb4e0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_c8d6622cfb7ee8b23d717f131ccb4e0b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c8d6622cfb7ee8b23d717f131ccb4e0b)) {
        Py_XDECREF(cache_frame_c8d6622cfb7ee8b23d717f131ccb4e0b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8d6622cfb7ee8b23d717f131ccb4e0b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8d6622cfb7ee8b23d717f131ccb4e0b = MAKE_FUNCTION_FRAME(codeobj_c8d6622cfb7ee8b23d717f131ccb4e0b, module_httpcore$_sync$socks_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8d6622cfb7ee8b23d717f131ccb4e0b->m_type_description == NULL);
    frame_c8d6622cfb7ee8b23d717f131ccb4e0b = cache_frame_c8d6622cfb7ee8b23d717f131ccb4e0b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c8d6622cfb7ee8b23d717f131ccb4e0b);
    assert(Py_REFCNT(frame_c8d6622cfb7ee8b23d717f131ccb4e0b) == 2);

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
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_httpcore$_sync$socks_proxy, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooc";
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
        frame_c8d6622cfb7ee8b23d717f131ccb4e0b->m_frame.f_lineno = 149;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[41]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooc";
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
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[42], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooc";
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
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_proxy_url);
        tmp_tuple_element_1 = par_proxy_url;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[44]);
        frame_c8d6622cfb7ee8b23d717f131ccb4e0b->m_frame.f_lineno = 159;
        tmp_assattr_value_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[45], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooc";
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
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_proxy_auth);
        tmp_iter_arg_1 = par_proxy_auth;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooc";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooc";
            exception_lineno = 161;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooc";
            exception_lineno = 161;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "ooooooooooooooc";
                    exception_lineno = 161;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[23];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooc";
            exception_lineno = 161;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_username == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_username = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_password == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_password = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_username);
        tmp_tuple_element_2 = var_username;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[47]);
        frame_c8d6622cfb7ee8b23d717f131ccb4e0b->m_frame.f_lineno = 162;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_username_bytes == NULL);
        var_username_bytes = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_password);
        tmp_tuple_element_3 = var_password;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[47]);
        frame_c8d6622cfb7ee8b23d717f131ccb4e0b->m_frame.f_lineno = 163;
        tmp_assign_source_7 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_password_bytes == NULL);
        var_password_bytes = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_username_bytes);
        tmp_tuple_element_4 = var_username_bytes;
        tmp_assattr_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_password_bytes);
        tmp_tuple_element_4 = var_password_bytes;
        PyTuple_SET_ITEM0(tmp_assattr_value_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[48], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[48], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8d6622cfb7ee8b23d717f131ccb4e0b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8d6622cfb7ee8b23d717f131ccb4e0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8d6622cfb7ee8b23d717f131ccb4e0b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8d6622cfb7ee8b23d717f131ccb4e0b,
        type_description_1,
        par_self,
        par_proxy_url,
        par_proxy_auth,
        par_ssl_context,
        par_max_connections,
        par_max_keepalive_connections,
        par_keepalive_expiry,
        par_http1,
        par_http2,
        par_network_backend,
        var_username,
        var_password,
        var_username_bytes,
        var_password_bytes,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c8d6622cfb7ee8b23d717f131ccb4e0b == cache_frame_c8d6622cfb7ee8b23d717f131ccb4e0b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8d6622cfb7ee8b23d717f131ccb4e0b);
        cache_frame_c8d6622cfb7ee8b23d717f131ccb4e0b = NULL;
    }

    assertFrameObject(frame_c8d6622cfb7ee8b23d717f131ccb4e0b);

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
    Py_XDECREF(var_username_bytes);
    var_username_bytes = NULL;
    Py_XDECREF(var_password_bytes);
    var_password_bytes = NULL;
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

    Py_XDECREF(var_username);
    var_username = NULL;
    Py_XDECREF(var_password);
    var_password = NULL;
    Py_XDECREF(var_username_bytes);
    var_username_bytes = NULL;
    Py_XDECREF(var_password_bytes);
    var_password_bytes = NULL;
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
    CHECK_OBJECT(par_proxy_url);
    Py_DECREF(par_proxy_url);
    CHECK_OBJECT(par_proxy_auth);
    Py_DECREF(par_proxy_auth);
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
    CHECK_OBJECT(par_network_backend);
    Py_DECREF(par_network_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__3_create_connection(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_origin = python_pars[1];
    struct Nuitka_FrameObject *frame_6fdc88108ed874677386fff4ea0112bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6fdc88108ed874677386fff4ea0112bd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6fdc88108ed874677386fff4ea0112bd)) {
        Py_XDECREF(cache_frame_6fdc88108ed874677386fff4ea0112bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fdc88108ed874677386fff4ea0112bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fdc88108ed874677386fff4ea0112bd = MAKE_FUNCTION_FRAME(codeobj_6fdc88108ed874677386fff4ea0112bd, module_httpcore$_sync$socks_proxy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6fdc88108ed874677386fff4ea0112bd->m_type_description == NULL);
    frame_6fdc88108ed874677386fff4ea0112bd = cache_frame_6fdc88108ed874677386fff4ea0112bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6fdc88108ed874677386fff4ea0112bd);
    assert(Py_REFCNT(frame_6fdc88108ed874677386fff4ea0112bd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_expression_value_8;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[45]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_origin);
        tmp_kw_call_value_1_1 = par_origin;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[48]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[42]);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[52]);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[53]);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_kw_call_value_6_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[54]);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_kw_call_value_7_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[55]);
        if (tmp_kw_call_value_7_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);

            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6fdc88108ed874677386fff4ea0112bd->m_frame.f_lineno = 172;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[56]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        Py_DECREF(tmp_kw_call_value_7_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
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
        exception_tb = MAKE_TRACEBACK(frame_6fdc88108ed874677386fff4ea0112bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fdc88108ed874677386fff4ea0112bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fdc88108ed874677386fff4ea0112bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fdc88108ed874677386fff4ea0112bd,
        type_description_1,
        par_self,
        par_origin
    );


    // Release cached frame if used for exception.
    if (frame_6fdc88108ed874677386fff4ea0112bd == cache_frame_6fdc88108ed874677386fff4ea0112bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6fdc88108ed874677386fff4ea0112bd);
        cache_frame_6fdc88108ed874677386fff4ea0112bd = NULL;
    }

    assertFrameObject(frame_6fdc88108ed874677386fff4ea0112bd);

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


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_proxy_origin = python_pars[1];
    PyObject *par_remote_origin = python_pars[2];
    PyObject *par_proxy_auth = python_pars[3];
    PyObject *par_ssl_context = python_pars[4];
    PyObject *par_keepalive_expiry = python_pars[5];
    PyObject *par_http1 = python_pars[6];
    PyObject *par_http2 = python_pars[7];
    PyObject *par_network_backend = python_pars[8];
    struct Nuitka_FrameObject *frame_1ba2bfe5e9d4addd5326e5ad06cd14eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ba2bfe5e9d4addd5326e5ad06cd14eb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1ba2bfe5e9d4addd5326e5ad06cd14eb)) {
        Py_XDECREF(cache_frame_1ba2bfe5e9d4addd5326e5ad06cd14eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ba2bfe5e9d4addd5326e5ad06cd14eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ba2bfe5e9d4addd5326e5ad06cd14eb = MAKE_FUNCTION_FRAME(codeobj_1ba2bfe5e9d4addd5326e5ad06cd14eb, module_httpcore$_sync$socks_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1ba2bfe5e9d4addd5326e5ad06cd14eb->m_type_description == NULL);
    frame_1ba2bfe5e9d4addd5326e5ad06cd14eb = cache_frame_1ba2bfe5e9d4addd5326e5ad06cd14eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1ba2bfe5e9d4addd5326e5ad06cd14eb);
    assert(Py_REFCNT(frame_1ba2bfe5e9d4addd5326e5ad06cd14eb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_proxy_origin);
        tmp_assattr_value_1 = par_proxy_origin;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[57], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_remote_origin);
        tmp_assattr_value_2 = par_remote_origin;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[58], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_proxy_auth);
        tmp_assattr_value_3 = par_proxy_auth;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[48], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
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
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[42], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_keepalive_expiry);
        tmp_assattr_value_5 = par_keepalive_expiry;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[52], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_http1);
        tmp_assattr_value_6 = par_http1;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[53], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_http2);
        tmp_assattr_value_7 = par_http2;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[54], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_network_backend);
        tmp_cmp_expr_left_1 = par_network_backend;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1ba2bfe5e9d4addd5326e5ad06cd14eb->m_frame.f_lineno = 205;
        tmp_assattr_value_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_network_backend);
        tmp_assattr_value_8 = par_network_backend;
        Py_INCREF(tmp_assattr_value_8);
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[55], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_9;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1ba2bfe5e9d4addd5326e5ad06cd14eb->m_frame.f_lineno = 207;
        tmp_assattr_value_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[61], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_value_10 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[62], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_value_11 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[63], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1ba2bfe5e9d4addd5326e5ad06cd14eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ba2bfe5e9d4addd5326e5ad06cd14eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ba2bfe5e9d4addd5326e5ad06cd14eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ba2bfe5e9d4addd5326e5ad06cd14eb,
        type_description_1,
        par_self,
        par_proxy_origin,
        par_remote_origin,
        par_proxy_auth,
        par_ssl_context,
        par_keepalive_expiry,
        par_http1,
        par_http2,
        par_network_backend
    );


    // Release cached frame if used for exception.
    if (frame_1ba2bfe5e9d4addd5326e5ad06cd14eb == cache_frame_1ba2bfe5e9d4addd5326e5ad06cd14eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1ba2bfe5e9d4addd5326e5ad06cd14eb);
        cache_frame_1ba2bfe5e9d4addd5326e5ad06cd14eb = NULL;
    }

    assertFrameObject(frame_1ba2bfe5e9d4addd5326e5ad06cd14eb);

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
    CHECK_OBJECT(par_proxy_auth);
    Py_DECREF(par_proxy_auth);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
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
    CHECK_OBJECT(par_proxy_auth);
    Py_DECREF(par_proxy_auth);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
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


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__5_handle_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_timeouts = NULL;
    PyObject *var_timeout = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_trace = NULL;
    PyObject *var_stream = NULL;
    PyObject *var_ssl_context = NULL;
    PyObject *var_alpn_protocols = NULL;
    PyObject *var_ssl_object = NULL;
    PyObject *var_http2_negotiated = NULL;
    PyObject *var_HTTP2Connection = NULL;
    PyObject *var_exc = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    PyObject *tmp_with_3__enter = NULL;
    PyObject *tmp_with_3__exit = NULL;
    nuitka_bool tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_3__source = NULL;
    PyObject *tmp_with_4__enter = NULL;
    PyObject *tmp_with_4__exit = NULL;
    nuitka_bool tmp_with_4__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_4__source = NULL;
    struct Nuitka_FrameObject *frame_5cbb8a9b13ddac6ed7965ebbb57d6476;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
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
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
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
    struct Nuitka_ExceptionStackItem exception_preserved_5;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5cbb8a9b13ddac6ed7965ebbb57d6476 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5cbb8a9b13ddac6ed7965ebbb57d6476)) {
        Py_XDECREF(cache_frame_5cbb8a9b13ddac6ed7965ebbb57d6476);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5cbb8a9b13ddac6ed7965ebbb57d6476 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5cbb8a9b13ddac6ed7965ebbb57d6476 = MAKE_FUNCTION_FRAME(codeobj_5cbb8a9b13ddac6ed7965ebbb57d6476, module_httpcore$_sync$socks_proxy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_type_description == NULL);
    frame_5cbb8a9b13ddac6ed7965ebbb57d6476 = cache_frame_5cbb8a9b13ddac6ed7965ebbb57d6476;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5cbb8a9b13ddac6ed7965ebbb57d6476);
    assert(Py_REFCNT(frame_5cbb8a9b13ddac6ed7965ebbb57d6476) == 2);

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
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[65];
        tmp_call_arg_element_2 = MAKE_DICT_EMPTY();
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooo";
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
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[16]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 213;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[66]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooo";
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
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[61]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_4__source == NULL);
        tmp_with_4__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_with_4__source);
        tmp_expression_value_5 = tmp_with_4__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tmp_expression_value_5, mod_consts[67]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 215;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_4__enter == NULL);
        tmp_with_4__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_with_4__source);
        tmp_expression_value_6 = tmp_with_4__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL(tmp_expression_value_6, mod_consts[68]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_4__exit == NULL);
        tmp_with_4__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_4__indicator = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[62]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        tmp_dict_key_1 = mod_consts[69];
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[57]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[69]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[70]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 220;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[71]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_7 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[72];
            CHECK_OBJECT(par_self);
            tmp_expression_value_12 = par_self;
            tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[57]);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[72]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[65];
            CHECK_OBJECT(var_timeout);
            tmp_dict_value_1 = var_timeout;
            tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_7);
        goto try_except_handler_5;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_1 = mod_consts[74];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_2 = par_request;
        CHECK_OBJECT(var_kwargs);
        tmp_args_element_value_3 = var_kwargs;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_13 = tmp_with_1__source;
        tmp_called_value_6 = LOOKUP_SPECIAL(tmp_expression_value_13, mod_consts[67]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 224;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_14 = tmp_with_1__source;
        tmp_assign_source_10 = LOOKUP_SPECIAL(tmp_expression_value_14, mod_consts[68]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_12 = tmp_with_1__enter;
        assert(var_trace == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_trace = tmp_assign_source_12;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[55]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[75]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg2_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_13 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        assert(var_stream == NULL);
        var_stream = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_stream);
        tmp_assattr_value_1 = var_stream;
        CHECK_OBJECT(var_trace);
        tmp_assattr_target_1 = var_trace;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[76], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_8:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
        nuitka_bool tmp_assign_source_14;
        tmp_assign_source_14 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        tmp_args_element_value_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_6 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 224;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame) frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_9;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 224;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame) frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_9;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_9:;
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

    goto try_except_handler_7;
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
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
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
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 224;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_8, mod_consts[77]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 224;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_9 = tmp_with_1__exit;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 224;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_9, mod_consts[77]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_5:;
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

    goto try_except_handler_5;
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[78];
        if (var_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_dict_value_2 = var_stream;
        tmp_assign_source_15 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[69];
            CHECK_OBJECT(par_self);
            tmp_expression_value_19 = par_self;
            tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[58]);
            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[69]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[70]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 231;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[71]);

            Py_DECREF(tmp_called_value_10);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[72];
            CHECK_OBJECT(par_self);
            tmp_expression_value_21 = par_self;
            tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[58]);
            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[72]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[79];
            CHECK_OBJECT(par_self);
            tmp_expression_value_22 = par_self;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[48]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_15);
        goto try_except_handler_5;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        {
            PyObject *old = var_kwargs;
            assert(old != NULL);
            var_kwargs = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_args_element_value_7 = mod_consts[80];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_8 = par_request;
        CHECK_OBJECT(var_kwargs);
        tmp_args_element_value_9 = var_kwargs;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_23 = tmp_with_2__source;
        tmp_called_value_12 = LOOKUP_SPECIAL(tmp_expression_value_23, mod_consts[67]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_10;
        }
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 235;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        Py_DECREF(tmp_called_value_12);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_24 = tmp_with_2__source;
        tmp_assign_source_18 = LOOKUP_SPECIAL(tmp_expression_value_24, mod_consts[68]);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_18;
    }
    {
        nuitka_bool tmp_assign_source_19;
        tmp_assign_source_19 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_with_2__enter);
        tmp_assign_source_20 = tmp_with_2__enter;
        {
            PyObject *old = var_trace;
            assert(old != NULL);
            var_trace = tmp_assign_source_20;
            Py_INCREF(var_trace);
            Py_DECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_call_result_3;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg2_2 = var_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_call_result_3 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        if (var_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_assattr_value_2 = var_stream;
        CHECK_OBJECT(var_trace);
        tmp_assattr_target_2 = var_trace;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[76], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_12;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_12:;
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
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_assign_source_21;
        tmp_assign_source_21 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_13 = tmp_with_2__exit;
        tmp_args_element_value_10 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_11 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_12 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_13, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 235;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame) frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_13;
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 235;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame) frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_13;
    branch_end_6:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_13:;
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

    goto try_except_handler_11;
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
    try_except_handler_11:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_2__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_14 = tmp_with_2__exit;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 235;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_14, mod_consts[77]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_7);
            Py_XDECREF(exception_keeper_value_7);
            Py_XDECREF(exception_keeper_tb_7);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_8:;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_10;
    // End of try:
    try_end_7:;
    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_cmp_expr_left_7;
        nuitka_bool tmp_cmp_expr_right_7;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_7 = tmp_with_2__indicator;
        tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_15 = tmp_with_2__exit;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 235;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_15, mod_consts[77]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_9:;
    goto try_end_8;
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

    goto try_except_handler_5;
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
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[58]);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[82]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_8 = mod_consts[83];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_22;
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(par_self);
        tmp_expression_value_27 = par_self;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[42]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_11 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 244;
        tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[42]);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        condexpr_end_1:;
        assert(var_ssl_context == NULL);
        var_ssl_context = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_29 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[54]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 249;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_12 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_23 = MAKE_LIST2(mod_consts[85],mod_consts[86]);
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_23 = MAKE_LIST1(mod_consts[85]);
        condexpr_end_2:;
        assert(var_alpn_protocols == NULL);
        var_alpn_protocols = tmp_assign_source_23;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(var_ssl_context);
        tmp_called_instance_1 = var_ssl_context;
        CHECK_OBJECT(var_alpn_protocols);
        tmp_args_element_value_13 = var_alpn_protocols;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 251;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[87], tmp_args_element_value_13);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[88];
        CHECK_OBJECT(var_ssl_context);
        tmp_dict_value_3 = var_ssl_context;
        tmp_assign_source_24 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[89];
            CHECK_OBJECT(par_self);
            tmp_expression_value_32 = par_self;
            tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[58]);
            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[69]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[70]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_3;
            }
            frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 255;
            tmp_dict_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[71]);

            Py_DECREF(tmp_called_value_17);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[65];
            CHECK_OBJECT(var_timeout);
            tmp_dict_value_3 = var_timeout;
            tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_24);
        goto try_except_handler_5;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        {
            PyObject *old = var_kwargs;
            assert(old != NULL);
            var_kwargs = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_args_element_value_14 = mod_consts[90];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_15 = par_request;
        CHECK_OBJECT(var_kwargs);
        tmp_args_element_value_16 = var_kwargs;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_18, call_args);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_14;
        }
        assert(tmp_with_3__source == NULL);
        tmp_with_3__source = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_33 = tmp_with_3__source;
        tmp_called_value_19 = LOOKUP_SPECIAL(tmp_expression_value_33, mod_consts[67]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_14;
        }
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 258;
        tmp_assign_source_26 = CALL_FUNCTION_NO_ARGS(tmp_called_value_19);
        Py_DECREF(tmp_called_value_19);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_14;
        }
        assert(tmp_with_3__enter == NULL);
        tmp_with_3__enter = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_34 = tmp_with_3__source;
        tmp_assign_source_27 = LOOKUP_SPECIAL(tmp_expression_value_34, mod_consts[68]);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_14;
        }
        assert(tmp_with_3__exit == NULL);
        tmp_with_3__exit = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_assign_source_28;
        tmp_assign_source_28 = NUITKA_BOOL_TRUE;
        tmp_with_3__indicator = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_with_3__enter);
        tmp_assign_source_29 = tmp_with_3__enter;
        {
            PyObject *old = var_trace;
            assert(old != NULL);
            var_trace = tmp_assign_source_29;
            Py_INCREF(var_trace);
            Py_DECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_dircall_arg2_3;
        if (var_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 261;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_expression_value_35 = var_stream;
        tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[91]);
        if (tmp_dircall_arg1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg2_3 = var_kwargs;
        Py_INCREF(tmp_dircall_arg2_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3};
            tmp_assign_source_30 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = var_stream;
            var_stream = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_stream);
        tmp_assattr_value_3 = var_stream;
        CHECK_OBJECT(var_trace);
        tmp_assattr_target_3 = var_trace;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[76], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_16;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_9 == NULL) {
        exception_keeper_tb_9 = MAKE_TRACEBACK(frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_keeper_lineno_9);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_keeper_tb_9 = ADD_TRACEBACK(exception_keeper_tb_9, frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_keeper_lineno_9);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    // Tried code:
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_10 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        nuitka_bool tmp_assign_source_31;
        tmp_assign_source_31 = NUITKA_BOOL_FALSE;
        tmp_with_3__indicator = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_20 = tmp_with_3__exit;
        tmp_args_element_value_17 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_18 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_19 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_20, call_args);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 258;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame) frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_17;
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 258;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame) frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_17;
    branch_end_11:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_15;
    // End of try:
    try_end_10:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto try_end_9;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_9:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_15;
        nuitka_bool tmp_cmp_expr_left_11;
        nuitka_bool tmp_cmp_expr_right_11;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_11 = tmp_with_3__indicator;
        tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
        tmp_condition_result_15 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_21 = tmp_with_3__exit;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 258;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_21, mod_consts[77]);

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_11);
            Py_XDECREF(exception_keeper_value_11);
            Py_XDECREF(exception_keeper_tb_11);

            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_13:;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_14;
    // End of try:
    try_end_11:;
    {
        bool tmp_condition_result_16;
        nuitka_bool tmp_cmp_expr_left_12;
        nuitka_bool tmp_cmp_expr_right_12;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_12 = tmp_with_3__indicator;
        tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
        tmp_condition_result_16 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_22 = tmp_with_3__exit;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 258;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_22, mod_consts[77]);

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_14:;
    goto try_end_12;
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

    Py_XDECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    Py_XDECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_5;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_with_3__source);
    Py_DECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    CHECK_OBJECT(tmp_with_3__enter);
    Py_DECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_instance_2;
        if (var_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_2 = var_stream;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 265;
        tmp_assign_source_32 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[92],
            PyTuple_GET_ITEM(mod_consts[93], 0)
        );

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        assert(var_ssl_object == NULL);
        var_ssl_object = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_ssl_object);
        tmp_cmp_expr_left_13 = var_ssl_object;
        tmp_cmp_expr_right_13 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_ssl_object);
        tmp_called_instance_3 = var_ssl_object;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 268;
        tmp_cmp_expr_left_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[94]);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_14 = mod_consts[86];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_left_14);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_33 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_assign_source_33 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_http2_negotiated == NULL);
        var_http2_negotiated = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_3;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(var_http2_negotiated);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_http2_negotiated);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_or_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_36 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[54]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 273;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_37 = par_self;
        tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[53]);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_17 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_17 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[95];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[96];
        tmp_level_value_1 = mod_consts[97];
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 275;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[98],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[98]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        assert(var_HTTP2Connection == NULL);
        var_HTTP2Connection = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_23;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_HTTP2Connection);
        tmp_called_value_23 = var_HTTP2Connection;
        CHECK_OBJECT(par_self);
        tmp_expression_value_38 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[58]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (var_stream == NULL) {
            Py_DECREF(tmp_kw_call_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_1_1 = var_stream;
        CHECK_OBJECT(par_self);
        tmp_expression_value_39 = par_self;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[52]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 280;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 277;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_assattr_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[62], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
    }
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_24;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_40 = par_self;
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[58]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        if (var_stream == NULL) {
            Py_DECREF(tmp_kw_call_value_0_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_kw_call_value_1_2 = var_stream;
        CHECK_OBJECT(par_self);
        tmp_expression_value_41 = par_self;
        tmp_kw_call_value_2_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[52]);
        if (tmp_kw_call_value_2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 283;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

            tmp_assattr_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_2_2);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[62], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
    }
    branch_end_15:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_13 == NULL) {
        exception_keeper_tb_13 = MAKE_TRACEBACK(frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_keeper_lineno_13);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_keeper_tb_13 = ADD_TRACEBACK(exception_keeper_tb_13, frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_keeper_lineno_13);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    // Tried code:
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        tmp_cmp_expr_left_15 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_15 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = EXC_VALUE(PyThreadState_GET());
        assert(var_exc == NULL);
        Py_INCREF(tmp_assign_source_35);
        var_exc = tmp_assign_source_35;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[63], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_19;
        }
    }
    {
        PyObject *tmp_raise_type_1;
        CHECK_OBJECT(var_exc);
        tmp_raise_type_1 = var_exc;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 290;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_19;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_exc);
    var_exc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_18;
    // End of try:
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 217;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame) frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_18;
    branch_end_16:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_4;
    // End of try:
    // End of try:
    try_end_13:;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(par_self);
        tmp_expression_value_42 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[62]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 291;
        tmp_operand_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[102]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_25;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 292;
        tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_25);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 292;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    branch_no_17:;
    branch_end_1:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 5.
    exception_preserved_5 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_16 == NULL) {
        exception_keeper_tb_16 = MAKE_TRACEBACK(frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_keeper_lineno_16);
    } else if (exception_keeper_lineno_16 != 0) {
        exception_keeper_tb_16 = ADD_TRACEBACK(exception_keeper_tb_16, frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_keeper_lineno_16);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    // Tried code:
    {
        bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        tmp_cmp_expr_left_16 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_16 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_20 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        nuitka_bool tmp_assign_source_36;
        tmp_assign_source_36 = NUITKA_BOOL_FALSE;
        tmp_with_4__indicator = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_26 = tmp_with_4__exit;
        tmp_args_element_value_20 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_21 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_22 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_26, call_args);
        }

        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 215;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame) frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_20;
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 215;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame) frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_20;
    branch_end_18:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_3;
    // End of try:
    try_end_15:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    goto try_end_14;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_14:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_22;
        nuitka_bool tmp_cmp_expr_left_17;
        nuitka_bool tmp_cmp_expr_right_17;
        assert(tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_17 = tmp_with_4__indicator;
        tmp_cmp_expr_right_17 = NUITKA_BOOL_TRUE;
        tmp_condition_result_22 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_27 = tmp_with_4__exit;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 215;
        tmp_call_result_9 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_27, mod_consts[77]);

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_18);
            Py_XDECREF(exception_keeper_value_18);
            Py_XDECREF(exception_keeper_tb_18);

            exception_lineno = 215;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_20:;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_2;
    // End of try:
    try_end_16:;
    {
        bool tmp_condition_result_23;
        nuitka_bool tmp_cmp_expr_left_18;
        nuitka_bool tmp_cmp_expr_right_18;
        assert(tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_18 = tmp_with_4__indicator;
        tmp_cmp_expr_right_18 = NUITKA_BOOL_TRUE;
        tmp_condition_result_23 = (tmp_cmp_expr_left_18 == tmp_cmp_expr_right_18) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_28 = tmp_with_4__exit;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 215;
        tmp_call_result_10 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_28, mod_consts[77]);

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_21:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_4__source);
    tmp_with_4__source = NULL;
    Py_XDECREF(tmp_with_4__enter);
    tmp_with_4__enter = NULL;
    Py_XDECREF(tmp_with_4__exit);
    tmp_with_4__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_with_4__source);
    Py_DECREF(tmp_with_4__source);
    tmp_with_4__source = NULL;
    CHECK_OBJECT(tmp_with_4__enter);
    Py_DECREF(tmp_with_4__enter);
    tmp_with_4__enter = NULL;
    Py_XDECREF(tmp_with_4__exit);
    tmp_with_4__exit = NULL;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_23;
        CHECK_OBJECT(par_self);
        tmp_expression_value_43 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[62]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_args_element_value_23 = par_request;
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame.f_lineno = 294;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[104], tmp_args_element_value_23);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
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
        exception_tb = MAKE_TRACEBACK(frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5cbb8a9b13ddac6ed7965ebbb57d6476->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5cbb8a9b13ddac6ed7965ebbb57d6476, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5cbb8a9b13ddac6ed7965ebbb57d6476,
        type_description_1,
        par_self,
        par_request,
        var_timeouts,
        var_timeout,
        var_kwargs,
        var_trace,
        var_stream,
        var_ssl_context,
        var_alpn_protocols,
        var_ssl_object,
        var_http2_negotiated,
        var_HTTP2Connection,
        var_exc
    );


    // Release cached frame if used for exception.
    if (frame_5cbb8a9b13ddac6ed7965ebbb57d6476 == cache_frame_5cbb8a9b13ddac6ed7965ebbb57d6476) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5cbb8a9b13ddac6ed7965ebbb57d6476);
        cache_frame_5cbb8a9b13ddac6ed7965ebbb57d6476 = NULL;
    }

    assertFrameObject(frame_5cbb8a9b13ddac6ed7965ebbb57d6476);

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
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_trace);
    var_trace = NULL;
    Py_XDECREF(var_stream);
    var_stream = NULL;
    Py_XDECREF(var_ssl_context);
    var_ssl_context = NULL;
    Py_XDECREF(var_alpn_protocols);
    var_alpn_protocols = NULL;
    Py_XDECREF(var_ssl_object);
    var_ssl_object = NULL;
    Py_XDECREF(var_http2_negotiated);
    var_http2_negotiated = NULL;
    Py_XDECREF(var_HTTP2Connection);
    var_HTTP2Connection = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_timeouts);
    var_timeouts = NULL;
    Py_XDECREF(var_timeout);
    var_timeout = NULL;
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_trace);
    var_trace = NULL;
    Py_XDECREF(var_stream);
    var_stream = NULL;
    Py_XDECREF(var_ssl_context);
    var_ssl_context = NULL;
    Py_XDECREF(var_alpn_protocols);
    var_alpn_protocols = NULL;
    Py_XDECREF(var_ssl_object);
    var_ssl_object = NULL;
    Py_XDECREF(var_http2_negotiated);
    var_http2_negotiated = NULL;
    Py_XDECREF(var_HTTP2Connection);
    var_HTTP2Connection = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

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


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__6_can_handle_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_origin = python_pars[1];
    struct Nuitka_FrameObject *frame_8a36e52276da682d9b3914962a7b4c96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a36e52276da682d9b3914962a7b4c96 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8a36e52276da682d9b3914962a7b4c96)) {
        Py_XDECREF(cache_frame_8a36e52276da682d9b3914962a7b4c96);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a36e52276da682d9b3914962a7b4c96 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a36e52276da682d9b3914962a7b4c96 = MAKE_FUNCTION_FRAME(codeobj_8a36e52276da682d9b3914962a7b4c96, module_httpcore$_sync$socks_proxy, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8a36e52276da682d9b3914962a7b4c96->m_type_description == NULL);
    frame_8a36e52276da682d9b3914962a7b4c96 = cache_frame_8a36e52276da682d9b3914962a7b4c96;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8a36e52276da682d9b3914962a7b4c96);
    assert(Py_REFCNT(frame_8a36e52276da682d9b3914962a7b4c96) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_origin);
        tmp_cmp_expr_left_1 = par_origin;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[58]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
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
        exception_tb = MAKE_TRACEBACK(frame_8a36e52276da682d9b3914962a7b4c96, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a36e52276da682d9b3914962a7b4c96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a36e52276da682d9b3914962a7b4c96, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a36e52276da682d9b3914962a7b4c96,
        type_description_1,
        par_self,
        par_origin
    );


    // Release cached frame if used for exception.
    if (frame_8a36e52276da682d9b3914962a7b4c96 == cache_frame_8a36e52276da682d9b3914962a7b4c96) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8a36e52276da682d9b3914962a7b4c96);
        cache_frame_8a36e52276da682d9b3914962a7b4c96 = NULL;
    }

    assertFrameObject(frame_8a36e52276da682d9b3914962a7b4c96);

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


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__7_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ff90d37399ed3a3ca59dac9239a3945b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ff90d37399ed3a3ca59dac9239a3945b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff90d37399ed3a3ca59dac9239a3945b)) {
        Py_XDECREF(cache_frame_ff90d37399ed3a3ca59dac9239a3945b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff90d37399ed3a3ca59dac9239a3945b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff90d37399ed3a3ca59dac9239a3945b = MAKE_FUNCTION_FRAME(codeobj_ff90d37399ed3a3ca59dac9239a3945b, module_httpcore$_sync$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff90d37399ed3a3ca59dac9239a3945b->m_type_description == NULL);
    frame_ff90d37399ed3a3ca59dac9239a3945b = cache_frame_ff90d37399ed3a3ca59dac9239a3945b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff90d37399ed3a3ca59dac9239a3945b);
    assert(Py_REFCNT(frame_ff90d37399ed3a3ca59dac9239a3945b) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[62]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
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
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ff90d37399ed3a3ca59dac9239a3945b->m_frame.f_lineno = 301;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[105]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_ff90d37399ed3a3ca59dac9239a3945b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff90d37399ed3a3ca59dac9239a3945b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff90d37399ed3a3ca59dac9239a3945b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff90d37399ed3a3ca59dac9239a3945b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ff90d37399ed3a3ca59dac9239a3945b == cache_frame_ff90d37399ed3a3ca59dac9239a3945b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff90d37399ed3a3ca59dac9239a3945b);
        cache_frame_ff90d37399ed3a3ca59dac9239a3945b = NULL;
    }

    assertFrameObject(frame_ff90d37399ed3a3ca59dac9239a3945b);

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


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__8_is_available(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cf9744bb84225cff0ed1fe8e1b963697;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cf9744bb84225cff0ed1fe8e1b963697 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf9744bb84225cff0ed1fe8e1b963697)) {
        Py_XDECREF(cache_frame_cf9744bb84225cff0ed1fe8e1b963697);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf9744bb84225cff0ed1fe8e1b963697 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf9744bb84225cff0ed1fe8e1b963697 = MAKE_FUNCTION_FRAME(codeobj_cf9744bb84225cff0ed1fe8e1b963697, module_httpcore$_sync$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf9744bb84225cff0ed1fe8e1b963697->m_type_description == NULL);
    frame_cf9744bb84225cff0ed1fe8e1b963697 = cache_frame_cf9744bb84225cff0ed1fe8e1b963697;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf9744bb84225cff0ed1fe8e1b963697);
    assert(Py_REFCNT(frame_cf9744bb84225cff0ed1fe8e1b963697) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[62]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
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
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[54]);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 309;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[58]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[82]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[83];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_BYTES(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[53]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_or_right_value_1);
        tmp_and_left_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_left_value_2 = tmp_or_left_value_1;
        or_end_1:;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 310;
            type_description_1 = "o";
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
        tmp_expression_value_6 = par_self;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[63]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_and_right_value_2);
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[62]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_cf9744bb84225cff0ed1fe8e1b963697->m_frame.f_lineno = 313;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[102]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
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
        exception_tb = MAKE_TRACEBACK(frame_cf9744bb84225cff0ed1fe8e1b963697, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf9744bb84225cff0ed1fe8e1b963697->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf9744bb84225cff0ed1fe8e1b963697, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf9744bb84225cff0ed1fe8e1b963697,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cf9744bb84225cff0ed1fe8e1b963697 == cache_frame_cf9744bb84225cff0ed1fe8e1b963697) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf9744bb84225cff0ed1fe8e1b963697);
        cache_frame_cf9744bb84225cff0ed1fe8e1b963697 = NULL;
    }

    assertFrameObject(frame_cf9744bb84225cff0ed1fe8e1b963697);

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


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__9_has_expired(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_58db6fdc94df4477bf8b7d1df8da1b2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_58db6fdc94df4477bf8b7d1df8da1b2a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_58db6fdc94df4477bf8b7d1df8da1b2a)) {
        Py_XDECREF(cache_frame_58db6fdc94df4477bf8b7d1df8da1b2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_58db6fdc94df4477bf8b7d1df8da1b2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_58db6fdc94df4477bf8b7d1df8da1b2a = MAKE_FUNCTION_FRAME(codeobj_58db6fdc94df4477bf8b7d1df8da1b2a, module_httpcore$_sync$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_58db6fdc94df4477bf8b7d1df8da1b2a->m_type_description == NULL);
    frame_58db6fdc94df4477bf8b7d1df8da1b2a = cache_frame_58db6fdc94df4477bf8b7d1df8da1b2a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_58db6fdc94df4477bf8b7d1df8da1b2a);
    assert(Py_REFCNT(frame_58db6fdc94df4477bf8b7d1df8da1b2a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[62]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
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
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[62]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_58db6fdc94df4477bf8b7d1df8da1b2a->m_frame.f_lineno = 318;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[106]);
        Py_DECREF(tmp_called_instance_1);
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
        exception_tb = MAKE_TRACEBACK(frame_58db6fdc94df4477bf8b7d1df8da1b2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_58db6fdc94df4477bf8b7d1df8da1b2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_58db6fdc94df4477bf8b7d1df8da1b2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_58db6fdc94df4477bf8b7d1df8da1b2a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_58db6fdc94df4477bf8b7d1df8da1b2a == cache_frame_58db6fdc94df4477bf8b7d1df8da1b2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_58db6fdc94df4477bf8b7d1df8da1b2a);
        cache_frame_58db6fdc94df4477bf8b7d1df8da1b2a = NULL;
    }

    assertFrameObject(frame_58db6fdc94df4477bf8b7d1df8da1b2a);

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


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__10_is_idle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_eec930289bcd27ca0af4c1b6da1d6ad0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_eec930289bcd27ca0af4c1b6da1d6ad0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eec930289bcd27ca0af4c1b6da1d6ad0)) {
        Py_XDECREF(cache_frame_eec930289bcd27ca0af4c1b6da1d6ad0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eec930289bcd27ca0af4c1b6da1d6ad0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eec930289bcd27ca0af4c1b6da1d6ad0 = MAKE_FUNCTION_FRAME(codeobj_eec930289bcd27ca0af4c1b6da1d6ad0, module_httpcore$_sync$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eec930289bcd27ca0af4c1b6da1d6ad0->m_type_description == NULL);
    frame_eec930289bcd27ca0af4c1b6da1d6ad0 = cache_frame_eec930289bcd27ca0af4c1b6da1d6ad0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eec930289bcd27ca0af4c1b6da1d6ad0);
    assert(Py_REFCNT(frame_eec930289bcd27ca0af4c1b6da1d6ad0) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[62]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
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
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[62]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_eec930289bcd27ca0af4c1b6da1d6ad0->m_frame.f_lineno = 323;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[107]);
        Py_DECREF(tmp_called_instance_1);
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
        exception_tb = MAKE_TRACEBACK(frame_eec930289bcd27ca0af4c1b6da1d6ad0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eec930289bcd27ca0af4c1b6da1d6ad0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eec930289bcd27ca0af4c1b6da1d6ad0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eec930289bcd27ca0af4c1b6da1d6ad0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_eec930289bcd27ca0af4c1b6da1d6ad0 == cache_frame_eec930289bcd27ca0af4c1b6da1d6ad0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eec930289bcd27ca0af4c1b6da1d6ad0);
        cache_frame_eec930289bcd27ca0af4c1b6da1d6ad0 = NULL;
    }

    assertFrameObject(frame_eec930289bcd27ca0af4c1b6da1d6ad0);

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


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__11_is_closed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bf6c225c9bd0049bf12bec5bb3b9d09e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf6c225c9bd0049bf12bec5bb3b9d09e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf6c225c9bd0049bf12bec5bb3b9d09e)) {
        Py_XDECREF(cache_frame_bf6c225c9bd0049bf12bec5bb3b9d09e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf6c225c9bd0049bf12bec5bb3b9d09e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf6c225c9bd0049bf12bec5bb3b9d09e = MAKE_FUNCTION_FRAME(codeobj_bf6c225c9bd0049bf12bec5bb3b9d09e, module_httpcore$_sync$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf6c225c9bd0049bf12bec5bb3b9d09e->m_type_description == NULL);
    frame_bf6c225c9bd0049bf12bec5bb3b9d09e = cache_frame_bf6c225c9bd0049bf12bec5bb3b9d09e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf6c225c9bd0049bf12bec5bb3b9d09e);
    assert(Py_REFCNT(frame_bf6c225c9bd0049bf12bec5bb3b9d09e) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[62]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
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
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[62]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bf6c225c9bd0049bf12bec5bb3b9d09e->m_frame.f_lineno = 328;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[108]);
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
        exception_tb = MAKE_TRACEBACK(frame_bf6c225c9bd0049bf12bec5bb3b9d09e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf6c225c9bd0049bf12bec5bb3b9d09e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf6c225c9bd0049bf12bec5bb3b9d09e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf6c225c9bd0049bf12bec5bb3b9d09e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bf6c225c9bd0049bf12bec5bb3b9d09e == cache_frame_bf6c225c9bd0049bf12bec5bb3b9d09e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf6c225c9bd0049bf12bec5bb3b9d09e);
        cache_frame_bf6c225c9bd0049bf12bec5bb3b9d09e = NULL;
    }

    assertFrameObject(frame_bf6c225c9bd0049bf12bec5bb3b9d09e);

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


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__12_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a4eb8cf469801d9bcd4a8bc6c52a831c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a4eb8cf469801d9bcd4a8bc6c52a831c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a4eb8cf469801d9bcd4a8bc6c52a831c)) {
        Py_XDECREF(cache_frame_a4eb8cf469801d9bcd4a8bc6c52a831c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4eb8cf469801d9bcd4a8bc6c52a831c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4eb8cf469801d9bcd4a8bc6c52a831c = MAKE_FUNCTION_FRAME(codeobj_a4eb8cf469801d9bcd4a8bc6c52a831c, module_httpcore$_sync$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a4eb8cf469801d9bcd4a8bc6c52a831c->m_type_description == NULL);
    frame_a4eb8cf469801d9bcd4a8bc6c52a831c = cache_frame_a4eb8cf469801d9bcd4a8bc6c52a831c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a4eb8cf469801d9bcd4a8bc6c52a831c);
    assert(Py_REFCNT(frame_a4eb8cf469801d9bcd4a8bc6c52a831c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[62]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 332;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_return_value = mod_consts[109];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_return_value = mod_consts[110];
        condexpr_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[62]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a4eb8cf469801d9bcd4a8bc6c52a831c->m_frame.f_lineno = 333;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[111]);
        Py_DECREF(tmp_called_instance_1);
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
        exception_tb = MAKE_TRACEBACK(frame_a4eb8cf469801d9bcd4a8bc6c52a831c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4eb8cf469801d9bcd4a8bc6c52a831c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4eb8cf469801d9bcd4a8bc6c52a831c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4eb8cf469801d9bcd4a8bc6c52a831c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a4eb8cf469801d9bcd4a8bc6c52a831c == cache_frame_a4eb8cf469801d9bcd4a8bc6c52a831c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a4eb8cf469801d9bcd4a8bc6c52a831c);
        cache_frame_a4eb8cf469801d9bcd4a8bc6c52a831c = NULL;
    }

    assertFrameObject(frame_a4eb8cf469801d9bcd4a8bc6c52a831c);

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


static PyObject *impl_httpcore$_sync$socks_proxy$$$function__13___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2940b7f0da5d32b4c23722e4c79edf5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2940b7f0da5d32b4c23722e4c79edf5b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2940b7f0da5d32b4c23722e4c79edf5b)) {
        Py_XDECREF(cache_frame_2940b7f0da5d32b4c23722e4c79edf5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2940b7f0da5d32b4c23722e4c79edf5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2940b7f0da5d32b4c23722e4c79edf5b = MAKE_FUNCTION_FRAME(codeobj_2940b7f0da5d32b4c23722e4c79edf5b, module_httpcore$_sync$socks_proxy, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2940b7f0da5d32b4c23722e4c79edf5b->m_type_description == NULL);
    frame_2940b7f0da5d32b4c23722e4c79edf5b = cache_frame_2940b7f0da5d32b4c23722e4c79edf5b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2940b7f0da5d32b4c23722e4c79edf5b);
    assert(Py_REFCNT(frame_2940b7f0da5d32b4c23722e4c79edf5b) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[112];
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


                exception_lineno = 336;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[113]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[20];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[114];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            frame_2940b7f0da5d32b4c23722e4c79edf5b->m_frame.f_lineno = 336;
            tmp_format_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[111]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[20];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[115];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[20], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
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
        exception_tb = MAKE_TRACEBACK(frame_2940b7f0da5d32b4c23722e4c79edf5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2940b7f0da5d32b4c23722e4c79edf5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2940b7f0da5d32b4c23722e4c79edf5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2940b7f0da5d32b4c23722e4c79edf5b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2940b7f0da5d32b4c23722e4c79edf5b == cache_frame_2940b7f0da5d32b4c23722e4c79edf5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2940b7f0da5d32b4c23722e4c79edf5b);
        cache_frame_2940b7f0da5d32b4c23722e4c79edf5b = NULL;
    }

    assertFrameObject(frame_2940b7f0da5d32b4c23722e4c79edf5b);

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



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__10_is_idle(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__10_is_idle,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_eec930289bcd27ca0af4c1b6da1d6ad0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__11_is_closed(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__11_is_closed,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_bf6c225c9bd0049bf12bec5bb3b9d09e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__12_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__12_info,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_a4eb8cf469801d9bcd4a8bc6c52a831c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__13___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__13___repr__,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_2940b7f0da5d32b4c23722e4c79edf5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__1__init_socks5_connection(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__1__init_socks5_connection,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d294fb93c377f0abba922d618c2c0961,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__2___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__2___init__,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_c8d6622cfb7ee8b23d717f131ccb4e0b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        mod_consts[49],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__3_create_connection(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__3_create_connection,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_6fdc88108ed874677386fff4ea0112bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__4___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__4___init__,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_1ba2bfe5e9d4addd5326e5ad06cd14eb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__5_handle_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__5_handle_request,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_5cbb8a9b13ddac6ed7965ebbb57d6476,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__6_can_handle_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__6_can_handle_request,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_8a36e52276da682d9b3914962a7b4c96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__7_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__7_close,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_ff90d37399ed3a3ca59dac9239a3945b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__8_is_available(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__8_is_available,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_cf9744bb84225cff0ed1fe8e1b963697,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__9_has_expired(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$socks_proxy$$$function__9_has_expired,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_58db6fdc94df4477bf8b7d1df8da1b2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$socks_proxy,
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

function_impl_code functable_httpcore$_sync$socks_proxy[] = {
    impl_httpcore$_sync$socks_proxy$$$function__1__init_socks5_connection,
    impl_httpcore$_sync$socks_proxy$$$function__2___init__,
    impl_httpcore$_sync$socks_proxy$$$function__3_create_connection,
    impl_httpcore$_sync$socks_proxy$$$function__4___init__,
    impl_httpcore$_sync$socks_proxy$$$function__5_handle_request,
    impl_httpcore$_sync$socks_proxy$$$function__6_can_handle_request,
    impl_httpcore$_sync$socks_proxy$$$function__7_close,
    impl_httpcore$_sync$socks_proxy$$$function__8_is_available,
    impl_httpcore$_sync$socks_proxy$$$function__9_has_expired,
    impl_httpcore$_sync$socks_proxy$$$function__10_is_idle,
    impl_httpcore$_sync$socks_proxy$$$function__11_is_closed,
    impl_httpcore$_sync$socks_proxy$$$function__12_info,
    impl_httpcore$_sync$socks_proxy$$$function__13___repr__,
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

    function_impl_code *current = functable_httpcore$_sync$socks_proxy;
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

    if (offset > sizeof(functable_httpcore$_sync$socks_proxy) || offset < 0) {
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
        functable_httpcore$_sync$socks_proxy[offset],
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
        module_httpcore$_sync$socks_proxy,
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
PyObject *modulecode_httpcore$_sync$socks_proxy(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpcore._sync.socks_proxy");

    // Store the module for future use.
    module_httpcore$_sync$socks_proxy = module;

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
        PRINT_STRING("httpcore._sync.socks_proxy: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore._sync.socks_proxy: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore._sync.socks_proxy: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpcore$_sync$socks_proxy\n");

    moduledict_httpcore$_sync$socks_proxy = MODULE_DICT(module_httpcore$_sync$socks_proxy);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpcore$_sync$socks_proxy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpcore$_sync$socks_proxy,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[20]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpcore$_sync$socks_proxy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_sync$socks_proxy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_sync$socks_proxy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpcore$_sync$socks_proxy);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_httpcore$_sync$socks_proxy);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_a5df2ded4636c2cc8c7bac242b8f9089;
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
    PyObject *locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_11f3e12feceac5985c29700e390b11b9_2;
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
    PyObject *locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184 = NULL;
    struct Nuitka_FrameObject *frame_4bbf4b153f50a365e0b4a68620e6e3fb_3;
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
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_2);
    }
    frame_a5df2ded4636c2cc8c7bac242b8f9089 = MAKE_MODULE_FRAME(codeobj_a5df2ded4636c2cc8c7bac242b8f9089, module_httpcore$_sync$socks_proxy);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a5df2ded4636c2cc8c7bac242b8f9089);
    assert(Py_REFCNT(frame_a5df2ded4636c2cc8c7bac242b8f9089) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[117];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[51], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[120], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[122];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[99];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[124];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[125];
        tmp_level_value_2 = mod_consts[99];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[0],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[126];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[127];
        tmp_level_value_3 = mod_consts[128];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 6;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[103],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[103]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[18],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[18]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
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
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[129];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[130];
        tmp_level_value_4 = mod_consts[128];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[131],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[131]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[132],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[132]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[133],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[133]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[134],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[134]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[46],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[46]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[43],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[43]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[135];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[136];
        tmp_level_value_5 = mod_consts[128];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 8;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[84],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[84]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[137];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[138];
        tmp_level_value_6 = mod_consts[128];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 9;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[60],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[60]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[139];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[140];
        tmp_level_value_7 = mod_consts[128];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 10;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[73],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[141];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[142];
        tmp_level_value_8 = mod_consts[128];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 11;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[59],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[143];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[144];
        tmp_level_value_9 = mod_consts[128];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 12;
        tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[145],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[145]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[146],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[146]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_23);
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[147];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[148];
        tmp_level_value_10 = mod_consts[97];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 13;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[149],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[149]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[150];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[151];
        tmp_level_value_11 = mod_consts[97];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 14;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[101],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[152];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_httpcore$_sync$socks_proxy;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[153];
        tmp_level_value_12 = mod_consts[97];
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 15;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_httpcore$_sync$socks_proxy,
                mod_consts[154],
                mod_consts[99]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[154]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = DICT_COPY(mod_consts[155]);
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = DICT_COPY(mod_consts[156]);
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[157]);
        tmp_dict_key_1 = mod_consts[78];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[69];
            tmp_dict_value_1 = (PyObject *)&PyBytes_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[72];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[79];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
            }

            assert(!(tmp_expression_value_2 == NULL));
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[158]);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
            }

            assert(!(tmp_expression_value_4 == NULL));
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[159]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_1);

                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = mod_consts[160];
            tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_1);

                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_1);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[161];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_29 = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__1__init_socks5_connection(tmp_kw_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_29);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_4;
        }
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_31 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

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
        tmp_expression_value_5 = tmp_class_creation_1__bases;
        tmp_subscript_value_3 = mod_consts[99];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_3, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[162]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[162]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[163];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 100;
        tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_8 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[164]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

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
        tmp_mod_expr_left_1 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[113];
        tmp_getattr_default_1 = mod_consts[166];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_9 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[113]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

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


            exception_lineno = 100;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 100;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_35;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[168], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[163];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_6;
        }
        frame_11f3e12feceac5985c29700e390b11b9_2 = MAKE_CLASS_FRAME(codeobj_11f3e12feceac5985c29700e390b11b9, module_httpcore$_sync$socks_proxy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_11f3e12feceac5985c29700e390b11b9_2);
        assert(Py_REFCNT(frame_11f3e12feceac5985c29700e390b11b9_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_tuple_element_4;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[171];
            tmp_dict_key_2 = mod_consts[172];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
            }

            assert(!(tmp_expression_value_11 == NULL));
            tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[173]);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_4 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[131]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[131]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_10);

                        exception_lineno = 107;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[174]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_4 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[175]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_4, 2, tmp_tuple_element_4);
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_10);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 10 );
            {
                PyObject *tmp_expression_value_12;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_13;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[176];
                tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_13 == NULL)) {
                    tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_13 == NULL));
                tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[158]);
                if (tmp_expression_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_15 == NULL)) {
                    tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_15 == NULL));
                tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[159]);
                if (tmp_expression_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_12);

                    exception_lineno = 109;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_17 == NULL));
                tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[173]);
                if (tmp_expression_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_12);
                    Py_DECREF(tmp_expression_value_14);

                    exception_lineno = 109;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_tuple_element_6 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[174]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[175]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_7, 1, tmp_tuple_element_6);
                tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_12);
                    Py_DECREF(tmp_expression_value_14);

                    exception_lineno = 109;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_18;
                    PyObject *tmp_expression_value_19;
                    PyObject *tmp_subscript_value_8;
                    PyObject *tmp_tuple_element_7;
                    PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_5);
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                    }

                    assert(!(tmp_expression_value_19 == NULL));
                    tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[173]);
                    if (tmp_expression_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 109;
                        type_description_2 = "c";
                        goto tuple_build_exception_2;
                    }
                    tmp_tuple_element_7 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[174]);

                    if (tmp_tuple_element_7 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_7 = (PyObject *)&PyBytes_Type;
                            Py_INCREF(tmp_tuple_element_7);
                        } else {
                            goto tuple_build_exception_2;
                        }
                    }

                    tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_7);
                    tmp_tuple_element_7 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[175]);

                    if (tmp_tuple_element_7 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_7 = (PyObject *)&PyUnicode_Type;
                            Py_INCREF(tmp_tuple_element_7);
                        } else {
                            goto tuple_build_exception_2;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_7);
                    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_8);
                    Py_DECREF(tmp_expression_value_18);
                    Py_DECREF(tmp_subscript_value_8);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 109;
                        type_description_2 = "c";
                        goto tuple_build_exception_2;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_5);
                }
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_2:;
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_6);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_subscript_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_subscript_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_12);

                    exception_lineno = 109;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[88];
                tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_21 == NULL)) {
                    tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_21 == NULL));
                tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[158]);
                if (tmp_expression_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_expression_value_22 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[122]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_20);

                            exception_lineno = 111;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[177]);
                Py_DECREF(tmp_expression_value_22);
                if (tmp_subscript_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_20);

                    exception_lineno = 111;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[178];
                tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_24 == NULL)) {
                    tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_24 == NULL));
                tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[158]);
                if (tmp_expression_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 112;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_10 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[179]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_10);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 112;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[180];
                tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_26 == NULL)) {
                    tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_26 == NULL));
                tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[158]);
                if (tmp_expression_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_11 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[179]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[181];
                tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_28 == NULL)) {
                    tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_28 == NULL));
                tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[158]);
                if (tmp_expression_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_12 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[182]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[183];
                tmp_dict_value_2 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[184]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[95];
                tmp_dict_value_2 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[184]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[185];
                tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_30 == NULL)) {
                    tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_30 == NULL));
                tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[158]);
                if (tmp_expression_value_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_13 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[145]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[145]);

                        if (unlikely(tmp_subscript_value_13 == NULL)) {
                            tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                        }

                        if (tmp_subscript_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_29);

                            exception_lineno = 117;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[161];
                tmp_dict_value_2 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__2___init__(tmp_defaults_1, tmp_annotations_2, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[40], tmp_dictset_value);
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
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[51];
            tmp_dict_value_3 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[132]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[132]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 171;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[161];
            tmp_dict_value_3 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[154]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[154]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 171;
                        type_description_2 = "c";
                        goto dict_build_exception_3;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto dict_build_exception_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__3_create_connection(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[187], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_11f3e12feceac5985c29700e390b11b9_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_11f3e12feceac5985c29700e390b11b9_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_11f3e12feceac5985c29700e390b11b9_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_11f3e12feceac5985c29700e390b11b9_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_11f3e12feceac5985c29700e390b11b9_2);

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


                exception_lineno = 100;

                goto try_except_handler_6;
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
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100, mod_consts[189], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_8 = mod_consts[163];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_8 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 100;
            tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_37);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_36 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100);
        locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100 = NULL;
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

        Py_DECREF(locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100);
        locals_httpcore$_sync$socks_proxy$$$class__1_SOCKSProxy_100 = NULL;
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
        exception_lineno = 100;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_36);
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
        PyObject *tmp_assign_source_38;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_7;
        }
        tmp_assign_source_38 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_39 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_7;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_31 = tmp_class_creation_2__bases;
        tmp_subscript_value_14 = mod_consts[99];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_31, tmp_subscript_value_14, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_41 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_41;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_32 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_32, mod_consts[162]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_33 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[162]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_7;
        }
        tmp_tuple_element_10 = mod_consts[50];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_10 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 184;
        tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_34 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_34, mod_consts[164]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_7;
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
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[113];
        tmp_getattr_default_2 = mod_consts[166];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_35;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_35 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[113]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 184;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_43;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[168], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_9;
        }
        frame_4bbf4b153f50a365e0b4a68620e6e3fb_3 = MAKE_CLASS_FRAME(codeobj_4bbf4b153f50a365e0b4a68620e6e3fb, module_httpcore$_sync$socks_proxy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4bbf4b153f50a365e0b4a68620e6e3fb_3);
        assert(Py_REFCNT(frame_4bbf4b153f50a365e0b4a68620e6e3fb_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_defaults_2 = mod_consts[190];
            tmp_dict_key_4 = mod_consts[191];
            tmp_dict_value_4 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[132]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[132]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 187;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 9 );
            {
                PyObject *tmp_expression_value_36;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_45;
                PyObject *tmp_expression_value_46;
                PyObject *tmp_subscript_value_19;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[192];
                tmp_dict_value_4 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[132]);

                if (tmp_dict_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[132]);

                        if (unlikely(tmp_dict_value_4 == NULL)) {
                            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                        }

                        if (tmp_dict_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 188;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_dict_value_4);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[176];
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_37 == NULL));
                tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[158]);
                if (tmp_expression_value_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 189;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_39 == NULL)) {
                    tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_39 == NULL));
                tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[159]);
                if (tmp_expression_value_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_36);

                    exception_lineno = 189;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_tuple_element_12 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[174]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[174]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_12);
                tmp_subscript_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_subscript_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_36);

                    exception_lineno = 189;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_36);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 189;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[88];
                tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_41 == NULL)) {
                    tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_41 == NULL));
                tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[158]);
                if (tmp_expression_value_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_expression_value_42 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[122]);

                if (tmp_expression_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_expression_value_42 == NULL)) {
                            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                        }

                        if (tmp_expression_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_40);

                            exception_lineno = 190;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_42);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[177]);
                Py_DECREF(tmp_expression_value_42);
                if (tmp_subscript_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_40);

                    exception_lineno = 190;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[181];
                tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_44 == NULL)) {
                    tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_44 == NULL));
                tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[158]);
                if (tmp_expression_value_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_18 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[182]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_18);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[183];
                tmp_dict_value_4 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[184]);

                if (tmp_dict_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_4 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_4);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[95];
                tmp_dict_value_4 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[184]);

                if (tmp_dict_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_4 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_4);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[185];
                tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[123]);

                if (unlikely(tmp_expression_value_46 == NULL)) {
                    tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                }

                assert(!(tmp_expression_value_46 == NULL));
                tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[158]);
                if (tmp_expression_value_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_19 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[145]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[145]);

                        if (unlikely(tmp_subscript_value_19 == NULL)) {
                            tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                        }

                        if (tmp_subscript_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_45);

                            exception_lineno = 194;
                            type_description_2 = "o";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_subscript_value_19);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[161];
                tmp_dict_value_4 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__4___init__(tmp_defaults_2, tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_key_5 = mod_consts[194];
            tmp_dict_value_5 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[133]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[133]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 211;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[161];
            tmp_dict_value_5 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[134]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[134]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 211;
                        type_description_2 = "o";
                        goto dict_build_exception_5;
                    }
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto dict_build_exception_5;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__5_handle_request(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_6 = mod_consts[51];
            tmp_dict_value_6 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[132]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[132]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 296;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[161];
            tmp_dict_value_6 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[184]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__6_can_handle_request(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[196], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_7;
            tmp_annotations_7 = DICT_COPY(mod_consts[198]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__7_close(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[105], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[161];
            tmp_dict_value_7 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[184]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__8_is_available(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[102], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[161];
            tmp_dict_value_8 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[184]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__9_has_expired(tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_dict_key_9 = mod_consts[161];
            tmp_dict_value_9 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[184]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__10_is_idle(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[107], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_dict_key_10 = mod_consts[161];
            tmp_dict_value_10 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[184]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__11_is_closed(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_dict_key_11 = mod_consts[161];
            tmp_dict_value_11 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[175]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__12_info(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_key_12 = mod_consts[161];
            tmp_dict_value_12 = PyObject_GetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[175]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$socks_proxy$$$function__13___repr__(tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4bbf4b153f50a365e0b4a68620e6e3fb_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4bbf4b153f50a365e0b4a68620e6e3fb_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4bbf4b153f50a365e0b4a68620e6e3fb_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4bbf4b153f50a365e0b4a68620e6e3fb_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_4bbf4b153f50a365e0b4a68620e6e3fb_3);

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


                exception_lineno = 184;

                goto try_except_handler_9;
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
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184, mod_consts[189], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_13 = mod_consts[50];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_13 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame.f_lineno = 184;
            tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_44 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184);
        locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184 = NULL;
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

        Py_DECREF(locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184);
        locals_httpcore$_sync$socks_proxy$$$class__2_Socks5Connection_184 = NULL;
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
        exception_lineno = 184;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_44);
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
        exception_tb = MAKE_TRACEBACK(frame_a5df2ded4636c2cc8c7bac242b8f9089, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5df2ded4636c2cc8c7bac242b8f9089->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5df2ded4636c2cc8c7bac242b8f9089, exception_lineno);
    }



    assertFrameObject(frame_a5df2ded4636c2cc8c7bac242b8f9089);

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
    PGO_onModuleExit("httpcore._sync.socks_proxy", false);

    Py_INCREF(module_httpcore$_sync$socks_proxy);
    return module_httpcore$_sync$socks_proxy;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$socks_proxy, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("httpcore$_sync$socks_proxy", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
