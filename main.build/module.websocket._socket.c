/* Generated code for Python module 'websocket._socket'
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

/* The "module_websocket$_socket" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websocket$_socket;
PyDictObject *moduledict_websocket$_socket;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[104];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[104];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("websocket._socket"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 104; i++) {
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
void checkModuleConstants_websocket$_socket(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 104; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bf83347398860ace0d6546753b3d855e;
static PyCodeObject *codeobj_5ccedb41711fc047489364d92415f9b9;
static PyCodeObject *codeobj_e71f2c30bde6a17ee36aa543475517e3;
static PyCodeObject *codeobj_f5a42063d4d23094e21df87a42630634;
static PyCodeObject *codeobj_b61d494ccc34a9715f04c8e3a9c96407;
static PyCodeObject *codeobj_a4b96ac9766d79575f5fbf90af0fd4d5;
static PyCodeObject *codeobj_efb3c6bbc241513d2a9ae58f26ede821;
static PyCodeObject *codeobj_093e2166373a48691ddae98cbde4fef7;
static PyCodeObject *codeobj_338aa6acd29da52ccf4efb00985596e8;
static PyCodeObject *codeobj_6b72a0a04f19b3f77df2d504df49e85b;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[52]; CHECK_OBJECT(module_filename_obj);
    codeobj_bf83347398860ace0d6546753b3d855e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[92], mod_consts[92], NULL, NULL, 0, 0, 0);
    codeobj_5ccedb41711fc047489364d92415f9b9 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[93], NULL, 3, 0, 0);
    codeobj_e71f2c30bde6a17ee36aa543475517e3 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[8], mod_consts[8], mod_consts[94], mod_consts[95], 0, 0, 0);
    codeobj_f5a42063d4d23094e21df87a42630634 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[96], mod_consts[97], 0, 0, 0);
    codeobj_b61d494ccc34a9715f04c8e3a9c96407 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], NULL, NULL, 0, 0, 0);
    codeobj_a4b96ac9766d79575f5fbf90af0fd4d5 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[98], NULL, 2, 0, 0);
    codeobj_efb3c6bbc241513d2a9ae58f26ede821 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[99], NULL, 1, 0, 0);
    codeobj_093e2166373a48691ddae98cbde4fef7 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[100], NULL, 2, 0, 0);
    codeobj_338aa6acd29da52ccf4efb00985596e8 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[101], NULL, 1, 0, 0);
    codeobj_6b72a0a04f19b3f77df2d504df49e85b = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[102], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__2_setdefaulttimeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__3_getdefaulttimeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__4_recv(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__4_recv$$$function__1__recv(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__5_recv_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__6_send(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__6_send$$$function__1__send(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_websocket$_socket$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sockopt = python_pars[1];
    PyObject *par_sslopt = python_pars[2];
    struct Nuitka_FrameObject *frame_5ccedb41711fc047489364d92415f9b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5ccedb41711fc047489364d92415f9b9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_sockopt);
        tmp_cmp_expr_left_1 = par_sockopt;
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
            PyObject *old = par_sockopt;
            assert(old != NULL);
            par_sockopt = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_sslopt);
        tmp_cmp_expr_left_2 = par_sslopt;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_DICT_EMPTY();
        {
            PyObject *old = par_sslopt;
            assert(old != NULL);
            par_sslopt = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    // Tried code:
    if (isFrameUnusable(cache_frame_5ccedb41711fc047489364d92415f9b9)) {
        Py_XDECREF(cache_frame_5ccedb41711fc047489364d92415f9b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ccedb41711fc047489364d92415f9b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ccedb41711fc047489364d92415f9b9 = MAKE_FUNCTION_FRAME(codeobj_5ccedb41711fc047489364d92415f9b9, module_websocket$_socket, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5ccedb41711fc047489364d92415f9b9->m_type_description == NULL);
    frame_5ccedb41711fc047489364d92415f9b9 = cache_frame_5ccedb41711fc047489364d92415f9b9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5ccedb41711fc047489364d92415f9b9);
    assert(Py_REFCNT(frame_5ccedb41711fc047489364d92415f9b9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_sockopt);
        tmp_assattr_value_1 = par_sockopt;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_sslopt);
        tmp_assattr_value_2 = par_sslopt;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5ccedb41711fc047489364d92415f9b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ccedb41711fc047489364d92415f9b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ccedb41711fc047489364d92415f9b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ccedb41711fc047489364d92415f9b9,
        type_description_1,
        par_self,
        par_sockopt,
        par_sslopt
    );


    // Release cached frame if used for exception.
    if (frame_5ccedb41711fc047489364d92415f9b9 == cache_frame_5ccedb41711fc047489364d92415f9b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5ccedb41711fc047489364d92415f9b9);
        cache_frame_5ccedb41711fc047489364d92415f9b9 = NULL;
    }

    assertFrameObject(frame_5ccedb41711fc047489364d92415f9b9);

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
    CHECK_OBJECT(par_sockopt);
    Py_DECREF(par_sockopt);
    par_sockopt = NULL;
    CHECK_OBJECT(par_sslopt);
    Py_DECREF(par_sslopt);
    par_sslopt = NULL;
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

    CHECK_OBJECT(par_sockopt);
    Py_DECREF(par_sockopt);
    par_sockopt = NULL;
    CHECK_OBJECT(par_sslopt);
    Py_DECREF(par_sslopt);
    par_sslopt = NULL;
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


static PyObject *impl_websocket$_socket$$$function__2_setdefaulttimeout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_timeout = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_timeout);
        tmp_assign_source_1 = par_timeout;
        UPDATE_STRING_DICT0(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_socket$$$function__3_getdefaulttimeout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b61d494ccc34a9715f04c8e3a9c96407;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b61d494ccc34a9715f04c8e3a9c96407 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b61d494ccc34a9715f04c8e3a9c96407)) {
        Py_XDECREF(cache_frame_b61d494ccc34a9715f04c8e3a9c96407);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b61d494ccc34a9715f04c8e3a9c96407 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b61d494ccc34a9715f04c8e3a9c96407 = MAKE_FUNCTION_FRAME(codeobj_b61d494ccc34a9715f04c8e3a9c96407, module_websocket$_socket, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b61d494ccc34a9715f04c8e3a9c96407->m_type_description == NULL);
    frame_b61d494ccc34a9715f04c8e3a9c96407 = cache_frame_b61d494ccc34a9715f04c8e3a9c96407;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b61d494ccc34a9715f04c8e3a9c96407);
    assert(Py_REFCNT(frame_b61d494ccc34a9715f04c8e3a9c96407) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[3]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 78;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b61d494ccc34a9715f04c8e3a9c96407, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b61d494ccc34a9715f04c8e3a9c96407->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b61d494ccc34a9715f04c8e3a9c96407, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b61d494ccc34a9715f04c8e3a9c96407,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b61d494ccc34a9715f04c8e3a9c96407 == cache_frame_b61d494ccc34a9715f04c8e3a9c96407) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b61d494ccc34a9715f04c8e3a9c96407);
        cache_frame_b61d494ccc34a9715f04c8e3a9c96407 = NULL;
    }

    assertFrameObject(frame_b61d494ccc34a9715f04c8e3a9c96407);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_websocket$_socket$$$function__4_recv(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_sock = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_bufsize = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var__recv = NULL;
    PyObject *var_bytes_ = NULL;
    PyObject *var_e = NULL;
    PyObject *var_message = NULL;
    struct Nuitka_FrameObject *frame_a4b96ac9766d79575f5fbf90af0fd4d5;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_a4b96ac9766d79575f5fbf90af0fd4d5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a4b96ac9766d79575f5fbf90af0fd4d5)) {
        Py_XDECREF(cache_frame_a4b96ac9766d79575f5fbf90af0fd4d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4b96ac9766d79575f5fbf90af0fd4d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4b96ac9766d79575f5fbf90af0fd4d5 = MAKE_FUNCTION_FRAME(codeobj_a4b96ac9766d79575f5fbf90af0fd4d5, module_websocket$_socket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_type_description == NULL);
    frame_a4b96ac9766d79575f5fbf90af0fd4d5 = cache_frame_a4b96ac9766d79575f5fbf90af0fd4d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a4b96ac9766d79575f5fbf90af0fd4d5);
    assert(Py_REFCNT(frame_a4b96ac9766d79575f5fbf90af0fd4d5) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_sock));
        tmp_operand_value_1 = Nuitka_Cell_GET(par_sock);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ccoooo";
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
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = 83;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[7]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 83;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccoooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_bufsize;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_sock;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_websocket$_socket$$$function__4_recv$$$function__1__recv(tmp_closure_1);

        assert(var__recv == NULL);
        var__recv = tmp_assign_source_1;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_sock));
        tmp_called_instance_1 = Nuitka_Cell_GET(par_sock);
        frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = 105;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[11];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ccoooo";
            goto try_except_handler_2;
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_sock));
        tmp_called_instance_2 = Nuitka_Cell_GET(par_sock);
        CHECK_OBJECT(Nuitka_Cell_GET(par_bufsize));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_bufsize);
        frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = 106;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[12], tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        assert(var_bytes_ == NULL);
        var_bytes_ = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(var__recv);
        tmp_called_value_2 = var__recv;
        frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = 108;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        assert(var_bytes_ == NULL);
        var_bytes_ = tmp_assign_source_3;
    }
    branch_end_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a4b96ac9766d79575f5fbf90af0fd4d5, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a4b96ac9766d79575f5fbf90af0fd4d5, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ccoooo";
            goto try_except_handler_3;
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = 110;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[15]);

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 110;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccoooo";
        goto try_except_handler_3;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_e = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ccoooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_e);
        tmp_args_element_value_2 = var_e;
        frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = 112;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ccoooo";
            goto try_except_handler_4;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_5;
    }
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ccoooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_message);
        tmp_args_element_value_3 = var_message;
        frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = 113;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ccoooo";
            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 113;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccoooo";
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_e = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_e);
        tmp_args_element_value_4 = var_e;
        frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = 115;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_message);
        tmp_args_element_value_5 = var_message;
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 116;
            type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_5 = mod_consts[21];
        CHECK_OBJECT(var_message);
        tmp_cmp_expr_right_5 = var_message;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_message);
        tmp_args_element_value_7 = var_message;
        frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = 117;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_4;
        exception_lineno = 117;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccoooo";
        goto try_except_handler_5;
    }
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 119;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame) frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccoooo";
    goto try_except_handler_5;
    branch_end_6:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 104;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame) frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccoooo";
    goto try_except_handler_3;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_bytes_);
        tmp_operand_value_2 = var_bytes_;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame.f_lineno = 122;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[22]);

        if (tmp_raise_type_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_5;
        exception_lineno = 122;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccoooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a4b96ac9766d79575f5fbf90af0fd4d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4b96ac9766d79575f5fbf90af0fd4d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4b96ac9766d79575f5fbf90af0fd4d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4b96ac9766d79575f5fbf90af0fd4d5,
        type_description_1,
        par_sock,
        par_bufsize,
        var__recv,
        var_bytes_,
        var_e,
        var_message
    );


    // Release cached frame if used for exception.
    if (frame_a4b96ac9766d79575f5fbf90af0fd4d5 == cache_frame_a4b96ac9766d79575f5fbf90af0fd4d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a4b96ac9766d79575f5fbf90af0fd4d5);
        cache_frame_a4b96ac9766d79575f5fbf90af0fd4d5 = NULL;
    }

    assertFrameObject(frame_a4b96ac9766d79575f5fbf90af0fd4d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_bytes_);
    tmp_return_value = var_bytes_;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var__recv);
    var__recv = NULL;
    CHECK_OBJECT(var_bytes_);
    Py_DECREF(var_bytes_);
    var_bytes_ = NULL;
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

    Py_XDECREF(var__recv);
    var__recv = NULL;
    Py_XDECREF(var_bytes_);
    var_bytes_ = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
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
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_bufsize);
    Py_DECREF(par_bufsize);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_bufsize);
    Py_DECREF(par_bufsize);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_socket$$$function__4_recv$$$function__1__recv(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_exc = NULL;
    PyObject *var_error_code = NULL;
    PyObject *var_sel = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_e71f2c30bde6a17ee36aa543475517e3;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e71f2c30bde6a17ee36aa543475517e3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e71f2c30bde6a17ee36aa543475517e3)) {
        Py_XDECREF(cache_frame_e71f2c30bde6a17ee36aa543475517e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e71f2c30bde6a17ee36aa543475517e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e71f2c30bde6a17ee36aa543475517e3 = MAKE_FUNCTION_FRAME(codeobj_e71f2c30bde6a17ee36aa543475517e3, module_websocket$_socket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e71f2c30bde6a17ee36aa543475517e3->m_type_description == NULL);
    frame_e71f2c30bde6a17ee36aa543475517e3 = cache_frame_e71f2c30bde6a17ee36aa543475517e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e71f2c30bde6a17ee36aa543475517e3);
    assert(Py_REFCNT(frame_e71f2c30bde6a17ee36aa543475517e3) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_e71f2c30bde6a17ee36aa543475517e3->m_frame.f_lineno = 87;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooocc";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e71f2c30bde6a17ee36aa543475517e3, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e71f2c30bde6a17ee36aa543475517e3, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_exc == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_exc = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_exc);
        tmp_args_element_value_2 = var_exc;
        frame_e71f2c30bde6a17ee36aa543475517e3->m_frame.f_lineno = 91;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        assert(var_error_code == NULL);
        var_error_code = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_error_code);
        tmp_cmp_expr_left_3 = var_error_code;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[29]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_error_code);
        tmp_cmp_expr_left_4 = var_error_code;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
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
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 93;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e71f2c30bde6a17ee36aa543475517e3->m_frame) frame_e71f2c30bde6a17ee36aa543475517e3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooocc";
    goto try_except_handler_4;
    branch_no_3:;
    goto try_end_1;
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
    try_end_1:;
    Py_XDECREF(var_exc);
    var_exc = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 86;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e71f2c30bde6a17ee36aa543475517e3->m_frame) frame_e71f2c30bde6a17ee36aa543475517e3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooocc";
    goto try_except_handler_3;
    branch_end_2:;
    branch_no_1:;
    goto try_end_2;
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
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_e71f2c30bde6a17ee36aa543475517e3->m_frame.f_lineno = 95;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_sel == NULL);
        var_sel = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_sel);
        tmp_expression_value_5 = var_sel;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[33]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 96;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[34]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 96;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_e71f2c30bde6a17ee36aa543475517e3->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_sel);
        tmp_expression_value_7 = var_sel;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[35]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_e71f2c30bde6a17ee36aa543475517e3->m_frame.f_lineno = 98;
        tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[10]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 98;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_e71f2c30bde6a17ee36aa543475517e3->m_frame.f_lineno = 98;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_sel);
        tmp_called_instance_3 = var_sel;
        frame_e71f2c30bde6a17ee36aa543475517e3->m_frame.f_lineno = 99;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[36]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_r);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_r);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_6;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[12]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_e71f2c30bde6a17ee36aa543475517e3->m_frame.f_lineno = 102;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e71f2c30bde6a17ee36aa543475517e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e71f2c30bde6a17ee36aa543475517e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e71f2c30bde6a17ee36aa543475517e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e71f2c30bde6a17ee36aa543475517e3,
        type_description_1,
        var_exc,
        var_error_code,
        var_sel,
        var_r,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e71f2c30bde6a17ee36aa543475517e3 == cache_frame_e71f2c30bde6a17ee36aa543475517e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e71f2c30bde6a17ee36aa543475517e3);
        cache_frame_e71f2c30bde6a17ee36aa543475517e3 = NULL;
    }

    assertFrameObject(frame_e71f2c30bde6a17ee36aa543475517e3);

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
    Py_XDECREF(var_error_code);
    var_error_code = NULL;
    Py_XDECREF(var_sel);
    var_sel = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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

    Py_XDECREF(var_error_code);
    var_error_code = NULL;
    Py_XDECREF(var_sel);
    var_sel = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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


static PyObject *impl_websocket$_socket$$$function__5_recv_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[0];
    PyObject *var_line = NULL;
    PyObject *var_c = NULL;
    struct Nuitka_FrameObject *frame_efb3c6bbc241513d2a9ae58f26ede821;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_efb3c6bbc241513d2a9ae58f26ede821 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_line == NULL);
        var_line = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_efb3c6bbc241513d2a9ae58f26ede821)) {
        Py_XDECREF(cache_frame_efb3c6bbc241513d2a9ae58f26ede821);

#if _DEBUG_REFCOUNTS
        if (cache_frame_efb3c6bbc241513d2a9ae58f26ede821 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_efb3c6bbc241513d2a9ae58f26ede821 = MAKE_FUNCTION_FRAME(codeobj_efb3c6bbc241513d2a9ae58f26ede821, module_websocket$_socket, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_efb3c6bbc241513d2a9ae58f26ede821->m_type_description == NULL);
    frame_efb3c6bbc241513d2a9ae58f26ede821 = cache_frame_efb3c6bbc241513d2a9ae58f26ede821;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_efb3c6bbc241513d2a9ae58f26ede821);
    assert(Py_REFCNT(frame_efb3c6bbc241513d2a9ae58f26ede821) == 2);

    // Framed code:
    loop_start_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_sock == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_sock;
        tmp_args_element_value_2 = mod_consts[37];
        frame_efb3c6bbc241513d2a9ae58f26ede821->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        if (var_line == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = var_line;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_c);
        tmp_args_element_value_3 = var_c;
        frame_efb3c6bbc241513d2a9ae58f26ede821->m_frame.f_lineno = 132;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_c);
        tmp_cmp_expr_left_1 = var_c;
        tmp_cmp_expr_right_1 = mod_consts[40];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 130;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_bytes_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_bytes_arg_value_1 = mod_consts[41];
        if (var_line == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_line;
        tmp_return_value = BYTES_JOIN(tmp_bytes_arg_value_1, tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
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
        exception_tb = MAKE_TRACEBACK(frame_efb3c6bbc241513d2a9ae58f26ede821, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_efb3c6bbc241513d2a9ae58f26ede821->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_efb3c6bbc241513d2a9ae58f26ede821, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_efb3c6bbc241513d2a9ae58f26ede821,
        type_description_1,
        par_sock,
        var_line,
        var_c
    );


    // Release cached frame if used for exception.
    if (frame_efb3c6bbc241513d2a9ae58f26ede821 == cache_frame_efb3c6bbc241513d2a9ae58f26ede821) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_efb3c6bbc241513d2a9ae58f26ede821);
        cache_frame_efb3c6bbc241513d2a9ae58f26ede821 = NULL;
    }

    assertFrameObject(frame_efb3c6bbc241513d2a9ae58f26ede821);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_line);
    var_line = NULL;
    CHECK_OBJECT(var_c);
    Py_DECREF(var_c);
    var_c = NULL;
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

    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
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
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_socket$$$function__6_send(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_sock = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var__send = NULL;
    PyObject *var_e = NULL;
    PyObject *var_message = NULL;
    struct Nuitka_FrameObject *frame_093e2166373a48691ddae98cbde4fef7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_093e2166373a48691ddae98cbde4fef7 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_093e2166373a48691ddae98cbde4fef7)) {
        Py_XDECREF(cache_frame_093e2166373a48691ddae98cbde4fef7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_093e2166373a48691ddae98cbde4fef7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_093e2166373a48691ddae98cbde4fef7 = MAKE_FUNCTION_FRAME(codeobj_093e2166373a48691ddae98cbde4fef7, module_websocket$_socket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_093e2166373a48691ddae98cbde4fef7->m_type_description == NULL);
    frame_093e2166373a48691ddae98cbde4fef7 = cache_frame_093e2166373a48691ddae98cbde4fef7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_093e2166373a48691ddae98cbde4fef7);
    assert(Py_REFCNT(frame_093e2166373a48691ddae98cbde4fef7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_data));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_data);
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 139;
            type_description_1 = "ccooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_data));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_data);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = 140;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[43]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_data);
            PyCell_SET(par_data, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_sock));
        tmp_operand_value_1 = Nuitka_Cell_GET(par_sock);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ccooo";
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
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = 143;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[7]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 143;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_data;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_sock;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_2 = MAKE_FUNCTION_websocket$_socket$$$function__6_send$$$function__1__send(tmp_closure_1);

        assert(var__send == NULL);
        var__send = tmp_assign_source_2;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_sock));
        tmp_called_instance_1 = Nuitka_Cell_GET(par_sock);
        frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = 167;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[11];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_sock));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_sock);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[46]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(par_data) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ccooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(par_data);
        frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = 168;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_5;
        CHECK_OBJECT(var__send);
        tmp_called_value_5 = var__send;
        frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = 170;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    branch_end_3:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_093e2166373a48691ddae98cbde4fef7, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_093e2166373a48691ddae98cbde4fef7, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ccooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ccooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ccooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_e = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_e);
        tmp_args_element_value_4 = var_e;
        frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = 172;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_4;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_message);
        tmp_args_element_value_5 = var_message;
        frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = 173;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ccooo";
            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 173;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccooo";
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ccooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ccooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_e = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_e);
        tmp_args_element_value_6 = var_e;
        frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = 175;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        int tmp_truth_name_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_message);
        tmp_args_element_value_7 = var_message;
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 176;
            type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_4 = mod_consts[21];
        CHECK_OBJECT(var_message);
        tmp_cmp_expr_right_4 = var_message;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_message);
        tmp_args_element_value_9 = var_message;
        frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = 177;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ccooo";
            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 177;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccooo";
        goto try_except_handler_5;
    }
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 179;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_093e2166373a48691ddae98cbde4fef7->m_frame) frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccooo";
    goto try_except_handler_5;
    branch_end_6:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 166;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_093e2166373a48691ddae98cbde4fef7->m_frame) frame_093e2166373a48691ddae98cbde4fef7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccooo";
    goto try_except_handler_3;
    branch_end_5:;
    branch_end_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_093e2166373a48691ddae98cbde4fef7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_093e2166373a48691ddae98cbde4fef7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_093e2166373a48691ddae98cbde4fef7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_093e2166373a48691ddae98cbde4fef7,
        type_description_1,
        par_sock,
        par_data,
        var__send,
        var_e,
        var_message
    );


    // Release cached frame if used for exception.
    if (frame_093e2166373a48691ddae98cbde4fef7 == cache_frame_093e2166373a48691ddae98cbde4fef7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_093e2166373a48691ddae98cbde4fef7);
        cache_frame_093e2166373a48691ddae98cbde4fef7 = NULL;
    }

    assertFrameObject(frame_093e2166373a48691ddae98cbde4fef7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    Py_XDECREF(var__send);
    var__send = NULL;
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

    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    Py_XDECREF(var__send);
    var__send = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
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
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_socket$$$function__6_send$$$function__1__send(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_exc = NULL;
    PyObject *var_error_code = NULL;
    PyObject *var_sel = NULL;
    PyObject *var_w = NULL;
    struct Nuitka_FrameObject *frame_f5a42063d4d23094e21df87a42630634;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f5a42063d4d23094e21df87a42630634 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f5a42063d4d23094e21df87a42630634)) {
        Py_XDECREF(cache_frame_f5a42063d4d23094e21df87a42630634);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f5a42063d4d23094e21df87a42630634 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f5a42063d4d23094e21df87a42630634 = MAKE_FUNCTION_FRAME(codeobj_f5a42063d4d23094e21df87a42630634, module_websocket$_socket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f5a42063d4d23094e21df87a42630634->m_type_description == NULL);
    frame_f5a42063d4d23094e21df87a42630634 = cache_frame_f5a42063d4d23094e21df87a42630634;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f5a42063d4d23094e21df87a42630634);
    assert(Py_REFCNT(frame_f5a42063d4d23094e21df87a42630634) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_f5a42063d4d23094e21df87a42630634->m_frame.f_lineno = 147;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooocc";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f5a42063d4d23094e21df87a42630634, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f5a42063d4d23094e21df87a42630634, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_exc == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_exc = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_exc);
        tmp_args_element_value_2 = var_exc;
        frame_f5a42063d4d23094e21df87a42630634->m_frame.f_lineno = 151;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        assert(var_error_code == NULL);
        var_error_code = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_error_code);
        tmp_cmp_expr_left_3 = var_error_code;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 153;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f5a42063d4d23094e21df87a42630634->m_frame) frame_f5a42063d4d23094e21df87a42630634->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooocc";
    goto try_except_handler_4;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_error_code);
        tmp_cmp_expr_left_4 = var_error_code;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[29]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_error_code);
        tmp_cmp_expr_left_5 = var_error_code;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooocc";
            goto try_except_handler_4;
        }
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
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 155;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f5a42063d4d23094e21df87a42630634->m_frame) frame_f5a42063d4d23094e21df87a42630634->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooocc";
    goto try_except_handler_4;
    branch_no_4:;
    goto try_end_1;
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
    try_end_1:;
    Py_XDECREF(var_exc);
    var_exc = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 146;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f5a42063d4d23094e21df87a42630634->m_frame) frame_f5a42063d4d23094e21df87a42630634->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooocc";
    goto try_except_handler_3;
    branch_end_2:;
    branch_no_1:;
    goto try_end_2;
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
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_f5a42063d4d23094e21df87a42630634->m_frame.f_lineno = 157;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_sel == NULL);
        var_sel = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_sel);
        tmp_expression_value_5 = var_sel;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[33]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 158;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[50]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 158;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_f5a42063d4d23094e21df87a42630634->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_sel);
        tmp_expression_value_7 = var_sel;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[35]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 160;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_f5a42063d4d23094e21df87a42630634->m_frame.f_lineno = 160;
        tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[10]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 160;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_f5a42063d4d23094e21df87a42630634->m_frame.f_lineno = 160;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_w == NULL);
        var_w = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_sel);
        tmp_called_instance_3 = var_sel;
        frame_f5a42063d4d23094e21df87a42630634->m_frame.f_lineno = 161;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[36]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_w);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_w);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_6;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[46]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_f5a42063d4d23094e21df87a42630634->m_frame.f_lineno = 164;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f5a42063d4d23094e21df87a42630634, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5a42063d4d23094e21df87a42630634->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5a42063d4d23094e21df87a42630634, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f5a42063d4d23094e21df87a42630634,
        type_description_1,
        var_exc,
        var_error_code,
        var_sel,
        var_w,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f5a42063d4d23094e21df87a42630634 == cache_frame_f5a42063d4d23094e21df87a42630634) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f5a42063d4d23094e21df87a42630634);
        cache_frame_f5a42063d4d23094e21df87a42630634 = NULL;
    }

    assertFrameObject(frame_f5a42063d4d23094e21df87a42630634);

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
    Py_XDECREF(var_error_code);
    var_error_code = NULL;
    Py_XDECREF(var_sel);
    var_sel = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
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

    Py_XDECREF(var_error_code);
    var_error_code = NULL;
    Py_XDECREF(var_sel);
    var_sel = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
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



static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_socket$$$function__1___init__,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_5ccedb41711fc047489364d92415f9b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__2_setdefaulttimeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_socket$$$function__2_setdefaulttimeout,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_338aa6acd29da52ccf4efb00985596e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_socket,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__3_getdefaulttimeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_socket$$$function__3_getdefaulttimeout,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b61d494ccc34a9715f04c8e3a9c96407,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_socket,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__4_recv(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_socket$$$function__4_recv,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a4b96ac9766d79575f5fbf90af0fd4d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__4_recv$$$function__1__recv(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_socket$$$function__4_recv$$$function__1__recv,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[9],
#endif
        codeobj_e71f2c30bde6a17ee36aa543475517e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_websocket$_socket,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__5_recv_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_socket$$$function__5_recv_line,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_efb3c6bbc241513d2a9ae58f26ede821,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__6_send(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_socket$$$function__6_send,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_093e2166373a48691ddae98cbde4fef7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_socket$$$function__6_send$$$function__1__send(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_socket$$$function__6_send$$$function__1__send,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_f5a42063d4d23094e21df87a42630634,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_websocket$_socket,
        NULL,
        closure,
        2
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

function_impl_code functable_websocket$_socket[] = {
    impl_websocket$_socket$$$function__4_recv$$$function__1__recv,
    impl_websocket$_socket$$$function__6_send$$$function__1__send,
    impl_websocket$_socket$$$function__1___init__,
    impl_websocket$_socket$$$function__2_setdefaulttimeout,
    impl_websocket$_socket$$$function__3_getdefaulttimeout,
    impl_websocket$_socket$$$function__4_recv,
    impl_websocket$_socket$$$function__5_recv_line,
    impl_websocket$_socket$$$function__6_send,
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

    function_impl_code *current = functable_websocket$_socket;
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

    if (offset > sizeof(functable_websocket$_socket) || offset < 0) {
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
        functable_websocket$_socket[offset],
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
        module_websocket$_socket,
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
PyObject *modulecode_websocket$_socket(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websocket._socket");

    // Store the module for future use.
    module_websocket$_socket = module;

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
        PRINT_STRING("websocket._socket: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._socket: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._socket: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwebsocket$_socket\n");

    moduledict_websocket$_socket = MODULE_DICT(module_websocket$_socket);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websocket$_socket,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websocket$_socket,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[103]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websocket$_socket,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_socket,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_socket,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websocket$_socket);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websocket$_socket, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_websocket$_socket, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websocket$_socket, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_websocket$_socket);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_bf83347398860ace0d6546753b3d855e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_websocket$_socket$$$class__1_sock_opt_44 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_6b72a0a04f19b3f77df2d504df49e85b_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_2);
    }
    frame_bf83347398860ace0d6546753b3d855e = MAKE_MODULE_FRAME(codeobj_bf83347398860ace0d6546753b3d855e, module_websocket$_socket);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf83347398860ace0d6546753b3d855e);
    assert(Py_REFCNT(frame_bf83347398860ace0d6546753b3d855e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[52];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[55], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[56], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[28];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_websocket$_socket;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[11];
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[31];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_websocket$_socket;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[11];
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[16];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_websocket$_socket;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[11];
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_6);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[58];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_websocket$_socket;
        tmp_locals_arg_value_4 = (PyObject *)moduledict_websocket$_socket;
        tmp_fromlist_value_4 = mod_consts[59];
        tmp_level_value_4 = mod_consts[37];
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 5;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_websocket$_socket, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[60];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_websocket$_socket;
        tmp_locals_arg_value_5 = (PyObject *)moduledict_websocket$_socket;
        tmp_fromlist_value_5 = mod_consts[59];
        tmp_level_value_5 = mod_consts[37];
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 6;
        tmp_star_imported_2 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_star_imported_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_websocket$_socket, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_3;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[61];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_websocket$_socket;
        tmp_locals_arg_value_6 = (PyObject *)moduledict_websocket$_socket;
        tmp_fromlist_value_6 = mod_consts[59];
        tmp_level_value_6 = mod_consts[37];
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 7;
        tmp_star_imported_3 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_star_imported_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_websocket$_socket, true, tmp_star_imported_3);
        Py_DECREF(tmp_star_imported_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[62]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[37];
            PyTuple_SET_ITEM0(tmp_list_element_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_7 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_7, 0, tmp_list_element_1);
        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_7);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[66];
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 29;

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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[67]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM(tmp_args_element_value_3, 0, tmp_tuple_element_2);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[66]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_3, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[37];
            PyTuple_SET_ITEM0(tmp_args_element_value_3, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 30;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        int tmp_truth_name_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[68];
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
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
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[39]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[62]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_8;
            PyTuple_SET_ITEM(tmp_args_element_value_6, 0, tmp_tuple_element_3);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[68]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_6, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[69];
            PyTuple_SET_ITEM0(tmp_args_element_value_6, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 32;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        int tmp_truth_name_3;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[70];
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[39]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[62]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_11;
            PyTuple_SET_ITEM(tmp_args_element_value_9, 0, tmp_tuple_element_4);
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[70]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_9, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[71];
            PyTuple_SET_ITEM0(tmp_args_element_value_9, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 34;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        int tmp_truth_name_4;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[72];
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_7);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_7);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_7);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[39]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[62]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_14;
            PyTuple_SET_ITEM(tmp_args_element_value_12, 0, tmp_tuple_element_5);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[72]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_12, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[73];
            PyTuple_SET_ITEM0(tmp_args_element_value_12, 2, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 36;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        UPDATE_STRING_DICT0(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_LIST7(mod_consts[74]);
        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_websocket$_socket$$$class__1_sock_opt_44 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyDict_SetItem(locals_websocket$_socket$$$class__1_sock_opt_44, mod_consts[77], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyDict_SetItem(locals_websocket$_socket$$$class__1_sock_opt_44, mod_consts[79], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_6b72a0a04f19b3f77df2d504df49e85b_2 = MAKE_CLASS_FRAME(codeobj_6b72a0a04f19b3f77df2d504df49e85b, module_websocket$_socket, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6b72a0a04f19b3f77df2d504df49e85b_2);
        assert(Py_REFCNT(frame_6b72a0a04f19b3f77df2d504df49e85b_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_key_1 = mod_consts[0];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[1];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[81]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[82];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_socket$$$function__1___init__(tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_websocket$_socket$$$class__1_sock_opt_44, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6b72a0a04f19b3f77df2d504df49e85b_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6b72a0a04f19b3f77df2d504df49e85b_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6b72a0a04f19b3f77df2d504df49e85b_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6b72a0a04f19b3f77df2d504df49e85b_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_6b72a0a04f19b3f77df2d504df49e85b_2);

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
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_9 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[78];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[85];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_websocket$_socket$$$class__1_sock_opt_44;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_bf83347398860ace0d6546753b3d855e->m_frame.f_lineno = 44;
            tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_13;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_12 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_websocket$_socket$$$class__1_sock_opt_44);
        locals_websocket$_socket$$$class__1_sock_opt_44 = NULL;
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

        Py_DECREF(locals_websocket$_socket$$$class__1_sock_opt_44);
        locals_websocket$_socket$$$class__1_sock_opt_44 = NULL;
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
        exception_lineno = 44;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_12);
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
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        tmp_dict_key_2 = mod_consts[2];
        tmp_or_left_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_or_left_value_1 == NULL)) {
            tmp_or_left_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_or_right_value_1 == NULL)) {
            tmp_or_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_dict_value_2 = tmp_or_left_value_1;
        or_end_1:;
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[82];
        tmp_dict_value_2 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_14 = MAKE_FUNCTION_websocket$_socket$$$function__2_setdefaulttimeout(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        tmp_dict_key_3 = mod_consts[82];
        tmp_or_left_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_or_left_value_2 == NULL)) {
            tmp_or_left_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_or_right_value_2 == NULL)) {
            tmp_or_right_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_dict_value_3 = tmp_or_left_value_2;
        or_end_2:;
        tmp_annotations_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));


        tmp_assign_source_15 = MAKE_FUNCTION_websocket$_socket$$$function__3_getdefaulttimeout(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_15;
        tmp_dict_key_4 = mod_consts[23];
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[16]);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[24];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[82];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_16 = MAKE_FUNCTION_websocket$_socket$$$function__4_recv(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_16;
        tmp_dict_key_5 = mod_consts[23];
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[16]);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[82];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_17 = MAKE_FUNCTION_websocket$_socket$$$function__5_recv_line(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_17;
        tmp_dict_key_6 = mod_consts[23];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[16]);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[47];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[82];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_18 = MAKE_FUNCTION_websocket$_socket$$$function__6_send(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_websocket$_socket, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_18);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf83347398860ace0d6546753b3d855e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf83347398860ace0d6546753b3d855e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf83347398860ace0d6546753b3d855e, exception_lineno);
    }



    assertFrameObject(frame_bf83347398860ace0d6546753b3d855e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websocket._socket", false);

    Py_INCREF(module_websocket$_socket);
    return module_websocket$_socket;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_socket, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("websocket$_socket", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
