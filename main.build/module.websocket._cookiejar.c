/* Generated code for Python module 'websocket._cookiejar'
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

/* The "module_websocket$_cookiejar" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websocket$_cookiejar;
PyDictObject *moduledict_websocket$_cookiejar;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[56];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[56];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("websocket._cookiejar"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 56; i++) {
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
void checkModuleConstants_websocket$_cookiejar(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 56; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d1ed77c7279970d9fcad02bb534d98f2;
static PyCodeObject *codeobj_69f90c05597d1b051b5b0448e8a5170f;
static PyCodeObject *codeobj_e0b3cb8106b9c20547f97ba813cb0505;
static PyCodeObject *codeobj_b1a617c8b50d09ba329b28324341948f;
static PyCodeObject *codeobj_c2055ed784d21fbd3ab7fca21168ad38;
static PyCodeObject *codeobj_64f48a1c2e19f41dea9937d573fe1f18;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[26]; CHECK_OBJECT(module_filename_obj);
    codeobj_d1ed77c7279970d9fcad02bb534d98f2 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[49], mod_consts[50], NULL, 1, 0, 0);
    codeobj_69f90c05597d1b051b5b0448e8a5170f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[51], mod_consts[51], NULL, NULL, 0, 0, 0);
    codeobj_e0b3cb8106b9c20547f97ba813cb0505 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[52], NULL, 1, 0, 0);
    codeobj_b1a617c8b50d09ba329b28324341948f = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[53], NULL, 2, 0, 0);
    codeobj_c2055ed784d21fbd3ab7fca21168ad38 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[54], NULL, 2, 0, 0);
    codeobj_64f48a1c2e19f41dea9937d573fe1f18 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[55], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_websocket$_cookiejar$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_cookiejar$$$function__2_add(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_cookiejar$$$function__3_set(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_cookiejar$$$function__4_get(PyObject *annotations);


// The module function definitions.
static PyObject *impl_websocket$_cookiejar$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e0b3cb8106b9c20547f97ba813cb0505;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e0b3cb8106b9c20547f97ba813cb0505 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e0b3cb8106b9c20547f97ba813cb0505)) {
        Py_XDECREF(cache_frame_e0b3cb8106b9c20547f97ba813cb0505);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0b3cb8106b9c20547f97ba813cb0505 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0b3cb8106b9c20547f97ba813cb0505 = MAKE_FUNCTION_FRAME(codeobj_e0b3cb8106b9c20547f97ba813cb0505, module_websocket$_cookiejar, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e0b3cb8106b9c20547f97ba813cb0505->m_type_description == NULL);
    frame_e0b3cb8106b9c20547f97ba813cb0505 = cache_frame_e0b3cb8106b9c20547f97ba813cb0505;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e0b3cb8106b9c20547f97ba813cb0505);
    assert(Py_REFCNT(frame_e0b3cb8106b9c20547f97ba813cb0505) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e0b3cb8106b9c20547f97ba813cb0505, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0b3cb8106b9c20547f97ba813cb0505->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0b3cb8106b9c20547f97ba813cb0505, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0b3cb8106b9c20547f97ba813cb0505,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e0b3cb8106b9c20547f97ba813cb0505 == cache_frame_e0b3cb8106b9c20547f97ba813cb0505) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e0b3cb8106b9c20547f97ba813cb0505);
        cache_frame_e0b3cb8106b9c20547f97ba813cb0505 = NULL;
    }

    assertFrameObject(frame_e0b3cb8106b9c20547f97ba813cb0505);

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


static PyObject *impl_websocket$_cookiejar$$$function__2_add(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_set_cookie = python_pars[1];
    PyObject *var_simpleCookie = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *var_domain = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b1a617c8b50d09ba329b28324341948f;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b1a617c8b50d09ba329b28324341948f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b1a617c8b50d09ba329b28324341948f)) {
        Py_XDECREF(cache_frame_b1a617c8b50d09ba329b28324341948f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1a617c8b50d09ba329b28324341948f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1a617c8b50d09ba329b28324341948f = MAKE_FUNCTION_FRAME(codeobj_b1a617c8b50d09ba329b28324341948f, module_websocket$_cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b1a617c8b50d09ba329b28324341948f->m_type_description == NULL);
    frame_b1a617c8b50d09ba329b28324341948f = cache_frame_b1a617c8b50d09ba329b28324341948f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b1a617c8b50d09ba329b28324341948f);
    assert(Py_REFCNT(frame_b1a617c8b50d09ba329b28324341948f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_set_cookie);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_set_cookie);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_set_cookie);
        tmp_args_element_value_1 = par_set_cookie;
        frame_b1a617c8b50d09ba329b28324341948f->m_frame.f_lineno = 29;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_simpleCookie == NULL);
        var_simpleCookie = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_simpleCookie);
        tmp_expression_value_2 = var_simpleCookie;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_b1a617c8b50d09ba329b28324341948f->m_frame.f_lineno = 31;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 31;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooo";
            exception_lineno = 31;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooo";
            exception_lineno = 31;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 31;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[5];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 31;
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
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_7;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_8;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_v);
        tmp_expression_value_3 = var_v;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_b1a617c8b50d09ba329b28324341948f->m_frame.f_lineno = 32;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[7]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_domain;
            var_domain = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_domain);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_domain);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_domain);
        tmp_expression_value_4 = var_domain;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_b1a617c8b50d09ba329b28324341948f->m_frame.f_lineno = 34;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[9]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_add_expr_left_1 = mod_consts[10];
        CHECK_OBJECT(var_domain);
        tmp_add_expr_right_1 = var_domain;
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_domain;
            assert(old != NULL);
            var_domain = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_11;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[6]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_domain == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = var_domain;
        frame_b1a617c8b50d09ba329b28324341948f->m_frame.f_lineno = 36;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[0]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[6]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_domain == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = var_domain;
        frame_b1a617c8b50d09ba329b28324341948f->m_frame.f_lineno = 36;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[2]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_b1a617c8b50d09ba329b28324341948f->m_frame.f_lineno = 36;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[3]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        condexpr_end_1:;
        {
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_cookie);
        tmp_expression_value_10 = var_cookie;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[13]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_simpleCookie == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = var_simpleCookie;
        frame_b1a617c8b50d09ba329b28324341948f->m_frame.f_lineno = 37;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_cookie);
        tmp_ass_subvalue_1 = var_cookie;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_11 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[0]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (var_domain == NULL) {
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_12 = var_domain;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[15]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_b1a617c8b50d09ba329b28324341948f->m_frame.f_lineno = 38;
        tmp_ass_subscript_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 31;
        type_description_1 = "ooooooo";
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
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b1a617c8b50d09ba329b28324341948f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1a617c8b50d09ba329b28324341948f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1a617c8b50d09ba329b28324341948f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1a617c8b50d09ba329b28324341948f,
        type_description_1,
        par_self,
        par_set_cookie,
        var_simpleCookie,
        var_k,
        var_v,
        var_domain,
        var_cookie
    );


    // Release cached frame if used for exception.
    if (frame_b1a617c8b50d09ba329b28324341948f == cache_frame_b1a617c8b50d09ba329b28324341948f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b1a617c8b50d09ba329b28324341948f);
        cache_frame_b1a617c8b50d09ba329b28324341948f = NULL;
    }

    assertFrameObject(frame_b1a617c8b50d09ba329b28324341948f);

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
    Py_XDECREF(var_simpleCookie);
    var_simpleCookie = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_domain);
    var_domain = NULL;
    Py_XDECREF(var_cookie);
    var_cookie = NULL;
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

    Py_XDECREF(var_simpleCookie);
    var_simpleCookie = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_domain);
    var_domain = NULL;
    Py_XDECREF(var_cookie);
    var_cookie = NULL;
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
    CHECK_OBJECT(par_set_cookie);
    Py_DECREF(par_set_cookie);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_set_cookie);
    Py_DECREF(par_set_cookie);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_cookiejar$$$function__3_set(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_set_cookie = python_pars[1];
    PyObject *var_simpleCookie = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *var_domain = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_64f48a1c2e19f41dea9937d573fe1f18;
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
    static struct Nuitka_FrameObject *cache_frame_64f48a1c2e19f41dea9937d573fe1f18 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_64f48a1c2e19f41dea9937d573fe1f18)) {
        Py_XDECREF(cache_frame_64f48a1c2e19f41dea9937d573fe1f18);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64f48a1c2e19f41dea9937d573fe1f18 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64f48a1c2e19f41dea9937d573fe1f18 = MAKE_FUNCTION_FRAME(codeobj_64f48a1c2e19f41dea9937d573fe1f18, module_websocket$_cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_64f48a1c2e19f41dea9937d573fe1f18->m_type_description == NULL);
    frame_64f48a1c2e19f41dea9937d573fe1f18 = cache_frame_64f48a1c2e19f41dea9937d573fe1f18;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_64f48a1c2e19f41dea9937d573fe1f18);
    assert(Py_REFCNT(frame_64f48a1c2e19f41dea9937d573fe1f18) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_set_cookie);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_set_cookie);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_set_cookie);
        tmp_args_element_value_1 = par_set_cookie;
        frame_64f48a1c2e19f41dea9937d573fe1f18->m_frame.f_lineno = 42;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_simpleCookie == NULL);
        var_simpleCookie = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_simpleCookie);
        tmp_expression_value_2 = var_simpleCookie;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_64f48a1c2e19f41dea9937d573fe1f18->m_frame.f_lineno = 44;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 44;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

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


            type_description_1 = "oooooo";
            exception_lineno = 44;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

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


            type_description_1 = "oooooo";
            exception_lineno = 44;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 44;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[5];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 44;
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
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_7;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_8;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_v);
        tmp_expression_value_3 = var_v;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_64f48a1c2e19f41dea9937d573fe1f18->m_frame.f_lineno = 45;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[7]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_domain;
            var_domain = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_domain);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_domain);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
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
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_domain);
        tmp_expression_value_4 = var_domain;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_64f48a1c2e19f41dea9937d573fe1f18->m_frame.f_lineno = 47;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[9]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_add_expr_left_1 = mod_consts[10];
        CHECK_OBJECT(var_domain);
        tmp_add_expr_right_1 = var_domain;
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_domain;
            assert(old != NULL);
            var_domain = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        if (var_simpleCookie == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subvalue_1 = var_simpleCookie;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (var_domain == NULL) {
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = var_domain;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[15]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 49;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_64f48a1c2e19f41dea9937d573fe1f18->m_frame.f_lineno = 49;
        tmp_ass_subscript_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 49;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 44;
        type_description_1 = "oooooo";
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
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_64f48a1c2e19f41dea9937d573fe1f18, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64f48a1c2e19f41dea9937d573fe1f18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64f48a1c2e19f41dea9937d573fe1f18, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64f48a1c2e19f41dea9937d573fe1f18,
        type_description_1,
        par_self,
        par_set_cookie,
        var_simpleCookie,
        var_k,
        var_v,
        var_domain
    );


    // Release cached frame if used for exception.
    if (frame_64f48a1c2e19f41dea9937d573fe1f18 == cache_frame_64f48a1c2e19f41dea9937d573fe1f18) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_64f48a1c2e19f41dea9937d573fe1f18);
        cache_frame_64f48a1c2e19f41dea9937d573fe1f18 = NULL;
    }

    assertFrameObject(frame_64f48a1c2e19f41dea9937d573fe1f18);

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
    Py_XDECREF(var_simpleCookie);
    var_simpleCookie = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_domain);
    var_domain = NULL;
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

    Py_XDECREF(var_simpleCookie);
    var_simpleCookie = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_domain);
    var_domain = NULL;
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
    CHECK_OBJECT(par_set_cookie);
    Py_DECREF(par_set_cookie);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_set_cookie);
    Py_DECREF(par_set_cookie);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_cookiejar$$$function__4_get(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *var_cookies = NULL;
    PyObject *var_domain = NULL;
    PyObject *var_simpleCookie = NULL;
    PyObject *outline_0_var_cookie = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__contraction_iter_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__iter_value_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c2055ed784d21fbd3ab7fca21168ad38;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_d1ed77c7279970d9fcad02bb534d98f2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_d1ed77c7279970d9fcad02bb534d98f2_2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_c2055ed784d21fbd3ab7fca21168ad38 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c2055ed784d21fbd3ab7fca21168ad38)) {
        Py_XDECREF(cache_frame_c2055ed784d21fbd3ab7fca21168ad38);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2055ed784d21fbd3ab7fca21168ad38 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2055ed784d21fbd3ab7fca21168ad38 = MAKE_FUNCTION_FRAME(codeobj_c2055ed784d21fbd3ab7fca21168ad38, module_websocket$_cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c2055ed784d21fbd3ab7fca21168ad38->m_type_description == NULL);
    frame_c2055ed784d21fbd3ab7fca21168ad38 = cache_frame_c2055ed784d21fbd3ab7fca21168ad38;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c2055ed784d21fbd3ab7fca21168ad38);
    assert(Py_REFCNT(frame_c2055ed784d21fbd3ab7fca21168ad38) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_host);
        tmp_operand_value_1 = par_host;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooo";
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
    tmp_return_value = mod_consts[16];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_cookies == NULL);
        var_cookies = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c2055ed784d21fbd3ab7fca21168ad38->m_frame.f_lineno = 56;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 56;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooo";
            exception_lineno = 56;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooo";
            exception_lineno = 56;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 56;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[5];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 56;
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
        {
            PyObject *old = var_domain;
            var_domain = tmp_assign_source_7;
            Py_INCREF(var_domain);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_simpleCookie;
            var_simpleCookie = tmp_assign_source_8;
            Py_INCREF(var_simpleCookie);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        if (par_host == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_host;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_c2055ed784d21fbd3ab7fca21168ad38->m_frame.f_lineno = 57;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_host;
            par_host = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_host);
        tmp_expression_value_4 = par_host;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_domain);
        tmp_args_element_value_1 = var_domain;
        frame_c2055ed784d21fbd3ab7fca21168ad38->m_frame.f_lineno = 58;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_host);
        tmp_cmp_expr_left_1 = par_host;
        CHECK_OBJECT(var_domain);
        tmp_expression_value_5 = var_domain;
        tmp_subscript_value_1 = mod_consts[19];
        tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        if (var_cookies == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = var_cookies;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[20]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[0]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[6]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_domain);
        tmp_args_element_value_3 = var_domain;
        frame_c2055ed784d21fbd3ab7fca21168ad38->m_frame.f_lineno = 59;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_c2055ed784d21fbd3ab7fca21168ad38->m_frame.f_lineno = 59;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 56;
        type_description_1 = "ooooo";
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
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_6;
        tmp_str_arg_value_1 = mod_consts[21];
        tmp_called_value_6 = (PyObject *)&PyFilter_Type;
        tmp_args_element_value_4 = Py_None;
        tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts[22]);
        assert(tmp_called_value_7 != NULL);
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            tmp_called_value_8 = (PyObject *)&PyFilter_Type;
            tmp_args_element_value_7 = Py_None;
            if (var_cookies == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }

            tmp_args_element_value_8 = var_cookies;
            frame_c2055ed784d21fbd3ab7fca21168ad38->m_frame.f_lineno = 63;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
            }

            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_11;
        }
        if (isFrameUnusable(cache_frame_d1ed77c7279970d9fcad02bb534d98f2_2)) {
            Py_XDECREF(cache_frame_d1ed77c7279970d9fcad02bb534d98f2_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d1ed77c7279970d9fcad02bb534d98f2_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d1ed77c7279970d9fcad02bb534d98f2_2 = MAKE_FUNCTION_FRAME(codeobj_d1ed77c7279970d9fcad02bb534d98f2, module_websocket$_cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_d1ed77c7279970d9fcad02bb534d98f2_2->m_type_description == NULL);
        frame_d1ed77c7279970d9fcad02bb534d98f2_2 = cache_frame_d1ed77c7279970d9fcad02bb534d98f2_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d1ed77c7279970d9fcad02bb534d98f2_2);
        assert(Py_REFCNT(frame_d1ed77c7279970d9fcad02bb534d98f2_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_12 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 63;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_1;
                tmp_listcomp_1__iter_value_1 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_1);
            tmp_assign_source_13 = tmp_listcomp_1__iter_value_1;
            {
                PyObject *old = outline_0_var_cookie;
                outline_0_var_cookie = tmp_assign_source_13;
                Py_INCREF(outline_0_var_cookie);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_9;
            CHECK_OBJECT(outline_0_var_cookie);
            tmp_expression_value_9 = outline_0_var_cookie;
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[4]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "ooo";
                goto try_except_handler_6;
            }
            frame_d1ed77c7279970d9fcad02bb534d98f2_2->m_frame.f_lineno = 63;
            tmp_iter_arg_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
            Py_DECREF(tmp_called_value_9);
            if (tmp_iter_arg_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "ooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_4);
            Py_DECREF(tmp_iter_arg_4);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "ooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp_1__contraction_iter_0;
                tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
            tmp_next_source_3 = tmp_listcomp_1__contraction_iter_0;
            tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_15 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 63;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_5 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "ooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
            if (tmp_assign_source_17 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 63;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
            if (tmp_assign_source_18 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 63;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                        type_description_2 = "ooo";
                        exception_lineno = 63;
                        goto try_except_handler_8;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[5];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 63;
                goto try_except_handler_8;
            }
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_7;
        // End of try:
        try_end_4:;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        try_end_5:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_19 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_19;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_20 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_20;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_mod_expr_left_1;
            PyObject *tmp_mod_expr_right_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mod_expr_left_1 = mod_consts[23];
            CHECK_OBJECT(outline_0_var_k);
            tmp_tuple_element_1 = outline_0_var_k;
            tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_10;
                PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(outline_0_var_v);
                tmp_expression_value_10 = outline_0_var_v;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[24]);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "ooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_mod_expr_right_1);
            goto try_except_handler_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_append_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            Py_DECREF(tmp_mod_expr_right_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "ooo";
                goto try_except_handler_6;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "ooo";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_1__contraction_iter_0);
        Py_DECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_6 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_6);
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
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__contraction_iter_0);
        tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_1);
        tmp_listcomp_1__iter_value_1 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d1ed77c7279970d9fcad02bb534d98f2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d1ed77c7279970d9fcad02bb534d98f2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d1ed77c7279970d9fcad02bb534d98f2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d1ed77c7279970d9fcad02bb534d98f2_2,
            type_description_2,
            outline_0_var_cookie,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame if used for exception.
        if (frame_d1ed77c7279970d9fcad02bb534d98f2_2 == cache_frame_d1ed77c7279970d9fcad02bb534d98f2_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_d1ed77c7279970d9fcad02bb534d98f2_2);
            cache_frame_d1ed77c7279970d9fcad02bb534d98f2_2 = NULL;
        }

        assertFrameObject(frame_d1ed77c7279970d9fcad02bb534d98f2_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_cookie);
        outline_0_var_cookie = NULL;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_cookie);
        outline_0_var_cookie = NULL;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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
        exception_lineno = 63;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_c2055ed784d21fbd3ab7fca21168ad38->m_frame.f_lineno = 62;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c2055ed784d21fbd3ab7fca21168ad38->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_c2055ed784d21fbd3ab7fca21168ad38, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2055ed784d21fbd3ab7fca21168ad38->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2055ed784d21fbd3ab7fca21168ad38, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2055ed784d21fbd3ab7fca21168ad38,
        type_description_1,
        par_self,
        par_host,
        var_cookies,
        var_domain,
        var_simpleCookie
    );


    // Release cached frame if used for exception.
    if (frame_c2055ed784d21fbd3ab7fca21168ad38 == cache_frame_c2055ed784d21fbd3ab7fca21168ad38) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c2055ed784d21fbd3ab7fca21168ad38);
        cache_frame_c2055ed784d21fbd3ab7fca21168ad38 = NULL;
    }

    assertFrameObject(frame_c2055ed784d21fbd3ab7fca21168ad38);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_host);
    par_host = NULL;
    Py_XDECREF(var_cookies);
    var_cookies = NULL;
    Py_XDECREF(var_domain);
    var_domain = NULL;
    Py_XDECREF(var_simpleCookie);
    var_simpleCookie = NULL;
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

    Py_XDECREF(par_host);
    par_host = NULL;
    Py_XDECREF(var_cookies);
    var_cookies = NULL;
    Py_XDECREF(var_domain);
    var_domain = NULL;
    Py_XDECREF(var_simpleCookie);
    var_simpleCookie = NULL;
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



static PyObject *MAKE_FUNCTION_websocket$_cookiejar$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_cookiejar$$$function__1___init__,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_e0b3cb8106b9c20547f97ba813cb0505,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_cookiejar$$$function__2_add(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_cookiejar$$$function__2_add,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[43],
#endif
        codeobj_b1a617c8b50d09ba329b28324341948f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_cookiejar$$$function__3_set(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_cookiejar$$$function__3_set,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_64f48a1c2e19f41dea9937d573fe1f18,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_cookiejar$$$function__4_get(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_cookiejar$$$function__4_get,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[47],
#endif
        codeobj_c2055ed784d21fbd3ab7fca21168ad38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_cookiejar,
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

function_impl_code functable_websocket$_cookiejar[] = {
    impl_websocket$_cookiejar$$$function__1___init__,
    impl_websocket$_cookiejar$$$function__2_add,
    impl_websocket$_cookiejar$$$function__3_set,
    impl_websocket$_cookiejar$$$function__4_get,
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

    function_impl_code *current = functable_websocket$_cookiejar;
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

    if (offset > sizeof(functable_websocket$_cookiejar) || offset < 0) {
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
        functable_websocket$_cookiejar[offset],
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
        module_websocket$_cookiejar,
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
PyObject *modulecode_websocket$_cookiejar(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websocket._cookiejar");

    // Store the module for future use.
    module_websocket$_cookiejar = module;

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
        PRINT_STRING("websocket._cookiejar: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._cookiejar: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._cookiejar: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwebsocket$_cookiejar\n");

    moduledict_websocket$_cookiejar = MODULE_DICT(module_websocket$_cookiejar);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websocket$_cookiejar,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websocket$_cookiejar,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[16]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websocket$_cookiejar,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_cookiejar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_cookiejar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websocket$_cookiejar);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_websocket$_cookiejar);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_69f90c05597d1b051b5b0448e8a5170f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_2);
    }
    frame_69f90c05597d1b051b5b0448e8a5170f = MAKE_MODULE_FRAME(codeobj_69f90c05597d1b051b5b0448e8a5170f, module_websocket$_cookiejar);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69f90c05597d1b051b5b0448e8a5170f);
    assert(Py_REFCNT(frame_69f90c05597d1b051b5b0448e8a5170f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[26];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[29], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[30], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[32];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_websocket$_cookiejar;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[33];
        frame_69f90c05597d1b051b5b0448e8a5170f->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[34];
        tmp_res = PyDict_SetItem(locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23, mod_consts[35], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyDict_SetItem(locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23, mod_consts[37], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[38]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_cookiejar$$$function__1___init__(tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[41]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_cookiejar$$$function__2_add(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23, mod_consts[42], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[41]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_cookiejar$$$function__3_set(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(mod_consts[46]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_cookiejar$$$function__4_get(tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[36];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[48];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_69f90c05597d1b051b5b0448e8a5170f->m_frame.f_lineno = 23;
            tmp_assign_source_8 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_8;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_7 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_7);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23);
        locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23 = NULL;
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

        Py_DECREF(locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23);
        locals_websocket$_cookiejar$$$class__1_SimpleCookieJar_23 = NULL;
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
        exception_lineno = 23;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_7);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69f90c05597d1b051b5b0448e8a5170f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69f90c05597d1b051b5b0448e8a5170f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69f90c05597d1b051b5b0448e8a5170f, exception_lineno);
    }



    assertFrameObject(frame_69f90c05597d1b051b5b0448e8a5170f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websocket._cookiejar", false);

    Py_INCREF(module_websocket$_cookiejar);
    return module_websocket$_cookiejar;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_cookiejar, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("websocket$_cookiejar", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
