/* Generated code for Python module 'comtypes.persist'
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

/* The "module_comtypes$persist" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_comtypes$persist;
PyDictObject *moduledict_comtypes$persist;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[166];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[166];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("comtypes.persist"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 166; i++) {
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
void checkModuleConstants_comtypes$persist(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 166; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_4b90201a81a12cbf20b91253599ef2da;
static PyCodeObject *codeobj_494c0103d072a397c86f3c79c2e9a763;
static PyCodeObject *codeobj_5a9d0e015a7d25e234f4598d2b1ab6c7;
static PyCodeObject *codeobj_6917cd75be34c0c9f046e65959471890;
static PyCodeObject *codeobj_7d3c77613712ba66a8a21716939add86;
static PyCodeObject *codeobj_29474e3afcaea12479d53e428cfad4d4;
static PyCodeObject *codeobj_4c0c618a4ecba4ab447d0a9ac65f0be8;
static PyCodeObject *codeobj_8afe2e07de149de2e63e739edcb121da;
static PyCodeObject *codeobj_a95bd10e0167a939cca7c7b628e5d8b7;
static PyCodeObject *codeobj_7ec38ee247c110215562001bf4ce7cbc;
static PyCodeObject *codeobj_12ae5b7bad45c5e41eb011a45f38dc27;
static PyCodeObject *codeobj_4d7674add830e78d48b3dd5a90075387;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[12]; CHECK_OBJECT(module_filename_obj);
    codeobj_4b90201a81a12cbf20b91253599ef2da = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[160], mod_consts[160], NULL, NULL, 0, 0, 0);
    codeobj_494c0103d072a397c86f3c79c2e9a763 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[161], NULL, 0, 0, 0);
    codeobj_5a9d0e015a7d25e234f4598d2b1ab6c7 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[161], NULL, 0, 0, 0);
    codeobj_6917cd75be34c0c9f046e65959471890 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[161], NULL, 0, 0, 0);
    codeobj_7d3c77613712ba66a8a21716939add86 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[161], NULL, 0, 0, 0);
    codeobj_29474e3afcaea12479d53e428cfad4d4 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[161], NULL, 0, 0, 0);
    codeobj_4c0c618a4ecba4ab447d0a9ac65f0be8 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[161], NULL, 0, 0, 0);
    codeobj_8afe2e07de149de2e63e739edcb121da = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[161], NULL, 0, 0, 0);
    codeobj_a95bd10e0167a939cca7c7b628e5d8b7 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[162], NULL, 5, 0, 0);
    codeobj_7ec38ee247c110215562001bf4ce7cbc = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[163], NULL, 4, 0, 0);
    codeobj_12ae5b7bad45c5e41eb011a45f38dc27 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[164], NULL, 1, 0, 0);
    codeobj_4d7674add830e78d48b3dd5a90075387 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[161], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_comtypes$persist$$$function__1___init__();


static PyObject *MAKE_FUNCTION_comtypes$persist$$$function__2_Read();


static PyObject *MAKE_FUNCTION_comtypes$persist$$$function__3_Write();


// The module function definitions.
static PyObject *impl_comtypes$persist$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kw = python_pars[1];
    struct Nuitka_FrameObject *frame_12ae5b7bad45c5e41eb011a45f38dc27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_12ae5b7bad45c5e41eb011a45f38dc27 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12ae5b7bad45c5e41eb011a45f38dc27)) {
        Py_XDECREF(cache_frame_12ae5b7bad45c5e41eb011a45f38dc27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12ae5b7bad45c5e41eb011a45f38dc27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12ae5b7bad45c5e41eb011a45f38dc27 = MAKE_FUNCTION_FRAME(codeobj_12ae5b7bad45c5e41eb011a45f38dc27, module_comtypes$persist, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_12ae5b7bad45c5e41eb011a45f38dc27->m_type_description == NULL);
    frame_12ae5b7bad45c5e41eb011a45f38dc27 = cache_frame_12ae5b7bad45c5e41eb011a45f38dc27;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_12ae5b7bad45c5e41eb011a45f38dc27);
    assert(Py_REFCNT(frame_12ae5b7bad45c5e41eb011a45f38dc27) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_comtypes$persist, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        frame_12ae5b7bad45c5e41eb011a45f38dc27->m_frame.f_lineno = 192;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_kw);
        tmp_assattr_value_1 = par_kw;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12ae5b7bad45c5e41eb011a45f38dc27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12ae5b7bad45c5e41eb011a45f38dc27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12ae5b7bad45c5e41eb011a45f38dc27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12ae5b7bad45c5e41eb011a45f38dc27,
        type_description_1,
        par_self,
        par_kw,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_12ae5b7bad45c5e41eb011a45f38dc27 == cache_frame_12ae5b7bad45c5e41eb011a45f38dc27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_12ae5b7bad45c5e41eb011a45f38dc27);
        cache_frame_12ae5b7bad45c5e41eb011a45f38dc27 = NULL;
    }

    assertFrameObject(frame_12ae5b7bad45c5e41eb011a45f38dc27);

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
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$persist$$$function__2_Read(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_this = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_pVar = python_pars[3];
    PyObject *par_errorlog = python_pars[4];
    PyObject *var_val = NULL;
    PyObject *var_var = NULL;
    PyObject *var_typecode = NULL;
    struct Nuitka_FrameObject *frame_a95bd10e0167a939cca7c7b628e5d8b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a95bd10e0167a939cca7c7b628e5d8b7 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a95bd10e0167a939cca7c7b628e5d8b7)) {
        Py_XDECREF(cache_frame_a95bd10e0167a939cca7c7b628e5d8b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a95bd10e0167a939cca7c7b628e5d8b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a95bd10e0167a939cca7c7b628e5d8b7 = MAKE_FUNCTION_FRAME(codeobj_a95bd10e0167a939cca7c7b628e5d8b7, module_comtypes$persist, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a95bd10e0167a939cca7c7b628e5d8b7->m_type_description == NULL);
    frame_a95bd10e0167a939cca7c7b628e5d8b7 = cache_frame_a95bd10e0167a939cca7c7b628e5d8b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a95bd10e0167a939cca7c7b628e5d8b7);
    assert(Py_REFCNT(frame_a95bd10e0167a939cca7c7b628e5d8b7) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_name);
        tmp_subscript_value_1 = par_name;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a95bd10e0167a939cca7c7b628e5d8b7, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a95bd10e0167a939cca7c7b628e5d8b7, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[4]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 199;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 196;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a95bd10e0167a939cca7c7b628e5d8b7->m_frame) frame_a95bd10e0167a939cca7c7b628e5d8b7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_pVar);
        tmp_expression_value_3 = par_pVar;
        tmp_subscript_value_2 = mod_consts[5];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_var == NULL);
        var_var = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_var);
        tmp_expression_value_4 = var_var;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_typecode == NULL);
        var_typecode = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_val);
        tmp_assattr_value_1 = var_val;
        CHECK_OBJECT(var_var);
        tmp_assattr_target_1 = var_var;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_typecode);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_typecode);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_var);
        tmp_called_instance_1 = var_var;
        CHECK_OBJECT(var_typecode);
        tmp_args_element_value_1 = var_typecode;
        frame_a95bd10e0167a939cca7c7b628e5d8b7->m_frame.f_lineno = 206;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[8], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[9]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 207;
        type_description_1 = "oooooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a95bd10e0167a939cca7c7b628e5d8b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a95bd10e0167a939cca7c7b628e5d8b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a95bd10e0167a939cca7c7b628e5d8b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a95bd10e0167a939cca7c7b628e5d8b7,
        type_description_1,
        par_self,
        par_this,
        par_name,
        par_pVar,
        par_errorlog,
        var_val,
        var_var,
        var_typecode
    );


    // Release cached frame if used for exception.
    if (frame_a95bd10e0167a939cca7c7b628e5d8b7 == cache_frame_a95bd10e0167a939cca7c7b628e5d8b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a95bd10e0167a939cca7c7b628e5d8b7);
        cache_frame_a95bd10e0167a939cca7c7b628e5d8b7 = NULL;
    }

    assertFrameObject(frame_a95bd10e0167a939cca7c7b628e5d8b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_var);
    var_var = NULL;
    Py_XDECREF(var_typecode);
    var_typecode = NULL;
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

    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_var);
    var_var = NULL;
    Py_XDECREF(var_typecode);
    var_typecode = NULL;
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
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_pVar);
    Py_DECREF(par_pVar);
    CHECK_OBJECT(par_errorlog);
    Py_DECREF(par_errorlog);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_pVar);
    Py_DECREF(par_pVar);
    CHECK_OBJECT(par_errorlog);
    Py_DECREF(par_errorlog);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$persist$$$function__3_Write(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_this = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_var = python_pars[3];
    PyObject *var_val = NULL;
    struct Nuitka_FrameObject *frame_7ec38ee247c110215562001bf4ce7cbc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7ec38ee247c110215562001bf4ce7cbc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7ec38ee247c110215562001bf4ce7cbc)) {
        Py_XDECREF(cache_frame_7ec38ee247c110215562001bf4ce7cbc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ec38ee247c110215562001bf4ce7cbc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ec38ee247c110215562001bf4ce7cbc = MAKE_FUNCTION_FRAME(codeobj_7ec38ee247c110215562001bf4ce7cbc, module_comtypes$persist, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ec38ee247c110215562001bf4ce7cbc->m_type_description == NULL);
    frame_7ec38ee247c110215562001bf4ce7cbc = cache_frame_7ec38ee247c110215562001bf4ce7cbc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ec38ee247c110215562001bf4ce7cbc);
    assert(Py_REFCNT(frame_7ec38ee247c110215562001bf4ce7cbc) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_var);
        tmp_expression_value_2 = par_var;
        tmp_subscript_value_1 = mod_consts[5];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_val);
        tmp_ass_subvalue_1 = var_val;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_ass_subscript_1 = par_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[9]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 212;
        type_description_1 = "ooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ec38ee247c110215562001bf4ce7cbc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ec38ee247c110215562001bf4ce7cbc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ec38ee247c110215562001bf4ce7cbc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ec38ee247c110215562001bf4ce7cbc,
        type_description_1,
        par_self,
        par_this,
        par_name,
        par_var,
        var_val
    );


    // Release cached frame if used for exception.
    if (frame_7ec38ee247c110215562001bf4ce7cbc == cache_frame_7ec38ee247c110215562001bf4ce7cbc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ec38ee247c110215562001bf4ce7cbc);
        cache_frame_7ec38ee247c110215562001bf4ce7cbc = NULL;
    }

    assertFrameObject(frame_7ec38ee247c110215562001bf4ce7cbc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_val);
    Py_DECREF(var_val);
    var_val = NULL;
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

    Py_XDECREF(var_val);
    var_val = NULL;
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
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_var);
    Py_DECREF(par_var);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_this);
    Py_DECREF(par_this);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_var);
    Py_DECREF(par_var);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_comtypes$persist$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$persist$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_12ae5b7bad45c5e41eb011a45f38dc27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$persist,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$persist$$$function__2_Read() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$persist$$$function__2_Read,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_a95bd10e0167a939cca7c7b628e5d8b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$persist,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$persist$$$function__3_Write() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$persist$$$function__3_Write,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_7ec38ee247c110215562001bf4ce7cbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$persist,
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

function_impl_code functable_comtypes$persist[] = {
    impl_comtypes$persist$$$function__1___init__,
    impl_comtypes$persist$$$function__2_Read,
    impl_comtypes$persist$$$function__3_Write,
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

    function_impl_code *current = functable_comtypes$persist;
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

    if (offset > sizeof(functable_comtypes$persist) || offset < 0) {
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
        functable_comtypes$persist[offset],
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
        module_comtypes$persist,
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
PyObject *modulecode_comtypes$persist(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("comtypes.persist");

    // Store the module for future use.
    module_comtypes$persist = module;

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
        PRINT_STRING("comtypes.persist: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.persist: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.persist: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcomtypes$persist\n");

    moduledict_comtypes$persist = MODULE_DICT(module_comtypes$persist);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_comtypes$persist,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_comtypes$persist,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[165]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_comtypes$persist,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$persist,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$persist,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_comtypes$persist);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_comtypes$persist);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
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
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_4b90201a81a12cbf20b91253599ef2da;
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
    PyObject *locals_comtypes$persist$$$class__1_IErrorLog_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2;
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
    PyObject *locals_comtypes$persist$$$class__2_IPropertyBag_30 = NULL;
    struct Nuitka_FrameObject *frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3;
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
    PyObject *locals_comtypes$persist$$$class__3_IPersistPropertyBag_48 = NULL;
    struct Nuitka_FrameObject *frame_7d3c77613712ba66a8a21716939add86_4;
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
    PyObject *locals_comtypes$persist$$$class__4_tagPROPBAG2_73 = NULL;
    struct Nuitka_FrameObject *frame_4d7674add830e78d48b3dd5a90075387_5;
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
    PyObject *locals_comtypes$persist$$$class__5_IPropertyBag2_83 = NULL;
    struct Nuitka_FrameObject *frame_8afe2e07de149de2e63e739edcb121da_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111 = NULL;
    struct Nuitka_FrameObject *frame_29474e3afcaea12479d53e428cfad4d4_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_comtypes$persist$$$class__7_IPersistFile_162 = NULL;
    struct Nuitka_FrameObject *frame_6917cd75be34c0c9f046e65959471890_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_comtypes$persist$$$class__8_DictPropertyBag_182 = NULL;
    struct Nuitka_FrameObject *frame_494c0103d072a397c86f3c79c2e9a763_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_2);
    }
    frame_4b90201a81a12cbf20b91253599ef2da = MAKE_MODULE_FRAME(codeobj_4b90201a81a12cbf20b91253599ef2da, module_comtypes$persist);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4b90201a81a12cbf20b91253599ef2da);
    assert(Py_REFCNT(frame_4b90201a81a12cbf20b91253599ef2da) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[12];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[16], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        tmp_star_imported_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_star_imported_1 == NULL));
        tmp_result = IMPORT_MODULE_STAR(module_comtypes$persist, true, tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[18],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[18]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[19],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[19]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[20],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[20]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$persist;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[22];
        tmp_level_value_1 = mod_consts[5];
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 14;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[23],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[23]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[24],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[24]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[25],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[25]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[26],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[26]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[27],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[27]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[21];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_comtypes$persist;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[28];
        tmp_level_value_2 = mod_consts[5];
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 15;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[29],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[30];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_comtypes$persist;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[31];
        tmp_level_value_3 = mod_consts[5];
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 16;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[32],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[32]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[33],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[33]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_17);
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
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assign_source_18 == NULL)) {
            tmp_assign_source_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_18);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_assign_source_19 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_20 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
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


            exception_lineno = 21;

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
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[5];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_22 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[36]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[36]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[37];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 21;
        tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[38]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

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
        tmp_mod_expr_left_1 = mod_consts[39];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[40];
        tmp_getattr_default_1 = mod_consts[41];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[40]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

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


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 21;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_comtypes$persist$$$class__1_IErrorLog_21 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2 = MAKE_CLASS_FRAME(codeobj_5a9d0e015a7d25e234f4598d2b1ab6c7, module_comtypes$persist, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2);
        assert(Py_REFCNT(frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_2;
            tmp_called_value_2 = PyObject_GetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[23]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 22;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2->m_frame.f_lineno = 22;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[45]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_tuple_element_5;
            tmp_called_value_3 = PyObject_GetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[25]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 25;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_1 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_2 = PyObject_GetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[26]);

            if (tmp_args_element_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_args_element_value_2 == NULL)) {
                        tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_args_element_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_args_element_value_1);

                        exception_lineno = 25;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_args_element_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_3 = mod_consts[48];
            tmp_tuple_element_4 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_args_element_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[35]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto tuple_build_exception_2;
                }
            }

            PyTuple_SET_ITEM(tmp_args_element_value_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[50];
            PyTuple_SET_ITEM0(tmp_args_element_value_4, 2, tmp_tuple_element_4);
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
            tmp_tuple_element_5 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_4;
                PyObject *tmp_args_element_value_6;
                PyTuple_SET_ITEM(tmp_args_element_value_5, 0, tmp_tuple_element_5);
                tmp_called_value_4 = PyObject_GetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[51]);

                if (tmp_called_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_4 == NULL)) {
                            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 27;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_4);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_args_element_value_6 = PyObject_GetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[33]);

                if (tmp_args_element_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[33]);

                        if (unlikely(tmp_args_element_value_6 == NULL)) {
                            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                        }

                        if (tmp_args_element_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_4);

                            exception_lineno = 27;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_args_element_value_6);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2->m_frame.f_lineno = 27;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
                Py_DECREF(tmp_called_value_4);
                Py_DECREF(tmp_args_element_value_6);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_5, 1, tmp_tuple_element_5);
                tmp_tuple_element_5 = mod_consts[52];
                PyTuple_SET_ITEM0(tmp_args_element_value_5, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2->m_frame.f_lineno = 25;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_5a9d0e015a7d25e234f4598d2b1ab6c7_2);

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


                exception_lineno = 21;

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
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__1_IErrorLog_21, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[37];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_comtypes$persist$$$class__1_IErrorLog_21;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 21;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_25 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_comtypes$persist$$$class__1_IErrorLog_21);
        locals_comtypes$persist$$$class__1_IErrorLog_21 = NULL;
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

        Py_DECREF(locals_comtypes$persist$$$class__1_IErrorLog_21);
        locals_comtypes$persist$$$class__1_IErrorLog_21 = NULL;
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
        exception_lineno = 21;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_25);
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_28 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
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


            exception_lineno = 30;

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
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[5];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[36]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[36]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        tmp_tuple_element_8 = mod_consts[55];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_8 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 30;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[38]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

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
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[39];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[40];
        tmp_getattr_default_2 = mod_consts[41];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
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
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[40]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 30;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_comtypes$persist$$$class__2_IPropertyBag_30 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3 = MAKE_CLASS_FRAME(codeobj_4c0c618a4ecba4ab447d0a9ac65f0be8, module_comtypes$persist, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3);
        assert(Py_REFCNT(frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_7;
            tmp_called_value_7 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[23]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3->m_frame.f_lineno = 31;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[56]);

            Py_DECREF(tmp_called_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_tuple_element_12;
            tmp_called_value_8 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[25]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_7 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_8 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[26]);

            if (tmp_args_element_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_args_element_value_8 == NULL)) {
                        tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_args_element_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_args_element_value_7);

                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_args_element_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_9 = mod_consts[57];
            tmp_tuple_element_10 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_args_element_value_10, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[35]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_tuple_element_10 == NULL)) {
                        tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    Py_INCREF(tmp_tuple_element_10);
                } else {
                    goto tuple_build_exception_5;
                }
            }

            PyTuple_SET_ITEM(tmp_args_element_value_10, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[50];
            PyTuple_SET_ITEM0(tmp_args_element_value_10, 2, tmp_tuple_element_10);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_10);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_tuple_element_11 = MAKE_LIST2(mod_consts[49],mod_consts[58]);
            tmp_args_element_value_11 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_9;
                PyObject *tmp_args_element_value_12;
                PyTuple_SET_ITEM(tmp_args_element_value_11, 0, tmp_tuple_element_11);
                tmp_called_value_9 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[51]);

                if (tmp_called_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_9 == NULL)) {
                            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 40;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_9);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                tmp_args_element_value_12 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[32]);

                if (tmp_args_element_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[32]);

                        if (unlikely(tmp_args_element_value_12 == NULL)) {
                            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                        }

                        if (tmp_args_element_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_9);

                            exception_lineno = 40;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_args_element_value_12);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3->m_frame.f_lineno = 40;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_12);
                Py_DECREF(tmp_called_value_9);
                Py_DECREF(tmp_args_element_value_12);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_11, 1, tmp_tuple_element_11);
                tmp_tuple_element_11 = mod_consts[59];
                PyTuple_SET_ITEM0(tmp_args_element_value_11, 2, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_tuple_element_12 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_13 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_10;
                PyObject *tmp_args_element_value_14;
                PyTuple_SET_ITEM(tmp_args_element_value_13, 0, tmp_tuple_element_12);
                tmp_called_value_10 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[51]);

                if (tmp_called_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_10 == NULL)) {
                            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 41;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_10);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_args_element_value_14 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[37]);

                if (tmp_args_element_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[37]);

                        if (unlikely(tmp_args_element_value_14 == NULL)) {
                            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                        }

                        if (tmp_args_element_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_10);

                            exception_lineno = 41;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_args_element_value_14);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3->m_frame.f_lineno = 41;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_14);
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_args_element_value_14);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_13, 1, tmp_tuple_element_12);
                tmp_tuple_element_12 = mod_consts[60];
                PyTuple_SET_ITEM0(tmp_args_element_value_13, 2, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_13);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3->m_frame.f_lineno = 38;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_13};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_8, call_args);
            }

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_11;
                PyObject *tmp_args_element_value_15;
                PyObject *tmp_args_element_value_16;
                PyObject *tmp_args_element_value_17;
                PyObject *tmp_args_element_value_18;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_args_element_value_19;
                PyObject *tmp_tuple_element_14;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_called_value_11 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[25]);

                if (tmp_called_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_11 == NULL)) {
                            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 43;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_called_value_11);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_15 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_16 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[26]);

                if (tmp_args_element_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_16 == NULL)) {
                            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_11);
                            Py_DECREF(tmp_args_element_value_15);

                            exception_lineno = 43;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_args_element_value_16);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_17 = mod_consts[61];
                tmp_tuple_element_13 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_18 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_18, 0, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[35]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 44;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_18, 1, tmp_tuple_element_13);
                tmp_tuple_element_13 = mod_consts[50];
                PyTuple_SET_ITEM0(tmp_args_element_value_18, 2, tmp_tuple_element_13);
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);
                Py_DECREF(tmp_args_element_value_18);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                tmp_tuple_element_14 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_19 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_12;
                    PyObject *tmp_args_element_value_20;
                    PyTuple_SET_ITEM(tmp_args_element_value_19, 0, tmp_tuple_element_14);
                    tmp_called_value_12 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[51]);

                    if (tmp_called_value_12 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_12 == NULL)) {
                                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_12 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 45;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_called_value_12);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    tmp_args_element_value_20 = PyObject_GetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[32]);

                    if (tmp_args_element_value_20 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[32]);

                            if (unlikely(tmp_args_element_value_20 == NULL)) {
                                tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                            }

                            if (tmp_args_element_value_20 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_12);

                                exception_lineno = 45;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_args_element_value_20);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3->m_frame.f_lineno = 45;
                    tmp_tuple_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_20);
                    Py_DECREF(tmp_called_value_12);
                    Py_DECREF(tmp_args_element_value_20);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_19, 1, tmp_tuple_element_14);
                    tmp_tuple_element_14 = mod_consts[59];
                    PyTuple_SET_ITEM0(tmp_args_element_value_19, 2, tmp_tuple_element_14);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3->m_frame.f_lineno = 43;
                {
                    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
                    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_11, call_args);
                }

                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_4c0c618a4ecba4ab447d0a9ac65f0be8_3);

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


                exception_lineno = 30;

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
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__2_IPropertyBag_30, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_13 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_15 = mod_consts[55];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_15 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_comtypes$persist$$$class__2_IPropertyBag_30;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 30;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_33 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_comtypes$persist$$$class__2_IPropertyBag_30);
        locals_comtypes$persist$$$class__2_IPropertyBag_30 = NULL;
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

        Py_DECREF(locals_comtypes$persist$$$class__2_IPropertyBag_30);
        locals_comtypes$persist$$$class__2_IPropertyBag_30 = NULL;
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
        exception_lineno = 30;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_33);
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
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_16;
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        tmp_assign_source_35 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_16);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_36 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
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


            exception_lineno = 48;

            goto try_except_handler_10;
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
        tmp_subscript_value_3 = mod_consts[5];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[36]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[36]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        tmp_tuple_element_17 = mod_consts[62];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_17 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 48;
        tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[38]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
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
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[39];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[40];
        tmp_getattr_default_3 = mod_consts[41];
        tmp_tuple_element_18 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[40]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 48;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_40;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_comtypes$persist$$$class__3_IPersistPropertyBag_48 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[62];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        frame_7d3c77613712ba66a8a21716939add86_4 = MAKE_CLASS_FRAME(codeobj_7d3c77613712ba66a8a21716939add86, module_comtypes$persist, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7d3c77613712ba66a8a21716939add86_4);
        assert(Py_REFCNT(frame_7d3c77613712ba66a8a21716939add86_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_15;
            tmp_called_value_15 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[23]);

            if (tmp_called_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_called_value_15 == NULL)) {
                        tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_called_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_15);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_7d3c77613712ba66a8a21716939add86_4->m_frame.f_lineno = 49;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[63]);

            Py_DECREF(tmp_called_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_args_element_value_23;
            tmp_called_value_16 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[25]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_21 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_22 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[26]);

            if (tmp_args_element_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_args_element_value_22 == NULL)) {
                        tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_args_element_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_args_element_value_21);

                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_args_element_value_22);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_23 = mod_consts[64];
            frame_7d3c77613712ba66a8a21716939add86_4->m_frame.f_lineno = 52;
            {
                PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
                tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_16, call_args);
            }

            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_called_value_17;
                PyObject *tmp_args_element_value_24;
                PyObject *tmp_args_element_value_25;
                PyObject *tmp_args_element_value_26;
                PyObject *tmp_args_element_value_27;
                PyObject *tmp_tuple_element_19;
                PyObject *tmp_args_element_value_29;
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_called_value_20;
                PyObject *tmp_args_element_value_31;
                PyObject *tmp_args_element_value_32;
                PyObject *tmp_args_element_value_33;
                PyObject *tmp_args_element_value_34;
                PyObject *tmp_tuple_element_21;
                PyObject *tmp_args_element_value_36;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_args_element_value_37;
                PyObject *tmp_tuple_element_23;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_called_value_17 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[25]);

                if (tmp_called_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_17 == NULL)) {
                            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 53;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_17);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_24 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_25 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[26]);

                if (tmp_args_element_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_25 == NULL)) {
                            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_17);
                            Py_DECREF(tmp_args_element_value_24);

                            exception_lineno = 53;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_args_element_value_25);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_26 = mod_consts[65];
                tmp_tuple_element_19 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_27 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_18;
                    PyObject *tmp_args_element_value_28;
                    PyTuple_SET_ITEM(tmp_args_element_value_27, 0, tmp_tuple_element_19);
                    tmp_called_value_18 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[51]);

                    if (tmp_called_value_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_18 == NULL)) {
                                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_18 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 54;
                                type_description_2 = "o";
                                goto tuple_build_exception_11;
                            }
                            Py_INCREF(tmp_called_value_18);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    tmp_args_element_value_28 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[55]);

                    if (tmp_args_element_value_28 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[55]);

                            if (unlikely(tmp_args_element_value_28 == NULL)) {
                                tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                            }

                            if (tmp_args_element_value_28 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_18);

                                exception_lineno = 54;
                                type_description_2 = "o";
                                goto tuple_build_exception_11;
                            }
                            Py_INCREF(tmp_args_element_value_28);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    frame_7d3c77613712ba66a8a21716939add86_4->m_frame.f_lineno = 54;
                    tmp_tuple_element_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_28);
                    Py_DECREF(tmp_called_value_18);
                    Py_DECREF(tmp_args_element_value_28);
                    if (tmp_tuple_element_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 54;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_27, 1, tmp_tuple_element_19);
                    tmp_tuple_element_19 = mod_consts[66];
                    PyTuple_SET_ITEM0(tmp_args_element_value_27, 2, tmp_tuple_element_19);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_27);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                tmp_tuple_element_20 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_29 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_19;
                    PyObject *tmp_args_element_value_30;
                    PyTuple_SET_ITEM(tmp_args_element_value_29, 0, tmp_tuple_element_20);
                    tmp_called_value_19 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[51]);

                    if (tmp_called_value_19 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_19 == NULL)) {
                                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_19 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 55;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_called_value_19);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_args_element_value_30 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[37]);

                    if (tmp_args_element_value_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[37]);

                            if (unlikely(tmp_args_element_value_30 == NULL)) {
                                tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                            }

                            if (tmp_args_element_value_30 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_19);

                                exception_lineno = 55;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_args_element_value_30);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    frame_7d3c77613712ba66a8a21716939add86_4->m_frame.f_lineno = 55;
                    tmp_tuple_element_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_30);
                    Py_DECREF(tmp_called_value_19);
                    Py_DECREF(tmp_args_element_value_30);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 55;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_29, 1, tmp_tuple_element_20);
                    tmp_tuple_element_20 = mod_consts[60];
                    PyTuple_SET_ITEM0(tmp_args_element_value_29, 2, tmp_tuple_element_20);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_27);
                Py_DECREF(tmp_args_element_value_29);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                frame_7d3c77613712ba66a8a21716939add86_4->m_frame.f_lineno = 53;
                {
                    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_29};
                    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_17, call_args);
                }

                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_27);
                Py_DECREF(tmp_args_element_value_29);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_called_value_20 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[25]);

                if (tmp_called_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_20 == NULL)) {
                            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 56;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_20);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_31 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_32 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[26]);

                if (tmp_args_element_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_32 == NULL)) {
                            tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_20);
                            Py_DECREF(tmp_args_element_value_31);

                            exception_lineno = 56;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_args_element_value_32);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_33 = mod_consts[67];
                tmp_tuple_element_21 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_34 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_21;
                    PyObject *tmp_args_element_value_35;
                    PyTuple_SET_ITEM(tmp_args_element_value_34, 0, tmp_tuple_element_21);
                    tmp_called_value_21 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[51]);

                    if (tmp_called_value_21 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_21 == NULL)) {
                                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_21 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 57;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_called_value_21);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_args_element_value_35 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[55]);

                    if (tmp_args_element_value_35 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[55]);

                            if (unlikely(tmp_args_element_value_35 == NULL)) {
                                tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                            }

                            if (tmp_args_element_value_35 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_21);

                                exception_lineno = 57;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_args_element_value_35);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    frame_7d3c77613712ba66a8a21716939add86_4->m_frame.f_lineno = 57;
                    tmp_tuple_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_35);
                    Py_DECREF(tmp_called_value_21);
                    Py_DECREF(tmp_args_element_value_35);
                    if (tmp_tuple_element_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_34, 1, tmp_tuple_element_21);
                    tmp_tuple_element_21 = mod_consts[66];
                    PyTuple_SET_ITEM0(tmp_args_element_value_34, 2, tmp_tuple_element_21);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_called_value_20);
                Py_DECREF(tmp_args_element_value_31);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_34);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                tmp_tuple_element_22 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_36 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_36, 0, tmp_tuple_element_22);
                tmp_tuple_element_22 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[68]);

                if (tmp_tuple_element_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_22 == NULL)) {
                            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 58;
                            type_description_2 = "o";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_tuple_element_22);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_36, 1, tmp_tuple_element_22);
                tmp_tuple_element_22 = mod_consts[69];
                PyTuple_SET_ITEM0(tmp_args_element_value_36, 2, tmp_tuple_element_22);
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_called_value_20);
                Py_DECREF(tmp_args_element_value_31);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_36);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                tmp_tuple_element_23 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_37 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_37, 0, tmp_tuple_element_23);
                tmp_tuple_element_23 = PyObject_GetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[68]);

                if (tmp_tuple_element_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_23 == NULL)) {
                            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 59;
                            type_description_2 = "o";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_23);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_37, 1, tmp_tuple_element_23);
                tmp_tuple_element_23 = mod_consts[70];
                PyTuple_SET_ITEM0(tmp_args_element_value_37, 2, tmp_tuple_element_23);
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_called_value_20);
                Py_DECREF(tmp_args_element_value_31);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_36);
                Py_DECREF(tmp_args_element_value_37);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                frame_7d3c77613712ba66a8a21716939add86_4->m_frame.f_lineno = 56;
                {
                    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_36, tmp_args_element_value_37};
                    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_20, call_args);
                }

                Py_DECREF(tmp_called_value_20);
                Py_DECREF(tmp_args_element_value_31);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_36);
                Py_DECREF(tmp_args_element_value_37);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 56;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7d3c77613712ba66a8a21716939add86_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7d3c77613712ba66a8a21716939add86_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7d3c77613712ba66a8a21716939add86_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7d3c77613712ba66a8a21716939add86_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_7d3c77613712ba66a8a21716939add86_4);

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


                exception_lineno = 48;

                goto try_except_handler_12;
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
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_12;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_22 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_24 = mod_consts[62];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_24 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_comtypes$persist$$$class__3_IPersistPropertyBag_48;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 48;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_41 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48);
        locals_comtypes$persist$$$class__3_IPersistPropertyBag_48 = NULL;
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

        Py_DECREF(locals_comtypes$persist$$$class__3_IPersistPropertyBag_48);
        locals_comtypes$persist$$$class__3_IPersistPropertyBag_48 = NULL;
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
        exception_lineno = 48;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_41);
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assign_source_43 == NULL)) {
            tmp_assign_source_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[5];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_50);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_25;
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_tuple_element_25 == NULL)) {
            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        tmp_assign_source_51 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_25);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_52 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
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


            exception_lineno = 73;

            goto try_except_handler_13;
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
        tmp_subscript_value_4 = mod_consts[5];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_54 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_17 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[36]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_18 = tmp_class_creation_4__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[36]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        tmp_tuple_element_26 = mod_consts[86];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_26 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 73;
        tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_19 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[38]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
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
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[39];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[40];
        tmp_getattr_default_4 = mod_consts[41];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[40]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 73;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_56;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_comtypes$persist$$$class__4_tagPROPBAG2_73 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__4_tagPROPBAG2_73, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[86];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__4_tagPROPBAG2_73, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        frame_4d7674add830e78d48b3dd5a90075387_5 = MAKE_CLASS_FRAME(codeobj_4d7674add830e78d48b3dd5a90075387, module_comtypes$persist, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4d7674add830e78d48b3dd5a90075387_5);
        assert(Py_REFCNT(frame_4d7674add830e78d48b3dd5a90075387_5) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_tuple_element_28;
            tmp_tuple_element_28 = mod_consts[87];
            tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = PyObject_GetItem(locals_comtypes$persist$$$class__4_tagPROPBAG2_73, mod_consts[88]);

            if (tmp_tuple_element_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_tuple_element_28 == NULL)) {
                        tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_tuple_element_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 75;
                        type_description_2 = "o";
                        goto tuple_build_exception_17;
                    }
                    Py_INCREF(tmp_tuple_element_28);
                } else {
                    goto tuple_build_exception_17;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_28);
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_list_element_4);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_dictset_value = MAKE_LIST_EMPTY(6);
            {
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_tuple_element_31;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_tuple_element_33;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_tuple_element_29 = mod_consts[6];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_29);
                tmp_tuple_element_29 = PyObject_GetItem(locals_comtypes$persist$$$class__4_tagPROPBAG2_73, mod_consts[89]);

                if (tmp_tuple_element_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_tuple_element_29 == NULL)) {
                            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_tuple_element_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_tuple_element_29);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_29);
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
                tmp_tuple_element_30 = mod_consts[90];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_30);
                tmp_tuple_element_30 = PyObject_GetItem(locals_comtypes$persist$$$class__4_tagPROPBAG2_73, mod_consts[71]);

                if (tmp_tuple_element_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_tuple_element_30 == NULL)) {
                            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_tuple_element_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "o";
                            goto tuple_build_exception_19;
                        }
                        Py_INCREF(tmp_tuple_element_30);
                    } else {
                        goto tuple_build_exception_19;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_30);
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_4);
                tmp_tuple_element_31 = mod_consts[91];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_31);
                tmp_tuple_element_31 = PyObject_GetItem(locals_comtypes$persist$$$class__4_tagPROPBAG2_73, mod_consts[88]);

                if (tmp_tuple_element_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_tuple_element_31 == NULL)) {
                            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_tuple_element_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_tuple_element_31);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_31);
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_4);
                tmp_tuple_element_32 = mod_consts[92];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_32);
                tmp_tuple_element_32 = PyObject_GetItem(locals_comtypes$persist$$$class__4_tagPROPBAG2_73, mod_consts[35]);

                if (tmp_tuple_element_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_tuple_element_32 == NULL)) {
                            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_tuple_element_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 79;
                            type_description_2 = "o";
                            goto tuple_build_exception_21;
                        }
                        Py_INCREF(tmp_tuple_element_32);
                    } else {
                        goto tuple_build_exception_21;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_32);
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_4);
                tmp_tuple_element_33 = mod_consts[93];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_33);
                tmp_tuple_element_33 = PyObject_GetItem(locals_comtypes$persist$$$class__4_tagPROPBAG2_73, mod_consts[23]);

                if (tmp_tuple_element_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_33 == NULL)) {
                            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_tuple_element_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 80;
                            type_description_2 = "o";
                            goto tuple_build_exception_22;
                        }
                        Py_INCREF(tmp_tuple_element_33);
                    } else {
                        goto tuple_build_exception_22;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_33);
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_4);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__4_tagPROPBAG2_73, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4d7674add830e78d48b3dd5a90075387_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4d7674add830e78d48b3dd5a90075387_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4d7674add830e78d48b3dd5a90075387_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4d7674add830e78d48b3dd5a90075387_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_4d7674add830e78d48b3dd5a90075387_5);

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


                exception_lineno = 73;

                goto try_except_handler_15;
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
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__4_tagPROPBAG2_73, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_24 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_34 = mod_consts[86];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_34 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = locals_comtypes$persist$$$class__4_tagPROPBAG2_73;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 73;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_24, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

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
        Py_DECREF(locals_comtypes$persist$$$class__4_tagPROPBAG2_73);
        locals_comtypes$persist$$$class__4_tagPROPBAG2_73 = NULL;
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

        Py_DECREF(locals_comtypes$persist$$$class__4_tagPROPBAG2_73);
        locals_comtypes$persist$$$class__4_tagPROPBAG2_73 = NULL;
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
        exception_lineno = 73;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_57);
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
        PyObject *tmp_assign_source_59;
        PyObject *tmp_tuple_element_35;
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_35 == NULL)) {
            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        tmp_assign_source_59 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_59, 0, tmp_tuple_element_35);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_60 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
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


            exception_lineno = 83;

            goto try_except_handler_16;
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
        tmp_subscript_value_5 = mod_consts[5];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_62 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_62;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_22 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[36]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_23 = tmp_class_creation_5__metaclass;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[36]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        tmp_tuple_element_36 = mod_consts[95];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_36 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 83;
        tmp_assign_source_63 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_63;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_24 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[38]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
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
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[39];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[40];
        tmp_getattr_default_5 = mod_consts[41];
        tmp_tuple_element_37 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[40]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 83;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_64;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_comtypes$persist$$$class__5_IPropertyBag2_83 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_18;
        }
        frame_8afe2e07de149de2e63e739edcb121da_6 = MAKE_CLASS_FRAME(codeobj_8afe2e07de149de2e63e739edcb121da, module_comtypes$persist, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8afe2e07de149de2e63e739edcb121da_6);
        assert(Py_REFCNT(frame_8afe2e07de149de2e63e739edcb121da_6) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_26;
            tmp_called_value_26 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[23]);

            if (tmp_called_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_called_value_26 == NULL)) {
                        tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_called_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 84;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_value_26);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_26, mod_consts[96]);

            Py_DECREF(tmp_called_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_tuple_element_42;
            tmp_called_value_27 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[25]);

            if (tmp_called_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                    if (unlikely(tmp_called_value_27 == NULL)) {
                        tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                    }

                    if (tmp_called_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 87;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_value_27);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_args_element_value_38 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_39 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[26]);

            if (tmp_args_element_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_args_element_value_39 == NULL)) {
                        tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_args_element_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);
                        Py_DECREF(tmp_args_element_value_38);

                        exception_lineno = 87;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_args_element_value_39);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_args_element_value_40 = mod_consts[57];
            tmp_tuple_element_38 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_41 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_args_element_value_41, 0, tmp_tuple_element_38);
            tmp_tuple_element_38 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[88]);

            if (tmp_tuple_element_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_tuple_element_38 == NULL)) {
                        tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_tuple_element_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto tuple_build_exception_24;
                    }
                    Py_INCREF(tmp_tuple_element_38);
                } else {
                    goto tuple_build_exception_24;
                }
            }

            PyTuple_SET_ITEM(tmp_args_element_value_41, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = mod_consts[97];
            PyTuple_SET_ITEM0(tmp_args_element_value_41, 2, tmp_tuple_element_38);
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_24:;
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_41);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            tmp_tuple_element_39 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_42 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_28;
                PyObject *tmp_args_element_value_43;
                PyTuple_SET_ITEM(tmp_args_element_value_42, 0, tmp_tuple_element_39);
                tmp_called_value_28 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[51]);

                if (tmp_called_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_28 == NULL)) {
                            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 89;
                            type_description_2 = "o";
                            goto tuple_build_exception_25;
                        }
                        Py_INCREF(tmp_called_value_28);
                    } else {
                        goto tuple_build_exception_25;
                    }
                }

                tmp_args_element_value_43 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[86]);

                if (tmp_args_element_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[86]);

                        if (unlikely(tmp_args_element_value_43 == NULL)) {
                            tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
                        }

                        if (tmp_args_element_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_28);

                            exception_lineno = 89;
                            type_description_2 = "o";
                            goto tuple_build_exception_25;
                        }
                        Py_INCREF(tmp_args_element_value_43);
                    } else {
                        goto tuple_build_exception_25;
                    }
                }

                frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 89;
                tmp_tuple_element_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_43);
                Py_DECREF(tmp_called_value_28);
                Py_DECREF(tmp_args_element_value_43);
                if (tmp_tuple_element_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_2 = "o";
                    goto tuple_build_exception_25;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_42, 1, tmp_tuple_element_39);
                tmp_tuple_element_39 = mod_consts[66];
                PyTuple_SET_ITEM0(tmp_args_element_value_42, 2, tmp_tuple_element_39);
            }
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            tmp_tuple_element_40 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_44 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_29;
                PyObject *tmp_args_element_value_45;
                PyTuple_SET_ITEM(tmp_args_element_value_44, 0, tmp_tuple_element_40);
                tmp_called_value_29 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[51]);

                if (tmp_called_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_29 == NULL)) {
                            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 90;
                            type_description_2 = "o";
                            goto tuple_build_exception_26;
                        }
                        Py_INCREF(tmp_called_value_29);
                    } else {
                        goto tuple_build_exception_26;
                    }
                }

                tmp_args_element_value_45 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[37]);

                if (tmp_args_element_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[37]);

                        if (unlikely(tmp_args_element_value_45 == NULL)) {
                            tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                        }

                        if (tmp_args_element_value_45 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_29);

                            exception_lineno = 90;
                            type_description_2 = "o";
                            goto tuple_build_exception_26;
                        }
                        Py_INCREF(tmp_args_element_value_45);
                    } else {
                        goto tuple_build_exception_26;
                    }
                }

                frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 90;
                tmp_tuple_element_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_45);
                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_args_element_value_45);
                if (tmp_tuple_element_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;
                    type_description_2 = "o";
                    goto tuple_build_exception_26;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_44, 1, tmp_tuple_element_40);
                tmp_tuple_element_40 = mod_consts[98];
                PyTuple_SET_ITEM0(tmp_args_element_value_44, 2, tmp_tuple_element_40);
            }
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_44);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            tmp_tuple_element_41 = MAKE_LIST1(mod_consts[58]);
            tmp_args_element_value_46 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_30;
                PyObject *tmp_args_element_value_47;
                PyTuple_SET_ITEM(tmp_args_element_value_46, 0, tmp_tuple_element_41);
                tmp_called_value_30 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[51]);

                if (tmp_called_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_30 == NULL)) {
                            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 91;
                            type_description_2 = "o";
                            goto tuple_build_exception_27;
                        }
                        Py_INCREF(tmp_called_value_30);
                    } else {
                        goto tuple_build_exception_27;
                    }
                }

                tmp_args_element_value_47 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[32]);

                if (tmp_args_element_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[32]);

                        if (unlikely(tmp_args_element_value_47 == NULL)) {
                            tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                        }

                        if (tmp_args_element_value_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_30);

                            exception_lineno = 91;
                            type_description_2 = "o";
                            goto tuple_build_exception_27;
                        }
                        Py_INCREF(tmp_args_element_value_47);
                    } else {
                        goto tuple_build_exception_27;
                    }
                }

                frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 91;
                tmp_tuple_element_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_47);
                Py_DECREF(tmp_called_value_30);
                Py_DECREF(tmp_args_element_value_47);
                if (tmp_tuple_element_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_2 = "o";
                    goto tuple_build_exception_27;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_46, 1, tmp_tuple_element_41);
                tmp_tuple_element_41 = mod_consts[99];
                PyTuple_SET_ITEM0(tmp_args_element_value_46, 2, tmp_tuple_element_41);
            }
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_46);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            tmp_tuple_element_42 = MAKE_LIST1(mod_consts[58]);
            tmp_args_element_value_48 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_31;
                PyObject *tmp_args_element_value_49;
                PyTuple_SET_ITEM(tmp_args_element_value_48, 0, tmp_tuple_element_42);
                tmp_called_value_31 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[51]);

                if (tmp_called_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_called_value_31 == NULL)) {
                            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_called_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 92;
                            type_description_2 = "o";
                            goto tuple_build_exception_28;
                        }
                        Py_INCREF(tmp_called_value_31);
                    } else {
                        goto tuple_build_exception_28;
                    }
                }

                tmp_args_element_value_49 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[26]);

                if (tmp_args_element_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_49 == NULL)) {
                            tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_31);

                            exception_lineno = 92;
                            type_description_2 = "o";
                            goto tuple_build_exception_28;
                        }
                        Py_INCREF(tmp_args_element_value_49);
                    } else {
                        goto tuple_build_exception_28;
                    }
                }

                frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 92;
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_49);
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_49);
                if (tmp_tuple_element_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 92;
                    type_description_2 = "o";
                    goto tuple_build_exception_28;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_48, 1, tmp_tuple_element_42);
                tmp_tuple_element_42 = mod_consts[100];
                PyTuple_SET_ITEM0(tmp_args_element_value_48, 2, tmp_tuple_element_42);
            }
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_46);
            Py_DECREF(tmp_args_element_value_48);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 87;
            {
                PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_44, tmp_args_element_value_46, tmp_args_element_value_48};
                tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_27, call_args);
            }

            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_46);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(5);
            {
                PyObject *tmp_called_value_32;
                PyObject *tmp_args_element_value_50;
                PyObject *tmp_args_element_value_51;
                PyObject *tmp_args_element_value_52;
                PyObject *tmp_args_element_value_53;
                PyObject *tmp_tuple_element_43;
                PyObject *tmp_args_element_value_54;
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_args_element_value_56;
                PyObject *tmp_tuple_element_45;
                PyObject *tmp_called_value_35;
                PyObject *tmp_args_element_value_58;
                PyObject *tmp_args_element_value_59;
                PyObject *tmp_args_element_value_60;
                PyObject *tmp_args_element_value_61;
                PyObject *tmp_tuple_element_46;
                PyObject *tmp_called_value_37;
                PyObject *tmp_args_element_value_63;
                PyObject *tmp_args_element_value_64;
                PyObject *tmp_args_element_value_65;
                PyObject *tmp_args_element_value_66;
                PyObject *tmp_tuple_element_47;
                PyObject *tmp_args_element_value_67;
                PyObject *tmp_tuple_element_48;
                PyObject *tmp_args_element_value_68;
                PyObject *tmp_tuple_element_49;
                PyObject *tmp_args_element_value_70;
                PyObject *tmp_tuple_element_50;
                PyObject *tmp_called_value_40;
                PyObject *tmp_args_element_value_72;
                PyObject *tmp_args_element_value_73;
                PyObject *tmp_args_element_value_74;
                PyObject *tmp_args_element_value_75;
                PyObject *tmp_tuple_element_51;
                PyObject *tmp_args_element_value_76;
                PyObject *tmp_tuple_element_52;
                PyObject *tmp_args_element_value_77;
                PyObject *tmp_tuple_element_53;
                PyObject *tmp_args_element_value_79;
                PyObject *tmp_tuple_element_54;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_called_value_32 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[25]);

                if (tmp_called_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_32 == NULL)) {
                            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 93;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_32);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_50 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_51 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[26]);

                if (tmp_args_element_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_51 == NULL)) {
                            tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_32);
                            Py_DECREF(tmp_args_element_value_50);

                            exception_lineno = 93;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_args_element_value_51);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_52 = mod_consts[61];
                tmp_tuple_element_43 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_53 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_53, 0, tmp_tuple_element_43);
                tmp_tuple_element_43 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[88]);

                if (tmp_tuple_element_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_tuple_element_43 == NULL)) {
                            tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_tuple_element_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 94;
                            type_description_2 = "o";
                            goto tuple_build_exception_29;
                        }
                        Py_INCREF(tmp_tuple_element_43);
                    } else {
                        goto tuple_build_exception_29;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_53, 1, tmp_tuple_element_43);
                tmp_tuple_element_43 = mod_consts[97];
                PyTuple_SET_ITEM0(tmp_args_element_value_53, 2, tmp_tuple_element_43);
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_called_value_32);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_53);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                tmp_tuple_element_44 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_54 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_33;
                    PyObject *tmp_args_element_value_55;
                    PyTuple_SET_ITEM(tmp_args_element_value_54, 0, tmp_tuple_element_44);
                    tmp_called_value_33 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[51]);

                    if (tmp_called_value_33 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_33 == NULL)) {
                                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_33 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 95;
                                type_description_2 = "o";
                                goto tuple_build_exception_30;
                            }
                            Py_INCREF(tmp_called_value_33);
                        } else {
                            goto tuple_build_exception_30;
                        }
                    }

                    tmp_args_element_value_55 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[86]);

                    if (tmp_args_element_value_55 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[86]);

                            if (unlikely(tmp_args_element_value_55 == NULL)) {
                                tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
                            }

                            if (tmp_args_element_value_55 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_33);

                                exception_lineno = 95;
                                type_description_2 = "o";
                                goto tuple_build_exception_30;
                            }
                            Py_INCREF(tmp_args_element_value_55);
                        } else {
                            goto tuple_build_exception_30;
                        }
                    }

                    frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 95;
                    tmp_tuple_element_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_55);
                    Py_DECREF(tmp_called_value_33);
                    Py_DECREF(tmp_args_element_value_55);
                    if (tmp_tuple_element_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_2 = "o";
                        goto tuple_build_exception_30;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_54, 1, tmp_tuple_element_44);
                    tmp_tuple_element_44 = mod_consts[66];
                    PyTuple_SET_ITEM0(tmp_args_element_value_54, 2, tmp_tuple_element_44);
                }
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_30:;
                Py_DECREF(tmp_called_value_32);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                tmp_tuple_element_45 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_56 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_34;
                    PyObject *tmp_args_element_value_57;
                    PyTuple_SET_ITEM(tmp_args_element_value_56, 0, tmp_tuple_element_45);
                    tmp_called_value_34 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[51]);

                    if (tmp_called_value_34 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_34 == NULL)) {
                                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_34 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 96;
                                type_description_2 = "o";
                                goto tuple_build_exception_31;
                            }
                            Py_INCREF(tmp_called_value_34);
                        } else {
                            goto tuple_build_exception_31;
                        }
                    }

                    tmp_args_element_value_57 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[32]);

                    if (tmp_args_element_value_57 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[32]);

                            if (unlikely(tmp_args_element_value_57 == NULL)) {
                                tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                            }

                            if (tmp_args_element_value_57 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_34);

                                exception_lineno = 96;
                                type_description_2 = "o";
                                goto tuple_build_exception_31;
                            }
                            Py_INCREF(tmp_args_element_value_57);
                        } else {
                            goto tuple_build_exception_31;
                        }
                    }

                    frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 96;
                    tmp_tuple_element_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_57);
                    Py_DECREF(tmp_called_value_34);
                    Py_DECREF(tmp_args_element_value_57);
                    if (tmp_tuple_element_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 96;
                        type_description_2 = "o";
                        goto tuple_build_exception_31;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_56, 1, tmp_tuple_element_45);
                    tmp_tuple_element_45 = mod_consts[99];
                    PyTuple_SET_ITEM0(tmp_args_element_value_56, 2, tmp_tuple_element_45);
                }
                goto tuple_build_noexception_31;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_called_value_32);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_56);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_31:;
                frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 93;
                {
                    PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_56};
                    tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_32, call_args);
                }

                Py_DECREF(tmp_called_value_32);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_56);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
                tmp_called_value_35 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[25]);

                if (tmp_called_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_35 == NULL)) {
                            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 97;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_35);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_58 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_59 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[26]);

                if (tmp_args_element_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_59 == NULL)) {
                            tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_59 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_35);
                            Py_DECREF(tmp_args_element_value_58);

                            exception_lineno = 97;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_args_element_value_59);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_60 = mod_consts[101];
                tmp_tuple_element_46 = MAKE_LIST1(mod_consts[58]);
                tmp_args_element_value_61 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_36;
                    PyObject *tmp_args_element_value_62;
                    PyTuple_SET_ITEM(tmp_args_element_value_61, 0, tmp_tuple_element_46);
                    tmp_called_value_36 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[51]);

                    if (tmp_called_value_36 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_36 == NULL)) {
                                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_36 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 98;
                                type_description_2 = "o";
                                goto tuple_build_exception_32;
                            }
                            Py_INCREF(tmp_called_value_36);
                        } else {
                            goto tuple_build_exception_32;
                        }
                    }

                    tmp_args_element_value_62 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[88]);

                    if (tmp_args_element_value_62 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_62 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[88]);

                            if (unlikely(tmp_args_element_value_62 == NULL)) {
                                tmp_args_element_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                            }

                            if (tmp_args_element_value_62 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_36);

                                exception_lineno = 98;
                                type_description_2 = "o";
                                goto tuple_build_exception_32;
                            }
                            Py_INCREF(tmp_args_element_value_62);
                        } else {
                            goto tuple_build_exception_32;
                        }
                    }

                    frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 98;
                    tmp_tuple_element_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_62);
                    Py_DECREF(tmp_called_value_36);
                    Py_DECREF(tmp_args_element_value_62);
                    if (tmp_tuple_element_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 98;
                        type_description_2 = "o";
                        goto tuple_build_exception_32;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_61, 1, tmp_tuple_element_46);
                    tmp_tuple_element_46 = mod_consts[102];
                    PyTuple_SET_ITEM0(tmp_args_element_value_61, 2, tmp_tuple_element_46);
                }
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_59);
                Py_DECREF(tmp_args_element_value_61);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 97;
                {
                    PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61};
                    tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_35, call_args);
                }

                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_59);
                Py_DECREF(tmp_args_element_value_61);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_5);
                tmp_called_value_37 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[25]);

                if (tmp_called_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_37 == NULL)) {
                            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 99;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_37);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_63 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_64 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[26]);

                if (tmp_args_element_value_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_64 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_64 == NULL)) {
                            tmp_args_element_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_64 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_37);
                            Py_DECREF(tmp_args_element_value_63);

                            exception_lineno = 99;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_args_element_value_64);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_65 = mod_consts[103];
                tmp_tuple_element_47 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_66 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_66, 0, tmp_tuple_element_47);
                tmp_tuple_element_47 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[88]);

                if (tmp_tuple_element_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_tuple_element_47 == NULL)) {
                            tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_tuple_element_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 100;
                            type_description_2 = "o";
                            goto tuple_build_exception_33;
                        }
                        Py_INCREF(tmp_tuple_element_47);
                    } else {
                        goto tuple_build_exception_33;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_66, 1, tmp_tuple_element_47);
                tmp_tuple_element_47 = mod_consts[104];
                PyTuple_SET_ITEM0(tmp_args_element_value_66, 2, tmp_tuple_element_47);
                goto tuple_build_noexception_33;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_33:;
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_66);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_33:;
                tmp_tuple_element_48 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_67 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_67, 0, tmp_tuple_element_48);
                tmp_tuple_element_48 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[88]);

                if (tmp_tuple_element_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_tuple_element_48 == NULL)) {
                            tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_tuple_element_48 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 101;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_tuple_element_48);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_67, 1, tmp_tuple_element_48);
                tmp_tuple_element_48 = mod_consts[97];
                PyTuple_SET_ITEM0(tmp_args_element_value_67, 2, tmp_tuple_element_48);
                goto tuple_build_noexception_34;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_34:;
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_34:;
                tmp_tuple_element_49 = MAKE_LIST1(mod_consts[58]);
                tmp_args_element_value_68 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_38;
                    PyObject *tmp_args_element_value_69;
                    PyTuple_SET_ITEM(tmp_args_element_value_68, 0, tmp_tuple_element_49);
                    tmp_called_value_38 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[51]);

                    if (tmp_called_value_38 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_38 == NULL)) {
                                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_38 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 102;
                                type_description_2 = "o";
                                goto tuple_build_exception_35;
                            }
                            Py_INCREF(tmp_called_value_38);
                        } else {
                            goto tuple_build_exception_35;
                        }
                    }

                    tmp_args_element_value_69 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[86]);

                    if (tmp_args_element_value_69 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_69 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[86]);

                            if (unlikely(tmp_args_element_value_69 == NULL)) {
                                tmp_args_element_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
                            }

                            if (tmp_args_element_value_69 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_38);

                                exception_lineno = 102;
                                type_description_2 = "o";
                                goto tuple_build_exception_35;
                            }
                            Py_INCREF(tmp_args_element_value_69);
                        } else {
                            goto tuple_build_exception_35;
                        }
                    }

                    frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 102;
                    tmp_tuple_element_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_69);
                    Py_DECREF(tmp_called_value_38);
                    Py_DECREF(tmp_args_element_value_69);
                    if (tmp_tuple_element_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_2 = "o";
                        goto tuple_build_exception_35;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_68, 1, tmp_tuple_element_49);
                    tmp_tuple_element_49 = mod_consts[66];
                    PyTuple_SET_ITEM0(tmp_args_element_value_68, 2, tmp_tuple_element_49);
                }
                goto tuple_build_noexception_35;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_35:;
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_35:;
                tmp_tuple_element_50 = MAKE_LIST1(mod_consts[58]);
                tmp_args_element_value_70 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_39;
                    PyObject *tmp_args_element_value_71;
                    PyTuple_SET_ITEM(tmp_args_element_value_70, 0, tmp_tuple_element_50);
                    tmp_called_value_39 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[51]);

                    if (tmp_called_value_39 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_39 == NULL)) {
                                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_39 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 103;
                                type_description_2 = "o";
                                goto tuple_build_exception_36;
                            }
                            Py_INCREF(tmp_called_value_39);
                        } else {
                            goto tuple_build_exception_36;
                        }
                    }

                    tmp_args_element_value_71 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[88]);

                    if (tmp_args_element_value_71 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_71 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[88]);

                            if (unlikely(tmp_args_element_value_71 == NULL)) {
                                tmp_args_element_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                            }

                            if (tmp_args_element_value_71 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_39);

                                exception_lineno = 103;
                                type_description_2 = "o";
                                goto tuple_build_exception_36;
                            }
                            Py_INCREF(tmp_args_element_value_71);
                        } else {
                            goto tuple_build_exception_36;
                        }
                    }

                    frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 103;
                    tmp_tuple_element_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_71);
                    Py_DECREF(tmp_called_value_39);
                    Py_DECREF(tmp_args_element_value_71);
                    if (tmp_tuple_element_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_2 = "o";
                        goto tuple_build_exception_36;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_70, 1, tmp_tuple_element_50);
                    tmp_tuple_element_50 = mod_consts[102];
                    PyTuple_SET_ITEM0(tmp_args_element_value_70, 2, tmp_tuple_element_50);
                }
                goto tuple_build_noexception_36;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_36:;
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_70);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_36:;
                frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 99;
                {
                    PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_70};
                    tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_37, call_args);
                }

                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_70);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 99;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_5);
                tmp_called_value_40 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[25]);

                if (tmp_called_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_40 == NULL)) {
                            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 104;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_40);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_72 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_73 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[26]);

                if (tmp_args_element_value_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_73 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_73 == NULL)) {
                            tmp_args_element_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_73 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_40);
                            Py_DECREF(tmp_args_element_value_72);

                            exception_lineno = 104;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_args_element_value_73);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_74 = mod_consts[105];
                tmp_tuple_element_51 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_75 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_75, 0, tmp_tuple_element_51);
                tmp_tuple_element_51 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[35]);

                if (tmp_tuple_element_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_tuple_element_51 == NULL)) {
                            tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_tuple_element_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 105;
                            type_description_2 = "o";
                            goto tuple_build_exception_37;
                        }
                        Py_INCREF(tmp_tuple_element_51);
                    } else {
                        goto tuple_build_exception_37;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_75, 1, tmp_tuple_element_51);
                tmp_tuple_element_51 = mod_consts[92];
                PyTuple_SET_ITEM0(tmp_args_element_value_75, 2, tmp_tuple_element_51);
                goto tuple_build_noexception_37;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_37:;
                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_75);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_37:;
                tmp_tuple_element_52 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_76 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_76, 0, tmp_tuple_element_52);
                tmp_tuple_element_52 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[88]);

                if (tmp_tuple_element_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_tuple_element_52 == NULL)) {
                            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_tuple_element_52 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 106;
                            type_description_2 = "o";
                            goto tuple_build_exception_38;
                        }
                        Py_INCREF(tmp_tuple_element_52);
                    } else {
                        goto tuple_build_exception_38;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_76, 1, tmp_tuple_element_52);
                tmp_tuple_element_52 = mod_consts[91];
                PyTuple_SET_ITEM0(tmp_args_element_value_76, 2, tmp_tuple_element_52);
                goto tuple_build_noexception_38;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_38:;
                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_75);
                Py_DECREF(tmp_args_element_value_76);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_38:;
                tmp_tuple_element_53 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_77 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_41;
                    PyObject *tmp_args_element_value_78;
                    PyTuple_SET_ITEM(tmp_args_element_value_77, 0, tmp_tuple_element_53);
                    tmp_called_value_41 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[51]);

                    if (tmp_called_value_41 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_41 == NULL)) {
                                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_41 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 107;
                                type_description_2 = "o";
                                goto tuple_build_exception_39;
                            }
                            Py_INCREF(tmp_called_value_41);
                        } else {
                            goto tuple_build_exception_39;
                        }
                    }

                    tmp_args_element_value_78 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[24]);

                    if (tmp_args_element_value_78 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_78 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_args_element_value_78 == NULL)) {
                                tmp_args_element_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                            }

                            if (tmp_args_element_value_78 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_41);

                                exception_lineno = 107;
                                type_description_2 = "o";
                                goto tuple_build_exception_39;
                            }
                            Py_INCREF(tmp_args_element_value_78);
                        } else {
                            goto tuple_build_exception_39;
                        }
                    }

                    frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 107;
                    tmp_tuple_element_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_78);
                    Py_DECREF(tmp_called_value_41);
                    Py_DECREF(tmp_args_element_value_78);
                    if (tmp_tuple_element_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 107;
                        type_description_2 = "o";
                        goto tuple_build_exception_39;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_77, 1, tmp_tuple_element_53);
                    tmp_tuple_element_53 = mod_consts[106];
                    PyTuple_SET_ITEM0(tmp_args_element_value_77, 2, tmp_tuple_element_53);
                }
                goto tuple_build_noexception_39;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_39:;
                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_75);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_39:;
                tmp_tuple_element_54 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_79 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_42;
                    PyObject *tmp_args_element_value_80;
                    PyTuple_SET_ITEM(tmp_args_element_value_79, 0, tmp_tuple_element_54);
                    tmp_called_value_42 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[51]);

                    if (tmp_called_value_42 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_42 == NULL)) {
                                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_42 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 108;
                                type_description_2 = "o";
                                goto tuple_build_exception_40;
                            }
                            Py_INCREF(tmp_called_value_42);
                        } else {
                            goto tuple_build_exception_40;
                        }
                    }

                    tmp_args_element_value_80 = PyObject_GetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[37]);

                    if (tmp_args_element_value_80 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_80 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[37]);

                            if (unlikely(tmp_args_element_value_80 == NULL)) {
                                tmp_args_element_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                            }

                            if (tmp_args_element_value_80 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_42);

                                exception_lineno = 108;
                                type_description_2 = "o";
                                goto tuple_build_exception_40;
                            }
                            Py_INCREF(tmp_args_element_value_80);
                        } else {
                            goto tuple_build_exception_40;
                        }
                    }

                    frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 108;
                    tmp_tuple_element_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_80);
                    Py_DECREF(tmp_called_value_42);
                    Py_DECREF(tmp_args_element_value_80);
                    if (tmp_tuple_element_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 108;
                        type_description_2 = "o";
                        goto tuple_build_exception_40;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_79, 1, tmp_tuple_element_54);
                    tmp_tuple_element_54 = mod_consts[98];
                    PyTuple_SET_ITEM0(tmp_args_element_value_79, 2, tmp_tuple_element_54);
                }
                goto tuple_build_noexception_40;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_40:;
                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_75);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);
                Py_DECREF(tmp_args_element_value_79);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_40:;
                frame_8afe2e07de149de2e63e739edcb121da_6->m_frame.f_lineno = 104;
                {
                    PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_79};
                    tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_40, call_args);
                }

                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_75);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);
                Py_DECREF(tmp_args_element_value_79);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_5);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8afe2e07de149de2e63e739edcb121da_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8afe2e07de149de2e63e739edcb121da_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8afe2e07de149de2e63e739edcb121da_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8afe2e07de149de2e63e739edcb121da_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_8afe2e07de149de2e63e739edcb121da_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_18;
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


                exception_lineno = 83;

                goto try_except_handler_18;
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
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__5_IPropertyBag2_83, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_18;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_43 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_55 = mod_consts[95];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_55 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_comtypes$persist$$$class__5_IPropertyBag2_83;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 83;
            tmp_assign_source_66 = CALL_FUNCTION(tmp_called_value_43, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto try_except_handler_18;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_65 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_65);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_comtypes$persist$$$class__5_IPropertyBag2_83);
        locals_comtypes$persist$$$class__5_IPropertyBag2_83 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_comtypes$persist$$$class__5_IPropertyBag2_83);
        locals_comtypes$persist$$$class__5_IPropertyBag2_83 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 83;
        goto try_except_handler_16;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_65);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
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
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_tuple_element_56;
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_56 == NULL)) {
            tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_19;
        }
        tmp_assign_source_67 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_67, 0, tmp_tuple_element_56);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_68 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_19;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_26 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[5];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_19;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_70 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_70;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_27 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[36]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_28 = tmp_class_creation_6__metaclass;
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[36]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_19;
        }
        tmp_tuple_element_57 = mod_consts[107];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_57 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 111;
        tmp_assign_source_71 = CALL_FUNCTION(tmp_called_value_44, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_71;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_29 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[38]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_19;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[39];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[40];
        tmp_getattr_default_6 = mod_consts[41];
        tmp_tuple_element_58 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[40]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_41;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_41:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_41:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 111;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_72;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_73;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_21;
        }
        frame_29474e3afcaea12479d53e428cfad4d4_7 = MAKE_CLASS_FRAME(codeobj_29474e3afcaea12479d53e428cfad4d4, module_comtypes$persist, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_29474e3afcaea12479d53e428cfad4d4_7);
        assert(Py_REFCNT(frame_29474e3afcaea12479d53e428cfad4d4_7) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_45;
            tmp_called_value_45 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[23]);

            if (tmp_called_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_called_value_45 == NULL)) {
                        tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_called_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_45);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_29474e3afcaea12479d53e428cfad4d4_7->m_frame.f_lineno = 112;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_45, mod_consts[108]);

            Py_DECREF(tmp_called_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        {
            PyObject *tmp_list_element_6;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_81;
            PyObject *tmp_args_element_value_82;
            PyObject *tmp_args_element_value_83;
            tmp_called_value_46 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[25]);

            if (tmp_called_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                    if (unlikely(tmp_called_value_46 == NULL)) {
                        tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                    }

                    if (tmp_called_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 115;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_46);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_args_element_value_81 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_82 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[26]);

            if (tmp_args_element_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_82 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_args_element_value_82 == NULL)) {
                        tmp_args_element_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_args_element_value_82 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);
                        Py_DECREF(tmp_args_element_value_81);

                        exception_lineno = 115;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_args_element_value_82);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_args_element_value_83 = mod_consts[64];
            frame_29474e3afcaea12479d53e428cfad4d4_7->m_frame.f_lineno = 115;
            {
                PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82, tmp_args_element_value_83};
                tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_46, call_args);
            }

            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_81);
            Py_DECREF(tmp_args_element_value_82);
            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_called_value_47;
                PyObject *tmp_args_element_value_84;
                PyObject *tmp_args_element_value_85;
                PyObject *tmp_args_element_value_86;
                PyObject *tmp_args_element_value_87;
                PyObject *tmp_tuple_element_59;
                PyObject *tmp_args_element_value_89;
                PyObject *tmp_tuple_element_60;
                PyObject *tmp_called_value_50;
                PyObject *tmp_args_element_value_91;
                PyObject *tmp_args_element_value_92;
                PyObject *tmp_args_element_value_93;
                PyObject *tmp_args_element_value_94;
                PyObject *tmp_tuple_element_61;
                PyObject *tmp_args_element_value_96;
                PyObject *tmp_tuple_element_62;
                PyObject *tmp_args_element_value_97;
                PyObject *tmp_tuple_element_63;
                PyObject *tmp_called_value_52;
                PyObject *tmp_args_element_value_98;
                PyObject *tmp_args_element_value_99;
                PyObject *tmp_args_element_value_100;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_6);
                tmp_called_value_47 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[25]);

                if (tmp_called_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_47 == NULL)) {
                            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_47);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_84 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_85 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[26]);

                if (tmp_args_element_value_85 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_85 == NULL)) {
                            tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_85 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_47);
                            Py_DECREF(tmp_args_element_value_84);

                            exception_lineno = 116;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_85);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_86 = mod_consts[65];
                tmp_tuple_element_59 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_87 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_48;
                    PyObject *tmp_args_element_value_88;
                    PyTuple_SET_ITEM(tmp_args_element_value_87, 0, tmp_tuple_element_59);
                    tmp_called_value_48 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[51]);

                    if (tmp_called_value_48 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_48 == NULL)) {
                                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_48 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 117;
                                type_description_2 = "o";
                                goto tuple_build_exception_42;
                            }
                            Py_INCREF(tmp_called_value_48);
                        } else {
                            goto tuple_build_exception_42;
                        }
                    }

                    tmp_args_element_value_88 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[95]);

                    if (tmp_args_element_value_88 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_88 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[95]);

                            if (unlikely(tmp_args_element_value_88 == NULL)) {
                                tmp_args_element_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                            }

                            if (tmp_args_element_value_88 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_48);

                                exception_lineno = 117;
                                type_description_2 = "o";
                                goto tuple_build_exception_42;
                            }
                            Py_INCREF(tmp_args_element_value_88);
                        } else {
                            goto tuple_build_exception_42;
                        }
                    }

                    frame_29474e3afcaea12479d53e428cfad4d4_7->m_frame.f_lineno = 117;
                    tmp_tuple_element_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_88);
                    Py_DECREF(tmp_called_value_48);
                    Py_DECREF(tmp_args_element_value_88);
                    if (tmp_tuple_element_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 117;
                        type_description_2 = "o";
                        goto tuple_build_exception_42;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_87, 1, tmp_tuple_element_59);
                    tmp_tuple_element_59 = mod_consts[66];
                    PyTuple_SET_ITEM0(tmp_args_element_value_87, 2, tmp_tuple_element_59);
                }
                goto tuple_build_noexception_42;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_42:;
                Py_DECREF(tmp_called_value_47);
                Py_DECREF(tmp_args_element_value_84);
                Py_DECREF(tmp_args_element_value_85);
                Py_DECREF(tmp_args_element_value_87);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_42:;
                tmp_tuple_element_60 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_89 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_49;
                    PyObject *tmp_args_element_value_90;
                    PyTuple_SET_ITEM(tmp_args_element_value_89, 0, tmp_tuple_element_60);
                    tmp_called_value_49 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[51]);

                    if (tmp_called_value_49 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_49 == NULL)) {
                                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_49 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 118;
                                type_description_2 = "o";
                                goto tuple_build_exception_43;
                            }
                            Py_INCREF(tmp_called_value_49);
                        } else {
                            goto tuple_build_exception_43;
                        }
                    }

                    tmp_args_element_value_90 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[37]);

                    if (tmp_args_element_value_90 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_90 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[37]);

                            if (unlikely(tmp_args_element_value_90 == NULL)) {
                                tmp_args_element_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                            }

                            if (tmp_args_element_value_90 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_49);

                                exception_lineno = 118;
                                type_description_2 = "o";
                                goto tuple_build_exception_43;
                            }
                            Py_INCREF(tmp_args_element_value_90);
                        } else {
                            goto tuple_build_exception_43;
                        }
                    }

                    frame_29474e3afcaea12479d53e428cfad4d4_7->m_frame.f_lineno = 118;
                    tmp_tuple_element_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_90);
                    Py_DECREF(tmp_called_value_49);
                    Py_DECREF(tmp_args_element_value_90);
                    if (tmp_tuple_element_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto tuple_build_exception_43;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_89, 1, tmp_tuple_element_60);
                    tmp_tuple_element_60 = mod_consts[98];
                    PyTuple_SET_ITEM0(tmp_args_element_value_89, 2, tmp_tuple_element_60);
                }
                goto tuple_build_noexception_43;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_43:;
                Py_DECREF(tmp_called_value_47);
                Py_DECREF(tmp_args_element_value_84);
                Py_DECREF(tmp_args_element_value_85);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_args_element_value_89);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_43:;
                frame_29474e3afcaea12479d53e428cfad4d4_7->m_frame.f_lineno = 116;
                {
                    PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_89};
                    tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_47, call_args);
                }

                Py_DECREF(tmp_called_value_47);
                Py_DECREF(tmp_args_element_value_84);
                Py_DECREF(tmp_args_element_value_85);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_args_element_value_89);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 116;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_6);
                tmp_called_value_50 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[25]);

                if (tmp_called_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_50 == NULL)) {
                            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 119;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_50);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_91 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_92 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[26]);

                if (tmp_args_element_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_92 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_92 == NULL)) {
                            tmp_args_element_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_92 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_50);
                            Py_DECREF(tmp_args_element_value_91);

                            exception_lineno = 119;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_92);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_93 = mod_consts[67];
                tmp_tuple_element_61 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_94 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_51;
                    PyObject *tmp_args_element_value_95;
                    PyTuple_SET_ITEM(tmp_args_element_value_94, 0, tmp_tuple_element_61);
                    tmp_called_value_51 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[51]);

                    if (tmp_called_value_51 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_51 == NULL)) {
                                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_51 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 120;
                                type_description_2 = "o";
                                goto tuple_build_exception_44;
                            }
                            Py_INCREF(tmp_called_value_51);
                        } else {
                            goto tuple_build_exception_44;
                        }
                    }

                    tmp_args_element_value_95 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[95]);

                    if (tmp_args_element_value_95 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_95 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[95]);

                            if (unlikely(tmp_args_element_value_95 == NULL)) {
                                tmp_args_element_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                            }

                            if (tmp_args_element_value_95 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_51);

                                exception_lineno = 120;
                                type_description_2 = "o";
                                goto tuple_build_exception_44;
                            }
                            Py_INCREF(tmp_args_element_value_95);
                        } else {
                            goto tuple_build_exception_44;
                        }
                    }

                    frame_29474e3afcaea12479d53e428cfad4d4_7->m_frame.f_lineno = 120;
                    tmp_tuple_element_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_95);
                    Py_DECREF(tmp_called_value_51);
                    Py_DECREF(tmp_args_element_value_95);
                    if (tmp_tuple_element_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 120;
                        type_description_2 = "o";
                        goto tuple_build_exception_44;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_94, 1, tmp_tuple_element_61);
                    tmp_tuple_element_61 = mod_consts[66];
                    PyTuple_SET_ITEM0(tmp_args_element_value_94, 2, tmp_tuple_element_61);
                }
                goto tuple_build_noexception_44;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_44:;
                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);
                Py_DECREF(tmp_args_element_value_94);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_44:;
                tmp_tuple_element_62 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_96 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_96, 0, tmp_tuple_element_62);
                tmp_tuple_element_62 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[68]);

                if (tmp_tuple_element_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_62 == NULL)) {
                            tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_62 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 121;
                            type_description_2 = "o";
                            goto tuple_build_exception_45;
                        }
                        Py_INCREF(tmp_tuple_element_62);
                    } else {
                        goto tuple_build_exception_45;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_96, 1, tmp_tuple_element_62);
                tmp_tuple_element_62 = mod_consts[69];
                PyTuple_SET_ITEM0(tmp_args_element_value_96, 2, tmp_tuple_element_62);
                goto tuple_build_noexception_45;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_45:;
                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);
                Py_DECREF(tmp_args_element_value_94);
                Py_DECREF(tmp_args_element_value_96);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_45:;
                tmp_tuple_element_63 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_97 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_97, 0, tmp_tuple_element_63);
                tmp_tuple_element_63 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[68]);

                if (tmp_tuple_element_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_63 == NULL)) {
                            tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_63 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 122;
                            type_description_2 = "o";
                            goto tuple_build_exception_46;
                        }
                        Py_INCREF(tmp_tuple_element_63);
                    } else {
                        goto tuple_build_exception_46;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_97, 1, tmp_tuple_element_63);
                tmp_tuple_element_63 = mod_consts[70];
                PyTuple_SET_ITEM0(tmp_args_element_value_97, 2, tmp_tuple_element_63);
                goto tuple_build_noexception_46;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_46:;
                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);
                Py_DECREF(tmp_args_element_value_94);
                Py_DECREF(tmp_args_element_value_96);
                Py_DECREF(tmp_args_element_value_97);
                goto list_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_46:;
                frame_29474e3afcaea12479d53e428cfad4d4_7->m_frame.f_lineno = 119;
                {
                    PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93, tmp_args_element_value_94, tmp_args_element_value_96, tmp_args_element_value_97};
                    tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_50, call_args);
                }

                Py_DECREF(tmp_called_value_50);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);
                Py_DECREF(tmp_args_element_value_94);
                Py_DECREF(tmp_args_element_value_96);
                Py_DECREF(tmp_args_element_value_97);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 119;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_6);
                tmp_called_value_52 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[25]);

                if (tmp_called_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_52 == NULL)) {
                            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_52 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_52);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_98 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_99 = PyObject_GetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[26]);

                if (tmp_args_element_value_99 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_99 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_99 == NULL)) {
                            tmp_args_element_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_99 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_52);
                            Py_DECREF(tmp_args_element_value_98);

                            exception_lineno = 123;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_99);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_100 = mod_consts[109];
                frame_29474e3afcaea12479d53e428cfad4d4_7->m_frame.f_lineno = 123;
                {
                    PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_100};
                    tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_52, call_args);
                }

                Py_DECREF(tmp_called_value_52);
                Py_DECREF(tmp_args_element_value_98);
                Py_DECREF(tmp_args_element_value_99);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 123;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_6);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_7;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_29474e3afcaea12479d53e428cfad4d4_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_29474e3afcaea12479d53e428cfad4d4_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_29474e3afcaea12479d53e428cfad4d4_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_29474e3afcaea12479d53e428cfad4d4_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_29474e3afcaea12479d53e428cfad4d4_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_21;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_21;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_53 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_64 = mod_consts[107];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_64);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_64 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_64);
            tmp_tuple_element_64 = locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_64);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 111;
            tmp_assign_source_74 = CALL_FUNCTION(tmp_called_value_53, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto try_except_handler_21;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_74;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_73 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_73);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111);
        locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111);
        locals_comtypes$persist$$$class__6_IPersistPropertyBag2_111 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 111;
        goto try_except_handler_19;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_73);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[5];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[5];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[5];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[129];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[131];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[135];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[137];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assign_source_93 == NULL)) {
            tmp_assign_source_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        Py_INCREF(tmp_assign_source_93);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_94 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_95 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_95);
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_tuple_element_65;
        tmp_tuple_element_65 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_65 == NULL)) {
            tmp_tuple_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_assign_source_96 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_96, 0, tmp_tuple_element_65);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_97 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_31 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[5];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_31, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_99 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_99;
    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_32 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_32, mod_consts[36]);
        tmp_condition_result_26 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_33 = tmp_class_creation_7__metaclass;
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[36]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_tuple_element_66 = mod_consts[143];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_66);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_66 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_66);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 162;
        tmp_assign_source_100 = CALL_FUNCTION(tmp_called_value_54, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_100;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_34 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_34, mod_consts[38]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[39];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[40];
        tmp_getattr_default_7 = mod_consts[41];
        tmp_tuple_element_67 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_35;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_35 == NULL));
            tmp_tuple_element_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[40]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_tuple_element_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_47;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_67);
        }
        goto tuple_build_noexception_47;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_47:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_47:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 162;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_101;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_102;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_comtypes$persist$$$class__7_IPersistFile_162 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_24;
        }
        frame_6917cd75be34c0c9f046e65959471890_8 = MAKE_CLASS_FRAME(codeobj_6917cd75be34c0c9f046e65959471890, module_comtypes$persist, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6917cd75be34c0c9f046e65959471890_8);
        assert(Py_REFCNT(frame_6917cd75be34c0c9f046e65959471890_8) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_55;
            tmp_called_value_55 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[23]);

            if (tmp_called_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_called_value_55 == NULL)) {
                        tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_called_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_value_55);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_6917cd75be34c0c9f046e65959471890_8->m_frame.f_lineno = 163;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_55, mod_consts[144]);

            Py_DECREF(tmp_called_value_55);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }
        {
            PyObject *tmp_list_element_7;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_101;
            PyObject *tmp_args_element_value_102;
            PyObject *tmp_args_element_value_103;
            tmp_called_value_56 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[25]);

            if (tmp_called_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                    if (unlikely(tmp_called_value_56 == NULL)) {
                        tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                    }

                    if (tmp_called_value_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 166;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_value_56);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_args_element_value_101 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_102 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[26]);

            if (tmp_args_element_value_102 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_102 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_args_element_value_102 == NULL)) {
                        tmp_args_element_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_args_element_value_102 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_56);
                        Py_DECREF(tmp_args_element_value_101);

                        exception_lineno = 166;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_args_element_value_102);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_args_element_value_103 = mod_consts[109];
            frame_6917cd75be34c0c9f046e65959471890_8->m_frame.f_lineno = 166;
            {
                PyObject *call_args[] = {tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103};
                tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_56, call_args);
            }

            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_101);
            Py_DECREF(tmp_args_element_value_102);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_dictset_value = MAKE_LIST_EMPTY(5);
            {
                PyObject *tmp_called_value_57;
                PyObject *tmp_args_element_value_104;
                PyObject *tmp_args_element_value_105;
                PyObject *tmp_args_element_value_106;
                PyObject *tmp_args_element_value_107;
                PyObject *tmp_tuple_element_68;
                PyObject *tmp_args_element_value_108;
                PyObject *tmp_tuple_element_69;
                PyObject *tmp_called_value_58;
                PyObject *tmp_args_element_value_109;
                PyObject *tmp_args_element_value_110;
                PyObject *tmp_args_element_value_111;
                PyObject *tmp_args_element_value_112;
                PyObject *tmp_tuple_element_70;
                PyObject *tmp_args_element_value_113;
                PyObject *tmp_tuple_element_71;
                PyObject *tmp_called_value_59;
                PyObject *tmp_args_element_value_114;
                PyObject *tmp_args_element_value_115;
                PyObject *tmp_args_element_value_116;
                PyObject *tmp_args_element_value_117;
                PyObject *tmp_tuple_element_72;
                PyObject *tmp_called_value_60;
                PyObject *tmp_args_element_value_118;
                PyObject *tmp_args_element_value_119;
                PyObject *tmp_args_element_value_120;
                PyObject *tmp_args_element_value_121;
                PyObject *tmp_tuple_element_73;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_7);
                tmp_called_value_57 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[25]);

                if (tmp_called_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_57 == NULL)) {
                            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_57 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 167;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_57);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_104 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_105 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[26]);

                if (tmp_args_element_value_105 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_105 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_105 == NULL)) {
                            tmp_args_element_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_105 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_57);
                            Py_DECREF(tmp_args_element_value_104);

                            exception_lineno = 167;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_args_element_value_105);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_106 = mod_consts[65];
                tmp_tuple_element_68 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_107 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_107, 0, tmp_tuple_element_68);
                tmp_tuple_element_68 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[142]);

                if (tmp_tuple_element_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_tuple_element_68 == NULL)) {
                            tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_tuple_element_68 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 168;
                            type_description_2 = "o";
                            goto tuple_build_exception_48;
                        }
                        Py_INCREF(tmp_tuple_element_68);
                    } else {
                        goto tuple_build_exception_48;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_107, 1, tmp_tuple_element_68);
                tmp_tuple_element_68 = mod_consts[145];
                PyTuple_SET_ITEM0(tmp_args_element_value_107, 2, tmp_tuple_element_68);
                goto tuple_build_noexception_48;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_48:;
                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);
                Py_DECREF(tmp_args_element_value_107);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_48:;
                tmp_tuple_element_69 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_108 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_108, 0, tmp_tuple_element_69);
                tmp_tuple_element_69 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[19]);

                if (tmp_tuple_element_69 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_tuple_element_69 == NULL)) {
                            tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
                        }

                        if (tmp_tuple_element_69 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 169;
                            type_description_2 = "o";
                            goto tuple_build_exception_49;
                        }
                        Py_INCREF(tmp_tuple_element_69);
                    } else {
                        goto tuple_build_exception_49;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_108, 1, tmp_tuple_element_69);
                tmp_tuple_element_69 = mod_consts[146];
                PyTuple_SET_ITEM0(tmp_args_element_value_108, 2, tmp_tuple_element_69);
                goto tuple_build_noexception_49;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_49:;
                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_108);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_49:;
                frame_6917cd75be34c0c9f046e65959471890_8->m_frame.f_lineno = 167;
                {
                    PyObject *call_args[] = {tmp_args_element_value_104, tmp_args_element_value_105, tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108};
                    tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_57, call_args);
                }

                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_108);
                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_7);
                tmp_called_value_58 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[25]);

                if (tmp_called_value_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_58 == NULL)) {
                            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_58 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 170;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_58);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_109 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_110 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[26]);

                if (tmp_args_element_value_110 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_110 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_110 == NULL)) {
                            tmp_args_element_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_110 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_58);
                            Py_DECREF(tmp_args_element_value_109);

                            exception_lineno = 170;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_args_element_value_110);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_111 = mod_consts[67];
                tmp_tuple_element_70 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_112 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_112, 0, tmp_tuple_element_70);
                tmp_tuple_element_70 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[142]);

                if (tmp_tuple_element_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_tuple_element_70 == NULL)) {
                            tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_tuple_element_70 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 171;
                            type_description_2 = "o";
                            goto tuple_build_exception_50;
                        }
                        Py_INCREF(tmp_tuple_element_70);
                    } else {
                        goto tuple_build_exception_50;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_112, 1, tmp_tuple_element_70);
                tmp_tuple_element_70 = mod_consts[145];
                PyTuple_SET_ITEM0(tmp_args_element_value_112, 2, tmp_tuple_element_70);
                goto tuple_build_noexception_50;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_50:;
                Py_DECREF(tmp_called_value_58);
                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_110);
                Py_DECREF(tmp_args_element_value_112);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_50:;
                tmp_tuple_element_71 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_113 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_113, 0, tmp_tuple_element_71);
                tmp_tuple_element_71 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[20]);

                if (tmp_tuple_element_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_71 == NULL)) {
                            tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                        }

                        if (tmp_tuple_element_71 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 172;
                            type_description_2 = "o";
                            goto tuple_build_exception_51;
                        }
                        Py_INCREF(tmp_tuple_element_71);
                    } else {
                        goto tuple_build_exception_51;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_113, 1, tmp_tuple_element_71);
                tmp_tuple_element_71 = mod_consts[147];
                PyTuple_SET_ITEM0(tmp_args_element_value_113, 2, tmp_tuple_element_71);
                goto tuple_build_noexception_51;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_51:;
                Py_DECREF(tmp_called_value_58);
                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_110);
                Py_DECREF(tmp_args_element_value_112);
                Py_DECREF(tmp_args_element_value_113);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_51:;
                frame_6917cd75be34c0c9f046e65959471890_8->m_frame.f_lineno = 170;
                {
                    PyObject *call_args[] = {tmp_args_element_value_109, tmp_args_element_value_110, tmp_args_element_value_111, tmp_args_element_value_112, tmp_args_element_value_113};
                    tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_58, call_args);
                }

                Py_DECREF(tmp_called_value_58);
                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_110);
                Py_DECREF(tmp_args_element_value_112);
                Py_DECREF(tmp_args_element_value_113);
                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 170;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_7);
                tmp_called_value_59 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[25]);

                if (tmp_called_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_59 == NULL)) {
                            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_59 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 173;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_59);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_114 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_115 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[26]);

                if (tmp_args_element_value_115 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_115 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_115 == NULL)) {
                            tmp_args_element_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_115 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_59);
                            Py_DECREF(tmp_args_element_value_114);

                            exception_lineno = 173;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_args_element_value_115);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_116 = mod_consts[148];
                tmp_tuple_element_72 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_117 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_117, 0, tmp_tuple_element_72);
                tmp_tuple_element_72 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[142]);

                if (tmp_tuple_element_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[142]);

                        if (unlikely(tmp_tuple_element_72 == NULL)) {
                            tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                        }

                        if (tmp_tuple_element_72 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 174;
                            type_description_2 = "o";
                            goto tuple_build_exception_52;
                        }
                        Py_INCREF(tmp_tuple_element_72);
                    } else {
                        goto tuple_build_exception_52;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_117, 1, tmp_tuple_element_72);
                tmp_tuple_element_72 = mod_consts[145];
                PyTuple_SET_ITEM0(tmp_args_element_value_117, 2, tmp_tuple_element_72);
                goto tuple_build_noexception_52;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_52:;
                Py_DECREF(tmp_called_value_59);
                Py_DECREF(tmp_args_element_value_114);
                Py_DECREF(tmp_args_element_value_115);
                Py_DECREF(tmp_args_element_value_117);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_52:;
                frame_6917cd75be34c0c9f046e65959471890_8->m_frame.f_lineno = 173;
                {
                    PyObject *call_args[] = {tmp_args_element_value_114, tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117};
                    tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_59, call_args);
                }

                Py_DECREF(tmp_called_value_59);
                Py_DECREF(tmp_args_element_value_114);
                Py_DECREF(tmp_args_element_value_115);
                Py_DECREF(tmp_args_element_value_117);
                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 173;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_7);
                tmp_called_value_60 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[25]);

                if (tmp_called_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_called_value_60 == NULL)) {
                            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                        }

                        if (tmp_called_value_60 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 175;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_60);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_118 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_119 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[26]);

                if (tmp_args_element_value_119 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_value_119 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_args_element_value_119 == NULL)) {
                            tmp_args_element_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_args_element_value_119 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_60);
                            Py_DECREF(tmp_args_element_value_118);

                            exception_lineno = 175;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_args_element_value_119);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_120 = mod_consts[149];
                tmp_tuple_element_73 = MAKE_LIST1(mod_consts[58]);
                tmp_args_element_value_121 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_61;
                    PyObject *tmp_args_element_value_122;
                    PyTuple_SET_ITEM(tmp_args_element_value_121, 0, tmp_tuple_element_73);
                    tmp_called_value_61 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[51]);

                    if (tmp_called_value_61 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[51]);

                            if (unlikely(tmp_called_value_61 == NULL)) {
                                tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                            }

                            if (tmp_called_value_61 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 176;
                                type_description_2 = "o";
                                goto tuple_build_exception_53;
                            }
                            Py_INCREF(tmp_called_value_61);
                        } else {
                            goto tuple_build_exception_53;
                        }
                    }

                    tmp_args_element_value_122 = PyObject_GetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[141]);

                    if (tmp_args_element_value_122 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_args_element_value_122 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[141]);

                            if (unlikely(tmp_args_element_value_122 == NULL)) {
                                tmp_args_element_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
                            }

                            if (tmp_args_element_value_122 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_61);

                                exception_lineno = 176;
                                type_description_2 = "o";
                                goto tuple_build_exception_53;
                            }
                            Py_INCREF(tmp_args_element_value_122);
                        } else {
                            goto tuple_build_exception_53;
                        }
                    }

                    frame_6917cd75be34c0c9f046e65959471890_8->m_frame.f_lineno = 176;
                    tmp_tuple_element_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_122);
                    Py_DECREF(tmp_called_value_61);
                    Py_DECREF(tmp_args_element_value_122);
                    if (tmp_tuple_element_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 176;
                        type_description_2 = "o";
                        goto tuple_build_exception_53;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_121, 1, tmp_tuple_element_73);
                    tmp_tuple_element_73 = mod_consts[150];
                    PyTuple_SET_ITEM0(tmp_args_element_value_121, 2, tmp_tuple_element_73);
                }
                goto tuple_build_noexception_53;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_53:;
                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_args_element_value_118);
                Py_DECREF(tmp_args_element_value_119);
                Py_DECREF(tmp_args_element_value_121);
                goto list_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_53:;
                frame_6917cd75be34c0c9f046e65959471890_8->m_frame.f_lineno = 175;
                {
                    PyObject *call_args[] = {tmp_args_element_value_118, tmp_args_element_value_119, tmp_args_element_value_120, tmp_args_element_value_121};
                    tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_60, call_args);
                }

                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_args_element_value_118);
                Py_DECREF(tmp_args_element_value_119);
                Py_DECREF(tmp_args_element_value_121);
                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 175;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_7);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_8;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6917cd75be34c0c9f046e65959471890_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6917cd75be34c0c9f046e65959471890_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6917cd75be34c0c9f046e65959471890_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6917cd75be34c0c9f046e65959471890_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_6917cd75be34c0c9f046e65959471890_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_24;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__7_IPersistFile_162, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_24;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_103;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_62 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_74 = mod_consts[143];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_74 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_74);
            tmp_tuple_element_74 = locals_comtypes$persist$$$class__7_IPersistFile_162;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 162;
            tmp_assign_source_103 = CALL_FUNCTION(tmp_called_value_62, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto try_except_handler_24;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_103;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_102 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_102);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_comtypes$persist$$$class__7_IPersistFile_162);
        locals_comtypes$persist$$$class__7_IPersistFile_162 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_comtypes$persist$$$class__7_IPersistFile_162);
        locals_comtypes$persist$$$class__7_IPersistFile_162 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 162;
        goto try_except_handler_22;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_102);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[21];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_comtypes$persist;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[151];
        tmp_level_value_4 = mod_consts[5];
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 180;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_comtypes$persist,
                mod_consts[152],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_104 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[152]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_104);
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[153];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_comtypes$persist;
        tmp_locals_arg_value_5 = (PyObject *)moduledict_comtypes$persist;
        tmp_fromlist_value_5 = mod_consts[154];
        tmp_level_value_5 = mod_consts[5];
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 181;
        tmp_star_imported_2 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_star_imported_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_comtypes$persist, true, tmp_star_imported_2);
        Py_DECREF(tmp_star_imported_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_tuple_element_75;
        tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_tuple_element_75 == NULL)) {
            tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_tuple_element_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_25;
        }
        tmp_assign_source_105 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_105, 0, tmp_tuple_element_75);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_106 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_25;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_36 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[5];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_36, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_25;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_108 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_108;
    }
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_37 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_37, mod_consts[36]);
        tmp_condition_result_30 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_38 = tmp_class_creation_8__metaclass;
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[36]);
        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_25;
        }
        tmp_tuple_element_76 = mod_consts[0];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_76);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_76 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_76);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 182;
        tmp_assign_source_109 = CALL_FUNCTION(tmp_called_value_63, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_109;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_39 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_39, mod_consts[38]);
        tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_25;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[39];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[40];
        tmp_getattr_default_8 = mod_consts[41];
        tmp_tuple_element_77 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_77);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_40 == NULL));
            tmp_tuple_element_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[40]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_tuple_element_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_77);
        }
        goto tuple_build_noexception_54;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_54:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_54:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 182;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_110;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_111;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_comtypes$persist$$$class__8_DictPropertyBag_182 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__8_DictPropertyBag_182, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[155];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__8_DictPropertyBag_182, mod_consts[11], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[0];
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__8_DictPropertyBag_182, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_27;
        }
        frame_494c0103d072a397c86f3c79c2e9a763_9 = MAKE_CLASS_FRAME(codeobj_494c0103d072a397c86f3c79c2e9a763, module_comtypes$persist, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_494c0103d072a397c86f3c79c2e9a763_9);
        assert(Py_REFCNT(frame_494c0103d072a397c86f3c79c2e9a763_9) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_8;
            tmp_list_element_8 = PyObject_GetItem(locals_comtypes$persist$$$class__8_DictPropertyBag_182, mod_consts[55]);

            if (tmp_list_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[55]);

                    if (unlikely(tmp_list_element_8 == NULL)) {
                        tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                    }

                    if (tmp_list_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 189;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_list_element_8);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_dictset_value = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_8);
            tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__8_DictPropertyBag_182, mod_consts[156], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$persist$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__8_DictPropertyBag_182, mod_consts[1], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$persist$$$function__2_Read();

        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__8_DictPropertyBag_182, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        tmp_dictset_value = MAKE_FUNCTION_comtypes$persist$$$function__3_Write();

        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__8_DictPropertyBag_182, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_494c0103d072a397c86f3c79c2e9a763_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_494c0103d072a397c86f3c79c2e9a763_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_494c0103d072a397c86f3c79c2e9a763_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_494c0103d072a397c86f3c79c2e9a763_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_494c0103d072a397c86f3c79c2e9a763_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_27;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_comtypes$persist$$$class__8_DictPropertyBag_182, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_27;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_112;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_64 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_78 = mod_consts[0];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_78 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_78);
            tmp_tuple_element_78 = locals_comtypes$persist$$$class__8_DictPropertyBag_182;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_4b90201a81a12cbf20b91253599ef2da->m_frame.f_lineno = 182;
            tmp_assign_source_112 = CALL_FUNCTION(tmp_called_value_64, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto try_except_handler_27;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_112;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_111 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_111);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_comtypes$persist$$$class__8_DictPropertyBag_182);
        locals_comtypes$persist$$$class__8_DictPropertyBag_182 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_comtypes$persist$$$class__8_DictPropertyBag_182);
        locals_comtypes$persist$$$class__8_DictPropertyBag_182 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 182;
        goto try_except_handler_25;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_comtypes$persist, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_111);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_9;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4b90201a81a12cbf20b91253599ef2da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b90201a81a12cbf20b91253599ef2da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b90201a81a12cbf20b91253599ef2da, exception_lineno);
    }



    assertFrameObject(frame_4b90201a81a12cbf20b91253599ef2da);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_9:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("comtypes.persist", false);

    Py_INCREF(module_comtypes$persist);
    return module_comtypes$persist;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$persist, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("comtypes$persist", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
