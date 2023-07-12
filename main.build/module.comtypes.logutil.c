/* Generated code for Python module 'comtypes.logutil'
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

/* The "module_comtypes$logutil" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_comtypes$logutil;
PyDictObject *moduledict_comtypes$logutil;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[70];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[70];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("comtypes.logutil"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 70; i++) {
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
void checkModuleConstants_comtypes$logutil(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 70; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_4c8b91ad066e27881790a7cf8ad5deda;
static PyCodeObject *codeobj_0ca23a25d920c4705960b25cf755a140;
static PyCodeObject *codeobj_094ac26efad1450574d436743b16f553;
static PyCodeObject *codeobj_61eeaac006e617ce2220f8d48d4c0bc9;
static PyCodeObject *codeobj_20c8513f7fc02c007b5092a09f1b4fe0;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[38]; CHECK_OBJECT(module_filename_obj);
    codeobj_4c8b91ad066e27881790a7cf8ad5deda = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[63], mod_consts[63], NULL, NULL, 0, 0, 0);
    codeobj_0ca23a25d920c4705960b25cf755a140 = MAKE_CODE_OBJECT(module_filename_obj, 4, CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[64], NULL, 0, 0, 0);
    codeobj_094ac26efad1450574d436743b16f553 = MAKE_CODE_OBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[65], NULL, 4, 0, 0);
    codeobj_61eeaac006e617ce2220f8d48d4c0bc9 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[8], mod_consts[8], mod_consts[66], mod_consts[67], 2, 0, 0);
    codeobj_20c8513f7fc02c007b5092a09f1b4fe0 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[68], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_comtypes$logutil$$$function__1_emit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_comtypes$logutil$$$function__2_setup_logging();


static PyObject *MAKE_FUNCTION_comtypes$logutil$$$function__2_setup_logging$$$function__1_get(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_comtypes$logutil$$$function__1_emit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_record = python_pars[1];
    PyObject *par_writeA = python_pars[2];
    PyObject *par_writeW = python_pars[3];
    PyObject *var_text = NULL;
    struct Nuitka_FrameObject *frame_094ac26efad1450574d436743b16f553;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_094ac26efad1450574d436743b16f553 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_094ac26efad1450574d436743b16f553)) {
        Py_XDECREF(cache_frame_094ac26efad1450574d436743b16f553);

#if _DEBUG_REFCOUNTS
        if (cache_frame_094ac26efad1450574d436743b16f553 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_094ac26efad1450574d436743b16f553 = MAKE_FUNCTION_FRAME(codeobj_094ac26efad1450574d436743b16f553, module_comtypes$logutil, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_094ac26efad1450574d436743b16f553->m_type_description == NULL);
    frame_094ac26efad1450574d436743b16f553 = cache_frame_094ac26efad1450574d436743b16f553;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_094ac26efad1450574d436743b16f553);
    assert(Py_REFCNT(frame_094ac26efad1450574d436743b16f553) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_record);
        tmp_args_element_value_1 = par_record;
        frame_094ac26efad1450574d436743b16f553->m_frame.f_lineno = 8;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_text == NULL);
        var_text = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_text);
        tmp_isinstance_inst_1 = var_text;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_writeA);
        tmp_called_value_2 = par_writeA;
        CHECK_OBJECT(var_text);
        tmp_add_expr_left_1 = var_text;
        tmp_add_expr_right_1 = mod_consts[1];
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_094ac26efad1450574d436743b16f553->m_frame.f_lineno = 10;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_writeW);
        tmp_called_value_3 = par_writeW;
        CHECK_OBJECT(var_text);
        tmp_add_expr_left_2 = var_text;
        tmp_add_expr_right_2 = mod_consts[1];
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_094ac26efad1450574d436743b16f553->m_frame.f_lineno = 12;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_094ac26efad1450574d436743b16f553, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_094ac26efad1450574d436743b16f553->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_094ac26efad1450574d436743b16f553, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_094ac26efad1450574d436743b16f553,
        type_description_1,
        par_self,
        par_record,
        par_writeA,
        par_writeW,
        var_text
    );


    // Release cached frame if used for exception.
    if (frame_094ac26efad1450574d436743b16f553 == cache_frame_094ac26efad1450574d436743b16f553) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_094ac26efad1450574d436743b16f553);
        cache_frame_094ac26efad1450574d436743b16f553 = NULL;
    }

    assertFrameObject(frame_094ac26efad1450574d436743b16f553);

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
    Py_XDECREF(var_text);
    var_text = NULL;
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

    Py_XDECREF(var_text);
    var_text = NULL;
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
    CHECK_OBJECT(par_record);
    Py_DECREF(par_record);
    CHECK_OBJECT(par_writeA);
    Py_DECREF(par_writeA);
    CHECK_OBJECT(par_writeW);
    Py_DECREF(par_writeW);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_record);
    Py_DECREF(par_record);
    CHECK_OBJECT(par_writeA);
    Py_DECREF(par_writeA);
    CHECK_OBJECT(par_writeW);
    Py_DECREF(par_writeW);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$logutil$$$function__2_setup_logging(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pathnames = python_pars[0];
    struct Nuitka_CellObject *var_configparser = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_parser = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_DEFAULTS = Nuitka_Cell_Empty();
    PyObject *var_get = NULL;
    PyObject *var_levelname = NULL;
    PyObject *var_format = NULL;
    PyObject *var_handlerclass = NULL;
    PyObject *var_level = NULL;
    PyObject *var_handler = NULL;
    PyObject *var_formatter = NULL;
    PyObject *var_name = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_eval_call_1__globals = NULL;
    PyObject *tmp_eval_call_1__locals = NULL;
    PyObject *tmp_eval_call_1__source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_20c8513f7fc02c007b5092a09f1b4fe0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *locals_comtypes$logutil$$$function__2_setup_logging = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_20c8513f7fc02c007b5092a09f1b4fe0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_20c8513f7fc02c007b5092a09f1b4fe0)) {
        Py_XDECREF(cache_frame_20c8513f7fc02c007b5092a09f1b4fe0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_20c8513f7fc02c007b5092a09f1b4fe0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_20c8513f7fc02c007b5092a09f1b4fe0 = MAKE_FUNCTION_FRAME(codeobj_20c8513f7fc02c007b5092a09f1b4fe0, module_comtypes$logutil, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_20c8513f7fc02c007b5092a09f1b4fe0->m_type_description == NULL);
    frame_20c8513f7fc02c007b5092a09f1b4fe0 = cache_frame_20c8513f7fc02c007b5092a09f1b4fe0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_20c8513f7fc02c007b5092a09f1b4fe0);
    assert(Py_REFCNT(frame_20c8513f7fc02c007b5092a09f1b4fe0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[2];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$logutil;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 16;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_configparser) == NULL);
        PyCell_SET(var_configparser, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_configparser));
        tmp_called_instance_1 = Nuitka_Cell_GET(var_configparser);
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 18;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_parser) == NULL);
        PyCell_SET(var_parser, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = (PyObject *)&PyUnicode_Type;
        CHECK_OBJECT(Nuitka_Cell_GET(var_parser));
        tmp_assattr_target_1 = Nuitka_Cell_GET(var_parser);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_parser));
        tmp_called_instance_2 = Nuitka_Cell_GET(var_parser);
        CHECK_OBJECT(par_pathnames);
        tmp_args_element_value_1 = par_pathnames;
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 21;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[6], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = DICT_COPY(mod_consts[7]);
        assert(Nuitka_Cell_GET(var_DEFAULTS) == NULL);
        PyCell_SET(var_DEFAULTS, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = var_DEFAULTS;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_configparser;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_parser;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_4 = MAKE_FUNCTION_comtypes$logutil$$$function__2_setup_logging$$$function__1_get(tmp_closure_1);

        assert(var_get == NULL);
        var_get = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(var_get);
        tmp_called_value_1 = var_get;
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 33;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[10]);

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_levelname == NULL);
        var_levelname = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(var_get);
        tmp_called_value_2 = var_get;
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 34;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[11]);

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_format == NULL);
        var_format = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        CHECK_OBJECT(var_get);
        tmp_called_value_3 = var_get;
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 35;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[12]);

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handlerclass == NULL);
        var_handlerclass = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_getattr_target_1 == NULL)) {
            tmp_getattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_levelname);
        tmp_getattr_attr_1 = var_levelname;
        tmp_assign_source_8 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_level == NULL);
        var_level = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_vars_arg_1;
            tmp_vars_arg_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_vars_arg_1 == NULL)) {
                tmp_vars_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_vars_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "occcooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_10 = LOOKUP_VARS(tmp_vars_arg_1);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "occcooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_eval_call_1__globals == NULL);
            tmp_eval_call_1__globals = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = Py_None;
            assert(tmp_eval_call_1__locals == NULL);
            Py_INCREF(tmp_assign_source_11);
            tmp_eval_call_1__locals = tmp_assign_source_11;
        }
        {
            bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_eval_call_1__locals);
            tmp_cmp_expr_left_1 = tmp_eval_call_1__locals;
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
            PyObject *tmp_assign_source_12;
            bool tmp_condition_result_2;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_cmp_expr_left_2 = tmp_eval_call_1__globals;
            tmp_cmp_expr_right_2 = Py_None;
            tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            if (locals_comtypes$logutil$$$function__2_setup_logging == NULL) locals_comtypes$logutil$$$function__2_setup_logging = MAKE_DICT_EMPTY();
            tmp_assign_source_12 = locals_comtypes$logutil$$$function__2_setup_logging;
            Py_INCREF(tmp_assign_source_12);
            if (par_pathnames != NULL) {
                PyObject *value;
                CHECK_OBJECT(par_pathnames);
                value = par_pathnames;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts[14], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts[14]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_configparser->ob_ref != NULL) {
                PyObject *value;
                CHECK_OBJECT(Nuitka_Cell_GET(var_configparser));
                value = Nuitka_Cell_GET(var_configparser);

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts[2], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts[2]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_parser->ob_ref != NULL) {
                PyObject *value;
                CHECK_OBJECT(Nuitka_Cell_GET(var_parser));
                value = Nuitka_Cell_GET(var_parser);

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts[15], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts[15]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_DEFAULTS->ob_ref != NULL) {
                PyObject *value;
                CHECK_OBJECT(Nuitka_Cell_GET(var_DEFAULTS));
                value = Nuitka_Cell_GET(var_DEFAULTS);

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts[16], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts[16]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_get != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_get);
                value = var_get;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts[8], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts[8]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_levelname != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_levelname);
                value = var_levelname;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts[17], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts[17]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_format != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_format);
                value = var_format;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts[0], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts[0]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_handlerclass != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_handlerclass);
                value = var_handlerclass;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts[18], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts[18]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            if (var_level != NULL) {
                PyObject *value;
                CHECK_OBJECT(var_level);
                value = var_level;

                UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_12, (Nuitka_StringObject *)mod_consts[19], value);
            } else {
                if (DICT_REMOVE_ITEM(tmp_assign_source_12, mod_consts[19]) == false) {
                    CLEAR_ERROR_OCCURRED();
                }
            }

            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_assign_source_12 = tmp_eval_call_1__globals;
            Py_INCREF(tmp_assign_source_12);
            condexpr_end_1:;
            {
                PyObject *old = tmp_eval_call_1__locals;
                assert(old != NULL);
                tmp_eval_call_1__locals = tmp_assign_source_12;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
        {
            bool tmp_condition_result_3;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_cmp_expr_left_3 = tmp_eval_call_1__globals;
            tmp_cmp_expr_right_3 = Py_None;
            tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
            if (tmp_condition_result_3 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = (PyObject *)moduledict_comtypes$logutil;
            {
                PyObject *old = tmp_eval_call_1__globals;
                assert(old != NULL);
                tmp_eval_call_1__globals = tmp_assign_source_13;
                Py_INCREF(tmp_eval_call_1__globals);
                Py_DECREF(old);
            }

        }
        branch_no_2:;
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(var_handlerclass);
            tmp_assign_source_14 = var_handlerclass;
            assert(tmp_eval_call_1__source == NULL);
            Py_INCREF(tmp_assign_source_14);
            tmp_eval_call_1__source = tmp_assign_source_14;
        }
        {
            bool tmp_condition_result_4;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_isinstance_inst_1 = tmp_eval_call_1__source;
            tmp_isinstance_cls_1 = mod_consts[20];
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "occcooooooooo";
                goto try_except_handler_2;
            }
            tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "occcooooooooo";
                goto try_except_handler_2;
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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_value_1;
            bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            PyObject *tmp_type_arg_1;
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_expression_value_1 = tmp_eval_call_1__source;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "occcooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_type_arg_1 = tmp_eval_call_1__source;
            tmp_cmp_expr_left_4 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_cmp_expr_left_4 == NULL));
            tmp_cmp_expr_right_4 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
            Py_DECREF(tmp_cmp_expr_left_4);
            if (tmp_condition_result_5 != false) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_args_value_1 = mod_consts[22];
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_args_value_1 = mod_consts[23];
            condexpr_end_2:;
            frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 40;
            tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS(tmp_called_value_4, tmp_args_value_1);
            Py_DECREF(tmp_called_value_4);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "occcooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_eval_call_1__source;
                assert(old != NULL);
                tmp_eval_call_1__source = tmp_assign_source_15;
                Py_DECREF(old);
            }

        }
        branch_no_3:;
        {
            PyObject *tmp_eval_source_1;
            PyObject *tmp_eval_globals_1;
            PyObject *tmp_eval_locals_1;
            PyObject *tmp_eval_compiled_1;
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_eval_source_1 = tmp_eval_call_1__source;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_eval_globals_1 = tmp_eval_call_1__globals;
            CHECK_OBJECT(tmp_eval_call_1__locals);
            tmp_eval_locals_1 = tmp_eval_call_1__locals;
            tmp_eval_compiled_1 = COMPILE_CODE(tmp_eval_source_1, mod_consts[24], mod_consts[25], NULL, NULL, NULL);
            if (tmp_eval_compiled_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "occcooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_9 = EVAL_CODE(tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1);
            Py_DECREF(tmp_eval_compiled_1);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "occcooooooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_eval_call_1__globals);
        Py_DECREF(tmp_eval_call_1__globals);
        tmp_eval_call_1__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_1__locals);
        Py_DECREF(tmp_eval_call_1__locals);
        tmp_eval_call_1__locals = NULL;
        Py_XDECREF(tmp_eval_call_1__source);
        tmp_eval_call_1__source = NULL;

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

        Py_XDECREF(tmp_eval_call_1__globals);
        tmp_eval_call_1__globals = NULL;
        Py_XDECREF(tmp_eval_call_1__locals);
        tmp_eval_call_1__locals = NULL;
        Py_XDECREF(tmp_eval_call_1__source);
        tmp_eval_call_1__source = NULL;

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
        assert(var_handler == NULL);
        var_handler = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_format);
        tmp_args_element_value_2 = var_format;
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 41;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[26], tmp_args_element_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_formatter == NULL);
        var_formatter = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_handler);
        tmp_called_instance_4 = var_handler;
        CHECK_OBJECT(var_formatter);
        tmp_args_element_value_3 = var_formatter;
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 42;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[27], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[28]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handler);
        tmp_args_element_value_4 = var_handler;
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 43;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[29], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_level);
        tmp_args_element_value_5 = var_level;
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 44;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[30], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "occcooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(Nuitka_Cell_GET(var_parser));
        tmp_expression_value_4 = Nuitka_Cell_GET(var_parser);
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[31]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "occcooooooooo";
            goto try_except_handler_3;
        }
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 47;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[32]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "occcooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "occcooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "occcooooooooo";
                exception_lineno = 47;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "occcooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "occcooooooooo";
            exception_lineno = 47;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "occcooooooooo";
            exception_lineno = 47;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_21;
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

                    type_description_1 = "occcooooooooo";
                    exception_lineno = 47;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[33];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "occcooooooooo";
            exception_lineno = 47;
            goto try_except_handler_6;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_22;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_23;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        tmp_getattr_target_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_getattr_target_2 == NULL)) {
            tmp_getattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_getattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "occcooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_value);
        tmp_getattr_attr_2 = var_value;
        tmp_assign_source_24 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, NULL);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "occcooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "occcooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_name);
        tmp_args_element_value_6 = var_name;
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 49;
        tmp_called_instance_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[34], tmp_args_element_value_6);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "occcooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_value);
        tmp_args_element_value_7 = var_value;
        frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = 49;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[30], tmp_args_element_value_7);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "occcooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 47;
        type_description_1 = "occcooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto try_end_4;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_20c8513f7fc02c007b5092a09f1b4fe0, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_20c8513f7fc02c007b5092a09f1b4fe0, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT(Nuitka_Cell_GET(var_configparser));
        tmp_expression_value_5 = Nuitka_Cell_GET(var_configparser);
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[35]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "occcooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "occcooooooooo";
            goto try_except_handler_7;
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
        exception_lineno = 46;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame) frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "occcooooooooo";
    goto try_except_handler_7;
    branch_no_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_20c8513f7fc02c007b5092a09f1b4fe0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_20c8513f7fc02c007b5092a09f1b4fe0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20c8513f7fc02c007b5092a09f1b4fe0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_20c8513f7fc02c007b5092a09f1b4fe0,
        type_description_1,
        par_pathnames,
        var_configparser,
        var_parser,
        var_DEFAULTS,
        var_get,
        var_levelname,
        var_format,
        var_handlerclass,
        var_level,
        var_handler,
        var_formatter,
        var_name,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_20c8513f7fc02c007b5092a09f1b4fe0 == cache_frame_20c8513f7fc02c007b5092a09f1b4fe0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_20c8513f7fc02c007b5092a09f1b4fe0);
        cache_frame_20c8513f7fc02c007b5092a09f1b4fe0 = NULL;
    }

    assertFrameObject(frame_20c8513f7fc02c007b5092a09f1b4fe0);

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
    CHECK_OBJECT(var_configparser);
    Py_DECREF(var_configparser);
    var_configparser = NULL;
    CHECK_OBJECT(var_parser);
    Py_DECREF(var_parser);
    var_parser = NULL;
    CHECK_OBJECT(var_DEFAULTS);
    Py_DECREF(var_DEFAULTS);
    var_DEFAULTS = NULL;
    CHECK_OBJECT(var_get);
    Py_DECREF(var_get);
    var_get = NULL;
    CHECK_OBJECT(var_levelname);
    Py_DECREF(var_levelname);
    var_levelname = NULL;
    CHECK_OBJECT(var_format);
    Py_DECREF(var_format);
    var_format = NULL;
    CHECK_OBJECT(var_handlerclass);
    Py_DECREF(var_handlerclass);
    var_handlerclass = NULL;
    CHECK_OBJECT(var_level);
    Py_DECREF(var_level);
    var_level = NULL;
    CHECK_OBJECT(var_handler);
    Py_DECREF(var_handler);
    var_handler = NULL;
    CHECK_OBJECT(var_formatter);
    Py_DECREF(var_formatter);
    var_formatter = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
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

    CHECK_OBJECT(var_configparser);
    Py_DECREF(var_configparser);
    var_configparser = NULL;
    CHECK_OBJECT(var_parser);
    Py_DECREF(var_parser);
    var_parser = NULL;
    CHECK_OBJECT(var_DEFAULTS);
    Py_DECREF(var_DEFAULTS);
    var_DEFAULTS = NULL;
    Py_XDECREF(var_get);
    var_get = NULL;
    Py_XDECREF(var_levelname);
    var_levelname = NULL;
    Py_XDECREF(var_format);
    var_format = NULL;
    Py_XDECREF(var_handlerclass);
    var_handlerclass = NULL;
    Py_XDECREF(var_level);
    var_level = NULL;
    Py_XDECREF(var_handler);
    var_handler = NULL;
    Py_XDECREF(var_formatter);
    var_formatter = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
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
    Py_XDECREF(locals_comtypes$logutil$$$function__2_setup_logging);

    CHECK_OBJECT(par_pathnames);
    Py_DECREF(par_pathnames);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_comtypes$logutil$$$function__2_setup_logging);

    CHECK_OBJECT(par_pathnames);
    Py_DECREF(par_pathnames);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$logutil$$$function__2_setup_logging$$$function__1_get(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_section = python_pars[0];
    PyObject *par_option = python_pars[1];
    struct Nuitka_FrameObject *frame_61eeaac006e617ce2220f8d48d4c0bc9;
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
    static struct Nuitka_FrameObject *cache_frame_61eeaac006e617ce2220f8d48d4c0bc9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_61eeaac006e617ce2220f8d48d4c0bc9)) {
        Py_XDECREF(cache_frame_61eeaac006e617ce2220f8d48d4c0bc9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61eeaac006e617ce2220f8d48d4c0bc9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61eeaac006e617ce2220f8d48d4c0bc9 = MAKE_FUNCTION_FRAME(codeobj_61eeaac006e617ce2220f8d48d4c0bc9, module_comtypes$logutil, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_61eeaac006e617ce2220f8d48d4c0bc9->m_type_description == NULL);
    frame_61eeaac006e617ce2220f8d48d4c0bc9 = cache_frame_61eeaac006e617ce2220f8d48d4c0bc9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_61eeaac006e617ce2220f8d48d4c0bc9);
    assert(Py_REFCNT(frame_61eeaac006e617ce2220f8d48d4c0bc9) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "ooccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooccc";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_section);
        tmp_args_element_value_1 = par_section;
        CHECK_OBJECT(par_option);
        tmp_args_element_value_2 = par_option;
        tmp_args_element_value_3 = Py_True;
        frame_61eeaac006e617ce2220f8d48d4c0bc9->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooccc";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_61eeaac006e617ce2220f8d48d4c0bc9, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_61eeaac006e617ce2220f8d48d4c0bc9, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "ooccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[36]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooccc";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 30;
                type_description_1 = "ooccc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[35]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "ooccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooccc";
            goto try_except_handler_2;
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
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "ooccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_option);
        tmp_subscript_value_1 = par_option;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooccc";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 28;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_61eeaac006e617ce2220f8d48d4c0bc9->m_frame) frame_61eeaac006e617ce2220f8d48d4c0bc9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooccc";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_61eeaac006e617ce2220f8d48d4c0bc9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61eeaac006e617ce2220f8d48d4c0bc9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61eeaac006e617ce2220f8d48d4c0bc9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61eeaac006e617ce2220f8d48d4c0bc9,
        type_description_1,
        par_section,
        par_option,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_61eeaac006e617ce2220f8d48d4c0bc9 == cache_frame_61eeaac006e617ce2220f8d48d4c0bc9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_61eeaac006e617ce2220f8d48d4c0bc9);
        cache_frame_61eeaac006e617ce2220f8d48d4c0bc9 = NULL;
    }

    assertFrameObject(frame_61eeaac006e617ce2220f8d48d4c0bc9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_section);
    Py_DECREF(par_section);
    CHECK_OBJECT(par_option);
    Py_DECREF(par_option);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_section);
    Py_DECREF(par_section);
    CHECK_OBJECT(par_option);
    Py_DECREF(par_option);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_comtypes$logutil$$$function__1_emit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$logutil$$$function__1_emit,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_094ac26efad1450574d436743b16f553,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$logutil,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$logutil$$$function__2_setup_logging() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$logutil$$$function__2_setup_logging,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_20c8513f7fc02c007b5092a09f1b4fe0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$logutil,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$logutil$$$function__2_setup_logging$$$function__1_get(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$logutil$$$function__2_setup_logging$$$function__1_get,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[9],
#endif
        codeobj_61eeaac006e617ce2220f8d48d4c0bc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$logutil,
        NULL,
        closure,
        3
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

function_impl_code functable_comtypes$logutil[] = {
    impl_comtypes$logutil$$$function__2_setup_logging$$$function__1_get,
    impl_comtypes$logutil$$$function__1_emit,
    impl_comtypes$logutil$$$function__2_setup_logging,
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

    function_impl_code *current = functable_comtypes$logutil;
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

    if (offset > sizeof(functable_comtypes$logutil) || offset < 0) {
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
        functable_comtypes$logutil[offset],
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
        module_comtypes$logutil,
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
PyObject *modulecode_comtypes$logutil(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("comtypes.logutil");

    // Store the module for future use.
    module_comtypes$logutil = module;

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
        PRINT_STRING("comtypes.logutil: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.logutil: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.logutil: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcomtypes$logutil\n");

    moduledict_comtypes$logutil = MODULE_DICT(module_comtypes$logutil);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_comtypes$logutil,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_comtypes$logutil,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[69]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_comtypes$logutil,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$logutil,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$logutil,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_comtypes$logutil);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_comtypes$logutil, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_comtypes$logutil, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_comtypes$logutil, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_comtypes$logutil);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_comtypes$logutil, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_4c8b91ad066e27881790a7cf8ad5deda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_comtypes$logutil$$$class__1_NTDebugHandler_4 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0ca23a25d920c4705960b25cf755a140_2;
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
        UPDATE_STRING_DICT0(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_2);
    }
    frame_4c8b91ad066e27881790a7cf8ad5deda = MAKE_MODULE_FRAME(codeobj_4c8b91ad066e27881790a7cf8ad5deda, module_comtypes$logutil);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c8b91ad066e27881790a7cf8ad5deda);
    assert(Py_REFCNT(frame_4c8b91ad066e27881790a7cf8ad5deda) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[38];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[41], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[42], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[13];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$logutil;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_4c8b91ad066e27881790a7cf8ad5deda->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_5);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[45]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_assign_source_6 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_7 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
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


            exception_lineno = 4;

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
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_9 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[46]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[47];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_4c8b91ad066e27881790a7cf8ad5deda->m_frame.f_lineno = 4;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[48]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[49];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[50];
        tmp_getattr_default_1 = mod_consts[51];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[50]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 4;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_comtypes$logutil$$$class__1_NTDebugHandler_4 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_comtypes$logutil$$$class__1_NTDebugHandler_4, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[47];
        tmp_res = PyObject_SetItem(locals_comtypes$logutil$$$class__1_NTDebugHandler_4, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        frame_0ca23a25d920c4705960b25cf755a140_2 = MAKE_CLASS_FRAME(codeobj_0ca23a25d920c4705960b25cf755a140, module_comtypes$logutil, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0ca23a25d920c4705960b25cf755a140_2);
        assert(Py_REFCNT(frame_0ca23a25d920c4705960b25cf755a140_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            assert(!(tmp_expression_value_9 == NULL));
            tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[55]);
            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[56]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[57]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_10;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_expression_value_12;
                PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_4);
                tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[44]);

                if (unlikely(tmp_expression_value_12 == NULL)) {
                    tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                }

                assert(!(tmp_expression_value_12 == NULL));
                tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[55]);
                if (tmp_expression_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 7;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[56]);
                Py_DECREF(tmp_expression_value_11);
                if (tmp_expression_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 7;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[58]);
                Py_DECREF(tmp_expression_value_10);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 7;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_comtypes$logutil$$$function__1_emit(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_comtypes$logutil$$$class__1_NTDebugHandler_4, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0ca23a25d920c4705960b25cf755a140_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0ca23a25d920c4705960b25cf755a140_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0ca23a25d920c4705960b25cf755a140_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0ca23a25d920c4705960b25cf755a140_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_0ca23a25d920c4705960b25cf755a140_2);

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


                exception_lineno = 4;

                goto try_except_handler_3;
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
        tmp_res = PyObject_SetItem(locals_comtypes$logutil$$$class__1_NTDebugHandler_4, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[47];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_comtypes$logutil$$$class__1_NTDebugHandler_4;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_4c8b91ad066e27881790a7cf8ad5deda->m_frame.f_lineno = 4;
            tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4;

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
        Py_DECREF(locals_comtypes$logutil$$$class__1_NTDebugHandler_4);
        locals_comtypes$logutil$$$class__1_NTDebugHandler_4 = NULL;
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

        Py_DECREF(locals_comtypes$logutil$$$class__1_NTDebugHandler_4);
        locals_comtypes$logutil$$$class__1_NTDebugHandler_4 = NULL;
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
        exception_lineno = 4;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_12);
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[47], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c8b91ad066e27881790a7cf8ad5deda, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c8b91ad066e27881790a7cf8ad5deda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c8b91ad066e27881790a7cf8ad5deda, exception_lineno);
    }



    assertFrameObject(frame_4c8b91ad066e27881790a7cf8ad5deda);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_comtypes$logutil$$$function__2_setup_logging();

        UPDATE_STRING_DICT1(moduledict_comtypes$logutil, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_14);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("comtypes.logutil", false);

    Py_INCREF(module_comtypes$logutil);
    return module_comtypes$logutil;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$logutil, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("comtypes$logutil", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
