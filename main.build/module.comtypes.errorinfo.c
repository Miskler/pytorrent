/* Generated code for Python module 'comtypes.errorinfo'
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

/* The "module_comtypes$errorinfo" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_comtypes$errorinfo;
PyDictObject *moduledict_comtypes$errorinfo;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[107];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[107];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("comtypes.errorinfo"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 107; i++) {
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
void checkModuleConstants_comtypes$errorinfo(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 107; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_301598999605918595c0a9f5391d0a3c;
static PyCodeObject *codeobj_cc76a9f0a98876de188771346b5f53ed;
static PyCodeObject *codeobj_303e3095f4d6d7dcd93f1962bfdf8e2b;
static PyCodeObject *codeobj_59afd5b8c9064a0f31ea4cba8b94e9e0;
static PyCodeObject *codeobj_3f0b87902b128dd68abb4e73804da2f0;
static PyCodeObject *codeobj_26fc1caed115635edaaeccbbb445efcf;
static PyCodeObject *codeobj_f0bc9904972f66b73291a5dabde5e2ff;
static PyCodeObject *codeobj_47da438ab8227224147d00b443c4ba9d;
static PyCodeObject *codeobj_04f1ccd53b16d87de8d324a8a812f95f;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[41]; CHECK_OBJECT(module_filename_obj);
    codeobj_301598999605918595c0a9f5391d0a3c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[100], mod_consts[100], NULL, NULL, 0, 0, 0);
    codeobj_cc76a9f0a98876de188771346b5f53ed = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[101], NULL, 0, 0, 0);
    codeobj_303e3095f4d6d7dcd93f1962bfdf8e2b = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[102], NULL, 0, 0, 0);
    codeobj_59afd5b8c9064a0f31ea4cba8b94e9e0 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[103], NULL, 0, 0, 0);
    codeobj_3f0b87902b128dd68abb4e73804da2f0 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[103], NULL, 0, 0, 0);
    codeobj_26fc1caed115635edaaeccbbb445efcf = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[103], NULL, 0, 0, 0);
    codeobj_f0bc9904972f66b73291a5dabde5e2ff = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[104], NULL, 6, 0, 0);
    codeobj_47da438ab8227224147d00b443c4ba9d = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[105], NULL, 6, 0, 0);
    codeobj_04f1ccd53b16d87de8d324a8a812f95f = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[102], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_comtypes$errorinfo$$$function__1_CreateErrorInfo();


static PyObject *MAKE_FUNCTION_comtypes$errorinfo$$$function__2_GetErrorInfo();


static PyObject *MAKE_FUNCTION_comtypes$errorinfo$$$function__3_SetErrorInfo();


static PyObject *MAKE_FUNCTION_comtypes$errorinfo$$$function__4_ReportError(PyObject *defaults);


static PyObject *MAKE_FUNCTION_comtypes$errorinfo$$$function__5_ReportException(PyObject *defaults);


// The module function definitions.
static PyObject *impl_comtypes$errorinfo$$$function__1_CreateErrorInfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_cei = NULL;
    struct Nuitka_FrameObject *frame_cc76a9f0a98876de188771346b5f53ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cc76a9f0a98876de188771346b5f53ed = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cc76a9f0a98876de188771346b5f53ed)) {
        Py_XDECREF(cache_frame_cc76a9f0a98876de188771346b5f53ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc76a9f0a98876de188771346b5f53ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc76a9f0a98876de188771346b5f53ed = MAKE_FUNCTION_FRAME(codeobj_cc76a9f0a98876de188771346b5f53ed, module_comtypes$errorinfo, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc76a9f0a98876de188771346b5f53ed->m_type_description == NULL);
    frame_cc76a9f0a98876de188771346b5f53ed = cache_frame_cc76a9f0a98876de188771346b5f53ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cc76a9f0a98876de188771346b5f53ed);
    assert(Py_REFCNT(frame_cc76a9f0a98876de188771346b5f53ed) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_cc76a9f0a98876de188771346b5f53ed->m_frame.f_lineno = 55;
        tmp_called_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_cc76a9f0a98876de188771346b5f53ed->m_frame.f_lineno = 55;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_cei == NULL);
        var_cei = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cei);
        tmp_args_element_value_3 = var_cei;
        frame_cc76a9f0a98876de188771346b5f53ed->m_frame.f_lineno = 56;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_cc76a9f0a98876de188771346b5f53ed->m_frame.f_lineno = 56;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
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
        exception_tb = MAKE_TRACEBACK(frame_cc76a9f0a98876de188771346b5f53ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc76a9f0a98876de188771346b5f53ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc76a9f0a98876de188771346b5f53ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc76a9f0a98876de188771346b5f53ed,
        type_description_1,
        var_cei
    );


    // Release cached frame if used for exception.
    if (frame_cc76a9f0a98876de188771346b5f53ed == cache_frame_cc76a9f0a98876de188771346b5f53ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc76a9f0a98876de188771346b5f53ed);
        cache_frame_cc76a9f0a98876de188771346b5f53ed = NULL;
    }

    assertFrameObject(frame_cc76a9f0a98876de188771346b5f53ed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_cei);
    tmp_return_value = var_cei;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cei);
    Py_DECREF(var_cei);
    var_cei = NULL;
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

    Py_XDECREF(var_cei);
    var_cei = NULL;
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


static PyObject *impl_comtypes$errorinfo$$$function__2_GetErrorInfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_errinfo = NULL;
    struct Nuitka_FrameObject *frame_303e3095f4d6d7dcd93f1962bfdf8e2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_303e3095f4d6d7dcd93f1962bfdf8e2b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_303e3095f4d6d7dcd93f1962bfdf8e2b)) {
        Py_XDECREF(cache_frame_303e3095f4d6d7dcd93f1962bfdf8e2b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_303e3095f4d6d7dcd93f1962bfdf8e2b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_303e3095f4d6d7dcd93f1962bfdf8e2b = MAKE_FUNCTION_FRAME(codeobj_303e3095f4d6d7dcd93f1962bfdf8e2b, module_comtypes$errorinfo, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_303e3095f4d6d7dcd93f1962bfdf8e2b->m_type_description == NULL);
    frame_303e3095f4d6d7dcd93f1962bfdf8e2b = cache_frame_303e3095f4d6d7dcd93f1962bfdf8e2b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_303e3095f4d6d7dcd93f1962bfdf8e2b);
    assert(Py_REFCNT(frame_303e3095f4d6d7dcd93f1962bfdf8e2b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_303e3095f4d6d7dcd93f1962bfdf8e2b->m_frame.f_lineno = 61;
        tmp_called_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_303e3095f4d6d7dcd93f1962bfdf8e2b->m_frame.f_lineno = 61;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_errinfo == NULL);
        var_errinfo = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[8];
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_errinfo);
        tmp_args_element_value_4 = var_errinfo;
        frame_303e3095f4d6d7dcd93f1962bfdf8e2b->m_frame.f_lineno = 62;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_303e3095f4d6d7dcd93f1962bfdf8e2b->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_errinfo);
    tmp_return_value = var_errinfo;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_303e3095f4d6d7dcd93f1962bfdf8e2b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_303e3095f4d6d7dcd93f1962bfdf8e2b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_303e3095f4d6d7dcd93f1962bfdf8e2b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_303e3095f4d6d7dcd93f1962bfdf8e2b,
        type_description_1,
        var_errinfo
    );


    // Release cached frame if used for exception.
    if (frame_303e3095f4d6d7dcd93f1962bfdf8e2b == cache_frame_303e3095f4d6d7dcd93f1962bfdf8e2b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_303e3095f4d6d7dcd93f1962bfdf8e2b);
        cache_frame_303e3095f4d6d7dcd93f1962bfdf8e2b = NULL;
    }

    assertFrameObject(frame_303e3095f4d6d7dcd93f1962bfdf8e2b);

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
    CHECK_OBJECT(var_errinfo);
    Py_DECREF(var_errinfo);
    var_errinfo = NULL;
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

    Py_XDECREF(var_errinfo);
    var_errinfo = NULL;
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


static PyObject *impl_comtypes$errorinfo$$$function__3_SetErrorInfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_errinfo = python_pars[0];
    struct Nuitka_FrameObject *frame_04f1ccd53b16d87de8d324a8a812f95f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_04f1ccd53b16d87de8d324a8a812f95f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_04f1ccd53b16d87de8d324a8a812f95f)) {
        Py_XDECREF(cache_frame_04f1ccd53b16d87de8d324a8a812f95f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04f1ccd53b16d87de8d324a8a812f95f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04f1ccd53b16d87de8d324a8a812f95f = MAKE_FUNCTION_FRAME(codeobj_04f1ccd53b16d87de8d324a8a812f95f, module_comtypes$errorinfo, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04f1ccd53b16d87de8d324a8a812f95f->m_type_description == NULL);
    frame_04f1ccd53b16d87de8d324a8a812f95f = cache_frame_04f1ccd53b16d87de8d324a8a812f95f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_04f1ccd53b16d87de8d324a8a812f95f);
    assert(Py_REFCNT(frame_04f1ccd53b16d87de8d324a8a812f95f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[8];
        CHECK_OBJECT(par_errinfo);
        tmp_args_element_value_2 = par_errinfo;
        frame_04f1ccd53b16d87de8d324a8a812f95f->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
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
        exception_tb = MAKE_TRACEBACK(frame_04f1ccd53b16d87de8d324a8a812f95f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04f1ccd53b16d87de8d324a8a812f95f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04f1ccd53b16d87de8d324a8a812f95f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04f1ccd53b16d87de8d324a8a812f95f,
        type_description_1,
        par_errinfo
    );


    // Release cached frame if used for exception.
    if (frame_04f1ccd53b16d87de8d324a8a812f95f == cache_frame_04f1ccd53b16d87de8d324a8a812f95f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04f1ccd53b16d87de8d324a8a812f95f);
        cache_frame_04f1ccd53b16d87de8d324a8a812f95f = NULL;
    }

    assertFrameObject(frame_04f1ccd53b16d87de8d324a8a812f95f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_errinfo);
    Py_DECREF(par_errinfo);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_errinfo);
    Py_DECREF(par_errinfo);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$errorinfo$$$function__4_ReportError(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *par_iid = python_pars[1];
    PyObject *par_clsid = python_pars[2];
    PyObject *par_helpfile = python_pars[3];
    PyObject *par_helpcontext = python_pars[4];
    PyObject *par_hresult = python_pars[5];
    PyObject *var_ei = NULL;
    PyObject *var_progid = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_f0bc9904972f66b73291a5dabde5e2ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_f0bc9904972f66b73291a5dabde5e2ff = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f0bc9904972f66b73291a5dabde5e2ff)) {
        Py_XDECREF(cache_frame_f0bc9904972f66b73291a5dabde5e2ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0bc9904972f66b73291a5dabde5e2ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0bc9904972f66b73291a5dabde5e2ff = MAKE_FUNCTION_FRAME(codeobj_f0bc9904972f66b73291a5dabde5e2ff, module_comtypes$errorinfo, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0bc9904972f66b73291a5dabde5e2ff->m_type_description == NULL);
    frame_f0bc9904972f66b73291a5dabde5e2ff = cache_frame_f0bc9904972f66b73291a5dabde5e2ff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f0bc9904972f66b73291a5dabde5e2ff);
    assert(Py_REFCNT(frame_f0bc9904972f66b73291a5dabde5e2ff) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame.f_lineno = 73;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ei == NULL);
        var_ei = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_ei);
        tmp_called_instance_1 = var_ei;
        CHECK_OBJECT(par_text);
        tmp_args_element_value_1 = par_text;
        frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame.f_lineno = 74;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[12], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_ei);
        tmp_called_instance_2 = var_ei;
        CHECK_OBJECT(par_iid);
        tmp_args_element_value_2 = par_iid;
        frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame.f_lineno = 75;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[13], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_helpfile);
        tmp_cmp_expr_left_1 = par_helpfile;
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_ei);
        tmp_called_instance_3 = var_ei;
        CHECK_OBJECT(par_helpfile);
        tmp_args_element_value_3 = par_helpfile;
        frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame.f_lineno = 77;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[14], tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_helpcontext);
        tmp_cmp_expr_left_2 = par_helpcontext;
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
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_ei);
        tmp_called_instance_4 = var_ei;
        CHECK_OBJECT(par_helpcontext);
        tmp_args_element_value_4 = par_helpcontext;
        frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame.f_lineno = 79;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[15], tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_clsid);
        tmp_cmp_expr_left_3 = par_clsid;
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
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        int tmp_truth_name_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clsid);
        tmp_args_element_value_5 = par_clsid;
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 81;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clsid);
        tmp_args_element_value_7 = par_clsid;
        frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame.f_lineno = 82;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_7);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_clsid;
            assert(old != NULL);
            par_clsid = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        nuitka_bool tmp_assign_source_3;
        tmp_assign_source_3 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_5;
        if (par_clsid == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_5 = par_clsid;
        frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame.f_lineno = 84;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[20]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(var_progid == NULL);
        var_progid = tmp_assign_source_4;
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
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_5;
    }
    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f0bc9904972f66b73291a5dabde5e2ff, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f0bc9904972f66b73291a5dabde5e2ff, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 83;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame) frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_3;
    branch_no_5:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var_ei);
        tmp_expression_value_1 = var_ei;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_progid == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = var_progid;
        frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame.f_lineno = 88;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_6:;
    branch_no_3:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[8];
        CHECK_OBJECT(var_ei);
        tmp_args_element_value_10 = var_ei;
        frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_7 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0bc9904972f66b73291a5dabde5e2ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0bc9904972f66b73291a5dabde5e2ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0bc9904972f66b73291a5dabde5e2ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0bc9904972f66b73291a5dabde5e2ff,
        type_description_1,
        par_text,
        par_iid,
        par_clsid,
        par_helpfile,
        par_helpcontext,
        par_hresult,
        var_ei,
        var_progid
    );


    // Release cached frame if used for exception.
    if (frame_f0bc9904972f66b73291a5dabde5e2ff == cache_frame_f0bc9904972f66b73291a5dabde5e2ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0bc9904972f66b73291a5dabde5e2ff);
        cache_frame_f0bc9904972f66b73291a5dabde5e2ff = NULL;
    }

    assertFrameObject(frame_f0bc9904972f66b73291a5dabde5e2ff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_hresult);
    tmp_return_value = par_hresult;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_clsid);
    par_clsid = NULL;
    CHECK_OBJECT(var_ei);
    Py_DECREF(var_ei);
    var_ei = NULL;
    Py_XDECREF(var_progid);
    var_progid = NULL;
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

    Py_XDECREF(par_clsid);
    par_clsid = NULL;
    Py_XDECREF(var_ei);
    var_ei = NULL;
    Py_XDECREF(var_progid);
    var_progid = NULL;
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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_iid);
    Py_DECREF(par_iid);
    CHECK_OBJECT(par_helpfile);
    Py_DECREF(par_helpfile);
    CHECK_OBJECT(par_helpcontext);
    Py_DECREF(par_helpcontext);
    CHECK_OBJECT(par_hresult);
    Py_DECREF(par_hresult);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_iid);
    Py_DECREF(par_iid);
    CHECK_OBJECT(par_helpfile);
    Py_DECREF(par_helpfile);
    CHECK_OBJECT(par_helpcontext);
    Py_DECREF(par_helpcontext);
    CHECK_OBJECT(par_hresult);
    Py_DECREF(par_hresult);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$errorinfo$$$function__5_ReportException(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hresult = python_pars[0];
    PyObject *par_iid = python_pars[1];
    PyObject *par_clsid = python_pars[2];
    PyObject *par_helpfile = python_pars[3];
    PyObject *par_helpcontext = python_pars[4];
    PyObject *par_stacklevel = python_pars[5];
    PyObject *var_typ = NULL;
    PyObject *var_value = NULL;
    PyObject *var_tb = NULL;
    PyObject *var__ = NULL;
    PyObject *var_line = NULL;
    PyObject *var_name = NULL;
    PyObject *var_text = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_47da438ab8227224147d00b443c4ba9d;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_47da438ab8227224147d00b443c4ba9d = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_47da438ab8227224147d00b443c4ba9d)) {
        Py_XDECREF(cache_frame_47da438ab8227224147d00b443c4ba9d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47da438ab8227224147d00b443c4ba9d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47da438ab8227224147d00b443c4ba9d = MAKE_FUNCTION_FRAME(codeobj_47da438ab8227224147d00b443c4ba9d, module_comtypes$errorinfo, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_47da438ab8227224147d00b443c4ba9d->m_type_description == NULL);
    frame_47da438ab8227224147d00b443c4ba9d = cache_frame_47da438ab8227224147d00b443c4ba9d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_47da438ab8227224147d00b443c4ba9d);
    assert(Py_REFCNT(frame_47da438ab8227224147d00b443c4ba9d) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_47da438ab8227224147d00b443c4ba9d->m_frame.f_lineno = 95;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[26]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 95;
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 95;
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 95;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 95;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 95;
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
        assert(var_typ == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_typ = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_value == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_value = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_tb == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_tb = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_stacklevel);
        tmp_cmp_expr_left_1 = par_stacklevel;
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stacklevel);
        tmp_args_element_value_1 = par_stacklevel;
        frame_47da438ab8227224147d00b443c4ba9d->m_frame.f_lineno = 97;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 97;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_10;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_1;
        if (var_tb == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_1 = var_tb;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_tb;
            var_tb = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 97;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        if (var_tb == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = var_tb;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[32]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_line == NULL);
        var_line = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        if (var_tb == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_tb;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[31]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[33]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[34];
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_1 = mod_consts[35];
        CHECK_OBJECT(var_typ);
        tmp_tuple_element_1 = var_typ;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_value);
        tmp_tuple_element_1 = var_value;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_name);
        tmp_tuple_element_1 = var_name;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_line);
        tmp_tuple_element_1 = var_line;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        tmp_assign_source_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_text == NULL);
        var_text = tmp_assign_source_14;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        tmp_mod_expr_left_2 = mod_consts[36];
        CHECK_OBJECT(var_typ);
        tmp_tuple_element_2 = var_typ;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_value);
        tmp_tuple_element_2 = var_value;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
        tmp_assign_source_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_text == NULL);
        var_text = tmp_assign_source_15;
    }
    branch_end_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_text);
        tmp_kw_call_arg_value_0_1 = var_text;
        CHECK_OBJECT(par_iid);
        tmp_kw_call_arg_value_1_1 = par_iid;
        CHECK_OBJECT(par_clsid);
        tmp_kw_call_dict_value_0_1 = par_clsid;
        CHECK_OBJECT(par_helpfile);
        tmp_kw_call_dict_value_1_1 = par_helpfile;
        CHECK_OBJECT(par_helpcontext);
        tmp_kw_call_dict_value_2_1 = par_helpcontext;
        CHECK_OBJECT(par_hresult);
        tmp_kw_call_dict_value_3_1 = par_hresult;
        frame_47da438ab8227224147d00b443c4ba9d->m_frame.f_lineno = 104;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[38]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
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
        exception_tb = MAKE_TRACEBACK(frame_47da438ab8227224147d00b443c4ba9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47da438ab8227224147d00b443c4ba9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47da438ab8227224147d00b443c4ba9d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47da438ab8227224147d00b443c4ba9d,
        type_description_1,
        par_hresult,
        par_iid,
        par_clsid,
        par_helpfile,
        par_helpcontext,
        par_stacklevel,
        var_typ,
        var_value,
        var_tb,
        var__,
        var_line,
        var_name,
        var_text
    );


    // Release cached frame if used for exception.
    if (frame_47da438ab8227224147d00b443c4ba9d == cache_frame_47da438ab8227224147d00b443c4ba9d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_47da438ab8227224147d00b443c4ba9d);
        cache_frame_47da438ab8227224147d00b443c4ba9d = NULL;
    }

    assertFrameObject(frame_47da438ab8227224147d00b443c4ba9d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_typ);
    Py_DECREF(var_typ);
    var_typ = NULL;
    CHECK_OBJECT(var_value);
    Py_DECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_tb);
    var_tb = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_text);
    Py_DECREF(var_text);
    var_text = NULL;
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

    Py_XDECREF(var_typ);
    var_typ = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_tb);
    var_tb = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_text);
    var_text = NULL;
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
    CHECK_OBJECT(par_hresult);
    Py_DECREF(par_hresult);
    CHECK_OBJECT(par_iid);
    Py_DECREF(par_iid);
    CHECK_OBJECT(par_clsid);
    Py_DECREF(par_clsid);
    CHECK_OBJECT(par_helpfile);
    Py_DECREF(par_helpfile);
    CHECK_OBJECT(par_helpcontext);
    Py_DECREF(par_helpcontext);
    CHECK_OBJECT(par_stacklevel);
    Py_DECREF(par_stacklevel);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hresult);
    Py_DECREF(par_hresult);
    CHECK_OBJECT(par_iid);
    Py_DECREF(par_iid);
    CHECK_OBJECT(par_clsid);
    Py_DECREF(par_clsid);
    CHECK_OBJECT(par_helpfile);
    Py_DECREF(par_helpfile);
    CHECK_OBJECT(par_helpcontext);
    Py_DECREF(par_helpcontext);
    CHECK_OBJECT(par_stacklevel);
    Py_DECREF(par_stacklevel);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_comtypes$errorinfo$$$function__1_CreateErrorInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$errorinfo$$$function__1_CreateErrorInfo,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc76a9f0a98876de188771346b5f53ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$errorinfo,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$errorinfo$$$function__2_GetErrorInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$errorinfo$$$function__2_GetErrorInfo,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_303e3095f4d6d7dcd93f1962bfdf8e2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$errorinfo,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$errorinfo$$$function__3_SetErrorInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$errorinfo$$$function__3_SetErrorInfo,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_04f1ccd53b16d87de8d324a8a812f95f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$errorinfo,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$errorinfo$$$function__4_ReportError(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$errorinfo$$$function__4_ReportError,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0bc9904972f66b73291a5dabde5e2ff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$errorinfo,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$errorinfo$$$function__5_ReportException(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$errorinfo$$$function__5_ReportException,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_47da438ab8227224147d00b443c4ba9d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$errorinfo,
        mod_consts[39],
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

function_impl_code functable_comtypes$errorinfo[] = {
    impl_comtypes$errorinfo$$$function__1_CreateErrorInfo,
    impl_comtypes$errorinfo$$$function__2_GetErrorInfo,
    impl_comtypes$errorinfo$$$function__3_SetErrorInfo,
    impl_comtypes$errorinfo$$$function__4_ReportError,
    impl_comtypes$errorinfo$$$function__5_ReportException,
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

    function_impl_code *current = functable_comtypes$errorinfo;
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

    if (offset > sizeof(functable_comtypes$errorinfo) || offset < 0) {
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
        functable_comtypes$errorinfo[offset],
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
        module_comtypes$errorinfo,
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
PyObject *modulecode_comtypes$errorinfo(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("comtypes.errorinfo");

    // Store the module for future use.
    module_comtypes$errorinfo = module;

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
        PRINT_STRING("comtypes.errorinfo: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.errorinfo: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.errorinfo: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcomtypes$errorinfo\n");

    moduledict_comtypes$errorinfo = MODULE_DICT(module_comtypes$errorinfo);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_comtypes$errorinfo,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_comtypes$errorinfo,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[106]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_comtypes$errorinfo,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$errorinfo,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$errorinfo,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_comtypes$errorinfo);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_comtypes$errorinfo);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
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
    struct Nuitka_FrameObject *frame_301598999605918595c0a9f5391d0a3c;
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
    PyObject *locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2;
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
    PyObject *locals_comtypes$errorinfo$$$class__2_IErrorInfo_29 = NULL;
    struct Nuitka_FrameObject *frame_3f0b87902b128dd68abb4e73804da2f0_3;
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
    PyObject *locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44 = NULL;
    struct Nuitka_FrameObject *frame_26fc1caed115635edaaeccbbb445efcf_4;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_2);
    }
    frame_301598999605918595c0a9f5391d0a3c = MAKE_MODULE_FRAME(codeobj_301598999605918595c0a9f5391d0a3c, module_comtypes$errorinfo);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_301598999605918595c0a9f5391d0a3c);
    assert(Py_REFCNT(frame_301598999605918595c0a9f5391d0a3c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[41];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[44], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[45], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        tmp_star_imported_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_star_imported_1 == NULL));
        tmp_result = IMPORT_MODULE_STAR(module_comtypes$errorinfo, true, tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[47];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$errorinfo;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[48];
        tmp_level_value_1 = mod_consts[8];
        frame_301598999605918595c0a9f5391d0a3c->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$errorinfo,
                mod_consts[49],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[49]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_comtypes$errorinfo,
                mod_consts[50],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[50]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_comtypes$errorinfo,
                mod_consts[51],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[51]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_comtypes$errorinfo,
                mod_consts[18],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[18]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_comtypes$errorinfo,
                mod_consts[52],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[52]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_10);
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
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[53];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_comtypes$errorinfo;
        tmp_locals_arg_value_2 = (PyObject *)moduledict_comtypes$errorinfo;
        tmp_fromlist_value_2 = mod_consts[54];
        tmp_level_value_2 = mod_consts[8];
        frame_301598999605918595c0a9f5391d0a3c->m_frame.f_lineno = 4;
        tmp_star_imported_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_comtypes$errorinfo, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_assign_source_11 == NULL)) {
            tmp_assign_source_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assign_source_12 == NULL)) {
            tmp_assign_source_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_assign_source_13 == NULL)) {
            tmp_assign_source_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_13);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_assign_source_14 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_14, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_15 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
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


            exception_lineno = 14;

            goto try_except_handler_2;
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
        tmp_subscript_value_1 = mod_consts[8];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_17 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[60]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[60]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[1];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_301598999605918595c0a9f5391d0a3c->m_frame.f_lineno = 14;
        tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[61]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
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
        tmp_mod_expr_left_1 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[34];
        tmp_getattr_default_1 = mod_consts[63];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[34]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 14;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[1];
        tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2 = MAKE_CLASS_FRAME(codeobj_59afd5b8c9064a0f31ea4cba8b94e9e0, module_comtypes$errorinfo, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2);
        assert(Py_REFCNT(frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_2;
            tmp_called_value_2 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[18]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 15;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2->m_frame.f_lineno = 15;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[67]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_tuple_element_4;
            tmp_called_value_3 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[51]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 17;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_1 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_2 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[50]);

            if (tmp_args_element_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50]);

                    if (unlikely(tmp_args_element_value_2 == NULL)) {
                        tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                    }

                    if (tmp_args_element_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_args_element_value_1);

                        exception_lineno = 17;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_args_element_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_3 = mod_consts[13];
            tmp_tuple_element_4 = MAKE_LIST1(mod_consts[69]);
            tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_4;
                PyObject *tmp_args_element_value_5;
                PyTuple_SET_ITEM(tmp_args_element_value_4, 0, tmp_tuple_element_4);
                tmp_called_value_4 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[0]);

                if (tmp_called_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_called_value_4 == NULL)) {
                            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_called_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 18;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_4);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_args_element_value_5 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[18]);

                if (tmp_args_element_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_5 == NULL)) {
                            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
                        }

                        if (tmp_args_element_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_4);

                            exception_lineno = 18;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_args_element_value_5);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2->m_frame.f_lineno = 18;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
                Py_DECREF(tmp_called_value_4);
                Py_DECREF(tmp_args_element_value_5);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_4, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = mod_consts[70];
                PyTuple_SET_ITEM0(tmp_args_element_value_4, 2, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_4);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2->m_frame.f_lineno = 17;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(5);
            {
                PyObject *tmp_called_value_5;
                PyObject *tmp_args_element_value_6;
                PyObject *tmp_args_element_value_7;
                PyObject *tmp_args_element_value_8;
                PyObject *tmp_args_element_value_9;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_called_value_6;
                PyObject *tmp_args_element_value_10;
                PyObject *tmp_args_element_value_11;
                PyObject *tmp_args_element_value_12;
                PyObject *tmp_args_element_value_13;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_called_value_7;
                PyObject *tmp_args_element_value_14;
                PyObject *tmp_args_element_value_15;
                PyObject *tmp_args_element_value_16;
                PyObject *tmp_args_element_value_17;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_called_value_8;
                PyObject *tmp_args_element_value_18;
                PyObject *tmp_args_element_value_19;
                PyObject *tmp_args_element_value_20;
                PyObject *tmp_args_element_value_21;
                PyObject *tmp_tuple_element_8;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_called_value_5 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[51]);

                if (tmp_called_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_5 == NULL)) {
                            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 19;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_called_value_5);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_6 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_7 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[50]);

                if (tmp_args_element_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_args_element_value_7 == NULL)) {
                            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_args_element_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_5);
                            Py_DECREF(tmp_args_element_value_6);

                            exception_lineno = 19;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_args_element_value_7);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_8 = mod_consts[22];
                tmp_tuple_element_5 = MAKE_LIST1(mod_consts[69]);
                tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_9, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[56]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 20;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_9, 1, tmp_tuple_element_5);
                tmp_tuple_element_5 = mod_consts[71];
                PyTuple_SET_ITEM0(tmp_args_element_value_9, 2, tmp_tuple_element_5);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_called_value_5);
                Py_DECREF(tmp_args_element_value_6);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_9);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2->m_frame.f_lineno = 19;
                {
                    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
                    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
                }

                Py_DECREF(tmp_called_value_5);
                Py_DECREF(tmp_args_element_value_6);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_9);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
                tmp_called_value_6 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[51]);

                if (tmp_called_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_6 == NULL)) {
                            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 21;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_called_value_6);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_10 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_11 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[50]);

                if (tmp_args_element_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_args_element_value_11 == NULL)) {
                            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_args_element_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_6);
                            Py_DECREF(tmp_args_element_value_10);

                            exception_lineno = 21;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_args_element_value_11);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_12 = mod_consts[12];
                tmp_tuple_element_6 = MAKE_LIST1(mod_consts[69]);
                tmp_args_element_value_13 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_13, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[56]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 22;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_13, 1, tmp_tuple_element_6);
                tmp_tuple_element_6 = mod_consts[72];
                PyTuple_SET_ITEM0(tmp_args_element_value_13, 2, tmp_tuple_element_6);
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_args_element_value_10);
                Py_DECREF(tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_13);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2->m_frame.f_lineno = 21;
                {
                    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
                    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_6, call_args);
                }

                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_args_element_value_10);
                Py_DECREF(tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_13);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
                tmp_called_value_7 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[51]);

                if (tmp_called_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_7 == NULL)) {
                            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 23;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_called_value_7);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_14 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_15 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[50]);

                if (tmp_args_element_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_args_element_value_15 == NULL)) {
                            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_args_element_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_7);
                            Py_DECREF(tmp_args_element_value_14);

                            exception_lineno = 23;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_args_element_value_15);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_16 = mod_consts[14];
                tmp_tuple_element_7 = MAKE_LIST1(mod_consts[69]);
                tmp_args_element_value_17 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_17, 0, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[56]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 24;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_17, 1, tmp_tuple_element_7);
                tmp_tuple_element_7 = mod_consts[73];
                PyTuple_SET_ITEM0(tmp_args_element_value_17, 2, tmp_tuple_element_7);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_14);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_17);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2->m_frame.f_lineno = 23;
                {
                    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
                    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_7, call_args);
                }

                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_14);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_17);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
                tmp_called_value_8 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[51]);

                if (tmp_called_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_8 == NULL)) {
                            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 25;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_called_value_8);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_18 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_19 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[50]);

                if (tmp_args_element_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_args_element_value_19 == NULL)) {
                            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_args_element_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_8);
                            Py_DECREF(tmp_args_element_value_18);

                            exception_lineno = 25;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_args_element_value_19);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_20 = mod_consts[15];
                tmp_tuple_element_8 = MAKE_LIST1(mod_consts[69]);
                tmp_args_element_value_21 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_21, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[58]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[58]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 26;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_21, 1, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[74];
                PyTuple_SET_ITEM0(tmp_args_element_value_21, 2, tmp_tuple_element_8);
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_21);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2->m_frame.f_lineno = 25;
                {
                    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
                    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_8, call_args);
                }

                Py_DECREF(tmp_called_value_8);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_21);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_59afd5b8c9064a0f31ea4cba8b94e9e0_2);

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


                exception_lineno = 14;

                goto try_except_handler_4;
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
        tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_9 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_9 = mod_consts[1];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_9 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_301598999605918595c0a9f5391d0a3c->m_frame.f_lineno = 14;
            tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_20 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14);
        locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14 = NULL;
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

        Py_DECREF(locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14);
        locals_comtypes$errorinfo$$$class__1_ICreateErrorInfo_14 = NULL;
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
        exception_lineno = 14;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_20);
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

    goto frame_exception_exit_1;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        tmp_assign_source_22 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_10);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_23 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
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


            exception_lineno = 29;

            goto try_except_handler_5;
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
        tmp_subscript_value_2 = mod_consts[8];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[60]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[60]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        tmp_tuple_element_11 = mod_consts[5];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_11 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_301598999605918595c0a9f5391d0a3c->m_frame.f_lineno = 29;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[61]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
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
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[34];
        tmp_getattr_default_2 = mod_consts[63];
        tmp_tuple_element_12 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[34]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 29;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_comtypes$errorinfo$$$class__2_IErrorInfo_29 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[5];
        tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        frame_3f0b87902b128dd68abb4e73804da2f0_3 = MAKE_CLASS_FRAME(codeobj_3f0b87902b128dd68abb4e73804da2f0, module_comtypes$errorinfo, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3f0b87902b128dd68abb4e73804da2f0_3);
        assert(Py_REFCNT(frame_3f0b87902b128dd68abb4e73804da2f0_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_11;
            tmp_called_value_11 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[18]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame.f_lineno = 30;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[77]);

            Py_DECREF(tmp_called_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_tuple_element_13;
            tmp_called_value_12 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[51]);

            if (tmp_called_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_12 == NULL)) {
                        tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_called_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_22 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_23 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[50]);

            if (tmp_args_element_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50]);

                    if (unlikely(tmp_args_element_value_23 == NULL)) {
                        tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                    }

                    if (tmp_args_element_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);
                        Py_DECREF(tmp_args_element_value_22);

                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_args_element_value_23);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_24 = mod_consts[78];
            tmp_tuple_element_13 = MAKE_LIST1(mod_consts[79]);
            tmp_args_element_value_25 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_13;
                PyObject *tmp_args_element_value_26;
                PyTuple_SET_ITEM(tmp_args_element_value_25, 0, tmp_tuple_element_13);
                tmp_called_value_13 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[0]);

                if (tmp_called_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_called_value_13 == NULL)) {
                            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_called_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 33;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_13);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_args_element_value_26 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[18]);

                if (tmp_args_element_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_26 == NULL)) {
                            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
                        }

                        if (tmp_args_element_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_13);

                            exception_lineno = 33;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_args_element_value_26);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame.f_lineno = 33;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_26);
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_26);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_25, 1, tmp_tuple_element_13);
                tmp_tuple_element_13 = mod_consts[80];
                PyTuple_SET_ITEM0(tmp_args_element_value_25, 2, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_25);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame.f_lineno = 32;
            {
                PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_12, call_args);
            }

            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(5);
            {
                PyObject *tmp_called_value_14;
                PyObject *tmp_args_element_value_27;
                PyObject *tmp_args_element_value_28;
                PyObject *tmp_args_element_value_29;
                PyObject *tmp_args_element_value_30;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_called_value_16;
                PyObject *tmp_args_element_value_32;
                PyObject *tmp_args_element_value_33;
                PyObject *tmp_args_element_value_34;
                PyObject *tmp_args_element_value_35;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_called_value_18;
                PyObject *tmp_args_element_value_37;
                PyObject *tmp_args_element_value_38;
                PyObject *tmp_args_element_value_39;
                PyObject *tmp_args_element_value_40;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_called_value_20;
                PyObject *tmp_args_element_value_42;
                PyObject *tmp_args_element_value_43;
                PyObject *tmp_args_element_value_44;
                PyObject *tmp_args_element_value_45;
                PyObject *tmp_tuple_element_17;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_called_value_14 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[51]);

                if (tmp_called_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_14 == NULL)) {
                            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_14);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_27 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_28 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[50]);

                if (tmp_args_element_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_args_element_value_28 == NULL)) {
                            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_args_element_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_14);
                            Py_DECREF(tmp_args_element_value_27);

                            exception_lineno = 34;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_args_element_value_28);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_29 = mod_consts[81];
                tmp_tuple_element_14 = MAKE_LIST1(mod_consts[79]);
                tmp_args_element_value_30 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_15;
                    PyObject *tmp_args_element_value_31;
                    PyTuple_SET_ITEM(tmp_args_element_value_30, 0, tmp_tuple_element_14);
                    tmp_called_value_15 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[0]);

                    if (tmp_called_value_15 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[0]);

                            if (unlikely(tmp_called_value_15 == NULL)) {
                                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                            }

                            if (tmp_called_value_15 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 35;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_called_value_15);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    tmp_args_element_value_31 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[52]);

                    if (tmp_args_element_value_31 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[52]);

                            if (unlikely(tmp_args_element_value_31 == NULL)) {
                                tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                            }

                            if (tmp_args_element_value_31 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_15);

                                exception_lineno = 35;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_args_element_value_31);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame.f_lineno = 35;
                    tmp_tuple_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_31);
                    Py_DECREF(tmp_called_value_15);
                    Py_DECREF(tmp_args_element_value_31);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_30, 1, tmp_tuple_element_14);
                    tmp_tuple_element_14 = mod_consts[82];
                    PyTuple_SET_ITEM0(tmp_args_element_value_30, 2, tmp_tuple_element_14);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_args_element_value_27);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_30);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame.f_lineno = 34;
                {
                    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
                    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_14, call_args);
                }

                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_args_element_value_27);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_30);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_called_value_16 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[51]);

                if (tmp_called_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_16 == NULL)) {
                            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_16);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_32 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_33 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[50]);

                if (tmp_args_element_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_args_element_value_33 == NULL)) {
                            tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_args_element_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_16);
                            Py_DECREF(tmp_args_element_value_32);

                            exception_lineno = 36;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_args_element_value_33);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_34 = mod_consts[83];
                tmp_tuple_element_15 = MAKE_LIST1(mod_consts[79]);
                tmp_args_element_value_35 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_17;
                    PyObject *tmp_args_element_value_36;
                    PyTuple_SET_ITEM(tmp_args_element_value_35, 0, tmp_tuple_element_15);
                    tmp_called_value_17 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[0]);

                    if (tmp_called_value_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[0]);

                            if (unlikely(tmp_called_value_17 == NULL)) {
                                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                            }

                            if (tmp_called_value_17 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 37;
                                type_description_2 = "o";
                                goto tuple_build_exception_10;
                            }
                            Py_INCREF(tmp_called_value_17);
                        } else {
                            goto tuple_build_exception_10;
                        }
                    }

                    tmp_args_element_value_36 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[52]);

                    if (tmp_args_element_value_36 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[52]);

                            if (unlikely(tmp_args_element_value_36 == NULL)) {
                                tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                            }

                            if (tmp_args_element_value_36 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_17);

                                exception_lineno = 37;
                                type_description_2 = "o";
                                goto tuple_build_exception_10;
                            }
                            Py_INCREF(tmp_args_element_value_36);
                        } else {
                            goto tuple_build_exception_10;
                        }
                    }

                    frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame.f_lineno = 37;
                    tmp_tuple_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_36);
                    Py_DECREF(tmp_called_value_17);
                    Py_DECREF(tmp_args_element_value_36);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_35, 1, tmp_tuple_element_15);
                    tmp_tuple_element_15 = mod_consts[84];
                    PyTuple_SET_ITEM0(tmp_args_element_value_35, 2, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_35);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame.f_lineno = 36;
                {
                    PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
                    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_16, call_args);
                }

                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_35);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_called_value_18 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[51]);

                if (tmp_called_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_18 == NULL)) {
                            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_18);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_37 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_38 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[50]);

                if (tmp_args_element_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_args_element_value_38 == NULL)) {
                            tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_args_element_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_18);
                            Py_DECREF(tmp_args_element_value_37);

                            exception_lineno = 38;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_args_element_value_38);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_39 = mod_consts[85];
                tmp_tuple_element_16 = MAKE_LIST1(mod_consts[79]);
                tmp_args_element_value_40 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_19;
                    PyObject *tmp_args_element_value_41;
                    PyTuple_SET_ITEM(tmp_args_element_value_40, 0, tmp_tuple_element_16);
                    tmp_called_value_19 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[0]);

                    if (tmp_called_value_19 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[0]);

                            if (unlikely(tmp_called_value_19 == NULL)) {
                                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                            }

                            if (tmp_called_value_19 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 39;
                                type_description_2 = "o";
                                goto tuple_build_exception_11;
                            }
                            Py_INCREF(tmp_called_value_19);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    tmp_args_element_value_41 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[52]);

                    if (tmp_args_element_value_41 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[52]);

                            if (unlikely(tmp_args_element_value_41 == NULL)) {
                                tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                            }

                            if (tmp_args_element_value_41 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_19);

                                exception_lineno = 39;
                                type_description_2 = "o";
                                goto tuple_build_exception_11;
                            }
                            Py_INCREF(tmp_args_element_value_41);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame.f_lineno = 39;
                    tmp_tuple_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_41);
                    Py_DECREF(tmp_called_value_19);
                    Py_DECREF(tmp_args_element_value_41);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_40, 1, tmp_tuple_element_16);
                    tmp_tuple_element_16 = mod_consts[86];
                    PyTuple_SET_ITEM0(tmp_args_element_value_40, 2, tmp_tuple_element_16);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_called_value_18);
                Py_DECREF(tmp_args_element_value_37);
                Py_DECREF(tmp_args_element_value_38);
                Py_DECREF(tmp_args_element_value_40);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame.f_lineno = 38;
                {
                    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
                    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_18, call_args);
                }

                Py_DECREF(tmp_called_value_18);
                Py_DECREF(tmp_args_element_value_37);
                Py_DECREF(tmp_args_element_value_38);
                Py_DECREF(tmp_args_element_value_40);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
                tmp_called_value_20 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[51]);

                if (tmp_called_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_20 == NULL)) {
                            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 40;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_20);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_42 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_43 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[50]);

                if (tmp_args_element_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_args_element_value_43 == NULL)) {
                            tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_args_element_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_20);
                            Py_DECREF(tmp_args_element_value_42);

                            exception_lineno = 40;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_args_element_value_43);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_44 = mod_consts[87];
                tmp_tuple_element_17 = MAKE_LIST1(mod_consts[79]);
                tmp_args_element_value_45 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_21;
                    PyObject *tmp_args_element_value_46;
                    PyTuple_SET_ITEM(tmp_args_element_value_45, 0, tmp_tuple_element_17);
                    tmp_called_value_21 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[0]);

                    if (tmp_called_value_21 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[0]);

                            if (unlikely(tmp_called_value_21 == NULL)) {
                                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                            }

                            if (tmp_called_value_21 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 41;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_called_value_21);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_args_element_value_46 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[58]);

                    if (tmp_args_element_value_46 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[58]);

                            if (unlikely(tmp_args_element_value_46 == NULL)) {
                                tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
                            }

                            if (tmp_args_element_value_46 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_21);

                                exception_lineno = 41;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_args_element_value_46);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame.f_lineno = 41;
                    tmp_tuple_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_46);
                    Py_DECREF(tmp_called_value_21);
                    Py_DECREF(tmp_args_element_value_46);
                    if (tmp_tuple_element_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_45, 1, tmp_tuple_element_17);
                    tmp_tuple_element_17 = mod_consts[88];
                    PyTuple_SET_ITEM0(tmp_args_element_value_45, 2, tmp_tuple_element_17);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_called_value_20);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_45);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame.f_lineno = 40;
                {
                    PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
                    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_20, call_args);
                }

                Py_DECREF(tmp_called_value_20);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_45);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3f0b87902b128dd68abb4e73804da2f0_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3f0b87902b128dd68abb4e73804da2f0_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3f0b87902b128dd68abb4e73804da2f0_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3f0b87902b128dd68abb4e73804da2f0_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_3f0b87902b128dd68abb4e73804da2f0_3);

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


                exception_lineno = 29;

                goto try_except_handler_7;
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
        tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_22 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_18 = mod_consts[5];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_18 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_comtypes$errorinfo$$$class__2_IErrorInfo_29;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_301598999605918595c0a9f5391d0a3c->m_frame.f_lineno = 29;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_28 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29);
        locals_comtypes$errorinfo$$$class__2_IErrorInfo_29 = NULL;
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

        Py_DECREF(locals_comtypes$errorinfo$$$class__2_IErrorInfo_29);
        locals_comtypes$errorinfo$$$class__2_IErrorInfo_29 = NULL;
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
        exception_lineno = 29;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_28);
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_19;
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_19);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_31 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
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


            exception_lineno = 44;

            goto try_except_handler_8;
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
        tmp_subscript_value_3 = mod_consts[8];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[60]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[60]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        tmp_tuple_element_20 = mod_consts[89];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_20 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_301598999605918595c0a9f5391d0a3c->m_frame.f_lineno = 44;
        tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[61]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
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
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[34];
        tmp_getattr_default_3 = mod_consts[63];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[34]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 44;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_35;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_10;
        }
        frame_26fc1caed115635edaaeccbbb445efcf_4 = MAKE_CLASS_FRAME(codeobj_26fc1caed115635edaaeccbbb445efcf, module_comtypes$errorinfo, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_26fc1caed115635edaaeccbbb445efcf_4);
        assert(Py_REFCNT(frame_26fc1caed115635edaaeccbbb445efcf_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_24;
            tmp_called_value_24 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44, mod_consts[18]);

            if (tmp_called_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_called_value_24 == NULL)) {
                        tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
                    }

                    if (tmp_called_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_24);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_26fc1caed115635edaaeccbbb445efcf_4->m_frame.f_lineno = 45;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[90]);

            Py_DECREF(tmp_called_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_tuple_element_22;
            tmp_called_value_25 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44, mod_consts[51]);

            if (tmp_called_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_called_value_25 == NULL)) {
                        tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_called_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_25);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_47 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_48 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44, mod_consts[50]);

            if (tmp_args_element_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_48 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[50]);

                    if (unlikely(tmp_args_element_value_48 == NULL)) {
                        tmp_args_element_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                    }

                    if (tmp_args_element_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);
                        Py_DECREF(tmp_args_element_value_47);

                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_args_element_value_48);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_49 = mod_consts[91];
            tmp_tuple_element_22 = MAKE_LIST1(mod_consts[69]);
            tmp_args_element_value_50 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_26;
                PyObject *tmp_args_element_value_51;
                PyTuple_SET_ITEM(tmp_args_element_value_50, 0, tmp_tuple_element_22);
                tmp_called_value_26 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44, mod_consts[0]);

                if (tmp_called_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_called_value_26 == NULL)) {
                            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_called_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 48;
                            type_description_2 = "o";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_26);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                tmp_args_element_value_51 = PyObject_GetItem(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44, mod_consts[18]);

                if (tmp_args_element_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_51 == NULL)) {
                            tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
                        }

                        if (tmp_args_element_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_26);

                            exception_lineno = 48;
                            type_description_2 = "o";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_args_element_value_51);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_26fc1caed115635edaaeccbbb445efcf_4->m_frame.f_lineno = 48;
                tmp_tuple_element_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_51);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_51);
                if (tmp_tuple_element_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_50, 1, tmp_tuple_element_22);
                tmp_tuple_element_22 = mod_consts[92];
                PyTuple_SET_ITEM0(tmp_args_element_value_50, 2, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_50);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            frame_26fc1caed115635edaaeccbbb445efcf_4->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50};
                tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_25, call_args);
            }

            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
            tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_26fc1caed115635edaaeccbbb445efcf_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_26fc1caed115635edaaeccbbb445efcf_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_26fc1caed115635edaaeccbbb445efcf_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_26fc1caed115635edaaeccbbb445efcf_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_26fc1caed115635edaaeccbbb445efcf_4);

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


                exception_lineno = 44;

                goto try_except_handler_10;
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
        tmp_res = PyObject_SetItem(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_10;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_27 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_23 = mod_consts[89];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_23 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_301598999605918595c0a9f5391d0a3c->m_frame.f_lineno = 44;
            tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_27, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_36 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44);
        locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44 = NULL;
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

        Py_DECREF(locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44);
        locals_comtypes$errorinfo$$$class__3_ISupportErrorInfo_44 = NULL;
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
        exception_lineno = 44;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_36);
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_assign_source_38;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[94]);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_comtypes$errorinfo$$$function__1_CreateErrorInfo();

        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_comtypes$errorinfo$$$function__2_GetErrorInfo();

        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_comtypes$errorinfo$$$function__3_SetErrorInfo();

        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_24;
        tmp_tuple_element_24 = Py_None;
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_24);
        tmp_tuple_element_24 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_24);
        tmp_tuple_element_24 = mod_consts[8];
        PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_24);
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto tuple_build_exception_15;
        }
        PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_24);
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_defaults_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;


        tmp_assign_source_42 = MAKE_FUNCTION_comtypes$errorinfo$$$function__4_ReportError(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_42);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_301598999605918595c0a9f5391d0a3c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_301598999605918595c0a9f5391d0a3c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_301598999605918595c0a9f5391d0a3c, exception_lineno);
    }



    assertFrameObject(frame_301598999605918595c0a9f5391d0a3c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[96];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_43 = MAKE_FUNCTION_comtypes$errorinfo$$$function__5_ReportException(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_LIST8(mod_consts[98]);
        UPDATE_STRING_DICT1(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_44);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("comtypes.errorinfo", false);

    Py_INCREF(module_comtypes$errorinfo);
    return module_comtypes$errorinfo;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$errorinfo, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("comtypes$errorinfo", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
