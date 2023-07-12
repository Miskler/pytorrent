/* Generated code for Python module 'websocket._handshake'
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

/* The "module_websocket$_handshake" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websocket$_handshake;
PyDictObject *moduledict_websocket$_handshake;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[170];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[170];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("websocket._handshake"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 170; i++) {
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
void checkModuleConstants_websocket$_handshake(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 170; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_aefc5eb5e76d54941ff96c0889b8a99c;
static PyCodeObject *codeobj_18f1ff6fa35a8ab1104656297a2306ce;
static PyCodeObject *codeobj_d1d844acbe96f778cabd8e48c17d74a2;
static PyCodeObject *codeobj_74b061a94dceb8f4c13e4e4870172f8e;
static PyCodeObject *codeobj_f6f1f96c8d56fca03ed432256bb7779c;
static PyCodeObject *codeobj_983ead666df890577152137e86a6ab1d;
static PyCodeObject *codeobj_dfc9c8a017a2fa17c5fbc4a3b3cdc22b;
static PyCodeObject *codeobj_3dc52e769b94666a250d8f6f07a7cefa;
static PyCodeObject *codeobj_e405a6d8926119d3ad77b1adeac13463;
static PyCodeObject *codeobj_f0d6c2623b5fee7bdde7c091e94619f8;
static PyCodeObject *codeobj_89793e8f8f7dede515c7bc3e90e159b2;
static PyCodeObject *codeobj_e7cc443bb31b0a4296347275be7289aa;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[110]; CHECK_OBJECT(module_filename_obj);
    codeobj_aefc5eb5e76d54941ff96c0889b8a99c = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[156], mod_consts[156], mod_consts[157], NULL, 1, 0, 0);
    codeobj_18f1ff6fa35a8ab1104656297a2306ce = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[156], mod_consts[156], mod_consts[158], NULL, 1, 0, 0);
    codeobj_d1d844acbe96f778cabd8e48c17d74a2 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[156], mod_consts[156], mod_consts[159], NULL, 1, 0, 0);
    codeobj_74b061a94dceb8f4c13e4e4870172f8e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[160], mod_consts[160], NULL, NULL, 0, 0, 0);
    codeobj_f6f1f96c8d56fca03ed432256bb7779c = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[161], NULL, 4, 0, 0);
    codeobj_983ead666df890577152137e86a6ab1d = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[162], NULL, 0, 0, 0);
    codeobj_dfc9c8a017a2fa17c5fbc4a3b3cdc22b = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[163], NULL, 5, 0, 0);
    codeobj_3dc52e769b94666a250d8f6f07a7cefa = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[164], NULL, 2, 0, 0);
    codeobj_e405a6d8926119d3ad77b1adeac13463 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[165], NULL, 1, 0, 0);
    codeobj_f0d6c2623b5fee7bdde7c091e94619f8 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[166], NULL, 3, 0, 0);
    codeobj_89793e8f8f7dede515c7bc3e90e159b2 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[167], NULL, 5, 0, 0);
    codeobj_e7cc443bb31b0a4296347275be7289aa = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[168], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__2_handshake(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__3__pack_hostname(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__4__get_handshake_headers(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__5__get_resp_headers(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__6__validate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__7__create_sec_websocket_key(PyObject *annotations);


// The module function definitions.
static PyObject *impl_websocket$_handshake$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_status = python_pars[1];
    PyObject *par_headers = python_pars[2];
    PyObject *par_subprotocol = python_pars[3];
    struct Nuitka_FrameObject *frame_f6f1f96c8d56fca03ed432256bb7779c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f6f1f96c8d56fca03ed432256bb7779c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6f1f96c8d56fca03ed432256bb7779c)) {
        Py_XDECREF(cache_frame_f6f1f96c8d56fca03ed432256bb7779c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6f1f96c8d56fca03ed432256bb7779c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6f1f96c8d56fca03ed432256bb7779c = MAKE_FUNCTION_FRAME(codeobj_f6f1f96c8d56fca03ed432256bb7779c, module_websocket$_handshake, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f6f1f96c8d56fca03ed432256bb7779c->m_type_description == NULL);
    frame_f6f1f96c8d56fca03ed432256bb7779c = cache_frame_f6f1f96c8d56fca03ed432256bb7779c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f6f1f96c8d56fca03ed432256bb7779c);
    assert(Py_REFCNT(frame_f6f1f96c8d56fca03ed432256bb7779c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_status);
        tmp_assattr_value_1 = par_status;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_headers);
        tmp_assattr_value_2 = par_headers;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_subprotocol);
        tmp_assattr_value_3 = par_subprotocol;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_headers);
        tmp_expression_value_2 = par_headers;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f6f1f96c8d56fca03ed432256bb7779c->m_frame.f_lineno = 47;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[6]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f6f1f96c8d56fca03ed432256bb7779c->m_frame.f_lineno = 47;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f6f1f96c8d56fca03ed432256bb7779c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6f1f96c8d56fca03ed432256bb7779c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6f1f96c8d56fca03ed432256bb7779c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6f1f96c8d56fca03ed432256bb7779c,
        type_description_1,
        par_self,
        par_status,
        par_headers,
        par_subprotocol
    );


    // Release cached frame if used for exception.
    if (frame_f6f1f96c8d56fca03ed432256bb7779c == cache_frame_f6f1f96c8d56fca03ed432256bb7779c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f6f1f96c8d56fca03ed432256bb7779c);
        cache_frame_f6f1f96c8d56fca03ed432256bb7779c = NULL;
    }

    assertFrameObject(frame_f6f1f96c8d56fca03ed432256bb7779c);

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
    CHECK_OBJECT(par_subprotocol);
    Py_DECREF(par_subprotocol);
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
    CHECK_OBJECT(par_subprotocol);
    Py_DECREF(par_subprotocol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_handshake$$$function__2_handshake(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_hostname = python_pars[2];
    PyObject *par_port = python_pars[3];
    PyObject *par_resource = python_pars[4];
    PyObject *par_options = python_pars[5];
    PyObject *var_headers = NULL;
    PyObject *var_key = NULL;
    PyObject *var_header_str = NULL;
    PyObject *var_status = NULL;
    PyObject *var_resp = NULL;
    PyObject *var_success = NULL;
    PyObject *var_subproto = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_89793e8f8f7dede515c7bc3e90e159b2;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_89793e8f8f7dede515c7bc3e90e159b2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_89793e8f8f7dede515c7bc3e90e159b2)) {
        Py_XDECREF(cache_frame_89793e8f8f7dede515c7bc3e90e159b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_89793e8f8f7dede515c7bc3e90e159b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_89793e8f8f7dede515c7bc3e90e159b2 = MAKE_FUNCTION_FRAME(codeobj_89793e8f8f7dede515c7bc3e90e159b2, module_websocket$_handshake, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_89793e8f8f7dede515c7bc3e90e159b2->m_type_description == NULL);
    frame_89793e8f8f7dede515c7bc3e90e159b2 = cache_frame_89793e8f8f7dede515c7bc3e90e159b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_89793e8f8f7dede515c7bc3e90e159b2);
    assert(Py_REFCNT(frame_89793e8f8f7dede515c7bc3e90e159b2) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_resource);
        tmp_args_element_value_1 = par_resource;
        CHECK_OBJECT(par_url);
        tmp_args_element_value_2 = par_url;
        CHECK_OBJECT(par_hostname);
        tmp_args_element_value_3 = par_hostname;
        CHECK_OBJECT(par_port);
        tmp_args_element_value_4 = par_port;
        CHECK_OBJECT(par_options);
        tmp_args_element_value_5 = par_options;
        frame_89793e8f8f7dede515c7bc3e90e159b2->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooo";
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 51;
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 51;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 51;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 51;
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
        assert(var_headers == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_headers = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_key == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_key = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[9];
        CHECK_OBJECT(var_headers);
        tmp_iterable_value_1 = var_headers;
        tmp_assign_source_6 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_header_str == NULL);
        var_header_str = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sock);
        tmp_args_element_value_6 = par_sock;
        CHECK_OBJECT(var_header_str);
        tmp_args_element_value_7 = var_header_str;
        frame_89793e8f8f7dede515c7bc3e90e159b2->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[12];
        CHECK_OBJECT(var_header_str);
        tmp_args_element_value_9 = var_header_str;
        frame_89793e8f8f7dede515c7bc3e90e159b2->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_sock);
        tmp_args_element_value_10 = par_sock;
        frame_89793e8f8f7dede515c7bc3e90e159b2->m_frame.f_lineno = 57;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_10);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 57;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
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
            exception_lineno = 57;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 57;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 57;
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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
        assert(var_status == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_status = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
        assert(var_resp == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_resp = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_status);
        tmp_cmp_expr_left_1 = var_status;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooo";
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
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_status);
        tmp_args_element_value_11 = var_status;
        CHECK_OBJECT(var_resp);
        tmp_args_element_value_12 = var_resp;
        tmp_args_element_value_13 = Py_None;
        frame_89793e8f8f7dede515c7bc3e90e159b2->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_1;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_resp);
        tmp_args_element_value_14 = var_resp;
        CHECK_OBJECT(var_key);
        tmp_args_element_value_15 = var_key;
        CHECK_OBJECT(par_options);
        tmp_expression_value_1 = par_options;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        frame_89793e8f8f7dede515c7bc3e90e159b2->m_frame.f_lineno = 60;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[17]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        frame_89793e8f8f7dede515c7bc3e90e159b2->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_16);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 60;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 60;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_14;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 60;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 60;
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
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_3__element_1;
        assert(var_success == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_success = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_3__element_2;
        assert(var_subproto == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_subproto = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_success);
        tmp_operand_value_1 = var_success;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_89793e8f8f7dede515c7bc3e90e159b2->m_frame.f_lineno = 62;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[19]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 62;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_status);
        tmp_args_element_value_17 = var_status;
        CHECK_OBJECT(var_resp);
        tmp_args_element_value_18 = var_resp;
        CHECK_OBJECT(var_subproto);
        tmp_args_element_value_19 = var_subproto;
        frame_89793e8f8f7dede515c7bc3e90e159b2->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
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
        exception_tb = MAKE_TRACEBACK(frame_89793e8f8f7dede515c7bc3e90e159b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_89793e8f8f7dede515c7bc3e90e159b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_89793e8f8f7dede515c7bc3e90e159b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_89793e8f8f7dede515c7bc3e90e159b2,
        type_description_1,
        par_sock,
        par_url,
        par_hostname,
        par_port,
        par_resource,
        par_options,
        var_headers,
        var_key,
        var_header_str,
        var_status,
        var_resp,
        var_success,
        var_subproto
    );


    // Release cached frame if used for exception.
    if (frame_89793e8f8f7dede515c7bc3e90e159b2 == cache_frame_89793e8f8f7dede515c7bc3e90e159b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_89793e8f8f7dede515c7bc3e90e159b2);
        cache_frame_89793e8f8f7dede515c7bc3e90e159b2 = NULL;
    }

    assertFrameObject(frame_89793e8f8f7dede515c7bc3e90e159b2);

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
    Py_XDECREF(var_key);
    var_key = NULL;
    CHECK_OBJECT(var_header_str);
    Py_DECREF(var_header_str);
    var_header_str = NULL;
    Py_XDECREF(var_status);
    var_status = NULL;
    Py_XDECREF(var_resp);
    var_resp = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
    Py_XDECREF(var_subproto);
    var_subproto = NULL;
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

    Py_XDECREF(var_headers);
    var_headers = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_header_str);
    var_header_str = NULL;
    Py_XDECREF(var_status);
    var_status = NULL;
    Py_XDECREF(var_resp);
    var_resp = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
    Py_XDECREF(var_subproto);
    var_subproto = NULL;
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
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_hostname);
    Py_DECREF(par_hostname);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_resource);
    Py_DECREF(par_resource);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_hostname);
    Py_DECREF(par_hostname);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_resource);
    Py_DECREF(par_resource);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_handshake$$$function__3__pack_hostname(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hostname = python_pars[0];
    struct Nuitka_FrameObject *frame_e405a6d8926119d3ad77b1adeac13463;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e405a6d8926119d3ad77b1adeac13463 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e405a6d8926119d3ad77b1adeac13463)) {
        Py_XDECREF(cache_frame_e405a6d8926119d3ad77b1adeac13463);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e405a6d8926119d3ad77b1adeac13463 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e405a6d8926119d3ad77b1adeac13463 = MAKE_FUNCTION_FRAME(codeobj_e405a6d8926119d3ad77b1adeac13463, module_websocket$_handshake, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e405a6d8926119d3ad77b1adeac13463->m_type_description == NULL);
    frame_e405a6d8926119d3ad77b1adeac13463 = cache_frame_e405a6d8926119d3ad77b1adeac13463;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e405a6d8926119d3ad77b1adeac13463);
    assert(Py_REFCNT(frame_e405a6d8926119d3ad77b1adeac13463) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[20];
        CHECK_OBJECT(par_hostname);
        tmp_cmp_expr_right_1 = par_hostname;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
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
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_add_expr_left_2 = mod_consts[21];
        CHECK_OBJECT(par_hostname);
        tmp_add_expr_right_2 = par_hostname;
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[22];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e405a6d8926119d3ad77b1adeac13463, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e405a6d8926119d3ad77b1adeac13463->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e405a6d8926119d3ad77b1adeac13463, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e405a6d8926119d3ad77b1adeac13463,
        type_description_1,
        par_hostname
    );


    // Release cached frame if used for exception.
    if (frame_e405a6d8926119d3ad77b1adeac13463 == cache_frame_e405a6d8926119d3ad77b1adeac13463) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e405a6d8926119d3ad77b1adeac13463);
        cache_frame_e405a6d8926119d3ad77b1adeac13463 = NULL;
    }

    assertFrameObject(frame_e405a6d8926119d3ad77b1adeac13463);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_hostname);
    tmp_return_value = par_hostname;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_hostname);
    Py_DECREF(par_hostname);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hostname);
    Py_DECREF(par_hostname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_handshake$$$function__4__get_handshake_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_resource = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_host = python_pars[2];
    PyObject *par_port = python_pars[3];
    PyObject *par_options = python_pars[4];
    PyObject *var_headers = NULL;
    PyObject *var_hostport = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_key = NULL;
    PyObject *var_subprotocols = NULL;
    PyObject *var_header = NULL;
    PyObject *var_server_cookie = NULL;
    PyObject *var_client_cookie = NULL;
    PyObject *var_cookie = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    int tmp_res;
    struct Nuitka_FrameObject *frame_aefc5eb5e76d54941ff96c0889b8a99c_2;
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
    static struct Nuitka_FrameObject *cache_frame_aefc5eb5e76d54941ff96c0889b8a99c_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b)) {
        Py_XDECREF(cache_frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b = MAKE_FUNCTION_FRAME(codeobj_dfc9c8a017a2fa17c5fbc4a3b3cdc22b, module_websocket$_handshake, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_type_description == NULL);
    frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b = cache_frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b);
    assert(Py_REFCNT(frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[23];
        CHECK_OBJECT(par_resource);
        tmp_kw_call_dict_value_0_1 = par_resource;
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 77;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[24]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[25];
        PyList_SET_ITEM0(tmp_assign_source_1, 1, tmp_list_element_1);
        assert(var_headers == NULL);
        var_headers = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_port);
        tmp_cmp_expr_left_1 = par_port;
        tmp_cmp_expr_right_1 = mod_consts[26];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_port);
        tmp_cmp_expr_left_2 = par_port;
        tmp_cmp_expr_right_2 = mod_consts[27];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_args_element_value_1 = par_host;
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 81;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hostport == NULL);
        var_hostport = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_kw_call_arg_value_0_2 = mod_consts[29];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_args_element_value_2 = par_host;
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 83;
        tmp_kw_call_dict_value_0_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_port);
        tmp_kw_call_dict_value_1_1 = par_port;
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 83;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[30]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hostport == NULL);
        var_hostport = tmp_assign_source_3;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_options);
        tmp_expression_value_1 = par_options;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 84;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[31]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_headers);
        tmp_list_arg_value_1 = var_headers;
        tmp_kw_call_arg_value_0_3 = mod_consts[32];
        CHECK_OBJECT(par_options);
        tmp_expression_value_2 = par_options;
        tmp_subscript_value_1 = mod_consts[33];
        tmp_kw_call_dict_value_0_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 85;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_item_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        CHECK_OBJECT(var_headers);
        tmp_list_arg_value_2 = var_headers;
        tmp_kw_call_arg_value_0_4 = mod_consts[35];
        CHECK_OBJECT(var_hostport);
        tmp_kw_call_dict_value_0_4 = var_hostport;
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 87;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_item_value_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[36]);
        }

        if (tmp_item_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_end_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_url);
        tmp_expression_value_3 = par_url;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 91;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[38]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 91;
            goto try_except_handler_3;
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 91;
            goto try_except_handler_3;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 91;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 91;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_scheme == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_scheme = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_url;
            assert(old != NULL);
            par_url = tmp_assign_source_8;
            Py_INCREF(par_url);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_options);
        tmp_expression_value_4 = par_options;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 92;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[39]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
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
        bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        tmp_cmp_expr_left_3 = mod_consts[40];
        CHECK_OBJECT(par_options);
        tmp_cmp_expr_right_3 = par_options;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_options);
        tmp_expression_value_5 = par_options;
        tmp_subscript_value_2 = mod_consts[40];
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_list_arg_value_3;
        PyObject *tmp_item_value_3;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_3 = var_headers;
        tmp_kw_call_arg_value_0_5 = mod_consts[41];
        CHECK_OBJECT(par_options);
        tmp_expression_value_6 = par_options;
        tmp_subscript_value_3 = mod_consts[40];
        tmp_kw_call_dict_value_0_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 94;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_item_value_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[42]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_item_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
        assert(!(tmp_result == false));
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_scheme);
        tmp_cmp_expr_left_5 = var_scheme;
        tmp_cmp_expr_right_5 = mod_consts[43];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_list_arg_value_4;
        PyObject *tmp_item_value_4;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_dict_value_0_6;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_4 = var_headers;
        tmp_kw_call_arg_value_0_6 = mod_consts[44];
        CHECK_OBJECT(var_hostport);
        tmp_kw_call_dict_value_0_6 = var_hostport;
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 96;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_item_value_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[36]);
        }

        if (tmp_item_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_4);
        assert(!(tmp_result == false));
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_list_arg_value_5;
        PyObject *tmp_item_value_5;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_dict_value_0_7;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_5 = var_headers;
        tmp_kw_call_arg_value_0_7 = mod_consts[45];
        CHECK_OBJECT(var_hostport);
        tmp_kw_call_dict_value_0_7 = var_hostport;
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 98;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_item_value_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[36]);
        }

        if (tmp_item_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_5);
        assert(!(tmp_result == false));
    }
    branch_end_5:;
    branch_end_4:;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 100;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key == NULL);
        var_key = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_6;
        int tmp_or_left_truth_2;
        bool tmp_or_left_value_2;
        bool tmp_or_right_value_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_options);
        tmp_expression_value_7 = par_options;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[5]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 103;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[47]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_cmp_expr_left_6 = mod_consts[48];
        CHECK_OBJECT(par_options);
        tmp_expression_value_8 = par_options;
        tmp_subscript_value_4 = mod_consts[49];
        tmp_cmp_expr_right_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = (tmp_res == 0) ? true : false;
        tmp_condition_result_6 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_6 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_dict_value_0_8;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_headers;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[50]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_8 = mod_consts[51];
        CHECK_OBJECT(var_key);
        tmp_kw_call_dict_value_0_8 = var_key;
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 104;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_8};
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[52]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 104;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(par_options);
        tmp_expression_value_11 = par_options;
        tmp_subscript_value_5 = mod_consts[49];
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[48];
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_key;
            assert(old != NULL);
            var_key = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_end_6:;
    {
        bool tmp_condition_result_7;
        int tmp_or_left_truth_3;
        bool tmp_or_left_value_3;
        bool tmp_or_right_value_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_options);
        tmp_expression_value_12 = par_options;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[5]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 108;
        tmp_operand_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[47]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_3 = tmp_or_left_value_3 != false ? 1 : 0;
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_cmp_expr_left_7 = mod_consts[53];
        CHECK_OBJECT(par_options);
        tmp_expression_value_13 = par_options;
        tmp_subscript_value_7 = mod_consts[49];
        tmp_cmp_expr_right_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_7);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = (tmp_res == 0) ? true : false;
        tmp_condition_result_7 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_7 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_kw_call_dict_value_0_9;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = var_headers;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[50]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_9 = mod_consts[54];
        tmp_kw_call_dict_value_0_9 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_kw_call_dict_value_0_9 == NULL)) {
            tmp_kw_call_dict_value_0_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_kw_call_dict_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 109;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_9};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[56]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 109;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(par_options);
        tmp_expression_value_15 = par_options;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[5]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 111;
        tmp_operand_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[57]);

        Py_DECREF(tmp_called_value_11);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_4;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = var_headers;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[50]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 112;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[58]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_8;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = var_headers;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[50]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_options);
        tmp_expression_value_18 = par_options;
        tmp_subscript_value_8 = mod_consts[59];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_8);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 114;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(par_options);
        tmp_expression_value_19 = par_options;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[5]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 116;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[17]);

        Py_DECREF(tmp_called_value_14);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_subprotocols == NULL);
        var_subprotocols = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_subprotocols);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_subprotocols);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_kw_call_arg_value_0_10;
        PyObject *tmp_kw_call_dict_value_0_10;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = var_headers;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[50]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_10 = mod_consts[60];
        tmp_str_arg_value_1 = mod_consts[61];
        CHECK_OBJECT(var_subprotocols);
        tmp_iterable_value_1 = var_subprotocols;
        tmp_kw_call_dict_value_0_10 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_kw_call_dict_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 118;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_10};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_10};
            tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[62]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_10);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 118;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(par_options);
        tmp_expression_value_21 = par_options;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[5]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 120;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[47]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_header == NULL);
        var_header = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_header);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_header);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        int tmp_truth_name_4;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_header);
        tmp_args_element_value_7 = var_header;
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
        }

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_7);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_7);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_7);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_13;
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_22;
            CHECK_OBJECT(var_header);
            tmp_expression_value_22 = var_header;
            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[65]);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 125;
            tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_18);
            Py_DECREF(tmp_called_value_18);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "oooooooooooooo";
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
        if (isFrameUnusable(cache_frame_aefc5eb5e76d54941ff96c0889b8a99c_2)) {
            Py_XDECREF(cache_frame_aefc5eb5e76d54941ff96c0889b8a99c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_aefc5eb5e76d54941ff96c0889b8a99c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_aefc5eb5e76d54941ff96c0889b8a99c_2 = MAKE_FUNCTION_FRAME(codeobj_aefc5eb5e76d54941ff96c0889b8a99c, module_websocket$_handshake, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_aefc5eb5e76d54941ff96c0889b8a99c_2->m_type_description == NULL);
        frame_aefc5eb5e76d54941ff96c0889b8a99c_2 = cache_frame_aefc5eb5e76d54941ff96c0889b8a99c_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_aefc5eb5e76d54941ff96c0889b8a99c_2);
        assert(Py_REFCNT(frame_aefc5eb5e76d54941ff96c0889b8a99c_2) == 2);

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
                    type_description_2 = "oo";
                    exception_lineno = 123;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_3 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
            if (tmp_assign_source_18 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 123;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
            if (tmp_assign_source_19 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 123;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_19;
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

                        type_description_2 = "oo";
                        exception_lineno = 123;
                        goto try_except_handler_7;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[8];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 123;
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

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_20 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_20;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_21 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_21;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(outline_0_var_v);
            tmp_cmp_expr_left_8 = outline_0_var_v;
            tmp_cmp_expr_right_8 = Py_None;
            tmp_condition_result_12 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
            if (tmp_condition_result_12 != false) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_str_arg_value_2;
            PyObject *tmp_iterable_value_2;
            PyObject *tmp_list_element_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_str_arg_value_2 = mod_consts[66];
            CHECK_OBJECT(outline_0_var_k);
            tmp_list_element_2 = outline_0_var_k;
            tmp_iterable_value_2 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM0(tmp_iterable_value_2, 0, tmp_list_element_2);
            CHECK_OBJECT(outline_0_var_v);
            tmp_list_element_2 = outline_0_var_v;
            PyList_SET_ITEM0(tmp_iterable_value_2, 1, tmp_list_element_2);
            tmp_append_value_1 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
            Py_DECREF(tmp_iterable_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        branch_no_12:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_2 = "oo";
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
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_aefc5eb5e76d54941ff96c0889b8a99c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_aefc5eb5e76d54941ff96c0889b8a99c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_aefc5eb5e76d54941ff96c0889b8a99c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_aefc5eb5e76d54941ff96c0889b8a99c_2,
            type_description_2,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame if used for exception.
        if (frame_aefc5eb5e76d54941ff96c0889b8a99c_2 == cache_frame_aefc5eb5e76d54941ff96c0889b8a99c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_aefc5eb5e76d54941ff96c0889b8a99c_2);
            cache_frame_aefc5eb5e76d54941ff96c0889b8a99c_2 = NULL;
        }

        assertFrameObject(frame_aefc5eb5e76d54941ff96c0889b8a99c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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
        exception_lineno = 123;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_header;
            assert(old != NULL);
            var_header = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    branch_no_11:;
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_9;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = var_headers;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[67]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_header == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_header;
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 128;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[5]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_host == NULL) {
            Py_DECREF(tmp_called_value_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = par_host;
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 130;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_20);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_server_cookie == NULL);
        var_server_cookie = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(par_options);
        tmp_expression_value_25 = par_options;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[5]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 131;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[68]);

        Py_DECREF(tmp_called_value_21);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_client_cookie == NULL);
        var_client_cookie = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_str_arg_value_3;
        PyObject *tmp_iterable_value_3;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_list_element_3;
        tmp_str_arg_value_3 = mod_consts[69];
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = Py_None;
        CHECK_OBJECT(var_server_cookie);
        tmp_list_element_3 = var_server_cookie;
        tmp_args_element_value_12 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_12, 0, tmp_list_element_3);
        CHECK_OBJECT(var_client_cookie);
        tmp_list_element_3 = var_client_cookie;
        PyList_SET_ITEM0(tmp_args_element_value_12, 1, tmp_list_element_3);
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_iterable_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_22, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_iterable_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = UNICODE_JOIN(tmp_str_arg_value_3, tmp_iterable_value_3);
        Py_DECREF(tmp_iterable_value_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cookie == NULL);
        var_cookie = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_13;
        CHECK_OBJECT(var_cookie);
        tmp_condition_result_13 = CHECK_IF_TRUE(var_cookie) == 1;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_kw_call_arg_value_0_11;
        PyObject *tmp_kw_call_dict_value_0_11;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = var_headers;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[50]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_11 = mod_consts[71];
        CHECK_OBJECT(var_cookie);
        tmp_kw_call_dict_value_0_11 = var_cookie;
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 136;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_11};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_11};
            tmp_args_element_value_13 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[72]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 136;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_13:;
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_10;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = var_headers;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[67]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame.f_lineno = 138;
        tmp_call_result_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[73]);

        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_tuple_element_1;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_headers;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_key);
        tmp_tuple_element_1 = var_key;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b,
        type_description_1,
        par_resource,
        par_url,
        par_host,
        par_port,
        par_options,
        var_headers,
        var_hostport,
        var_scheme,
        var_key,
        var_subprotocols,
        var_header,
        var_server_cookie,
        var_client_cookie,
        var_cookie
    );


    // Release cached frame if used for exception.
    if (frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b == cache_frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b);
        cache_frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b = NULL;
    }

    assertFrameObject(frame_dfc9c8a017a2fa17c5fbc4a3b3cdc22b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    par_url = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    CHECK_OBJECT(var_hostport);
    Py_DECREF(var_hostport);
    var_hostport = NULL;
    CHECK_OBJECT(var_scheme);
    Py_DECREF(var_scheme);
    var_scheme = NULL;
    CHECK_OBJECT(var_key);
    Py_DECREF(var_key);
    var_key = NULL;
    CHECK_OBJECT(var_subprotocols);
    Py_DECREF(var_subprotocols);
    var_subprotocols = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
    CHECK_OBJECT(var_server_cookie);
    Py_DECREF(var_server_cookie);
    var_server_cookie = NULL;
    CHECK_OBJECT(var_client_cookie);
    Py_DECREF(var_client_cookie);
    var_client_cookie = NULL;
    CHECK_OBJECT(var_cookie);
    Py_DECREF(var_cookie);
    var_cookie = NULL;
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

    Py_XDECREF(par_url);
    par_url = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    Py_XDECREF(var_hostport);
    var_hostport = NULL;
    Py_XDECREF(var_scheme);
    var_scheme = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_subprotocols);
    var_subprotocols = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
    Py_XDECREF(var_server_cookie);
    var_server_cookie = NULL;
    Py_XDECREF(var_client_cookie);
    var_client_cookie = NULL;
    Py_XDECREF(var_cookie);
    var_cookie = NULL;
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
    CHECK_OBJECT(par_resource);
    Py_DECREF(par_resource);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_resource);
    Py_DECREF(par_resource);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_handshake$$$function__5__get_resp_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[0];
    PyObject *par_success_statuses = python_pars[1];
    PyObject *var_status = NULL;
    PyObject *var_resp_headers = NULL;
    PyObject *var_status_message = NULL;
    PyObject *var_content_len = NULL;
    PyObject *var_response_body = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3dc52e769b94666a250d8f6f07a7cefa;
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
    static struct Nuitka_FrameObject *cache_frame_3dc52e769b94666a250d8f6f07a7cefa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3dc52e769b94666a250d8f6f07a7cefa)) {
        Py_XDECREF(cache_frame_3dc52e769b94666a250d8f6f07a7cefa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3dc52e769b94666a250d8f6f07a7cefa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3dc52e769b94666a250d8f6f07a7cefa = MAKE_FUNCTION_FRAME(codeobj_3dc52e769b94666a250d8f6f07a7cefa, module_websocket$_handshake, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3dc52e769b94666a250d8f6f07a7cefa->m_type_description == NULL);
    frame_3dc52e769b94666a250d8f6f07a7cefa = cache_frame_3dc52e769b94666a250d8f6f07a7cefa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3dc52e769b94666a250d8f6f07a7cefa);
    assert(Py_REFCNT(frame_3dc52e769b94666a250d8f6f07a7cefa) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_sock);
        tmp_args_element_value_1 = par_sock;
        frame_3dc52e769b94666a250d8f6f07a7cefa->m_frame.f_lineno = 143;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 143;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 143;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 143;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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
                    exception_lineno = 143;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[75];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 143;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_status == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_status = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_resp_headers == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_resp_headers = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_status_message == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_status_message = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_status);
        tmp_cmp_expr_left_1 = var_status;
        CHECK_OBJECT(par_success_statuses);
        tmp_cmp_expr_right_1 = par_success_statuses;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_resp_headers);
        tmp_expression_value_1 = var_resp_headers;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3dc52e769b94666a250d8f6f07a7cefa->m_frame.f_lineno = 145;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[76]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_content_len == NULL);
        var_content_len = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_content_len);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_content_len);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_sock);
        tmp_expression_value_2 = par_sock;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[77]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 147;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_content_len);
        tmp_args_element_value_3 = var_content_len;
        frame_3dc52e769b94666a250d8f6f07a7cefa->m_frame.f_lineno = 147;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 147;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3dc52e769b94666a250d8f6f07a7cefa->m_frame.f_lineno = 147;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_response_body == NULL);
        var_response_body = tmp_assign_source_9;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_None;
        assert(var_response_body == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_response_body = tmp_assign_source_10;
    }
    branch_end_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[80];
        CHECK_OBJECT(var_status);
        tmp_kw_call_dict_value_0_1 = var_status;
        CHECK_OBJECT(var_status_message);
        tmp_kw_call_dict_value_1_1 = var_status_message;
        CHECK_OBJECT(var_resp_headers);
        tmp_kw_call_dict_value_2_1 = var_resp_headers;
        CHECK_OBJECT(var_response_body);
        tmp_kw_call_dict_value_3_1 = var_response_body;
        frame_3dc52e769b94666a250d8f6f07a7cefa->m_frame.f_lineno = 150;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[81]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_status);
        tmp_args_element_value_5 = var_status;
        CHECK_OBJECT(var_status_message);
        tmp_args_element_value_6 = var_status_message;
        CHECK_OBJECT(var_resp_headers);
        tmp_args_element_value_7 = var_resp_headers;
        CHECK_OBJECT(var_response_body);
        tmp_args_element_value_8 = var_response_body;
        frame_3dc52e769b94666a250d8f6f07a7cefa->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 150;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3dc52e769b94666a250d8f6f07a7cefa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3dc52e769b94666a250d8f6f07a7cefa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3dc52e769b94666a250d8f6f07a7cefa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3dc52e769b94666a250d8f6f07a7cefa,
        type_description_1,
        par_sock,
        par_success_statuses,
        var_status,
        var_resp_headers,
        var_status_message,
        var_content_len,
        var_response_body
    );


    // Release cached frame if used for exception.
    if (frame_3dc52e769b94666a250d8f6f07a7cefa == cache_frame_3dc52e769b94666a250d8f6f07a7cefa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3dc52e769b94666a250d8f6f07a7cefa);
        cache_frame_3dc52e769b94666a250d8f6f07a7cefa = NULL;
    }

    assertFrameObject(frame_3dc52e769b94666a250d8f6f07a7cefa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_status);
        tmp_tuple_element_1 = var_status;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_resp_headers);
        tmp_tuple_element_1 = var_resp_headers;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_status);
    Py_DECREF(var_status);
    var_status = NULL;
    CHECK_OBJECT(var_resp_headers);
    Py_DECREF(var_resp_headers);
    var_resp_headers = NULL;
    CHECK_OBJECT(var_status_message);
    Py_DECREF(var_status_message);
    var_status_message = NULL;
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

    Py_XDECREF(var_status);
    var_status = NULL;
    Py_XDECREF(var_resp_headers);
    var_resp_headers = NULL;
    Py_XDECREF(var_status_message);
    var_status_message = NULL;
    Py_XDECREF(var_content_len);
    var_content_len = NULL;
    Py_XDECREF(var_response_body);
    var_response_body = NULL;
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
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_success_statuses);
    Py_DECREF(par_success_statuses);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_success_statuses);
    Py_DECREF(par_success_statuses);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_handshake$$$function__6__validate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_headers = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_subprotocols = python_pars[2];
    PyObject *var_subproto = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *var_r = NULL;
    PyObject *var_result = NULL;
    PyObject *var_value = NULL;
    PyObject *var_hashed = NULL;
    PyObject *var_success = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *outline_1_var_s = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f0d6c2623b5fee7bdde7c091e94619f8;
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
    struct Nuitka_FrameObject *frame_d1d844acbe96f778cabd8e48c17d74a2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_d1d844acbe96f778cabd8e48c17d74a2_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_FrameObject *frame_18f1ff6fa35a8ab1104656297a2306ce_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_18f1ff6fa35a8ab1104656297a2306ce_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f0d6c2623b5fee7bdde7c091e94619f8 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_subproto == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_subproto = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_f0d6c2623b5fee7bdde7c091e94619f8)) {
        Py_XDECREF(cache_frame_f0d6c2623b5fee7bdde7c091e94619f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0d6c2623b5fee7bdde7c091e94619f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0d6c2623b5fee7bdde7c091e94619f8 = MAKE_FUNCTION_FRAME(codeobj_f0d6c2623b5fee7bdde7c091e94619f8, module_websocket$_handshake, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0d6c2623b5fee7bdde7c091e94619f8->m_type_description == NULL);
    frame_f0d6c2623b5fee7bdde7c091e94619f8 = cache_frame_f0d6c2623b5fee7bdde7c091e94619f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f0d6c2623b5fee7bdde7c091e94619f8);
    assert(Py_REFCNT(frame_f0d6c2623b5fee7bdde7c091e94619f8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[65]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 162;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooo";
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
                type_description_1 = "ooooooooooo";
                exception_lineno = 162;
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


            exception_lineno = 162;
            type_description_1 = "ooooooooooo";
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


            type_description_1 = "ooooooooooo";
            exception_lineno = 162;
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


            type_description_1 = "ooooooooooo";
            exception_lineno = 162;
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

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 162;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooo";
            exception_lineno = 162;
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (par_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_headers;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_k);
        tmp_args_element_value_1 = var_k;
        tmp_args_element_value_2 = Py_None;
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_r);
        tmp_operand_value_1 = var_r;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[83];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(var_r);
            tmp_expression_value_3 = var_r;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 166;
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[84]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_d1d844acbe96f778cabd8e48c17d74a2_2)) {
            Py_XDECREF(cache_frame_d1d844acbe96f778cabd8e48c17d74a2_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d1d844acbe96f778cabd8e48c17d74a2_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d1d844acbe96f778cabd8e48c17d74a2_2 = MAKE_FUNCTION_FRAME(codeobj_d1d844acbe96f778cabd8e48c17d74a2, module_websocket$_handshake, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_d1d844acbe96f778cabd8e48c17d74a2_2->m_type_description == NULL);
        frame_d1d844acbe96f778cabd8e48c17d74a2_2 = cache_frame_d1d844acbe96f778cabd8e48c17d74a2_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d1d844acbe96f778cabd8e48c17d74a2_2);
        assert(Py_REFCNT(frame_d1d844acbe96f778cabd8e48c17d74a2_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 166;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_14;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_5;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_expression_value_5 = outline_0_var_x;
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[85]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            frame_d1d844acbe96f778cabd8e48c17d74a2_2->m_frame.f_lineno = 166;
            tmp_expression_value_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
            Py_DECREF(tmp_called_value_5);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[86]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            frame_d1d844acbe96f778cabd8e48c17d74a2_2->m_frame.f_lineno = 166;
            tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
            Py_DECREF(tmp_called_value_4);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_10 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_10);
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
        goto frame_return_exit_2;
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

        goto try_return_handler_5;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d1d844acbe96f778cabd8e48c17d74a2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d1d844acbe96f778cabd8e48c17d74a2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d1d844acbe96f778cabd8e48c17d74a2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d1d844acbe96f778cabd8e48c17d74a2_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_d1d844acbe96f778cabd8e48c17d74a2_2 == cache_frame_d1d844acbe96f778cabd8e48c17d74a2_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_d1d844acbe96f778cabd8e48c17d74a2_2);
            cache_frame_d1d844acbe96f778cabd8e48c17d74a2_2 = NULL;
        }

        assertFrameObject(frame_d1d844acbe96f778cabd8e48c17d74a2_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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
        exception_lineno = 166;
        goto try_except_handler_2;
        outline_result_1:;
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_v);
        tmp_cmp_expr_left_1 = var_v;
        CHECK_OBJECT(var_r);
        tmp_cmp_expr_right_1 = var_r;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[83];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 162;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_subprotocols);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_subprotocols);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        if (par_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_headers;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[5]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 171;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[87]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_subproto;
            assert(old != NULL);
            var_subproto = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_subproto);
        tmp_operand_value_2 = var_subproto;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_subproto);
        tmp_expression_value_7 = var_subproto;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[86]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 172;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(par_subprotocols);
            tmp_iter_arg_4 = par_subprotocols;
            tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_7;
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
        if (isFrameUnusable(cache_frame_18f1ff6fa35a8ab1104656297a2306ce_3)) {
            Py_XDECREF(cache_frame_18f1ff6fa35a8ab1104656297a2306ce_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_18f1ff6fa35a8ab1104656297a2306ce_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_18f1ff6fa35a8ab1104656297a2306ce_3 = MAKE_FUNCTION_FRAME(codeobj_18f1ff6fa35a8ab1104656297a2306ce, module_websocket$_handshake, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_18f1ff6fa35a8ab1104656297a2306ce_3->m_type_description == NULL);
        frame_18f1ff6fa35a8ab1104656297a2306ce_3 = cache_frame_18f1ff6fa35a8ab1104656297a2306ce_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_18f1ff6fa35a8ab1104656297a2306ce_3);
        assert(Py_REFCNT(frame_18f1ff6fa35a8ab1104656297a2306ce_3) == 2);

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
                    type_description_2 = "o";
                    exception_lineno = 172;
                    goto try_except_handler_8;
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
                PyObject *old = outline_1_var_s;
                outline_1_var_s = tmp_assign_source_19;
                Py_INCREF(outline_1_var_s);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_8;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_s);
            tmp_expression_value_8 = outline_1_var_s;
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[86]);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            frame_18f1ff6fa35a8ab1104656297a2306ce_3->m_frame.f_lineno = 172;
            tmp_append_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
            Py_DECREF(tmp_called_value_8);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_cmp_expr_right_2 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_cmp_expr_right_2);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
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
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
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
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_7;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_18f1ff6fa35a8ab1104656297a2306ce_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_18f1ff6fa35a8ab1104656297a2306ce_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_18f1ff6fa35a8ab1104656297a2306ce_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_18f1ff6fa35a8ab1104656297a2306ce_3,
            type_description_2,
            outline_1_var_s
        );


        // Release cached frame if used for exception.
        if (frame_18f1ff6fa35a8ab1104656297a2306ce_3 == cache_frame_18f1ff6fa35a8ab1104656297a2306ce_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_18f1ff6fa35a8ab1104656297a2306ce_3);
            cache_frame_18f1ff6fa35a8ab1104656297a2306ce_3 = NULL;
        }

        assertFrameObject(frame_18f1ff6fa35a8ab1104656297a2306ce_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_7;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF(outline_1_var_s);
        outline_1_var_s = NULL;
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

        Py_XDECREF(outline_1_var_s);
        outline_1_var_s = NULL;
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
        exception_lineno = 172;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_4 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = mod_consts[89];
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_subprotocols == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_subprotocols;
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 173;
        tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_4);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 173;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = mod_consts[83];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_9;
        if (var_subproto == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_subproto;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[86]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 175;
        tmp_assign_source_20 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_subproto;
            var_subproto = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_10;
        if (par_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_headers;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[5]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 177;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_12, mod_consts[93]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_result);
        tmp_operand_value_3 = var_result;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooo";
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
    tmp_return_value = mod_consts[83];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_result);
        tmp_expression_value_11 = var_result;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[86]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 180;
        tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        Py_DECREF(tmp_called_value_13);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        int tmp_truth_name_2;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_args_element_value_5 = var_result;
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 182;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_result);
        tmp_expression_value_12 = var_result;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[94]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 183;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[95]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_key);
        tmp_add_expr_left_2 = par_key;
        tmp_add_expr_right_2 = mod_consts[96];
        tmp_expression_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[94]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 185;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[95]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_value);
        tmp_args_element_value_8 = var_value;
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 186;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[99], tmp_args_element_value_8);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 186;
        tmp_args_element_value_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[100]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 186;
        tmp_expression_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[85]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 186;
        tmp_expression_value_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_18);
        Py_DECREF(tmp_called_value_18);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[86]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 186;
        tmp_assign_source_25 = CALL_FUNCTION_NO_ARGS(tmp_called_value_17);
        Py_DECREF(tmp_called_value_17);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hashed == NULL);
        var_hashed = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[102]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hashed);
        tmp_args_element_value_9 = var_hashed;
        if (var_result == NULL) {
            Py_DECREF(tmp_called_value_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[103]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = var_result;
        frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_called_value_20);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_success == NULL);
        var_success = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_success);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_success);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = Py_True;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_subproto);
        tmp_tuple_element_1 = var_subproto;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    tmp_return_value = mod_consts[83];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_7:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0d6c2623b5fee7bdde7c091e94619f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0d6c2623b5fee7bdde7c091e94619f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0d6c2623b5fee7bdde7c091e94619f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0d6c2623b5fee7bdde7c091e94619f8,
        type_description_1,
        par_headers,
        par_key,
        par_subprotocols,
        var_subproto,
        var_k,
        var_v,
        var_r,
        var_result,
        var_value,
        var_hashed,
        var_success
    );


    // Release cached frame if used for exception.
    if (frame_f0d6c2623b5fee7bdde7c091e94619f8 == cache_frame_f0d6c2623b5fee7bdde7c091e94619f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0d6c2623b5fee7bdde7c091e94619f8);
        cache_frame_f0d6c2623b5fee7bdde7c091e94619f8 = NULL;
    }

    assertFrameObject(frame_f0d6c2623b5fee7bdde7c091e94619f8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_subproto);
    var_subproto = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_hashed);
    var_hashed = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
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

    Py_XDECREF(var_subproto);
    var_subproto = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_hashed);
    var_hashed = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
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
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_subprotocols);
    Py_DECREF(par_subprotocols);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_subprotocols);
    Py_DECREF(par_subprotocols);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_handshake$$$function__7__create_sec_websocket_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_randomness = NULL;
    struct Nuitka_FrameObject *frame_983ead666df890577152137e86a6ab1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_983ead666df890577152137e86a6ab1d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_983ead666df890577152137e86a6ab1d)) {
        Py_XDECREF(cache_frame_983ead666df890577152137e86a6ab1d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_983ead666df890577152137e86a6ab1d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_983ead666df890577152137e86a6ab1d = MAKE_FUNCTION_FRAME(codeobj_983ead666df890577152137e86a6ab1d, module_websocket$_handshake, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_983ead666df890577152137e86a6ab1d->m_type_description == NULL);
    frame_983ead666df890577152137e86a6ab1d = cache_frame_983ead666df890577152137e86a6ab1d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_983ead666df890577152137e86a6ab1d);
    assert(Py_REFCNT(frame_983ead666df890577152137e86a6ab1d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_983ead666df890577152137e86a6ab1d->m_frame.f_lineno = 196;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[105],
            PyTuple_GET_ITEM(mod_consts[106], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_randomness == NULL);
        var_randomness = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_randomness);
        tmp_args_element_value_1 = var_randomness;
        frame_983ead666df890577152137e86a6ab1d->m_frame.f_lineno = 197;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[107]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_983ead666df890577152137e86a6ab1d->m_frame.f_lineno = 197;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[95]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[85]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_983ead666df890577152137e86a6ab1d->m_frame.f_lineno = 197;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_983ead666df890577152137e86a6ab1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_983ead666df890577152137e86a6ab1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_983ead666df890577152137e86a6ab1d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_983ead666df890577152137e86a6ab1d,
        type_description_1,
        var_randomness
    );


    // Release cached frame if used for exception.
    if (frame_983ead666df890577152137e86a6ab1d == cache_frame_983ead666df890577152137e86a6ab1d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_983ead666df890577152137e86a6ab1d);
        cache_frame_983ead666df890577152137e86a6ab1d = NULL;
    }

    assertFrameObject(frame_983ead666df890577152137e86a6ab1d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_randomness);
    Py_DECREF(var_randomness);
    var_randomness = NULL;
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

    Py_XDECREF(var_randomness);
    var_randomness = NULL;
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



static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_handshake$$$function__1___init__,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_f6f1f96c8d56fca03ed432256bb7779c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_handshake,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__2_handshake(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_handshake$$$function__2_handshake,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_89793e8f8f7dede515c7bc3e90e159b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_handshake,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__3__pack_hostname(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_handshake$$$function__3__pack_hostname,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e405a6d8926119d3ad77b1adeac13463,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_handshake,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__4__get_handshake_headers(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_handshake$$$function__4__get_handshake_headers,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dfc9c8a017a2fa17c5fbc4a3b3cdc22b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_handshake,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__5__get_resp_headers(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_handshake$$$function__5__get_resp_headers,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3dc52e769b94666a250d8f6f07a7cefa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_handshake,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__6__validate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_handshake$$$function__6__validate,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0d6c2623b5fee7bdde7c091e94619f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_handshake,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_handshake$$$function__7__create_sec_websocket_key(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_handshake$$$function__7__create_sec_websocket_key,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_983ead666df890577152137e86a6ab1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_handshake,
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

function_impl_code functable_websocket$_handshake[] = {
    impl_websocket$_handshake$$$function__1___init__,
    impl_websocket$_handshake$$$function__2_handshake,
    impl_websocket$_handshake$$$function__3__pack_hostname,
    impl_websocket$_handshake$$$function__4__get_handshake_headers,
    impl_websocket$_handshake$$$function__5__get_resp_headers,
    impl_websocket$_handshake$$$function__6__validate,
    impl_websocket$_handshake$$$function__7__create_sec_websocket_key,
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

    function_impl_code *current = functable_websocket$_handshake;
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

    if (offset > sizeof(functable_websocket$_handshake) || offset < 0) {
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
        functable_websocket$_handshake[offset],
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
        module_websocket$_handshake,
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
PyObject *modulecode_websocket$_handshake(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websocket._handshake");

    // Store the module for future use.
    module_websocket$_handshake = module;

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
        PRINT_STRING("websocket._handshake: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._handshake: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._handshake: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwebsocket$_handshake\n");

    moduledict_websocket$_handshake = MODULE_DICT(module_websocket$_handshake);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websocket$_handshake,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websocket$_handshake,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[169]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websocket$_handshake,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_handshake,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_handshake,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websocket$_handshake);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websocket$_handshake, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_websocket$_handshake, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websocket$_handshake, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_websocket$_handshake);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_74b061a94dceb8f4c13e4e4870172f8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_websocket$_handshake$$$class__1_handshake_response_41 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_e7cc443bb31b0a4296347275be7289aa_2;
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
        tmp_assign_source_1 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_2);
    }
    frame_74b061a94dceb8f4c13e4e4870172f8e = MAKE_MODULE_FRAME(codeobj_74b061a94dceb8f4c13e4e4870172f8e, module_websocket$_handshake);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_74b061a94dceb8f4c13e4e4870172f8e);
    assert(Py_REFCNT(frame_74b061a94dceb8f4c13e4e4870172f8e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[110];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[113], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[98];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_websocket$_handshake;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[115];
        frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame.f_lineno = 19;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[101];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_websocket$_handshake;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[115];
        frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame.f_lineno = 20;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[116];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_websocket$_handshake;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[117];
        tmp_level_value_3 = mod_consts[115];
        frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_websocket$_handshake,
                mod_consts[118],
                mod_consts[115]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[118]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[119];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_websocket$_handshake;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[120];
        tmp_level_value_4 = mod_consts[115];
        frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame.f_lineno = 23;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_websocket$_handshake,
                mod_consts[121],
                mod_consts[115]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[121]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[123];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_websocket$_handshake;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[124];
        tmp_level_value_5 = mod_consts[125];
        frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame.f_lineno = 24;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_websocket$_handshake,
                mod_consts[126],
                mod_consts[115]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[126]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_9);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[127];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_websocket$_handshake;
        tmp_locals_arg_value_6 = (PyObject *)moduledict_websocket$_handshake;
        tmp_fromlist_value_6 = mod_consts[128];
        tmp_level_value_6 = mod_consts[125];
        frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame.f_lineno = 25;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_websocket$_handshake, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[129];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_websocket$_handshake;
        tmp_locals_arg_value_7 = (PyObject *)moduledict_websocket$_handshake;
        tmp_fromlist_value_7 = mod_consts[128];
        tmp_level_value_7 = mod_consts[125];
        frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame.f_lineno = 26;
        tmp_star_imported_2 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_star_imported_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_websocket$_handshake, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_3;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[130];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_websocket$_handshake;
        tmp_locals_arg_value_8 = (PyObject *)moduledict_websocket$_handshake;
        tmp_fromlist_value_8 = mod_consts[128];
        tmp_level_value_8 = mod_consts[125];
        frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame.f_lineno = 27;
        tmp_star_imported_3 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_star_imported_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_websocket$_handshake, true, tmp_star_imported_3);
        Py_DECREF(tmp_star_imported_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_4;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[131];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_websocket$_handshake;
        tmp_locals_arg_value_9 = (PyObject *)moduledict_websocket$_handshake;
        tmp_fromlist_value_9 = mod_consts[128];
        tmp_level_value_9 = mod_consts[125];
        frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame.f_lineno = 28;
        tmp_star_imported_4 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_star_imported_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_websocket$_handshake, true, tmp_star_imported_4);
        Py_DECREF(tmp_star_imported_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_LIST3(mod_consts[15],mod_consts[132],mod_consts[14]);
        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[135]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_assign_source_12, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[122]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[136]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 1, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[122]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[137]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_12, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_4;
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[138]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_add_expr_right_1, 0, tmp_tuple_element_2);
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_TUPLE_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame.f_lineno = 38;
        tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_websocket$_handshake$$$class__1_handshake_response_41 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyDict_SetItem(locals_websocket$_handshake$$$class__1_handshake_response_41, mod_consts[141], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyDict_SetItem(locals_websocket$_handshake$$$class__1_handshake_response_41, mod_consts[142], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_e7cc443bb31b0a4296347275be7289aa_2 = MAKE_CLASS_FRAME(codeobj_e7cc443bb31b0a4296347275be7289aa, module_websocket$_handshake, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e7cc443bb31b0a4296347275be7289aa_2);
        assert(Py_REFCNT(frame_e7cc443bb31b0a4296347275be7289aa_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_key_1 = mod_consts[0];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[1];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_handshake$$$function__1___init__(tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_websocket$_handshake$$$class__1_handshake_response_41, mod_consts[143], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e7cc443bb31b0a4296347275be7289aa_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e7cc443bb31b0a4296347275be7289aa_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e7cc443bb31b0a4296347275be7289aa_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e7cc443bb31b0a4296347275be7289aa_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_e7cc443bb31b0a4296347275be7289aa_2);

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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[15];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[145];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_websocket$_handshake$$$class__1_handshake_response_41;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame.f_lineno = 41;
            tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

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
        Py_DECREF(locals_websocket$_handshake$$$class__1_handshake_response_41);
        locals_websocket$_handshake$$$class__1_handshake_response_41 = NULL;
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

        Py_DECREF(locals_websocket$_handshake$$$class__1_handshake_response_41);
        locals_websocket$_handshake$$$class__1_handshake_response_41 = NULL;
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
        exception_lineno = 41;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_17);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[146];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[147];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[148];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[149];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_19 = MAKE_FUNCTION_websocket$_handshake$$$function__2_handshake(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[147];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[150];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_20 = MAKE_FUNCTION_websocket$_handshake$$$function__3__pack_hostname(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[149];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[146];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[33];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[148];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[151];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_21 = MAKE_FUNCTION_websocket$_handshake$$$function__4__get_handshake_headers(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_4);
        tmp_dict_key_5 = mod_consts[152];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_1);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[150];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_defaults_1);
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_22 = MAKE_FUNCTION_websocket$_handshake$$$function__5__get_resp_headers(tmp_defaults_1, tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = DICT_COPY(mod_consts[154]);
        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_6 = mod_consts[155];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));


        tmp_assign_source_24 = MAKE_FUNCTION_websocket$_handshake$$$function__6__validate(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_dict_key_7 = mod_consts[150];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));


        tmp_assign_source_25 = MAKE_FUNCTION_websocket$_handshake$$$function__7__create_sec_websocket_key(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_websocket$_handshake, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_25);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_74b061a94dceb8f4c13e4e4870172f8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74b061a94dceb8f4c13e4e4870172f8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74b061a94dceb8f4c13e4e4870172f8e, exception_lineno);
    }



    assertFrameObject(frame_74b061a94dceb8f4c13e4e4870172f8e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websocket._handshake", false);

    Py_INCREF(module_websocket$_handshake);
    return module_websocket$_handshake;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_handshake, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("websocket$_handshake", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
