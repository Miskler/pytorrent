/* Generated code for Python module 'comtypes.connectionpoints'
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

/* The "module_comtypes$connectionpoints" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_comtypes$connectionpoints;
PyDictObject *moduledict_comtypes$connectionpoints;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[82];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[82];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("comtypes.connectionpoints"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 82; i++) {
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
void checkModuleConstants_comtypes$connectionpoints(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 82; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f3b6e74ff5055f151d40884e1b89f84a;
static PyCodeObject *codeobj_aa1d1d44003b6caa74ba5fb714d02bbe;
static PyCodeObject *codeobj_76b46c46e05f46068655256efc2c9315;
static PyCodeObject *codeobj_26bc47a3b4757748890fac759efae4c1;
static PyCodeObject *codeobj_7a64aa292e4e709f0faf486d503f6625;
static PyCodeObject *codeobj_0c86d39fb5c17f176275b414df7dcf96;
static PyCodeObject *codeobj_7b1f99bea21f6668633e77db876c3993;
static PyCodeObject *codeobj_eb6ddba4108d8c5e49b0d46f0f786c57;
static PyCodeObject *codeobj_aaaef1a86a2a830977fcefc258944a87;
static PyCodeObject *codeobj_ef488e53e60060aa4f6ea60a0c5ba8fa;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[6]; CHECK_OBJECT(module_filename_obj);
    codeobj_f3b6e74ff5055f151d40884e1b89f84a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[77], mod_consts[77], NULL, NULL, 0, 0, 0);
    codeobj_aa1d1d44003b6caa74ba5fb714d02bbe = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[78], NULL, 0, 0, 0);
    codeobj_76b46c46e05f46068655256efc2c9315 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[78], NULL, 0, 0, 0);
    codeobj_26bc47a3b4757748890fac759efae4c1 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[78], NULL, 0, 0, 0);
    codeobj_7a64aa292e4e709f0faf486d503f6625 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[78], NULL, 0, 0, 0);
    codeobj_0c86d39fb5c17f176275b414df7dcf96 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[79], NULL, 1, 0, 0);
    codeobj_7b1f99bea21f6668633e77db876c3993 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[79], NULL, 1, 0, 0);
    codeobj_eb6ddba4108d8c5e49b0d46f0f786c57 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[80], NULL, 1, 0, 0);
    codeobj_aaaef1a86a2a830977fcefc258944a87 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[80], NULL, 1, 0, 0);
    codeobj_ef488e53e60060aa4f6ea60a0c5ba8fa = MAKE_CODE_OBJECT(module_filename_obj, 6, CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[78], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_comtypes$connectionpoints$$$function__1___iter__();


static PyObject *MAKE_FUNCTION_comtypes$connectionpoints$$$function__2___next__();


static PyObject *MAKE_FUNCTION_comtypes$connectionpoints$$$function__4___iter__();


static PyObject *MAKE_FUNCTION_comtypes$connectionpoints$$$function__5___next__();


// The module function definitions.
static PyObject *impl_comtypes$connectionpoints$$$function__1___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_comtypes$connectionpoints$$$function__2___next__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_cp = NULL;
    PyObject *var_fetched = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_eb6ddba4108d8c5e49b0d46f0f786c57;
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
    static struct Nuitka_FrameObject *cache_frame_eb6ddba4108d8c5e49b0d46f0f786c57 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_eb6ddba4108d8c5e49b0d46f0f786c57)) {
        Py_XDECREF(cache_frame_eb6ddba4108d8c5e49b0d46f0f786c57);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb6ddba4108d8c5e49b0d46f0f786c57 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb6ddba4108d8c5e49b0d46f0f786c57 = MAKE_FUNCTION_FRAME(codeobj_eb6ddba4108d8c5e49b0d46f0f786c57, module_comtypes$connectionpoints, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb6ddba4108d8c5e49b0d46f0f786c57->m_type_description == NULL);
    frame_eb6ddba4108d8c5e49b0d46f0f786c57 = cache_frame_eb6ddba4108d8c5e49b0d46f0f786c57;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb6ddba4108d8c5e49b0d46f0f786c57);
    assert(Py_REFCNT(frame_eb6ddba4108d8c5e49b0d46f0f786c57) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_eb6ddba4108d8c5e49b0d46f0f786c57->m_frame.f_lineno = 32;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[1], 0)
        );

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooo";
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


            type_description_1 = "ooo";
            exception_lineno = 32;
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


            type_description_1 = "ooo";
            exception_lineno = 32;
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

                    type_description_1 = "ooo";
                    exception_lineno = 32;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[2];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooo";
            exception_lineno = 32;
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
        assert(var_cp == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_cp = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_fetched == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_fetched = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_fetched);
        tmp_cmp_expr_left_1 = var_fetched;
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_raise_type_1 == NULL)) {
            tmp_raise_type_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 34;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eb6ddba4108d8c5e49b0d46f0f786c57, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb6ddba4108d8c5e49b0d46f0f786c57->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb6ddba4108d8c5e49b0d46f0f786c57, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb6ddba4108d8c5e49b0d46f0f786c57,
        type_description_1,
        par_self,
        var_cp,
        var_fetched
    );


    // Release cached frame if used for exception.
    if (frame_eb6ddba4108d8c5e49b0d46f0f786c57 == cache_frame_eb6ddba4108d8c5e49b0d46f0f786c57) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb6ddba4108d8c5e49b0d46f0f786c57);
        cache_frame_eb6ddba4108d8c5e49b0d46f0f786c57 = NULL;
    }

    assertFrameObject(frame_eb6ddba4108d8c5e49b0d46f0f786c57);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_cp);
    tmp_return_value = var_cp;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cp);
    Py_DECREF(var_cp);
    var_cp = NULL;
    CHECK_OBJECT(var_fetched);
    Py_DECREF(var_fetched);
    var_fetched = NULL;
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

    Py_XDECREF(var_cp);
    var_cp = NULL;
    Py_XDECREF(var_fetched);
    var_fetched = NULL;
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


static PyObject *impl_comtypes$connectionpoints$$$function__4___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_comtypes$connectionpoints$$$function__5___next__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_cp = NULL;
    PyObject *var_fetched = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_aaaef1a86a2a830977fcefc258944a87;
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
    static struct Nuitka_FrameObject *cache_frame_aaaef1a86a2a830977fcefc258944a87 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aaaef1a86a2a830977fcefc258944a87)) {
        Py_XDECREF(cache_frame_aaaef1a86a2a830977fcefc258944a87);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aaaef1a86a2a830977fcefc258944a87 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aaaef1a86a2a830977fcefc258944a87 = MAKE_FUNCTION_FRAME(codeobj_aaaef1a86a2a830977fcefc258944a87, module_comtypes$connectionpoints, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aaaef1a86a2a830977fcefc258944a87->m_type_description == NULL);
    frame_aaaef1a86a2a830977fcefc258944a87 = cache_frame_aaaef1a86a2a830977fcefc258944a87;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aaaef1a86a2a830977fcefc258944a87);
    assert(Py_REFCNT(frame_aaaef1a86a2a830977fcefc258944a87) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_aaaef1a86a2a830977fcefc258944a87->m_frame.f_lineno = 52;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[1], 0)
        );

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
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


            type_description_1 = "ooo";
            exception_lineno = 52;
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


            type_description_1 = "ooo";
            exception_lineno = 52;
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

                    type_description_1 = "ooo";
                    exception_lineno = 52;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[2];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooo";
            exception_lineno = 52;
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
        assert(var_cp == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_cp = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_fetched == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_fetched = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_fetched);
        tmp_cmp_expr_left_1 = var_fetched;
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_raise_type_1 == NULL)) {
            tmp_raise_type_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 54;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aaaef1a86a2a830977fcefc258944a87, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aaaef1a86a2a830977fcefc258944a87->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aaaef1a86a2a830977fcefc258944a87, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aaaef1a86a2a830977fcefc258944a87,
        type_description_1,
        par_self,
        var_cp,
        var_fetched
    );


    // Release cached frame if used for exception.
    if (frame_aaaef1a86a2a830977fcefc258944a87 == cache_frame_aaaef1a86a2a830977fcefc258944a87) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aaaef1a86a2a830977fcefc258944a87);
        cache_frame_aaaef1a86a2a830977fcefc258944a87 = NULL;
    }

    assertFrameObject(frame_aaaef1a86a2a830977fcefc258944a87);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_cp);
    tmp_return_value = var_cp;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cp);
    Py_DECREF(var_cp);
    var_cp = NULL;
    CHECK_OBJECT(var_fetched);
    Py_DECREF(var_fetched);
    var_fetched = NULL;
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

    Py_XDECREF(var_cp);
    var_cp = NULL;
    Py_XDECREF(var_fetched);
    var_fetched = NULL;
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



static PyObject *MAKE_FUNCTION_comtypes$connectionpoints$$$function__1___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$connectionpoints$$$function__1___iter__,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[47],
#endif
        codeobj_0c86d39fb5c17f176275b414df7dcf96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$connectionpoints,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$connectionpoints$$$function__2___next__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$connectionpoints$$$function__2___next__,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_eb6ddba4108d8c5e49b0d46f0f786c57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$connectionpoints,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$connectionpoints$$$function__4___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$connectionpoints$$$function__4___iter__,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        codeobj_7b1f99bea21f6668633e77db876c3993,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$connectionpoints,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$connectionpoints$$$function__5___next__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$connectionpoints$$$function__5___next__,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        codeobj_aaaef1a86a2a830977fcefc258944a87,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$connectionpoints,
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

function_impl_code functable_comtypes$connectionpoints[] = {
    impl_comtypes$connectionpoints$$$function__1___iter__,
    impl_comtypes$connectionpoints$$$function__2___next__,
    impl_comtypes$connectionpoints$$$function__4___iter__,
    impl_comtypes$connectionpoints$$$function__5___next__,
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

    function_impl_code *current = functable_comtypes$connectionpoints;
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

    if (offset > sizeof(functable_comtypes$connectionpoints) || offset < 0) {
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
        functable_comtypes$connectionpoints[offset],
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
        module_comtypes$connectionpoints,
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
PyObject *modulecode_comtypes$connectionpoints(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("comtypes.connectionpoints");

    // Store the module for future use.
    module_comtypes$connectionpoints = module;

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
        PRINT_STRING("comtypes.connectionpoints: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.connectionpoints: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.connectionpoints: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcomtypes$connectionpoints\n");

    moduledict_comtypes$connectionpoints = MODULE_DICT(module_comtypes$connectionpoints);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_comtypes$connectionpoints,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_comtypes$connectionpoints,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[81]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_comtypes$connectionpoints,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$connectionpoints,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$connectionpoints,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_comtypes$connectionpoints);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_comtypes$connectionpoints);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
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
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_f3b6e74ff5055f151d40884e1b89f84a;
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
    PyObject *locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_ef488e53e60060aa4f6ea60a0c5ba8fa_2;
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
    PyObject *locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15 = NULL;
    struct Nuitka_FrameObject *frame_76b46c46e05f46068655256efc2c9315_3;
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
    PyObject *locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19 = NULL;
    struct Nuitka_FrameObject *frame_aa1d1d44003b6caa74ba5fb714d02bbe_4;
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
    PyObject *locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23 = NULL;
    struct Nuitka_FrameObject *frame_7a64aa292e4e709f0faf486d503f6625_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43 = NULL;
    struct Nuitka_FrameObject *frame_26bc47a3b4757748890fac759efae4c1_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_2);
    }
    frame_f3b6e74ff5055f151d40884e1b89f84a = MAKE_MODULE_FRAME(codeobj_f3b6e74ff5055f151d40884e1b89f84a, module_comtypes$connectionpoints);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3b6e74ff5055f151d40884e1b89f84a);
    assert(Py_REFCNT(frame_f3b6e74ff5055f151d40884e1b89f84a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[6];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        tmp_star_imported_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_star_imported_1 == NULL));
        tmp_result = IMPORT_MODULE_STAR(module_comtypes$connectionpoints, true, tmp_star_imported_1);
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
        tmp_name_value_1 = mod_consts[13];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$connectionpoints;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[14];
        tmp_level_value_1 = mod_consts[3];
        frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 3;
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
                (PyObject *)moduledict_comtypes$connectionpoints,
                mod_consts[15],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[15]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_comtypes$connectionpoints,
                mod_consts[16],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[16]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_comtypes$connectionpoints,
                mod_consts[17],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[17]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_comtypes$connectionpoints,
                mod_consts[18],
                mod_consts[3]
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
        UPDATE_STRING_DICT1(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_comtypes$connectionpoints,
                mod_consts[19],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[19]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assign_source_11 == NULL)) {
            tmp_assign_source_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        tmp_assign_source_12 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_12, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 6;

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
        tmp_subscript_value_1 = mod_consts[3];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[22]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[23];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 6;
        tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[24]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

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
        tmp_mod_expr_left_1 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[26];
        tmp_getattr_default_1 = mod_consts[27];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[26]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

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


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 6;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_4;
        }
        frame_ef488e53e60060aa4f6ea60a0c5ba8fa_2 = MAKE_CLASS_FRAME(codeobj_ef488e53e60060aa4f6ea60a0c5ba8fa, module_comtypes$connectionpoints, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ef488e53e60060aa4f6ea60a0c5ba8fa_2);
        assert(Py_REFCNT(frame_ef488e53e60060aa4f6ea60a0c5ba8fa_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[31];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_2;
                PyObject *tmp_args_element_value_1;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                tmp_called_value_2 = PyObject_GetItem(locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6, mod_consts[32]);

                if (tmp_called_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                        if (unlikely(tmp_called_value_2 == NULL)) {
                            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                        }

                        if (tmp_called_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 8;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_2);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_args_element_value_1 = PyObject_GetItem(locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6, mod_consts[15]);

                if (tmp_args_element_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[15]);

                        if (unlikely(tmp_args_element_value_1 == NULL)) {
                            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                        }

                        if (tmp_args_element_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_2);

                            exception_lineno = 8;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_args_element_value_1);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_ef488e53e60060aa4f6ea60a0c5ba8fa_2->m_frame.f_lineno = 8;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_args_element_value_1);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 8;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_5;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[33];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6, mod_consts[34]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 9;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ef488e53e60060aa4f6ea60a0c5ba8fa_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ef488e53e60060aa4f6ea60a0c5ba8fa_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ef488e53e60060aa4f6ea60a0c5ba8fa_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ef488e53e60060aa4f6ea60a0c5ba8fa_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_ef488e53e60060aa4f6ea60a0c5ba8fa_2);

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


                exception_lineno = 6;

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
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6, mod_consts[36], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[23];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 6;
            tmp_assign_source_19 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6);
        locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6 = NULL;
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

        Py_DECREF(locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6);
        locals_comtypes$connectionpoints$$$class__1_tagCONNECTDATA_6 = NULL;
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
        exception_lineno = 6;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_18);
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
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assign_source_20 == NULL)) {
            tmp_assign_source_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_20);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_22 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
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


            exception_lineno = 15;

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
        tmp_subscript_value_2 = mod_consts[3];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[22]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[22]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        tmp_tuple_element_8 = mod_consts[38];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_8 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 15;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[24]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

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
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[26];
        tmp_getattr_default_2 = mod_consts[27];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[26]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 15;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_7;
        }
        frame_76b46c46e05f46068655256efc2c9315_3 = MAKE_CLASS_FRAME(codeobj_76b46c46e05f46068655256efc2c9315, module_comtypes$connectionpoints, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_76b46c46e05f46068655256efc2c9315_3);
        assert(Py_REFCNT(frame_76b46c46e05f46068655256efc2c9315_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_5;
            tmp_called_value_5 = PyObject_GetItem(locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15, mod_consts[17]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 16;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_76b46c46e05f46068655256efc2c9315_3->m_frame.f_lineno = 16;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[39]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_76b46c46e05f46068655256efc2c9315_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_76b46c46e05f46068655256efc2c9315_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_76b46c46e05f46068655256efc2c9315_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_76b46c46e05f46068655256efc2c9315_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_76b46c46e05f46068655256efc2c9315_3);

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


                exception_lineno = 15;

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
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15, mod_consts[36], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_10 = mod_consts[38];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_10 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 15;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_27 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15);
        locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15 = NULL;
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

        Py_DECREF(locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15);
        locals_comtypes$connectionpoints$$$class__2_IConnectionPointContainer_15 = NULL;
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
        exception_lineno = 15;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_27);
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
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_8;
        }
        tmp_assign_source_29 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_30 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
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


            exception_lineno = 19;

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
        tmp_subscript_value_3 = mod_consts[3];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[22]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[22]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_8;
        }
        tmp_tuple_element_12 = mod_consts[42];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_12 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 19;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[24]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

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
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[26];
        tmp_getattr_default_3 = mod_consts[27];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[26]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 19;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_34;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_10;
        }
        frame_aa1d1d44003b6caa74ba5fb714d02bbe_4 = MAKE_CLASS_FRAME(codeobj_aa1d1d44003b6caa74ba5fb714d02bbe, module_comtypes$connectionpoints, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_aa1d1d44003b6caa74ba5fb714d02bbe_4);
        assert(Py_REFCNT(frame_aa1d1d44003b6caa74ba5fb714d02bbe_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_8;
            tmp_called_value_8 = PyObject_GetItem(locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19, mod_consts[17]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 20;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_aa1d1d44003b6caa74ba5fb714d02bbe_4->m_frame.f_lineno = 20;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[43]);

            Py_DECREF(tmp_called_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_aa1d1d44003b6caa74ba5fb714d02bbe_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_aa1d1d44003b6caa74ba5fb714d02bbe_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_aa1d1d44003b6caa74ba5fb714d02bbe_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_aa1d1d44003b6caa74ba5fb714d02bbe_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_aa1d1d44003b6caa74ba5fb714d02bbe_4);

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


                exception_lineno = 19;

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
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19, mod_consts[36], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_10;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_9 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_14 = mod_consts[42];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_14 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 19;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_35 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19);
        locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19 = NULL;
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

        Py_DECREF(locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19);
        locals_comtypes$connectionpoints$$$class__3_IConnectionPoint_19 = NULL;
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
        exception_lineno = 19;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_35);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_15;
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_15);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_38 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_16 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[3];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_40;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_17 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[22]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_18 = tmp_class_creation_4__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[22]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        tmp_tuple_element_16 = mod_consts[44];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_16 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 23;
        tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_19 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[24]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[26];
        tmp_getattr_default_4 = mod_consts[27];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[26]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_42;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_13;
        }
        frame_7a64aa292e4e709f0faf486d503f6625_5 = MAKE_CLASS_FRAME(codeobj_7a64aa292e4e709f0faf486d503f6625, module_comtypes$connectionpoints, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7a64aa292e4e709f0faf486d503f6625_5);
        assert(Py_REFCNT(frame_7a64aa292e4e709f0faf486d503f6625_5) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_11;
            tmp_called_value_11 = PyObject_GetItem(locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23, mod_consts[17]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 24;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_7a64aa292e4e709f0faf486d503f6625_5->m_frame.f_lineno = 24;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[45]);

            Py_DECREF(tmp_called_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$connectionpoints$$$function__1___iter__();

        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23, mod_consts[46], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$connectionpoints$$$function__2___next__();

        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23, mod_consts[48], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7a64aa292e4e709f0faf486d503f6625_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7a64aa292e4e709f0faf486d503f6625_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7a64aa292e4e709f0faf486d503f6625_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7a64aa292e4e709f0faf486d503f6625_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_7a64aa292e4e709f0faf486d503f6625_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23, mod_consts[36], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_13;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_12 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_18 = mod_consts[44];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_18 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 23;
            tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_43 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23);
        locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23);
        locals_comtypes$connectionpoints$$$class__4_IEnumConnections_23 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 23;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_43);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_19;
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_14;
        }
        tmp_assign_source_45 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_19);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_46 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_14;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_21 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[3];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_14;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_48 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_22 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[22]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_23 = tmp_class_creation_5__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[22]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_14;
        }
        tmp_tuple_element_20 = mod_consts[50];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_20 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 43;
        tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_24 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[24]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_14;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[26];
        tmp_getattr_default_5 = mod_consts[27];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[26]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 43;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_50;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_16;
        }
        frame_26bc47a3b4757748890fac759efae4c1_6 = MAKE_CLASS_FRAME(codeobj_26bc47a3b4757748890fac759efae4c1, module_comtypes$connectionpoints, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_26bc47a3b4757748890fac759efae4c1_6);
        assert(Py_REFCNT(frame_26bc47a3b4757748890fac759efae4c1_6) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_14;
            tmp_called_value_14 = PyObject_GetItem(locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43, mod_consts[17]);

            if (tmp_called_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_14 == NULL)) {
                        tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_value_14);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_26bc47a3b4757748890fac759efae4c1_6->m_frame.f_lineno = 44;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[51]);

            Py_DECREF(tmp_called_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$connectionpoints$$$function__4___iter__();

        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43, mod_consts[46], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$connectionpoints$$$function__5___next__();

        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43, mod_consts[48], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_26bc47a3b4757748890fac759efae4c1_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_26bc47a3b4757748890fac759efae4c1_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_26bc47a3b4757748890fac759efae4c1_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_26bc47a3b4757748890fac759efae4c1_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_26bc47a3b4757748890fac759efae4c1_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43, mod_consts[36], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_16;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_15 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_22 = mod_consts[50];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_22 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 43;
            tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_51 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43);
        locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43);
        locals_comtypes$connectionpoints$$$class__5_IEnumConnectionPoints_43 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 43;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_51);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(0);
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[54];
        tmp_tuple_element_23 = MAKE_LIST1(mod_consts[55]);
        tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_7;
            PyTuple_SET_ITEM(tmp_args_element_value_5, 0, tmp_tuple_element_23);
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_8;
            }
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_8;
            }
            tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_args_element_value_7 == NULL)) {
                tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_8;
            }
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 67;
            tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_7);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_8;
            }
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 67;
            tmp_tuple_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_5, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_args_element_value_5, 2, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_tuple_element_25;
            PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_2);
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto list_build_exception_2;
            }
            tmp_args_element_value_8 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_9 == NULL)) {
                tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_8);

                exception_lineno = 68;

                goto list_build_exception_2;
            }
            tmp_args_element_value_10 = mod_consts[57];
            tmp_tuple_element_24 = MAKE_LIST1(mod_consts[58]);
            tmp_args_element_value_11 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_20;
                PyObject *tmp_args_element_value_12;
                PyTuple_SET_ITEM(tmp_args_element_value_11, 0, tmp_tuple_element_24);
                tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_20 == NULL)) {
                    tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;

                    goto tuple_build_exception_9;
                }
                tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[20]);

                if (unlikely(tmp_args_element_value_12 == NULL)) {
                    tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                }

                if (tmp_args_element_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;

                    goto tuple_build_exception_9;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 69;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_12);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;

                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_11, 1, tmp_tuple_element_24);
                tmp_tuple_element_24 = mod_consts[59];
                PyTuple_SET_ITEM0(tmp_args_element_value_11, 2, tmp_tuple_element_24);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_11);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_tuple_element_25 = MAKE_LIST1(mod_consts[55]);
            tmp_args_element_value_13 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_21;
                PyObject *tmp_args_element_value_14;
                PyObject *tmp_called_value_22;
                PyObject *tmp_args_element_value_15;
                PyTuple_SET_ITEM(tmp_args_element_value_13, 0, tmp_tuple_element_25);
                tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_21 == NULL)) {
                    tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;

                    goto tuple_build_exception_10;
                }
                tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_22 == NULL)) {
                    tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;

                    goto tuple_build_exception_10;
                }
                tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[42]);

                if (unlikely(tmp_args_element_value_15 == NULL)) {
                    tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                }

                if (tmp_args_element_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;

                    goto tuple_build_exception_10;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 70;
                tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_15);
                if (tmp_args_element_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;

                    goto tuple_build_exception_10;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 70;
                tmp_tuple_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_14);
                Py_DECREF(tmp_args_element_value_14);
                if (tmp_tuple_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;

                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_13, 1, tmp_tuple_element_25);
                tmp_tuple_element_25 = mod_consts[60];
                PyTuple_SET_ITEM0(tmp_args_element_value_13, 2, tmp_tuple_element_25);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_13);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 68;
            {
                PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_13};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_19, call_args);
            }

            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assattr_value_3, 1, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assattr_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[61], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = MAKE_LIST_EMPTY(0);
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = mod_consts[62];
        tmp_tuple_element_26 = MAKE_LIST1(mod_consts[55]);
        tmp_args_element_value_19 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_20;
            PyTuple_SET_ITEM(tmp_args_element_value_19, 0, tmp_tuple_element_26);
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto tuple_build_exception_11;
            }
            tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_args_element_value_20 == NULL)) {
                tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_args_element_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto tuple_build_exception_11;
            }
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 75;
            tmp_tuple_element_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_20);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_19, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_args_element_value_19, 2, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_19);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_tuple_element_31;
            PyList_SET_ITEM(tmp_assattr_value_4, 0, tmp_list_element_3);
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto list_build_exception_3;
            }
            tmp_args_element_value_21 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_22 == NULL)) {
                tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_21);

                exception_lineno = 76;

                goto list_build_exception_3;
            }
            tmp_args_element_value_23 = mod_consts[64];
            tmp_tuple_element_27 = MAKE_LIST1(mod_consts[55]);
            tmp_args_element_value_24 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_26;
                PyObject *tmp_args_element_value_25;
                PyObject *tmp_called_value_27;
                PyObject *tmp_args_element_value_26;
                PyTuple_SET_ITEM(tmp_args_element_value_24, 0, tmp_tuple_element_27);
                tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_26 == NULL)) {
                    tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_12;
                }
                tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_27 == NULL)) {
                    tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_12;
                }
                tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[38]);

                if (unlikely(tmp_args_element_value_26 == NULL)) {
                    tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                }

                if (tmp_args_element_value_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_12;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 77;
                tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_26);
                if (tmp_args_element_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_12;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 77;
                tmp_tuple_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_25);
                if (tmp_tuple_element_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_24, 1, tmp_tuple_element_27);
                tmp_tuple_element_27 = mod_consts[65];
                PyTuple_SET_ITEM0(tmp_args_element_value_24, 2, tmp_tuple_element_27);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_24);
            goto list_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 76;
            {
                PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_25, call_args);
            }

            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_assattr_value_4, 1, tmp_list_element_3);
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto list_build_exception_3;
            }
            tmp_args_element_value_27 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_28 == NULL)) {
                tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_27);

                exception_lineno = 78;

                goto list_build_exception_3;
            }
            tmp_args_element_value_29 = mod_consts[66];
            tmp_tuple_element_28 = MAKE_LIST1(mod_consts[58]);
            tmp_args_element_value_30 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_29;
                PyObject *tmp_args_element_value_31;
                PyTuple_SET_ITEM(tmp_args_element_value_30, 0, tmp_tuple_element_28);
                tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_29 == NULL)) {
                    tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;

                    goto tuple_build_exception_13;
                }
                tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[15]);

                if (unlikely(tmp_args_element_value_31 == NULL)) {
                    tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                }

                if (tmp_args_element_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;

                    goto tuple_build_exception_13;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 79;
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_31);
                if (tmp_tuple_element_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;

                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_30, 1, tmp_tuple_element_28);
                tmp_tuple_element_28 = mod_consts[67];
                PyTuple_SET_ITEM0(tmp_args_element_value_30, 2, tmp_tuple_element_28);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_30);
            goto list_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_tuple_element_29 = MAKE_LIST1(mod_consts[55]);
            tmp_args_element_value_32 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_30;
                PyObject *tmp_args_element_value_33;
                PyTuple_SET_ITEM(tmp_args_element_value_32, 0, tmp_tuple_element_29);
                tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_30 == NULL)) {
                    tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;

                    goto tuple_build_exception_14;
                }
                tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[34]);

                if (unlikely(tmp_args_element_value_33 == NULL)) {
                    tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                }

                if (tmp_args_element_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;

                    goto tuple_build_exception_14;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 80;
                tmp_tuple_element_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_33);
                if (tmp_tuple_element_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;

                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_32, 1, tmp_tuple_element_29);
                tmp_tuple_element_29 = mod_consts[68];
                PyTuple_SET_ITEM0(tmp_args_element_value_32, 2, tmp_tuple_element_29);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_32);
            goto list_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 78;
            {
                PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_32};
                tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_28, call_args);
            }

            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_assattr_value_4, 2, tmp_list_element_3);
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_3;
            }
            tmp_args_element_value_34 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_35 == NULL)) {
                tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_34);

                exception_lineno = 81;

                goto list_build_exception_3;
            }
            tmp_args_element_value_36 = mod_consts[69];
            tmp_tuple_element_30 = MAKE_LIST1(mod_consts[58]);
            tmp_args_element_value_37 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_args_element_value_37, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_args_element_value_37, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = mod_consts[33];
            PyTuple_SET_ITEM0(tmp_args_element_value_37, 2, tmp_tuple_element_30);
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_37);
            goto list_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 81;
            {
                PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
                tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_31, call_args);
            }

            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_assattr_value_4, 3, tmp_list_element_3);
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_3;
            }
            tmp_args_element_value_38 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_39 == NULL)) {
                tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_38);

                exception_lineno = 83;

                goto list_build_exception_3;
            }
            tmp_args_element_value_40 = mod_consts[70];
            tmp_tuple_element_31 = MAKE_LIST1(mod_consts[55]);
            tmp_args_element_value_41 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_33;
                PyObject *tmp_args_element_value_42;
                PyObject *tmp_called_value_34;
                PyObject *tmp_args_element_value_43;
                PyTuple_SET_ITEM(tmp_args_element_value_41, 0, tmp_tuple_element_31);
                tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_33 == NULL)) {
                    tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto tuple_build_exception_16;
                }
                tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_34 == NULL)) {
                    tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto tuple_build_exception_16;
                }
                tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[44]);

                if (unlikely(tmp_args_element_value_43 == NULL)) {
                    tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                }

                if (tmp_args_element_value_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto tuple_build_exception_16;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 84;
                tmp_args_element_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_43);
                if (tmp_args_element_value_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto tuple_build_exception_16;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 84;
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_42);
                if (tmp_tuple_element_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_41, 1, tmp_tuple_element_31);
                tmp_tuple_element_31 = mod_consts[56];
                PyTuple_SET_ITEM0(tmp_args_element_value_41, 2, tmp_tuple_element_31);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_41);
            goto list_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 83;
            {
                PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41};
                tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_32, call_args);
            }

            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_assattr_value_4, 4, tmp_list_element_3);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assattr_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[61], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_list_element_4;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_44 = MAKE_LIST_EMPTY(0);
        tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_value_45 == NULL)) {
            tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_44);

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = mod_consts[0];
        tmp_tuple_element_32 = MAKE_LIST1(mod_consts[58]);
        tmp_args_element_value_47 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_args_element_value_47, 0, tmp_tuple_element_32);
        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_tuple_element_32 == NULL)) {
            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_tuple_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto tuple_build_exception_17;
        }
        PyTuple_SET_ITEM0(tmp_args_element_value_47, 1, tmp_tuple_element_32);
        tmp_tuple_element_32 = mod_consts[71];
        PyTuple_SET_ITEM0(tmp_args_element_value_47, 2, tmp_tuple_element_32);
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_47);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_tuple_element_33 = MAKE_LIST1(mod_consts[55]);
        tmp_args_element_value_48 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_49;
            PyTuple_SET_ITEM(tmp_args_element_value_48, 0, tmp_tuple_element_33);
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_args_element_value_49 == NULL)) {
                tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_args_element_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto tuple_build_exception_18;
            }
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 90;
            tmp_tuple_element_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_49);
            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_48, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = mod_consts[72];
            PyTuple_SET_ITEM0(tmp_args_element_value_48, 2, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_48);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_tuple_element_34 = MAKE_LIST1(mod_consts[55]);
        tmp_args_element_value_50 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_51;
            PyTuple_SET_ITEM(tmp_args_element_value_50, 0, tmp_tuple_element_34);
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_19;
            }
            tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_args_element_value_51 == NULL)) {
                tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_args_element_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_19;
            }
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 91;
            tmp_tuple_element_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_51);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_50, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = mod_consts[73];
            PyTuple_SET_ITEM0(tmp_args_element_value_50, 2, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_48);
        Py_DECREF(tmp_args_element_value_50);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_50};
            tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_35, call_args);
        }

        Py_DECREF(tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_48);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_list_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_args_element_value_57;
            PyObject *tmp_args_element_value_58;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_59;
            PyObject *tmp_args_element_value_60;
            PyObject *tmp_args_element_value_61;
            PyObject *tmp_args_element_value_62;
            PyObject *tmp_tuple_element_36;
            PyList_SET_ITEM(tmp_assattr_value_5, 0, tmp_list_element_4);
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto list_build_exception_4;
            }
            tmp_args_element_value_52 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_53 == NULL)) {
                tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_52);

                exception_lineno = 92;

                goto list_build_exception_4;
            }
            tmp_args_element_value_54 = mod_consts[74];
            tmp_tuple_element_35 = MAKE_LIST1(mod_consts[58]);
            tmp_args_element_value_55 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_args_element_value_55, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_args_element_value_55, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = mod_consts[71];
            PyTuple_SET_ITEM0(tmp_args_element_value_55, 2, tmp_tuple_element_35);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_55);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 92;
            {
                PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55};
                tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_38, call_args);
            }

            Py_DECREF(tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_55);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_assattr_value_5, 1, tmp_list_element_4);
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_4;
            }
            tmp_args_element_value_56 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_57 == NULL)) {
                tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_56);

                exception_lineno = 94;

                goto list_build_exception_4;
            }
            tmp_args_element_value_58 = mod_consts[75];
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 94;
            {
                PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58};
                tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_39, call_args);
            }

            Py_DECREF(tmp_args_element_value_56);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_assattr_value_5, 2, tmp_list_element_4);
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto list_build_exception_4;
            }
            tmp_args_element_value_59 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_60 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_60 == NULL)) {
                tmp_args_element_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_59);

                exception_lineno = 95;

                goto list_build_exception_4;
            }
            tmp_args_element_value_61 = mod_consts[76];
            tmp_tuple_element_36 = MAKE_LIST1(mod_consts[55]);
            tmp_args_element_value_62 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_41;
                PyObject *tmp_args_element_value_63;
                PyObject *tmp_called_value_42;
                PyObject *tmp_args_element_value_64;
                PyTuple_SET_ITEM(tmp_args_element_value_62, 0, tmp_tuple_element_36);
                tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_41 == NULL)) {
                    tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;

                    goto tuple_build_exception_21;
                }
                tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_42 == NULL)) {
                    tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;

                    goto tuple_build_exception_21;
                }
                tmp_args_element_value_64 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[44]);

                if (unlikely(tmp_args_element_value_64 == NULL)) {
                    tmp_args_element_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                }

                if (tmp_args_element_value_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;

                    goto tuple_build_exception_21;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 96;
                tmp_args_element_value_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_64);
                if (tmp_args_element_value_63 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;

                    goto tuple_build_exception_21;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 96;
                tmp_tuple_element_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_63);
                if (tmp_tuple_element_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;

                    goto tuple_build_exception_21;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_62, 1, tmp_tuple_element_36);
                tmp_tuple_element_36 = mod_consts[56];
                PyTuple_SET_ITEM0(tmp_args_element_value_62, 2, tmp_tuple_element_36);
            }
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_62);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62};
                tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_40, call_args);
            }

            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_62);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_assattr_value_5, 3, tmp_list_element_4);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assattr_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[61], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_list_element_5;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_assattr_target_6;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_65 = MAKE_LIST_EMPTY(0);
        tmp_args_element_value_66 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_value_66 == NULL)) {
            tmp_args_element_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_65);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = mod_consts[0];
        tmp_tuple_element_37 = MAKE_LIST1(mod_consts[58]);
        tmp_args_element_value_68 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_args_element_value_68, 0, tmp_tuple_element_37);
        tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_tuple_element_37 == NULL)) {
            tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_tuple_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto tuple_build_exception_22;
        }
        PyTuple_SET_ITEM0(tmp_args_element_value_68, 1, tmp_tuple_element_37);
        tmp_tuple_element_37 = mod_consts[71];
        PyTuple_SET_ITEM0(tmp_args_element_value_68, 2, tmp_tuple_element_37);
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_args_element_value_65);
        Py_DECREF(tmp_args_element_value_68);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_tuple_element_38 = MAKE_LIST1(mod_consts[55]);
        tmp_args_element_value_69 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_70;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_71;
            PyTuple_SET_ITEM(tmp_args_element_value_69, 0, tmp_tuple_element_38);
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto tuple_build_exception_23;
            }
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto tuple_build_exception_23;
            }
            tmp_args_element_value_71 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_args_element_value_71 == NULL)) {
                tmp_args_element_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_args_element_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto tuple_build_exception_23;
            }
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 102;
            tmp_args_element_value_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_71);
            if (tmp_args_element_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto tuple_build_exception_23;
            }
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 102;
            tmp_tuple_element_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_70);
            Py_DECREF(tmp_args_element_value_70);
            if (tmp_tuple_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_69, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = mod_consts[60];
            PyTuple_SET_ITEM0(tmp_args_element_value_69, 2, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_args_element_value_65);
        Py_DECREF(tmp_args_element_value_68);
        Py_DECREF(tmp_args_element_value_69);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_tuple_element_39 = MAKE_LIST1(mod_consts[55]);
        tmp_args_element_value_72 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_73;
            PyTuple_SET_ITEM(tmp_args_element_value_72, 0, tmp_tuple_element_39);
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_73 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_args_element_value_73 == NULL)) {
                tmp_args_element_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_args_element_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_24;
            }
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 103;
            tmp_tuple_element_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_73);
            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_72, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = mod_consts[73];
            PyTuple_SET_ITEM0(tmp_args_element_value_72, 2, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_args_element_value_65);
        Py_DECREF(tmp_args_element_value_68);
        Py_DECREF(tmp_args_element_value_69);
        Py_DECREF(tmp_args_element_value_72);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_72};
            tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_43, call_args);
        }

        Py_DECREF(tmp_args_element_value_65);
        Py_DECREF(tmp_args_element_value_68);
        Py_DECREF(tmp_args_element_value_69);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_6 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_74;
            PyObject *tmp_args_element_value_75;
            PyObject *tmp_args_element_value_76;
            PyObject *tmp_args_element_value_77;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_78;
            PyObject *tmp_args_element_value_79;
            PyObject *tmp_args_element_value_80;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_81;
            PyObject *tmp_args_element_value_82;
            PyObject *tmp_args_element_value_83;
            PyObject *tmp_args_element_value_84;
            PyObject *tmp_tuple_element_41;
            PyList_SET_ITEM(tmp_assattr_value_6, 0, tmp_list_element_5);
            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_47 == NULL)) {
                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_5;
            }
            tmp_args_element_value_74 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_75 == NULL)) {
                tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_74);

                exception_lineno = 104;

                goto list_build_exception_5;
            }
            tmp_args_element_value_76 = mod_consts[74];
            tmp_tuple_element_40 = MAKE_LIST1(mod_consts[58]);
            tmp_args_element_value_77 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_args_element_value_77, 0, tmp_tuple_element_40);
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_tuple_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM0(tmp_args_element_value_77, 1, tmp_tuple_element_40);
            tmp_tuple_element_40 = mod_consts[71];
            PyTuple_SET_ITEM0(tmp_args_element_value_77, 2, tmp_tuple_element_40);
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_args_element_value_74);
            Py_DECREF(tmp_args_element_value_77);
            goto list_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 104;
            {
                PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77};
                tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_47, call_args);
            }

            Py_DECREF(tmp_args_element_value_74);
            Py_DECREF(tmp_args_element_value_77);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_assattr_value_6, 1, tmp_list_element_5);
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto list_build_exception_5;
            }
            tmp_args_element_value_78 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_79 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_79 == NULL)) {
                tmp_args_element_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_78);

                exception_lineno = 106;

                goto list_build_exception_5;
            }
            tmp_args_element_value_80 = mod_consts[75];
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 106;
            {
                PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80};
                tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_48, call_args);
            }

            Py_DECREF(tmp_args_element_value_78);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_assattr_value_6, 2, tmp_list_element_5);
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto list_build_exception_5;
            }
            tmp_args_element_value_81 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_82 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_82 == NULL)) {
                tmp_args_element_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_81);

                exception_lineno = 107;

                goto list_build_exception_5;
            }
            tmp_args_element_value_83 = mod_consts[76];
            tmp_tuple_element_41 = MAKE_LIST1(mod_consts[55]);
            tmp_args_element_value_84 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_50;
                PyObject *tmp_args_element_value_85;
                PyObject *tmp_called_value_51;
                PyObject *tmp_args_element_value_86;
                PyTuple_SET_ITEM(tmp_args_element_value_84, 0, tmp_tuple_element_41);
                tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_50 == NULL)) {
                    tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;

                    goto tuple_build_exception_26;
                }
                tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_called_value_51 == NULL)) {
                    tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_called_value_51 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;

                    goto tuple_build_exception_26;
                }
                tmp_args_element_value_86 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[50]);

                if (unlikely(tmp_args_element_value_86 == NULL)) {
                    tmp_args_element_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                }

                if (tmp_args_element_value_86 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;

                    goto tuple_build_exception_26;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 108;
                tmp_args_element_value_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_86);
                if (tmp_args_element_value_85 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;

                    goto tuple_build_exception_26;
                }
                frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 108;
                tmp_tuple_element_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_85);
                Py_DECREF(tmp_args_element_value_85);
                if (tmp_tuple_element_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;

                    goto tuple_build_exception_26;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_84, 1, tmp_tuple_element_41);
                tmp_tuple_element_41 = mod_consts[56];
                PyTuple_SET_ITEM0(tmp_args_element_value_84, 2, tmp_tuple_element_41);
            }
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_args_element_value_81);
            Py_DECREF(tmp_args_element_value_84);
            goto list_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame.f_lineno = 107;
            {
                PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84};
                tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_49, call_args);
            }

            Py_DECREF(tmp_args_element_value_81);
            Py_DECREF(tmp_args_element_value_84);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_assattr_value_6, 3, tmp_list_element_5);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assattr_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[61], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f3b6e74ff5055f151d40884e1b89f84a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3b6e74ff5055f151d40884e1b89f84a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3b6e74ff5055f151d40884e1b89f84a, exception_lineno);
    }



    assertFrameObject(frame_f3b6e74ff5055f151d40884e1b89f84a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("comtypes.connectionpoints", false);

    Py_INCREF(module_comtypes$connectionpoints);
    return module_comtypes$connectionpoints;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$connectionpoints, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("comtypes$connectionpoints", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
