/* Generated code for Python module 'comtypes.hresult'
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

/* The "module_comtypes$hresult" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_comtypes$hresult;
PyDictObject *moduledict_comtypes$hresult;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[101];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[101];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("comtypes.hresult"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 101; i++) {
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
void checkModuleConstants_comtypes$hresult(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 101; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_021385e7ed39c7f6c2eaeac359eb54d6;
static PyCodeObject *codeobj_9179df2361a884f9790850420282c698;
static PyCodeObject *codeobj_cccfd80b4f9e23580b0b7fb4f09e1c68;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[8]; CHECK_OBJECT(module_filename_obj);
    codeobj_021385e7ed39c7f6c2eaeac359eb54d6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[97], mod_consts[97], NULL, NULL, 0, 0, 0);
    codeobj_9179df2361a884f9790850420282c698 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[98], NULL, 1, 0, 0);
    codeobj_cccfd80b4f9e23580b0b7fb4f09e1c68 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[99], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_comtypes$hresult$$$function__1_MAKE_HRESULT();


static PyObject *MAKE_FUNCTION_comtypes$hresult$$$function__2_HRESULT_FROM_WIN32();


// The module function definitions.
static PyObject *impl_comtypes$hresult$$$function__1_MAKE_HRESULT(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sev = python_pars[0];
    PyObject *par_fac = python_pars[1];
    PyObject *par_code = python_pars[2];
    PyObject *var_c_long = NULL;
    struct Nuitka_FrameObject *frame_cccfd80b4f9e23580b0b7fb4f09e1c68;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cccfd80b4f9e23580b0b7fb4f09e1c68 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cccfd80b4f9e23580b0b7fb4f09e1c68)) {
        Py_XDECREF(cache_frame_cccfd80b4f9e23580b0b7fb4f09e1c68);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cccfd80b4f9e23580b0b7fb4f09e1c68 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cccfd80b4f9e23580b0b7fb4f09e1c68 = MAKE_FUNCTION_FRAME(codeobj_cccfd80b4f9e23580b0b7fb4f09e1c68, module_comtypes$hresult, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cccfd80b4f9e23580b0b7fb4f09e1c68->m_type_description == NULL);
    frame_cccfd80b4f9e23580b0b7fb4f09e1c68 = cache_frame_cccfd80b4f9e23580b0b7fb4f09e1c68;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cccfd80b4f9e23580b0b7fb4f09e1c68);
    assert(Py_REFCNT(frame_cccfd80b4f9e23580b0b7fb4f09e1c68) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$hresult,
                mod_consts[0],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[0]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_c_long == NULL);
        var_c_long = tmp_assign_source_1;
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        PyObject *tmp_lshift_expr_left_2;
        PyObject *tmp_lshift_expr_right_2;
        CHECK_OBJECT(var_c_long);
        tmp_called_value_1 = var_c_long;
        CHECK_OBJECT(par_sev);
        tmp_lshift_expr_left_1 = par_sev;
        tmp_lshift_expr_right_1 = mod_consts[2];
        tmp_bitor_expr_left_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        if (tmp_bitor_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fac);
        tmp_lshift_expr_left_2 = par_fac;
        tmp_lshift_expr_right_2 = mod_consts[3];
        tmp_bitor_expr_right_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
        if (tmp_bitor_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        Py_DECREF(tmp_bitor_expr_left_2);
        Py_DECREF(tmp_bitor_expr_right_2);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_code);
        tmp_bitor_expr_right_1 = par_code;
        tmp_args_element_value_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_cccfd80b4f9e23580b0b7fb4f09e1c68->m_frame.f_lineno = 61;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
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
        exception_tb = MAKE_TRACEBACK(frame_cccfd80b4f9e23580b0b7fb4f09e1c68, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cccfd80b4f9e23580b0b7fb4f09e1c68->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cccfd80b4f9e23580b0b7fb4f09e1c68, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cccfd80b4f9e23580b0b7fb4f09e1c68,
        type_description_1,
        par_sev,
        par_fac,
        par_code,
        var_c_long
    );


    // Release cached frame if used for exception.
    if (frame_cccfd80b4f9e23580b0b7fb4f09e1c68 == cache_frame_cccfd80b4f9e23580b0b7fb4f09e1c68) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cccfd80b4f9e23580b0b7fb4f09e1c68);
        cache_frame_cccfd80b4f9e23580b0b7fb4f09e1c68 = NULL;
    }

    assertFrameObject(frame_cccfd80b4f9e23580b0b7fb4f09e1c68);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_c_long);
    Py_DECREF(var_c_long);
    var_c_long = NULL;
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

    Py_XDECREF(var_c_long);
    var_c_long = NULL;
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
    CHECK_OBJECT(par_sev);
    Py_DECREF(par_sev);
    CHECK_OBJECT(par_fac);
    Py_DECREF(par_fac);
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sev);
    Py_DECREF(par_sev);
    CHECK_OBJECT(par_fac);
    Py_DECREF(par_fac);
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$hresult$$$function__2_HRESULT_FROM_WIN32(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *var_c_long = NULL;
    struct Nuitka_FrameObject *frame_9179df2361a884f9790850420282c698;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9179df2361a884f9790850420282c698 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9179df2361a884f9790850420282c698)) {
        Py_XDECREF(cache_frame_9179df2361a884f9790850420282c698);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9179df2361a884f9790850420282c698 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9179df2361a884f9790850420282c698 = MAKE_FUNCTION_FRAME(codeobj_9179df2361a884f9790850420282c698, module_comtypes$hresult, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9179df2361a884f9790850420282c698->m_type_description == NULL);
    frame_9179df2361a884f9790850420282c698 = cache_frame_9179df2361a884f9790850420282c698;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9179df2361a884f9790850420282c698);
    assert(Py_REFCNT(frame_9179df2361a884f9790850420282c698) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$hresult,
                mod_consts[0],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[0]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_c_long == NULL);
        var_c_long = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_c_long);
        tmp_called_value_1 = var_c_long;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_9179df2361a884f9790850420282c698->m_frame.f_lineno = 72;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
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
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(var_c_long);
        tmp_called_value_2 = var_c_long;
        tmp_bitor_expr_left_1 = mod_consts[5];
        CHECK_OBJECT(par_x);
        tmp_bitand_expr_left_1 = par_x;
        tmp_bitand_expr_right_1 = mod_consts[6];
        tmp_bitor_expr_right_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_BITOR_OBJECT_LONG_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9179df2361a884f9790850420282c698->m_frame.f_lineno = 76;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9179df2361a884f9790850420282c698, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9179df2361a884f9790850420282c698->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9179df2361a884f9790850420282c698, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9179df2361a884f9790850420282c698,
        type_description_1,
        par_x,
        var_c_long
    );


    // Release cached frame if used for exception.
    if (frame_9179df2361a884f9790850420282c698 == cache_frame_9179df2361a884f9790850420282c698) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9179df2361a884f9790850420282c698);
        cache_frame_9179df2361a884f9790850420282c698 = NULL;
    }

    assertFrameObject(frame_9179df2361a884f9790850420282c698);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x);
    par_x = NULL;
    CHECK_OBJECT(var_c_long);
    Py_DECREF(var_c_long);
    var_c_long = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(var_c_long);
    var_c_long = NULL;
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



static PyObject *MAKE_FUNCTION_comtypes$hresult$$$function__1_MAKE_HRESULT() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$hresult$$$function__1_MAKE_HRESULT,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cccfd80b4f9e23580b0b7fb4f09e1c68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$hresult,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$hresult$$$function__2_HRESULT_FROM_WIN32() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$hresult$$$function__2_HRESULT_FROM_WIN32,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9179df2361a884f9790850420282c698,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$hresult,
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

function_impl_code functable_comtypes$hresult[] = {
    impl_comtypes$hresult$$$function__1_MAKE_HRESULT,
    impl_comtypes$hresult$$$function__2_HRESULT_FROM_WIN32,
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

    function_impl_code *current = functable_comtypes$hresult;
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

    if (offset > sizeof(functable_comtypes$hresult) || offset < 0) {
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
        functable_comtypes$hresult[offset],
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
        module_comtypes$hresult,
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
PyObject *modulecode_comtypes$hresult(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("comtypes.hresult");

    // Store the module for future use.
    module_comtypes$hresult = module;

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
        PRINT_STRING("comtypes.hresult: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.hresult: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.hresult: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcomtypes$hresult\n");

    moduledict_comtypes$hresult = MODULE_DICT(module_comtypes$hresult);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_comtypes$hresult,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_comtypes$hresult,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[100]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$hresult, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_comtypes$hresult,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$hresult, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$hresult,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$hresult, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$hresult,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_comtypes$hresult);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_comtypes$hresult, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_comtypes$hresult);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_comtypes$hresult, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_021385e7ed39c7f6c2eaeac359eb54d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_2);
    }
    frame_021385e7ed39c7f6c2eaeac359eb54d6 = MAKE_MODULE_FRAME(codeobj_021385e7ed39c7f6c2eaeac359eb54d6, module_comtypes$hresult);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_021385e7ed39c7f6c2eaeac359eb54d6);
    assert(Py_REFCNT(frame_021385e7ed39c7f6c2eaeac359eb54d6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[8];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_021385e7ed39c7f6c2eaeac359eb54d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_021385e7ed39c7f6c2eaeac359eb54d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_021385e7ed39c7f6c2eaeac359eb54d6, exception_lineno);
    }



    assertFrameObject(frame_021385e7ed39c7f6c2eaeac359eb54d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_comtypes$hresult$$$function__1_MAKE_HRESULT();

        UPDATE_STRING_DICT1(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_comtypes$hresult$$$function__2_HRESULT_FROM_WIN32();

        UPDATE_STRING_DICT1(moduledict_comtypes$hresult, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_47);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("comtypes.hresult", false);

    Py_INCREF(module_comtypes$hresult);
    return module_comtypes$hresult;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$hresult, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("comtypes$hresult", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
