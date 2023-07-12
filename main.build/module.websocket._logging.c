/* Generated code for Python module 'websocket._logging'
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

/* The "module_websocket$_logging" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websocket$_logging;
PyDictObject *moduledict_websocket$_logging;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[64];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[64];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("websocket._logging"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 64; i++) {
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
void checkModuleConstants_websocket$_logging(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 64; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9fc7702f35cdeca9fe653c5d9474e92d;
static PyCodeObject *codeobj_4153d8b6a04ff1774491c87e3097a5ac;
static PyCodeObject *codeobj_c071be768b2d4d05081b5310aa41e315;
static PyCodeObject *codeobj_951c78f21cbf54dbac384aefe568fa04;
static PyCodeObject *codeobj_eecc33c366ead5b0fb1fac1f7c9d92ea;
static PyCodeObject *codeobj_c47c1ed8c50bc8005ee7d07bcc6cfa6a;
static PyCodeObject *codeobj_d32e437fc14cefb26a6a43a7016cde25;
static PyCodeObject *codeobj_d6fb4a45bebab072f3344be91de35b94;
static PyCodeObject *codeobj_f01583d6c5dd58acc8f96125564850b2;
static PyCodeObject *codeobj_b0c7537306a83d2cdb59bef36750ead1;
static PyCodeObject *codeobj_8d3c1a449d713a52206efaec731c7708;
static PyCodeObject *codeobj_6bfa69462d69f5d26bf6c789261161f1;
static PyCodeObject *codeobj_00e14dbe9e37cb305e96a361834af5a1;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[17]; CHECK_OBJECT(module_filename_obj);
    codeobj_9fc7702f35cdeca9fe653c5d9474e92d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[57], mod_consts[57], NULL, NULL, 0, 0, 0);
    codeobj_4153d8b6a04ff1774491c87e3097a5ac = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[58], NULL, 0, 0, 0);
    codeobj_c071be768b2d4d05081b5310aa41e315 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[59], NULL, 1, 0, 0);
    codeobj_951c78f21cbf54dbac384aefe568fa04 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[60], NULL, 2, 0, 0);
    codeobj_eecc33c366ead5b0fb1fac1f7c9d92ea = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[61], NULL, 2, 0, 0);
    codeobj_c47c1ed8c50bc8005ee7d07bcc6cfa6a = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[62], NULL, 3, 0, 0);
    codeobj_d32e437fc14cefb26a6a43a7016cde25 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[59], NULL, 1, 0, 0);
    codeobj_d6fb4a45bebab072f3344be91de35b94 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[59], NULL, 1, 0, 0);
    codeobj_f01583d6c5dd58acc8f96125564850b2 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], NULL, NULL, 0, 0, 0);
    codeobj_b0c7537306a83d2cdb59bef36750ead1 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], NULL, NULL, 0, 0, 0);
    codeobj_8d3c1a449d713a52206efaec731c7708 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], NULL, NULL, 0, 0, 0);
    codeobj_6bfa69462d69f5d26bf6c789261161f1 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[59], NULL, 1, 0, 0);
    codeobj_00e14dbe9e37cb305e96a361834af5a1 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[59], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__10_isEnabledForDebug(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__11_isEnabledForTrace(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__1_emit(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__2_enableTrace(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__3_dump(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__4_error(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__5_warning(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__6_debug(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__7_info(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__8_trace(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__9_isEnabledForError(PyObject *annotations);


// The module function definitions.
static PyObject *impl_websocket$_logging$$$function__2_enableTrace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_traceable = python_pars[0];
    PyObject *par_handler = python_pars[1];
    PyObject *par_level = python_pars[2];
    struct Nuitka_FrameObject *frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_traceable);
        tmp_assign_source_1 = par_traceable;
        UPDATE_STRING_DICT0(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    if (isFrameUnusable(cache_frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a)) {
        Py_XDECREF(cache_frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a = MAKE_FUNCTION_FRAME(codeobj_c47c1ed8c50bc8005ee7d07bcc6cfa6a, module_websocket$_logging, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a->m_type_description == NULL);
    frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a = cache_frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a);
    assert(Py_REFCNT(frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_traceable);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_traceable);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_1 = par_handler;
        frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a->m_frame.f_lineno = 52;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_getattr_target_1 == NULL)) {
            tmp_getattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_level);
        tmp_getattr_attr_1 = par_level;
        tmp_args_element_value_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a->m_frame.f_lineno = 53;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a,
        type_description_1,
        par_traceable,
        par_handler,
        par_level
    );


    // Release cached frame if used for exception.
    if (frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a == cache_frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a);
        cache_frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a = NULL;
    }

    assertFrameObject(frame_c47c1ed8c50bc8005ee7d07bcc6cfa6a);

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
    CHECK_OBJECT(par_traceable);
    Py_DECREF(par_traceable);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    CHECK_OBJECT(par_level);
    Py_DECREF(par_level);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_traceable);
    Py_DECREF(par_traceable);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    CHECK_OBJECT(par_level);
    Py_DECREF(par_level);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_logging$$$function__3_dump(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[0];
    PyObject *par_message = python_pars[1];
    struct Nuitka_FrameObject *frame_951c78f21cbf54dbac384aefe568fa04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_951c78f21cbf54dbac384aefe568fa04 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_951c78f21cbf54dbac384aefe568fa04)) {
        Py_XDECREF(cache_frame_951c78f21cbf54dbac384aefe568fa04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_951c78f21cbf54dbac384aefe568fa04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_951c78f21cbf54dbac384aefe568fa04 = MAKE_FUNCTION_FRAME(codeobj_951c78f21cbf54dbac384aefe568fa04, module_websocket$_logging, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_951c78f21cbf54dbac384aefe568fa04->m_type_description == NULL);
    frame_951c78f21cbf54dbac384aefe568fa04 = cache_frame_951c78f21cbf54dbac384aefe568fa04;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_951c78f21cbf54dbac384aefe568fa04);
    assert(Py_REFCNT(frame_951c78f21cbf54dbac384aefe568fa04) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = mod_consts[7];
        CHECK_OBJECT(par_title);
        tmp_add_expr_right_2 = par_title;
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[8];
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_951c78f21cbf54dbac384aefe568fa04->m_frame.f_lineno = 58;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_2 = par_message;
        frame_951c78f21cbf54dbac384aefe568fa04->m_frame.f_lineno = 59;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_951c78f21cbf54dbac384aefe568fa04->m_frame.f_lineno = 60;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_951c78f21cbf54dbac384aefe568fa04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_951c78f21cbf54dbac384aefe568fa04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_951c78f21cbf54dbac384aefe568fa04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_951c78f21cbf54dbac384aefe568fa04,
        type_description_1,
        par_title,
        par_message
    );


    // Release cached frame if used for exception.
    if (frame_951c78f21cbf54dbac384aefe568fa04 == cache_frame_951c78f21cbf54dbac384aefe568fa04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_951c78f21cbf54dbac384aefe568fa04);
        cache_frame_951c78f21cbf54dbac384aefe568fa04 = NULL;
    }

    assertFrameObject(frame_951c78f21cbf54dbac384aefe568fa04);

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
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_logging$$$function__4_error(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    struct Nuitka_FrameObject *frame_d32e437fc14cefb26a6a43a7016cde25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d32e437fc14cefb26a6a43a7016cde25 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d32e437fc14cefb26a6a43a7016cde25)) {
        Py_XDECREF(cache_frame_d32e437fc14cefb26a6a43a7016cde25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d32e437fc14cefb26a6a43a7016cde25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d32e437fc14cefb26a6a43a7016cde25 = MAKE_FUNCTION_FRAME(codeobj_d32e437fc14cefb26a6a43a7016cde25, module_websocket$_logging, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d32e437fc14cefb26a6a43a7016cde25->m_type_description == NULL);
    frame_d32e437fc14cefb26a6a43a7016cde25 = cache_frame_d32e437fc14cefb26a6a43a7016cde25;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d32e437fc14cefb26a6a43a7016cde25);
    assert(Py_REFCNT(frame_d32e437fc14cefb26a6a43a7016cde25) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_msg);
        tmp_args_element_value_1 = par_msg;
        frame_d32e437fc14cefb26a6a43a7016cde25->m_frame.f_lineno = 64;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[10], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
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
        exception_tb = MAKE_TRACEBACK(frame_d32e437fc14cefb26a6a43a7016cde25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d32e437fc14cefb26a6a43a7016cde25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d32e437fc14cefb26a6a43a7016cde25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d32e437fc14cefb26a6a43a7016cde25,
        type_description_1,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_d32e437fc14cefb26a6a43a7016cde25 == cache_frame_d32e437fc14cefb26a6a43a7016cde25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d32e437fc14cefb26a6a43a7016cde25);
        cache_frame_d32e437fc14cefb26a6a43a7016cde25 = NULL;
    }

    assertFrameObject(frame_d32e437fc14cefb26a6a43a7016cde25);

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
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_logging$$$function__5_warning(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    struct Nuitka_FrameObject *frame_00e14dbe9e37cb305e96a361834af5a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_00e14dbe9e37cb305e96a361834af5a1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_00e14dbe9e37cb305e96a361834af5a1)) {
        Py_XDECREF(cache_frame_00e14dbe9e37cb305e96a361834af5a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00e14dbe9e37cb305e96a361834af5a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00e14dbe9e37cb305e96a361834af5a1 = MAKE_FUNCTION_FRAME(codeobj_00e14dbe9e37cb305e96a361834af5a1, module_websocket$_logging, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00e14dbe9e37cb305e96a361834af5a1->m_type_description == NULL);
    frame_00e14dbe9e37cb305e96a361834af5a1 = cache_frame_00e14dbe9e37cb305e96a361834af5a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_00e14dbe9e37cb305e96a361834af5a1);
    assert(Py_REFCNT(frame_00e14dbe9e37cb305e96a361834af5a1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_msg);
        tmp_args_element_value_1 = par_msg;
        frame_00e14dbe9e37cb305e96a361834af5a1->m_frame.f_lineno = 68;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[11], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
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
        exception_tb = MAKE_TRACEBACK(frame_00e14dbe9e37cb305e96a361834af5a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00e14dbe9e37cb305e96a361834af5a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00e14dbe9e37cb305e96a361834af5a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00e14dbe9e37cb305e96a361834af5a1,
        type_description_1,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_00e14dbe9e37cb305e96a361834af5a1 == cache_frame_00e14dbe9e37cb305e96a361834af5a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00e14dbe9e37cb305e96a361834af5a1);
        cache_frame_00e14dbe9e37cb305e96a361834af5a1 = NULL;
    }

    assertFrameObject(frame_00e14dbe9e37cb305e96a361834af5a1);

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
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_logging$$$function__6_debug(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    struct Nuitka_FrameObject *frame_c071be768b2d4d05081b5310aa41e315;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c071be768b2d4d05081b5310aa41e315 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c071be768b2d4d05081b5310aa41e315)) {
        Py_XDECREF(cache_frame_c071be768b2d4d05081b5310aa41e315);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c071be768b2d4d05081b5310aa41e315 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c071be768b2d4d05081b5310aa41e315 = MAKE_FUNCTION_FRAME(codeobj_c071be768b2d4d05081b5310aa41e315, module_websocket$_logging, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c071be768b2d4d05081b5310aa41e315->m_type_description == NULL);
    frame_c071be768b2d4d05081b5310aa41e315 = cache_frame_c071be768b2d4d05081b5310aa41e315;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c071be768b2d4d05081b5310aa41e315);
    assert(Py_REFCNT(frame_c071be768b2d4d05081b5310aa41e315) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_msg);
        tmp_args_element_value_1 = par_msg;
        frame_c071be768b2d4d05081b5310aa41e315->m_frame.f_lineno = 72;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
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
        exception_tb = MAKE_TRACEBACK(frame_c071be768b2d4d05081b5310aa41e315, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c071be768b2d4d05081b5310aa41e315->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c071be768b2d4d05081b5310aa41e315, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c071be768b2d4d05081b5310aa41e315,
        type_description_1,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_c071be768b2d4d05081b5310aa41e315 == cache_frame_c071be768b2d4d05081b5310aa41e315) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c071be768b2d4d05081b5310aa41e315);
        cache_frame_c071be768b2d4d05081b5310aa41e315 = NULL;
    }

    assertFrameObject(frame_c071be768b2d4d05081b5310aa41e315);

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
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_logging$$$function__7_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    struct Nuitka_FrameObject *frame_d6fb4a45bebab072f3344be91de35b94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d6fb4a45bebab072f3344be91de35b94 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6fb4a45bebab072f3344be91de35b94)) {
        Py_XDECREF(cache_frame_d6fb4a45bebab072f3344be91de35b94);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6fb4a45bebab072f3344be91de35b94 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6fb4a45bebab072f3344be91de35b94 = MAKE_FUNCTION_FRAME(codeobj_d6fb4a45bebab072f3344be91de35b94, module_websocket$_logging, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6fb4a45bebab072f3344be91de35b94->m_type_description == NULL);
    frame_d6fb4a45bebab072f3344be91de35b94 = cache_frame_d6fb4a45bebab072f3344be91de35b94;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d6fb4a45bebab072f3344be91de35b94);
    assert(Py_REFCNT(frame_d6fb4a45bebab072f3344be91de35b94) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_msg);
        tmp_args_element_value_1 = par_msg;
        frame_d6fb4a45bebab072f3344be91de35b94->m_frame.f_lineno = 76;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[12], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
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
        exception_tb = MAKE_TRACEBACK(frame_d6fb4a45bebab072f3344be91de35b94, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6fb4a45bebab072f3344be91de35b94->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6fb4a45bebab072f3344be91de35b94, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6fb4a45bebab072f3344be91de35b94,
        type_description_1,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_d6fb4a45bebab072f3344be91de35b94 == cache_frame_d6fb4a45bebab072f3344be91de35b94) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6fb4a45bebab072f3344be91de35b94);
        cache_frame_d6fb4a45bebab072f3344be91de35b94 = NULL;
    }

    assertFrameObject(frame_d6fb4a45bebab072f3344be91de35b94);

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
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_logging$$$function__8_trace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    struct Nuitka_FrameObject *frame_6bfa69462d69f5d26bf6c789261161f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6bfa69462d69f5d26bf6c789261161f1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6bfa69462d69f5d26bf6c789261161f1)) {
        Py_XDECREF(cache_frame_6bfa69462d69f5d26bf6c789261161f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6bfa69462d69f5d26bf6c789261161f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6bfa69462d69f5d26bf6c789261161f1 = MAKE_FUNCTION_FRAME(codeobj_6bfa69462d69f5d26bf6c789261161f1, module_websocket$_logging, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6bfa69462d69f5d26bf6c789261161f1->m_type_description == NULL);
    frame_6bfa69462d69f5d26bf6c789261161f1 = cache_frame_6bfa69462d69f5d26bf6c789261161f1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6bfa69462d69f5d26bf6c789261161f1);
    assert(Py_REFCNT(frame_6bfa69462d69f5d26bf6c789261161f1) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "o";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_msg);
        tmp_args_element_value_1 = par_msg;
        frame_6bfa69462d69f5d26bf6c789261161f1->m_frame.f_lineno = 81;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
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
        exception_tb = MAKE_TRACEBACK(frame_6bfa69462d69f5d26bf6c789261161f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6bfa69462d69f5d26bf6c789261161f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6bfa69462d69f5d26bf6c789261161f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6bfa69462d69f5d26bf6c789261161f1,
        type_description_1,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_6bfa69462d69f5d26bf6c789261161f1 == cache_frame_6bfa69462d69f5d26bf6c789261161f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6bfa69462d69f5d26bf6c789261161f1);
        cache_frame_6bfa69462d69f5d26bf6c789261161f1 = NULL;
    }

    assertFrameObject(frame_6bfa69462d69f5d26bf6c789261161f1);

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
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_logging$$$function__9_isEnabledForError(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b0c7537306a83d2cdb59bef36750ead1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b0c7537306a83d2cdb59bef36750ead1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b0c7537306a83d2cdb59bef36750ead1)) {
        Py_XDECREF(cache_frame_b0c7537306a83d2cdb59bef36750ead1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0c7537306a83d2cdb59bef36750ead1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0c7537306a83d2cdb59bef36750ead1 = MAKE_FUNCTION_FRAME(codeobj_b0c7537306a83d2cdb59bef36750ead1, module_websocket$_logging, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0c7537306a83d2cdb59bef36750ead1->m_type_description == NULL);
    frame_b0c7537306a83d2cdb59bef36750ead1 = cache_frame_b0c7537306a83d2cdb59bef36750ead1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b0c7537306a83d2cdb59bef36750ead1);
    assert(Py_REFCNT(frame_b0c7537306a83d2cdb59bef36750ead1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_b0c7537306a83d2cdb59bef36750ead1->m_frame.f_lineno = 85;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

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
        exception_tb = MAKE_TRACEBACK(frame_b0c7537306a83d2cdb59bef36750ead1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0c7537306a83d2cdb59bef36750ead1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0c7537306a83d2cdb59bef36750ead1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0c7537306a83d2cdb59bef36750ead1,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b0c7537306a83d2cdb59bef36750ead1 == cache_frame_b0c7537306a83d2cdb59bef36750ead1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0c7537306a83d2cdb59bef36750ead1);
        cache_frame_b0c7537306a83d2cdb59bef36750ead1 = NULL;
    }

    assertFrameObject(frame_b0c7537306a83d2cdb59bef36750ead1);

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


static PyObject *impl_websocket$_logging$$$function__10_isEnabledForDebug(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f01583d6c5dd58acc8f96125564850b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f01583d6c5dd58acc8f96125564850b2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f01583d6c5dd58acc8f96125564850b2)) {
        Py_XDECREF(cache_frame_f01583d6c5dd58acc8f96125564850b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f01583d6c5dd58acc8f96125564850b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f01583d6c5dd58acc8f96125564850b2 = MAKE_FUNCTION_FRAME(codeobj_f01583d6c5dd58acc8f96125564850b2, module_websocket$_logging, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f01583d6c5dd58acc8f96125564850b2->m_type_description == NULL);
    frame_f01583d6c5dd58acc8f96125564850b2 = cache_frame_f01583d6c5dd58acc8f96125564850b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f01583d6c5dd58acc8f96125564850b2);
    assert(Py_REFCNT(frame_f01583d6c5dd58acc8f96125564850b2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_f01583d6c5dd58acc8f96125564850b2->m_frame.f_lineno = 89;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

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
        exception_tb = MAKE_TRACEBACK(frame_f01583d6c5dd58acc8f96125564850b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f01583d6c5dd58acc8f96125564850b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f01583d6c5dd58acc8f96125564850b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f01583d6c5dd58acc8f96125564850b2,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f01583d6c5dd58acc8f96125564850b2 == cache_frame_f01583d6c5dd58acc8f96125564850b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f01583d6c5dd58acc8f96125564850b2);
        cache_frame_f01583d6c5dd58acc8f96125564850b2 = NULL;
    }

    assertFrameObject(frame_f01583d6c5dd58acc8f96125564850b2);

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


static PyObject *impl_websocket$_logging$$$function__11_isEnabledForTrace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_8d3c1a449d713a52206efaec731c7708;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8d3c1a449d713a52206efaec731c7708 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8d3c1a449d713a52206efaec731c7708)) {
        Py_XDECREF(cache_frame_8d3c1a449d713a52206efaec731c7708);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8d3c1a449d713a52206efaec731c7708 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8d3c1a449d713a52206efaec731c7708 = MAKE_FUNCTION_FRAME(codeobj_8d3c1a449d713a52206efaec731c7708, module_websocket$_logging, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8d3c1a449d713a52206efaec731c7708->m_type_description == NULL);
    frame_8d3c1a449d713a52206efaec731c7708 = cache_frame_8d3c1a449d713a52206efaec731c7708;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8d3c1a449d713a52206efaec731c7708);
    assert(Py_REFCNT(frame_8d3c1a449d713a52206efaec731c7708) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[0]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 93;

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
        exception_tb = MAKE_TRACEBACK(frame_8d3c1a449d713a52206efaec731c7708, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8d3c1a449d713a52206efaec731c7708->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8d3c1a449d713a52206efaec731c7708, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8d3c1a449d713a52206efaec731c7708,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_8d3c1a449d713a52206efaec731c7708 == cache_frame_8d3c1a449d713a52206efaec731c7708) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8d3c1a449d713a52206efaec731c7708);
        cache_frame_8d3c1a449d713a52206efaec731c7708 = NULL;
    }

    assertFrameObject(frame_8d3c1a449d713a52206efaec731c7708);

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



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__10_isEnabledForDebug(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function__10_isEnabledForDebug,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f01583d6c5dd58acc8f96125564850b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_logging,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__11_isEnabledForTrace(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function__11_isEnabledForTrace,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8d3c1a449d713a52206efaec731c7708,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_logging,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__1_emit(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_eecc33c366ead5b0fb1fac1f7c9d92ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_logging,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__2_enableTrace(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function__2_enableTrace,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c47c1ed8c50bc8005ee7d07bcc6cfa6a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_logging,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__3_dump(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function__3_dump,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_951c78f21cbf54dbac384aefe568fa04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_logging,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__4_error(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function__4_error,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d32e437fc14cefb26a6a43a7016cde25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_logging,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__5_warning(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function__5_warning,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_00e14dbe9e37cb305e96a361834af5a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_logging,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__6_debug(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function__6_debug,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c071be768b2d4d05081b5310aa41e315,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_logging,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__7_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function__7_info,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d6fb4a45bebab072f3344be91de35b94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_logging,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__8_trace(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function__8_trace,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6bfa69462d69f5d26bf6c789261161f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_logging,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_logging$$$function__9_isEnabledForError(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_logging$$$function__9_isEnabledForError,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b0c7537306a83d2cdb59bef36750ead1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_logging,
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

function_impl_code functable_websocket$_logging[] = {
    NULL,
    impl_websocket$_logging$$$function__2_enableTrace,
    impl_websocket$_logging$$$function__3_dump,
    impl_websocket$_logging$$$function__4_error,
    impl_websocket$_logging$$$function__5_warning,
    impl_websocket$_logging$$$function__6_debug,
    impl_websocket$_logging$$$function__7_info,
    impl_websocket$_logging$$$function__8_trace,
    impl_websocket$_logging$$$function__9_isEnabledForError,
    impl_websocket$_logging$$$function__10_isEnabledForDebug,
    impl_websocket$_logging$$$function__11_isEnabledForTrace,
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

    function_impl_code *current = functable_websocket$_logging;
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

    if (offset > sizeof(functable_websocket$_logging) || offset < 0) {
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
        functable_websocket$_logging[offset],
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
        module_websocket$_logging,
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
PyObject *modulecode_websocket$_logging(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websocket._logging");

    // Store the module for future use.
    module_websocket$_logging = module;

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
        PRINT_STRING("websocket._logging: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._logging: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._logging: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwebsocket$_logging\n");

    moduledict_websocket$_logging = MODULE_DICT(module_websocket$_logging);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websocket$_logging,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websocket$_logging,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[63]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websocket$_logging,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_logging,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_logging,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websocket$_logging);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_websocket$_logging);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_9fc7702f35cdeca9fe653c5d9474e92d;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *locals_websocket$_logging$$$class__1_NullHandler_26 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4153d8b6a04ff1774491c87e3097a5ac_2;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_2);
    }
    frame_9fc7702f35cdeca9fe653c5d9474e92d = MAKE_MODULE_FRAME(codeobj_9fc7702f35cdeca9fe653c5d9474e92d, module_websocket$_logging);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9fc7702f35cdeca9fe653c5d9474e92d);
    assert(Py_REFCNT(frame_9fc7702f35cdeca9fe653c5d9474e92d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[17];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[21], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[4];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_websocket$_logging;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[23];
        frame_9fc7702f35cdeca9fe653c5d9474e92d->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_9fc7702f35cdeca9fe653c5d9474e92d->m_frame.f_lineno = 22;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_5);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[4];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_websocket$_logging;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[26];
        tmp_level_value_2 = mod_consts[23];
        frame_9fc7702f35cdeca9fe653c5d9474e92d->m_frame.f_lineno = 24;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_websocket$_logging,
                mod_consts[27],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_6);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_9fc7702f35cdeca9fe653c5d9474e92d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_9fc7702f35cdeca9fe653c5d9474e92d, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_8 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[23];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_10 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[29]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[27];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_9fc7702f35cdeca9fe653c5d9474e92d->m_frame.f_lineno = 26;
        tmp_assign_source_11 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[30]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
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
        tmp_mod_expr_left_1 = mod_consts[31];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[32];
        tmp_getattr_default_1 = mod_consts[33];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[32]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


            exception_lineno = 26;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 26;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_websocket$_logging$$$class__1_NullHandler_26 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[34];
        tmp_res = PyObject_SetItem(locals_websocket$_logging$$$class__1_NullHandler_26, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_websocket$_logging$$$class__1_NullHandler_26, mod_consts[36], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        frame_4153d8b6a04ff1774491c87e3097a5ac_2 = MAKE_CLASS_FRAME(codeobj_4153d8b6a04ff1774491c87e3097a5ac, module_websocket$_logging, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4153d8b6a04ff1774491c87e3097a5ac_2);
        assert(Py_REFCNT(frame_4153d8b6a04ff1774491c87e3097a5ac_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[37]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_logging$$$function__1_emit(tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_websocket$_logging$$$class__1_NullHandler_26, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4153d8b6a04ff1774491c87e3097a5ac_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4153d8b6a04ff1774491c87e3097a5ac_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4153d8b6a04ff1774491c87e3097a5ac_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4153d8b6a04ff1774491c87e3097a5ac_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_4153d8b6a04ff1774491c87e3097a5ac_2);

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


                exception_lineno = 26;

                goto try_except_handler_5;
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
        tmp_res = PyObject_SetItem(locals_websocket$_logging$$$class__1_NullHandler_26, mod_consts[40], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_5;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[27];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_websocket$_logging$$$class__1_NullHandler_26;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_9fc7702f35cdeca9fe653c5d9474e92d->m_frame.f_lineno = 26;
            tmp_assign_source_14 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_websocket$_logging$$$class__1_NullHandler_26);
        locals_websocket$_logging$$$class__1_NullHandler_26 = NULL;
        goto try_return_handler_4;
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

        Py_DECREF(locals_websocket$_logging$$$class__1_NullHandler_26);
        locals_websocket$_logging$$$class__1_NullHandler_26 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

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
        exception_lineno = 26;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_13);
    }
    goto try_end_2;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
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
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 23;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9fc7702f35cdeca9fe653c5d9474e92d->m_frame) frame_9fc7702f35cdeca9fe653c5d9474e92d->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_3;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_4;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[2]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_9fc7702f35cdeca9fe653c5d9474e92d->m_frame.f_lineno = 30;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_9fc7702f35cdeca9fe653c5d9474e92d->m_frame.f_lineno = 30;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_False;
        UPDATE_STRING_DICT0(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_LIST9(mod_consts[41]);
        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_9fc7702f35cdeca9fe653c5d9474e92d->m_frame.f_lineno = 39;
        tmp_tuple_element_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[43]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_5);
        tmp_dict_key_1 = mod_consts[44];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_annotations_2 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_8;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[45];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[43]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[46];
            tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[47];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_defaults_1);
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_17 = MAKE_FUNCTION_websocket$_logging$$$function__2_enableTrace(tmp_defaults_1, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_17);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9fc7702f35cdeca9fe653c5d9474e92d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fc7702f35cdeca9fe653c5d9474e92d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fc7702f35cdeca9fe653c5d9474e92d, exception_lineno);
    }



    assertFrameObject(frame_9fc7702f35cdeca9fe653c5d9474e92d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[49]);


        tmp_assign_source_18 = MAKE_FUNCTION_websocket$_logging$$$function__3_dump(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_annotations_4;
        tmp_annotations_4 = DICT_COPY(mod_consts[51]);


        tmp_assign_source_19 = MAKE_FUNCTION_websocket$_logging$$$function__4_error(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_5;
        tmp_annotations_5 = DICT_COPY(mod_consts[51]);


        tmp_assign_source_20 = MAKE_FUNCTION_websocket$_logging$$$function__5_warning(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_6;
        tmp_annotations_6 = DICT_COPY(mod_consts[51]);


        tmp_assign_source_21 = MAKE_FUNCTION_websocket$_logging$$$function__6_debug(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_7;
        tmp_annotations_7 = DICT_COPY(mod_consts[51]);


        tmp_assign_source_22 = MAKE_FUNCTION_websocket$_logging$$$function__7_info(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_annotations_8;
        tmp_annotations_8 = DICT_COPY(mod_consts[51]);


        tmp_assign_source_23 = MAKE_FUNCTION_websocket$_logging$$$function__8_trace(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_9;
        tmp_annotations_9 = DICT_COPY(mod_consts[53]);


        tmp_assign_source_24 = MAKE_FUNCTION_websocket$_logging$$$function__9_isEnabledForError(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_annotations_10;
        tmp_annotations_10 = DICT_COPY(mod_consts[53]);


        tmp_assign_source_25 = MAKE_FUNCTION_websocket$_logging$$$function__10_isEnabledForDebug(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_annotations_11;
        tmp_annotations_11 = DICT_COPY(mod_consts[53]);


        tmp_assign_source_26 = MAKE_FUNCTION_websocket$_logging$$$function__11_isEnabledForTrace(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_websocket$_logging, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_26);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websocket._logging", false);

    Py_INCREF(module_websocket$_logging);
    return module_websocket$_logging;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_logging, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("websocket$_logging", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
