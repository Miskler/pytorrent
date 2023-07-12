/* Generated code for Python module 'comtypes.client._code_cache'
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

/* The "module_comtypes$client$_code_cache" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_comtypes$client$_code_cache;
PyDictObject *moduledict_comtypes$client$_code_cache;

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
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("comtypes.client._code_cache"));
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
void checkModuleConstants_comtypes$client$_code_cache(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 101; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8cfd10934535b823a4cf0ec99ebb6cef;
static PyCodeObject *codeobj_e3e7d6127db8f4185226f657af67d51e;
static PyCodeObject *codeobj_e118e2b133fb808d07a16b029568fa8f;
static PyCodeObject *codeobj_cc5c1b3a02ea60bd8c3ade48433687d5;
static PyCodeObject *codeobj_1a6f2298178f0d7365c56b372a9058a6;
static PyCodeObject *codeobj_49468405412e23686a9a158b1729525d;
static PyCodeObject *codeobj_7f84c7a3a8185149e89045034b580ffa;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[70]; CHECK_OBJECT(module_filename_obj);
    codeobj_8cfd10934535b823a4cf0ec99ebb6cef = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[95], mod_consts[95], NULL, NULL, 0, 0, 0);
    codeobj_e3e7d6127db8f4185226f657af67d51e = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[96], NULL, 0, 0, 0);
    codeobj_e118e2b133fb808d07a16b029568fa8f = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[97], NULL, 1, 0, 0);
    codeobj_cc5c1b3a02ea60bd8c3ade48433687d5 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[98], NULL, 0, 0, 0);
    codeobj_1a6f2298178f0d7365c56b372a9058a6 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[97], NULL, 0, 0, 0);
    codeobj_49468405412e23686a9a158b1729525d = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[99], NULL, 1, 0, 0);
    codeobj_7f84c7a3a8185149e89045034b580ffa = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[97], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__1__ensure_list();


static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__2__find_gen_dir();


static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__3__create_comtypes_gen_package();


static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__4__is_writeable();


static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__5__get_module_filename();


static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__6__get_appdata_dir();


// The module function definitions.
static PyObject *impl_comtypes$client$_code_cache$$$function__1__ensure_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    struct Nuitka_FrameObject *frame_e118e2b133fb808d07a16b029568fa8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e118e2b133fb808d07a16b029568fa8f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e118e2b133fb808d07a16b029568fa8f)) {
        Py_XDECREF(cache_frame_e118e2b133fb808d07a16b029568fa8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e118e2b133fb808d07a16b029568fa8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e118e2b133fb808d07a16b029568fa8f = MAKE_FUNCTION_FRAME(codeobj_e118e2b133fb808d07a16b029568fa8f, module_comtypes$client$_code_cache, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e118e2b133fb808d07a16b029568fa8f->m_type_description == NULL);
    frame_e118e2b133fb808d07a16b029568fa8f = cache_frame_e118e2b133fb808d07a16b029568fa8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e118e2b133fb808d07a16b029568fa8f);
    assert(Py_REFCNT(frame_e118e2b133fb808d07a16b029568fa8f) == 2);

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(par_path);
        tmp_list_arg_1 = par_path;
        tmp_return_value = MAKE_LIST(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
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
        exception_tb = MAKE_TRACEBACK(frame_e118e2b133fb808d07a16b029568fa8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e118e2b133fb808d07a16b029568fa8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e118e2b133fb808d07a16b029568fa8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e118e2b133fb808d07a16b029568fa8f,
        type_description_1,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_e118e2b133fb808d07a16b029568fa8f == cache_frame_e118e2b133fb808d07a16b029568fa8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e118e2b133fb808d07a16b029568fa8f);
        cache_frame_e118e2b133fb808d07a16b029568fa8f = NULL;
    }

    assertFrameObject(frame_e118e2b133fb808d07a16b029568fa8f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$client$_code_cache$$$function__2__find_gen_dir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_gen = NULL;
    PyObject *var_gen_path = NULL;
    PyObject *var_ftype = NULL;
    PyObject *var_subdir = NULL;
    PyObject *var_basedir = NULL;
    PyObject *var_path = NULL;
    PyObject *var_base = NULL;
    PyObject *var_gen_dir = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_cc5c1b3a02ea60bd8c3ade48433687d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cc5c1b3a02ea60bd8c3ade48433687d5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cc5c1b3a02ea60bd8c3ade48433687d5)) {
        Py_XDECREF(cache_frame_cc5c1b3a02ea60bd8c3ade48433687d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc5c1b3a02ea60bd8c3ade48433687d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc5c1b3a02ea60bd8c3ade48433687d5 = MAKE_FUNCTION_FRAME(codeobj_cc5c1b3a02ea60bd8c3ade48433687d5, module_comtypes$client$_code_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_type_description == NULL);
    frame_cc5c1b3a02ea60bd8c3ade48433687d5 = cache_frame_cc5c1b3a02ea60bd8c3ade48433687d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cc5c1b3a02ea60bd8c3ade48433687d5);
    assert(Py_REFCNT(frame_cc5c1b3a02ea60bd8c3ade48433687d5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 41;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[2];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$client$_code_cache;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[3];
        tmp_level_value_1 = mod_consts[4];
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 42;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_comtypes$client$_code_cache,
                mod_consts[5],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gen == NULL);
        var_gen = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gen);
        tmp_expression_value_1 = var_gen;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 43;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gen_path == NULL);
        var_gen_path = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gen_path);
        tmp_args_element_value_2 = var_gen_path;
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 44;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooNoooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_getattr_target_1 == NULL)) {
            tmp_getattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_getattr_target_1 == NULL));
        tmp_getattr_attr_1 = mod_consts[10];
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ftype == NULL);
        var_ftype = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_ftype);
        tmp_cmp_expr_left_1 = var_ftype;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[11];
        assert(var_subdir == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_subdir = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 52;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_basedir == NULL);
        var_basedir = tmp_assign_source_5;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_ftype);
        tmp_cmp_expr_left_2 = var_ftype;
        tmp_cmp_expr_right_2 = mod_consts[13];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 56;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_path == NULL);
        var_path = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_path_arg_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_4 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_4 == NULL));
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[16]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_path);
        tmp_path_arg_1 = var_path;
        tmp_args_element_value_4 = OS_PATH_BASENAME(tmp_path_arg_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 57;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 57;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[4];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_base == NULL);
        var_base = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_1 = mod_consts[17];
        CHECK_OBJECT(var_base);
        tmp_tuple_element_1 = var_base;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[18];
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_assign_source_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_subdir == NULL);
        var_subdir = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 59;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[20]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_basedir == NULL);
        var_basedir = tmp_assign_source_9;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_path_arg_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_6 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_6 == NULL));
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[16]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 63;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_path_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[21]);
        if (tmp_path_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 63;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = OS_PATH_BASENAME(tmp_path_arg_2);
        Py_DECREF(tmp_path_arg_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 63;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 63;
        tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[4];
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_base == NULL);
        var_base = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        tmp_mod_expr_left_2 = mod_consts[17];
        CHECK_OBJECT(var_base);
        tmp_tuple_element_2 = var_base;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[18];
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
        tmp_assign_source_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_subdir == NULL);
        var_subdir = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 65;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[20]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_basedir == NULL);
        var_basedir = tmp_assign_source_12;
    }
    branch_end_3:;
    branch_end_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_8 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_8 == NULL));
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[22]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_basedir);
        tmp_args_element_value_6 = var_basedir;
        CHECK_OBJECT(var_subdir);
        tmp_args_element_value_7 = var_subdir;
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gen_dir == NULL);
        var_gen_dir = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_exists_arg_1;
        CHECK_OBJECT(var_gen_dir);
        tmp_exists_arg_1 = var_gen_dir;
        tmp_operand_value_2 = OS_PATH_FILE_EXISTS(tmp_exists_arg_1);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[25];
        CHECK_OBJECT(var_gen_dir);
        tmp_args_element_value_9 = var_gen_dir;
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_called_instance_4 == NULL));
        CHECK_OBJECT(var_gen_dir);
        tmp_args_element_value_10 = var_gen_dir;
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 70;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[27], tmp_args_element_value_10);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var_gen_path);
        tmp_expression_value_9 = var_gen_path;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[28]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        if (var_gen_dir == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = var_gen_dir;
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 71;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[30]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[31]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gen_path);
        tmp_expression_value_12 = var_gen_path;
        tmp_subscript_value_3 = mod_consts[32];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_3, -1);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 72;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 72;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[33];
        CHECK_OBJECT(var_result);
        tmp_args_element_value_14 = var_result;
        frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc5c1b3a02ea60bd8c3ade48433687d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc5c1b3a02ea60bd8c3ade48433687d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc5c1b3a02ea60bd8c3ade48433687d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc5c1b3a02ea60bd8c3ade48433687d5,
        type_description_1,
        var_gen,
        var_gen_path,
        var_ftype,
        NULL,
        var_subdir,
        var_basedir,
        var_path,
        var_base,
        var_gen_dir,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_cc5c1b3a02ea60bd8c3ade48433687d5 == cache_frame_cc5c1b3a02ea60bd8c3ade48433687d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc5c1b3a02ea60bd8c3ade48433687d5);
        cache_frame_cc5c1b3a02ea60bd8c3ade48433687d5 = NULL;
    }

    assertFrameObject(frame_cc5c1b3a02ea60bd8c3ade48433687d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_gen);
    Py_DECREF(var_gen);
    var_gen = NULL;
    CHECK_OBJECT(var_gen_path);
    Py_DECREF(var_gen_path);
    var_gen_path = NULL;
    Py_XDECREF(var_ftype);
    var_ftype = NULL;
    Py_XDECREF(var_subdir);
    var_subdir = NULL;
    Py_XDECREF(var_basedir);
    var_basedir = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_base);
    var_base = NULL;
    Py_XDECREF(var_gen_dir);
    var_gen_dir = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_gen);
    var_gen = NULL;
    Py_XDECREF(var_gen_path);
    var_gen_path = NULL;
    Py_XDECREF(var_ftype);
    var_ftype = NULL;
    Py_XDECREF(var_subdir);
    var_subdir = NULL;
    Py_XDECREF(var_basedir);
    var_basedir = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_base);
    var_base = NULL;
    Py_XDECREF(var_gen_dir);
    var_gen_dir = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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


static PyObject *impl_comtypes$client$_code_cache$$$function__3__create_comtypes_gen_package(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_comtypes = NULL;
    PyObject *var_comtypes_path = NULL;
    PyObject *var_comtypes_init = NULL;
    PyObject *var_ofi = NULL;
    PyObject *var_details = NULL;
    PyObject *var_module = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_e3e7d6127db8f4185226f657af67d51e;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_e3e7d6127db8f4185226f657af67d51e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e3e7d6127db8f4185226f657af67d51e)) {
        Py_XDECREF(cache_frame_e3e7d6127db8f4185226f657af67d51e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e3e7d6127db8f4185226f657af67d51e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e3e7d6127db8f4185226f657af67d51e = MAKE_FUNCTION_FRAME(codeobj_e3e7d6127db8f4185226f657af67d51e, module_comtypes$client$_code_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e3e7d6127db8f4185226f657af67d51e->m_type_description == NULL);
    frame_e3e7d6127db8f4185226f657af67d51e = cache_frame_e3e7d6127db8f4185226f657af67d51e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e3e7d6127db8f4185226f657af67d51e);
    assert(Py_REFCNT(frame_e3e7d6127db8f4185226f657af67d51e) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[35];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$client$_code_cache;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[4];
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 91;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(var_comtypes == NULL);
        var_comtypes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = mod_consts[36];
        CHECK_OBJECT(var_comtypes);
        tmp_expression_value_2 = var_comtypes;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e3e7d6127db8f4185226f657af67d51e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e3e7d6127db8f4185226f657af67d51e, exception_keeper_lineno_1);
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
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[2];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_comtypes$client$_code_cache;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[4];
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 94;
        tmp_assign_source_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_comtypes;
            var_comtypes = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 95;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_3 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_4 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_4 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[22]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_comtypes);
        tmp_expression_value_6 = var_comtypes;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[7]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_value_1 = mod_consts[4];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_5 = mod_consts[5];
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 97;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(var_comtypes_path == NULL);
        var_comtypes_path = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isdir_arg_1;
        CHECK_OBJECT(var_comtypes_path);
        tmp_isdir_arg_1 = var_comtypes_path;
        tmp_operand_value_1 = OS_PATH_FILE_ISDIR(tmp_isdir_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_called_instance_2 == NULL));
        CHECK_OBJECT(var_comtypes_path);
        tmp_args_element_value_6 = var_comtypes_path;
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 99;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[38], tmp_args_element_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_7 = mod_consts[39];
        CHECK_OBJECT(var_comtypes_path);
        tmp_args_element_value_8 = var_comtypes_path;
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_7 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_7 == NULL));
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[22]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        if (var_comtypes_path == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_9 = var_comtypes_path;
        tmp_args_element_value_10 = mod_consts[41];
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(var_comtypes_init == NULL);
        var_comtypes_init = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_exists_arg_1;
        CHECK_OBJECT(var_comtypes_init);
        tmp_exists_arg_1 = var_comtypes_init;
        tmp_operand_value_2 = OS_PATH_FILE_EXISTS(tmp_exists_arg_1);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_11 = mod_consts[42];
        CHECK_OBJECT(var_comtypes_init);
        tmp_args_element_value_12 = var_comtypes_init;
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(var_comtypes_init);
        tmp_open_filename_1 = var_comtypes_init;
        tmp_open_mode_1 = mod_consts[43];
        tmp_assign_source_5 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(var_ofi == NULL);
        var_ofi = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_ofi);
        tmp_called_instance_5 = var_ofi;
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 105;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[44],
            PyTuple_GET_ITEM(mod_consts[45], 0)
        );

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_ofi);
        tmp_called_instance_6 = var_ofi;
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 106;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[46]);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_3:;
    goto try_end_2;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_e3e7d6127db8f4185226f657af67d51e, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_e3e7d6127db8f4185226f657af67d51e, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = mod_consts[47];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
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
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = EXC_VALUE(PyThreadState_GET());
        assert(var_details == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_details = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_13 = mod_consts[48];
        CHECK_OBJECT(var_details);
        tmp_args_element_value_14 = var_details;
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_8 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_7,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        assert(!(tmp_called_instance_8 == NULL));
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 109;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[50],
            PyTuple_GET_ITEM(mod_consts[51], 0)
        );

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_8 = tmp_assign_unpack_1__assign_source;
        assert(var_module == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_module = tmp_assign_source_8;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_1 = tmp_assign_unpack_1__assign_source;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[52]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_ass_subscript_1 = mod_consts[35];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
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

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_module);
        tmp_assattr_value_1 = var_module;
        CHECK_OBJECT(var_comtypes);
        tmp_assattr_target_1 = var_comtypes;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_9;
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(var_comtypes);
        tmp_expression_value_9 = var_comtypes;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[5]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_2);

            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_9;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = 112;
        tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[53], 0)
        );

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_9);
    }
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

    Py_XDECREF(var_details);
    var_details = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    Py_XDECREF(var_details);
    var_details = NULL;

    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 96;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e3e7d6127db8f4185226f657af67d51e->m_frame) frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_5;
    branch_end_4:;
    goto try_end_5;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 90;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e3e7d6127db8f4185226f657af67d51e->m_frame) frame_e3e7d6127db8f4185226f657af67d51e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_3:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e3e7d6127db8f4185226f657af67d51e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e3e7d6127db8f4185226f657af67d51e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e3e7d6127db8f4185226f657af67d51e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e3e7d6127db8f4185226f657af67d51e,
        type_description_1,
        var_comtypes,
        var_comtypes_path,
        var_comtypes_init,
        var_ofi,
        var_details,
        var_module
    );


    // Release cached frame if used for exception.
    if (frame_e3e7d6127db8f4185226f657af67d51e == cache_frame_e3e7d6127db8f4185226f657af67d51e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e3e7d6127db8f4185226f657af67d51e);
        cache_frame_e3e7d6127db8f4185226f657af67d51e = NULL;
    }

    assertFrameObject(frame_e3e7d6127db8f4185226f657af67d51e);

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
    Py_XDECREF(var_comtypes);
    var_comtypes = NULL;
    Py_XDECREF(var_comtypes_path);
    var_comtypes_path = NULL;
    Py_XDECREF(var_comtypes_init);
    var_comtypes_init = NULL;
    Py_XDECREF(var_ofi);
    var_ofi = NULL;
    Py_XDECREF(var_module);
    var_module = NULL;
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

    Py_XDECREF(var_comtypes);
    var_comtypes = NULL;
    Py_XDECREF(var_comtypes_path);
    var_comtypes_path = NULL;
    Py_XDECREF(var_comtypes_init);
    var_comtypes_init = NULL;
    Py_XDECREF(var_ofi);
    var_ofi = NULL;
    Py_XDECREF(var_module);
    var_module = NULL;
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


static PyObject *impl_comtypes$client$_code_cache$$$function__4__is_writeable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    struct Nuitka_FrameObject *frame_7f84c7a3a8185149e89045034b580ffa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7f84c7a3a8185149e89045034b580ffa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f84c7a3a8185149e89045034b580ffa)) {
        Py_XDECREF(cache_frame_7f84c7a3a8185149e89045034b580ffa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f84c7a3a8185149e89045034b580ffa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f84c7a3a8185149e89045034b580ffa = MAKE_FUNCTION_FRAME(codeobj_7f84c7a3a8185149e89045034b580ffa, module_comtypes$client$_code_cache, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f84c7a3a8185149e89045034b580ffa->m_type_description == NULL);
    frame_7f84c7a3a8185149e89045034b580ffa = cache_frame_7f84c7a3a8185149e89045034b580ffa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7f84c7a3a8185149e89045034b580ffa);
    assert(Py_REFCNT(frame_7f84c7a3a8185149e89045034b580ffa) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_path);
        tmp_operand_value_1 = par_path;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "o";
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_expression_value_2 = par_path;
        tmp_subscript_value_1 = mod_consts[4];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[56]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7f84c7a3a8185149e89045034b580ffa->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
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
        exception_tb = MAKE_TRACEBACK(frame_7f84c7a3a8185149e89045034b580ffa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f84c7a3a8185149e89045034b580ffa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f84c7a3a8185149e89045034b580ffa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f84c7a3a8185149e89045034b580ffa,
        type_description_1,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_7f84c7a3a8185149e89045034b580ffa == cache_frame_7f84c7a3a8185149e89045034b580ffa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f84c7a3a8185149e89045034b580ffa);
        cache_frame_7f84c7a3a8185149e89045034b580ffa = NULL;
    }

    assertFrameObject(frame_7f84c7a3a8185149e89045034b580ffa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$client$_code_cache$$$function__5__get_module_filename(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hmodule = python_pars[0];
    PyObject *var_path = NULL;
    struct Nuitka_FrameObject *frame_49468405412e23686a9a158b1729525d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_49468405412e23686a9a158b1729525d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_49468405412e23686a9a158b1729525d)) {
        Py_XDECREF(cache_frame_49468405412e23686a9a158b1729525d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49468405412e23686a9a158b1729525d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49468405412e23686a9a158b1729525d = MAKE_FUNCTION_FRAME(codeobj_49468405412e23686a9a158b1729525d, module_comtypes$client$_code_cache, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_49468405412e23686a9a158b1729525d->m_type_description == NULL);
    frame_49468405412e23686a9a158b1729525d = cache_frame_49468405412e23686a9a158b1729525d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_49468405412e23686a9a158b1729525d);
    assert(Py_REFCNT(frame_49468405412e23686a9a158b1729525d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[59]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_49468405412e23686a9a158b1729525d->m_frame.f_lineno = 125;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_path == NULL);
        var_path = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hmodule);
        tmp_args_element_value_2 = par_hmodule;
        CHECK_OBJECT(var_path);
        tmp_args_element_value_3 = var_path;
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_49468405412e23686a9a158b1729525d->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 126;
            type_description_1 = "oo";
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
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_path);
        tmp_expression_value_2 = var_path;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_49468405412e23686a9a158b1729525d->m_frame.f_lineno = 128;
        tmp_raise_type_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[63]);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 128;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_49468405412e23686a9a158b1729525d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49468405412e23686a9a158b1729525d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49468405412e23686a9a158b1729525d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49468405412e23686a9a158b1729525d,
        type_description_1,
        par_hmodule,
        var_path
    );


    // Release cached frame if used for exception.
    if (frame_49468405412e23686a9a158b1729525d == cache_frame_49468405412e23686a9a158b1729525d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_49468405412e23686a9a158b1729525d);
        cache_frame_49468405412e23686a9a158b1729525d = NULL;
    }

    assertFrameObject(frame_49468405412e23686a9a158b1729525d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_path);
    Py_DECREF(var_path);
    var_path = NULL;
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

    Py_XDECREF(var_path);
    var_path = NULL;
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
    CHECK_OBJECT(par_hmodule);
    Py_DECREF(par_hmodule);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hmodule);
    Py_DECREF(par_hmodule);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_comtypes$client$_code_cache$$$function__6__get_appdata_dir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_path = NULL;
    struct Nuitka_FrameObject *frame_1a6f2298178f0d7365c56b372a9058a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1a6f2298178f0d7365c56b372a9058a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1a6f2298178f0d7365c56b372a9058a6)) {
        Py_XDECREF(cache_frame_1a6f2298178f0d7365c56b372a9058a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a6f2298178f0d7365c56b372a9058a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a6f2298178f0d7365c56b372a9058a6 = MAKE_FUNCTION_FRAME(codeobj_1a6f2298178f0d7365c56b372a9058a6, module_comtypes$client$_code_cache, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a6f2298178f0d7365c56b372a9058a6->m_type_description == NULL);
    frame_1a6f2298178f0d7365c56b372a9058a6 = cache_frame_1a6f2298178f0d7365c56b372a9058a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a6f2298178f0d7365c56b372a9058a6);
    assert(Py_REFCNT(frame_1a6f2298178f0d7365c56b372a9058a6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[59]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1a6f2298178f0d7365c56b372a9058a6->m_frame.f_lineno = 133;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_path == NULL);
        var_path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[4];
        CHECK_OBJECT(var_path);
        tmp_args_element_value_3 = var_path;
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = Py_True;
        frame_1a6f2298178f0d7365c56b372a9058a6->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_path);
        tmp_expression_value_2 = var_path;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_1a6f2298178f0d7365c56b372a9058a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a6f2298178f0d7365c56b372a9058a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a6f2298178f0d7365c56b372a9058a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a6f2298178f0d7365c56b372a9058a6,
        type_description_1,
        var_path
    );


    // Release cached frame if used for exception.
    if (frame_1a6f2298178f0d7365c56b372a9058a6 == cache_frame_1a6f2298178f0d7365c56b372a9058a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a6f2298178f0d7365c56b372a9058a6);
        cache_frame_1a6f2298178f0d7365c56b372a9058a6 = NULL;
    }

    assertFrameObject(frame_1a6f2298178f0d7365c56b372a9058a6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_path);
    Py_DECREF(var_path);
    var_path = NULL;
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

    Py_XDECREF(var_path);
    var_path = NULL;
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



static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__1__ensure_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$_code_cache$$$function__1__ensure_list,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e118e2b133fb808d07a16b029568fa8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client$_code_cache,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__2__find_gen_dir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$_code_cache$$$function__2__find_gen_dir,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc5c1b3a02ea60bd8c3ade48433687d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client$_code_cache,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__3__create_comtypes_gen_package() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$_code_cache$$$function__3__create_comtypes_gen_package,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e3e7d6127db8f4185226f657af67d51e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client$_code_cache,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__4__is_writeable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$_code_cache$$$function__4__is_writeable,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f84c7a3a8185149e89045034b580ffa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client$_code_cache,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__5__get_module_filename() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$_code_cache$$$function__5__get_module_filename,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_49468405412e23686a9a158b1729525d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client$_code_cache,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_comtypes$client$_code_cache$$$function__6__get_appdata_dir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_comtypes$client$_code_cache$$$function__6__get_appdata_dir,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a6f2298178f0d7365c56b372a9058a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_comtypes$client$_code_cache,
        mod_consts[67],
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

function_impl_code functable_comtypes$client$_code_cache[] = {
    impl_comtypes$client$_code_cache$$$function__1__ensure_list,
    impl_comtypes$client$_code_cache$$$function__2__find_gen_dir,
    impl_comtypes$client$_code_cache$$$function__3__create_comtypes_gen_package,
    impl_comtypes$client$_code_cache$$$function__4__is_writeable,
    impl_comtypes$client$_code_cache$$$function__5__get_module_filename,
    impl_comtypes$client$_code_cache$$$function__6__get_appdata_dir,
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

    function_impl_code *current = functable_comtypes$client$_code_cache;
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

    if (offset > sizeof(functable_comtypes$client$_code_cache) || offset < 0) {
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
        functable_comtypes$client$_code_cache[offset],
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
        module_comtypes$client$_code_cache,
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
PyObject *modulecode_comtypes$client$_code_cache(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("comtypes.client._code_cache");

    // Store the module for future use.
    module_comtypes$client$_code_cache = module;

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
        PRINT_STRING("comtypes.client._code_cache: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.client._code_cache: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("comtypes.client._code_cache: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcomtypes$client$_code_cache\n");

    moduledict_comtypes$client$_code_cache = MODULE_DICT(module_comtypes$client$_code_cache);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_comtypes$client$_code_cache,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_comtypes$client$_code_cache,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[100]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_comtypes$client$_code_cache,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$client$_code_cache,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_comtypes$client$_code_cache,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_comtypes$client$_code_cache);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_comtypes$client$_code_cache);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_8cfd10934535b823a4cf0ec99ebb6cef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_2);
    }
    frame_8cfd10934535b823a4cf0ec99ebb6cef = MAKE_MODULE_FRAME(codeobj_8cfd10934535b823a4cf0ec99ebb6cef, module_comtypes$client$_code_cache);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8cfd10934535b823a4cf0ec99ebb6cef);
    assert(Py_REFCNT(frame_8cfd10934535b823a4cf0ec99ebb6cef) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[70];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[73], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[74], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[76];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_comtypes$client$_code_cache;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[4];
        frame_8cfd10934535b823a4cf0ec99ebb6cef->m_frame.f_lineno = 7;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[19];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_comtypes$client$_code_cache;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[4];
        frame_8cfd10934535b823a4cf0ec99ebb6cef->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_TYPES();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_8cfd10934535b823a4cf0ec99ebb6cef->m_frame.f_lineno = 9;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[78],
            PyTuple_GET_ITEM(mod_consts[79], 0)
        );

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_comtypes$client$_code_cache$$$function__1__ensure_list();

        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_comtypes$client$_code_cache$$$function__2__find_gen_dir();

        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_called_instance_2 == NULL));
        frame_8cfd10934535b823a4cf0ec99ebb6cef->m_frame.f_lineno = 78;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[81],
            PyTuple_GET_ITEM(mod_consts[82], 0)
        );

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[83]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_called_instance_3 == NULL));
        frame_8cfd10934535b823a4cf0ec99ebb6cef->m_frame.f_lineno = 79;
        tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[84],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[86]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[87]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            assert(!(tmp_expression_value_4 == NULL));
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[88]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_value_3, 1, tmp_list_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            assert(!(tmp_expression_value_5 == NULL));
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[89]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_value_3, 2, tmp_list_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            assert(!(tmp_expression_value_6 == NULL));
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[89]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_value_3, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[90], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[87]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[91], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_list_element_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_assattr_target_5;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[92]);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyList_SET_ITEM(tmp_assattr_value_5, 0, tmp_list_element_2);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            assert(!(tmp_expression_value_9 == NULL));
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[88]);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assattr_value_5, 1, tmp_list_element_2);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            assert(!(tmp_expression_value_10 == NULL));
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[87]);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assattr_value_5, 2, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assattr_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[90], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8cfd10934535b823a4cf0ec99ebb6cef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8cfd10934535b823a4cf0ec99ebb6cef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8cfd10934535b823a4cf0ec99ebb6cef, exception_lineno);
    }



    assertFrameObject(frame_8cfd10934535b823a4cf0ec99ebb6cef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_comtypes$client$_code_cache$$$function__3__create_comtypes_gen_package();

        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_comtypes$client$_code_cache$$$function__4__is_writeable();

        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_comtypes$client$_code_cache$$$function__5__get_module_filename();

        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_comtypes$client$_code_cache$$$function__6__get_appdata_dir();

        UPDATE_STRING_DICT1(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_21);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("comtypes.client._code_cache", false);

    Py_INCREF(module_comtypes$client$_code_cache);
    return module_comtypes$client$_code_cache;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_comtypes$client$_code_cache, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("comtypes$client$_code_cache", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
