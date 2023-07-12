/* Generated code for Python module 'repath'
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

/* The "module_repath" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_repath;
PyDictObject *moduledict_repath;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[121];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[121];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("repath"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 121; i++) {
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
void checkModuleConstants_repath(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 121; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_24f326ef53adbfca3bfa7dc10028b858;
static PyCodeObject *codeobj_26ba07117c8a4da2b3db2e76b29cd0b6;
static PyCodeObject *codeobj_bdded8e4decc87a45d4a14b33b42d4d4;
static PyCodeObject *codeobj_3bb8df7739e08c0ea049c270c7ac9d3b;
static PyCodeObject *codeobj_9ad55c91ee362ebc2595801e84e97d05;
static PyCodeObject *codeobj_92bcb82e4c6876a098ce4c76a7883c7c;
static PyCodeObject *codeobj_c502f7bf09bb0c8edfae6dcff58b297f;
static PyCodeObject *codeobj_50b4b5ca331c4e15a76fb996db5181f3;
static PyCodeObject *codeobj_1e826b8949a2a6275f514d4ebe165bc3;
static PyCodeObject *codeobj_20c5443cac8bcd388c8ea86df491e45d;
static PyCodeObject *codeobj_029b80dfd65e6f3af360ea345ae79dcd;
static PyCodeObject *codeobj_fe84030b1ba49538b84b7b34b0c3f5a0;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[93]; CHECK_OBJECT(module_filename_obj);
    codeobj_24f326ef53adbfca3bfa7dc10028b858 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[108], NULL, 1, 0, 0);
    codeobj_26ba07117c8a4da2b3db2e76b29cd0b6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[109], mod_consts[109], NULL, NULL, 0, 0, 0);
    codeobj_bdded8e4decc87a45d4a14b33b42d4d4 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[110], NULL, 2, 0, 0);
    codeobj_3bb8df7739e08c0ea049c270c7ac9d3b = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[111], NULL, 1, 0, 0);
    codeobj_9ad55c91ee362ebc2595801e84e97d05 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[112], NULL, 1, 0, 0);
    codeobj_92bcb82e4c6876a098ce4c76a7883c7c = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[113], NULL, 3, 0, 0);
    codeobj_c502f7bf09bb0c8edfae6dcff58b297f = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[114], NULL, 1, 0, 0);
    codeobj_50b4b5ca331c4e15a76fb996db5181f3 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[115], NULL, 1, 0, 0);
    codeobj_1e826b8949a2a6275f514d4ebe165bc3 = MAKE_CODE_OBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[116], NULL, 1, 0, 0);
    codeobj_20c5443cac8bcd388c8ea86df491e45d = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[117], mod_consts[118], 1, 0, 0);
    codeobj_029b80dfd65e6f3af360ea345ae79dcd = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[119], NULL, 3, 0, 0);
    codeobj_fe84030b1ba49538b84b7b34b0c3f5a0 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[90], mod_consts[90], mod_consts[120], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__9_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_repath$$$function__1_escape_string();


static PyObject *MAKE_FUNCTION_repath$$$function__2_escape_group();


static PyObject *MAKE_FUNCTION_repath$$$function__3_parse();


static PyObject *MAKE_FUNCTION_repath$$$function__4_tokens_to_template();


static PyObject *MAKE_FUNCTION_repath$$$function__4_tokens_to_template$$$function__1_template_function(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_repath$$$function__5_tokens_to_pattern(PyObject *defaults);


static PyObject *MAKE_FUNCTION_repath$$$function__6_compile(PyObject *defaults);


static PyObject *MAKE_FUNCTION_repath$$$function__7_match(PyObject *defaults);


static PyObject *MAKE_FUNCTION_repath$$$function__8_pattern();


static PyObject *MAKE_FUNCTION_repath$$$function__9_template();


// The module function definitions.
static PyObject *impl_repath$$$function__1_escape_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[0];
    struct Nuitka_FrameObject *frame_9ad55c91ee362ebc2595801e84e97d05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ad55c91ee362ebc2595801e84e97d05 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ad55c91ee362ebc2595801e84e97d05)) {
        Py_XDECREF(cache_frame_9ad55c91ee362ebc2595801e84e97d05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ad55c91ee362ebc2595801e84e97d05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ad55c91ee362ebc2595801e84e97d05 = MAKE_FUNCTION_FRAME(codeobj_9ad55c91ee362ebc2595801e84e97d05, module_repath, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ad55c91ee362ebc2595801e84e97d05->m_type_description == NULL);
    frame_9ad55c91ee362ebc2595801e84e97d05 = cache_frame_9ad55c91ee362ebc2595801e84e97d05;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9ad55c91ee362ebc2595801e84e97d05);
    assert(Py_REFCNT(frame_9ad55c91ee362ebc2595801e84e97d05) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[2];
        tmp_args_element_value_2 = mod_consts[3];
        CHECK_OBJECT(par_string);
        tmp_args_element_value_3 = par_string;
        frame_9ad55c91ee362ebc2595801e84e97d05->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
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
        exception_tb = MAKE_TRACEBACK(frame_9ad55c91ee362ebc2595801e84e97d05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ad55c91ee362ebc2595801e84e97d05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ad55c91ee362ebc2595801e84e97d05, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ad55c91ee362ebc2595801e84e97d05,
        type_description_1,
        par_string
    );


    // Release cached frame if used for exception.
    if (frame_9ad55c91ee362ebc2595801e84e97d05 == cache_frame_9ad55c91ee362ebc2595801e84e97d05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ad55c91ee362ebc2595801e84e97d05);
        cache_frame_9ad55c91ee362ebc2595801e84e97d05 = NULL;
    }

    assertFrameObject(frame_9ad55c91ee362ebc2595801e84e97d05);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_repath$$$function__2_escape_group(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_group = python_pars[0];
    struct Nuitka_FrameObject *frame_3bb8df7739e08c0ea049c270c7ac9d3b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3bb8df7739e08c0ea049c270c7ac9d3b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3bb8df7739e08c0ea049c270c7ac9d3b)) {
        Py_XDECREF(cache_frame_3bb8df7739e08c0ea049c270c7ac9d3b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3bb8df7739e08c0ea049c270c7ac9d3b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3bb8df7739e08c0ea049c270c7ac9d3b = MAKE_FUNCTION_FRAME(codeobj_3bb8df7739e08c0ea049c270c7ac9d3b, module_repath, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3bb8df7739e08c0ea049c270c7ac9d3b->m_type_description == NULL);
    frame_3bb8df7739e08c0ea049c270c7ac9d3b = cache_frame_3bb8df7739e08c0ea049c270c7ac9d3b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3bb8df7739e08c0ea049c270c7ac9d3b);
    assert(Py_REFCNT(frame_3bb8df7739e08c0ea049c270c7ac9d3b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[5];
        tmp_args_element_value_2 = mod_consts[3];
        CHECK_OBJECT(par_group);
        tmp_args_element_value_3 = par_group;
        frame_3bb8df7739e08c0ea049c270c7ac9d3b->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_3bb8df7739e08c0ea049c270c7ac9d3b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3bb8df7739e08c0ea049c270c7ac9d3b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3bb8df7739e08c0ea049c270c7ac9d3b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3bb8df7739e08c0ea049c270c7ac9d3b,
        type_description_1,
        par_group
    );


    // Release cached frame if used for exception.
    if (frame_3bb8df7739e08c0ea049c270c7ac9d3b == cache_frame_3bb8df7739e08c0ea049c270c7ac9d3b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3bb8df7739e08c0ea049c270c7ac9d3b);
        cache_frame_3bb8df7739e08c0ea049c270c7ac9d3b = NULL;
    }

    assertFrameObject(frame_3bb8df7739e08c0ea049c270c7ac9d3b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_repath$$$function__3_parse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[0];
    PyObject *var_tokens = NULL;
    PyObject *var_key = NULL;
    PyObject *var_index = NULL;
    PyObject *var_path = NULL;
    PyObject *var_match = NULL;
    PyObject *var_parts = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_delimiter = NULL;
    PyObject *var_token_pattern = NULL;
    PyObject *var_token = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_c502f7bf09bb0c8edfae6dcff58b297f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c502f7bf09bb0c8edfae6dcff58b297f = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_tokens == NULL);
        var_tokens = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[6];
        assert(var_key == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_key = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[6];
        assert(var_index == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_index = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[7];
        assert(var_path == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_path = tmp_assign_source_4;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_c502f7bf09bb0c8edfae6dcff58b297f)) {
        Py_XDECREF(cache_frame_c502f7bf09bb0c8edfae6dcff58b297f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c502f7bf09bb0c8edfae6dcff58b297f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c502f7bf09bb0c8edfae6dcff58b297f = MAKE_FUNCTION_FRAME(codeobj_c502f7bf09bb0c8edfae6dcff58b297f, module_repath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c502f7bf09bb0c8edfae6dcff58b297f->m_type_description == NULL);
    frame_c502f7bf09bb0c8edfae6dcff58b297f = cache_frame_c502f7bf09bb0c8edfae6dcff58b297f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c502f7bf09bb0c8edfae6dcff58b297f);
    assert(Py_REFCNT(frame_c502f7bf09bb0c8edfae6dcff58b297f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_string);
        tmp_args_element_value_1 = par_string;
        frame_c502f7bf09bb0c8edfae6dcff58b297f->m_frame.f_lineno = 89;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooo";
                exception_lineno = 89;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_match;
            var_match = tmp_assign_source_7;
            Py_INCREF(var_match);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_match);
        tmp_called_instance_2 = var_match;
        frame_c502f7bf09bb0c8edfae6dcff58b297f->m_frame.f_lineno = 90;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[10]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_parts;
            var_parts = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_match);
        tmp_called_instance_3 = var_match;
        frame_c502f7bf09bb0c8edfae6dcff58b297f->m_frame.f_lineno = 91;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[11],
            PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_offset;
            var_offset = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        if (var_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_path;
        CHECK_OBJECT(par_string);
        tmp_expression_value_1 = par_string;
        if (var_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_start_value_1 = var_index;
        CHECK_OBJECT(var_offset);
        tmp_stop_value_1 = var_offset;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_iadd_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_1;
        var_path = tmp_assign_source_10;

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_offset);
        tmp_add_expr_left_1 = var_offset;
        CHECK_OBJECT(var_match);
        tmp_called_instance_4 = var_match;
        frame_c502f7bf09bb0c8edfae6dcff58b297f->m_frame.f_lineno = 93;
        tmp_len_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_parts);
        tmp_expression_value_2 = var_parts;
        tmp_subscript_value_2 = mod_consts[16];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 95;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_path);
        tmp_iadd_expr_left_2 = var_path;
        CHECK_OBJECT(var_parts);
        tmp_expression_value_4 = var_parts;
        tmp_subscript_value_3 = mod_consts[16];
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_4 = mod_consts[17];
        tmp_iadd_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_4, 1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_12 = tmp_iadd_expr_left_2;
        var_path = tmp_assign_source_12;

    }
    goto loop_start_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_path);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_path);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        if (var_tokens == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_tokens;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_path);
        tmp_args_element_value_2 = var_path;
        frame_c502f7bf09bb0c8edfae6dcff58b297f->m_frame.f_lineno = 100;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[7];
        {
            PyObject *old = var_path;
            assert(old != NULL);
            var_path = tmp_assign_source_13;
            Py_INCREF(var_path);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_parts);
        tmp_expression_value_6 = var_parts;
        tmp_subscript_value_5 = mod_consts[20];
        tmp_or_left_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_5);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 103;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[21];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_14 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_14 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = var_delimiter;
            var_delimiter = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_6;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_7;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_subscript_result_2;
        int tmp_truth_name_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(var_parts);
        tmp_expression_value_7 = var_parts;
        tmp_subscript_value_6 = mod_consts[22];
        tmp_or_left_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_6);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 105;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        CHECK_OBJECT(var_parts);
        tmp_expression_value_8 = var_parts;
        tmp_subscript_value_7 = mod_consts[15];
        tmp_or_left_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_7);
        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        CHECK_OBJECT(var_parts);
        tmp_expression_value_9 = var_parts;
        tmp_subscript_value_8 = mod_consts[23];
        tmp_subscript_result_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_8);
        if (tmp_subscript_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_subscript_result_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_2);

            exception_lineno = 107;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_or_right_value_3 = mod_consts[24];
        Py_INCREF(tmp_or_right_value_3);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_mod_expr_left_1 = mod_consts[25];
        CHECK_OBJECT(var_delimiter);
        tmp_mod_expr_right_1 = var_delimiter;
        tmp_or_right_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_or_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        condexpr_end_1:;
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_assign_source_15 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_15 = tmp_or_left_value_2;
        or_end_2:;
        {
            PyObject *old = var_token_pattern;
            var_token_pattern = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_parts);
        tmp_expression_value_10 = var_parts;
        tmp_subscript_value_9 = mod_consts[26];
        tmp_operand_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_9);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subvalue_1 = var_key;
        CHECK_OBJECT(var_parts);
        tmp_ass_subscribed_1 = var_parts;
        tmp_ass_subscript_1 = mod_consts[26];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_3 = var_key;
        tmp_iadd_expr_right_3 = mod_consts[17];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_16 = tmp_iadd_expr_left_3;
        var_key = tmp_assign_source_16;

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_10;
        tmp_dict_key_1 = mod_consts[26];
        if (var_parts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_11 = var_parts;
        tmp_subscript_value_10 = mod_consts[26];
        tmp_unicode_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_10);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_17 = _PyDict_NewPresized( 6 );
        {
            int tmp_or_left_truth_4;
            PyObject *tmp_or_left_value_4;
            PyObject *tmp_or_right_value_4;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_3;
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[20];
            if (var_parts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 116;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_12 = var_parts;
            tmp_subscript_value_11 = mod_consts[20];
            tmp_or_left_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_11);
            if (tmp_or_left_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
            if (tmp_or_left_truth_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_or_left_value_4);

                exception_lineno = 116;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            if (tmp_or_left_truth_4 == 1) {
                goto or_left_4;
            } else {
                goto or_right_4;
            }
            or_right_4:;
            Py_DECREF(tmp_or_left_value_4);
            tmp_or_right_value_4 = mod_consts[7];
            Py_INCREF(tmp_or_right_value_4);
            tmp_dict_value_1 = tmp_or_right_value_4;
            goto or_end_4;
            or_left_4:;
            tmp_dict_value_1 = tmp_or_left_value_4;
            or_end_4:;
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[29];
            if (var_delimiter == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 117;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = var_delimiter;
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[30];
            if (var_parts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 118;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_13 = var_parts;
            tmp_subscript_value_12 = mod_consts[31];
            tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_12);
            if (tmp_cmp_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_cmp_expr_right_1 = mod_consts[32];
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
            Py_DECREF(tmp_cmp_expr_left_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = (tmp_res == 1) ? Py_True : Py_False;
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[33];
            if (var_parts == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 119;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_14 = var_parts;
            tmp_subscript_value_13 = mod_consts[31];
            tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_13);
            if (tmp_cmp_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_cmp_expr_right_2 = mod_consts[34];
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
            Py_DECREF(tmp_cmp_expr_left_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = (tmp_res == 1) ? Py_True : Py_False;
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[35];
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(var_token_pattern);
            tmp_args_element_value_3 = var_token_pattern;
            frame_c502f7bf09bb0c8edfae6dcff58b297f->m_frame.f_lineno = 120;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_17);
        goto try_except_handler_2;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        {
            PyObject *old = var_token;
            var_token = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        if (var_tokens == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_15 = var_tokens;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[19]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_token);
        tmp_args_element_value_4 = var_token;
        frame_c502f7bf09bb0c8edfae6dcff58b297f->m_frame.f_lineno = 123;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 89;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_2;
        if (var_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = var_index;
        CHECK_OBJECT(par_string);
        tmp_len_arg_2 = par_string;
        tmp_cmp_expr_right_3 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        if (var_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_4 = var_path;
        CHECK_OBJECT(par_string);
        tmp_expression_value_16 = par_string;
        if (var_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_2 = var_index;
        tmp_stop_value_2 = Py_None;
        tmp_subscript_value_14 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
        assert(!(tmp_subscript_value_14 == NULL));
        tmp_iadd_expr_right_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_14);
        Py_DECREF(tmp_subscript_value_14);
        if (tmp_iadd_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_iadd_expr_left_4;
        var_path = tmp_assign_source_18;

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_4;
        if (var_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(var_path);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        if (var_tokens == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = var_tokens;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[19]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_path == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_path;
        frame_c502f7bf09bb0c8edfae6dcff58b297f->m_frame.f_lineno = 129;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    if (var_tokens == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 131;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_tokens;
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
        exception_tb = MAKE_TRACEBACK(frame_c502f7bf09bb0c8edfae6dcff58b297f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c502f7bf09bb0c8edfae6dcff58b297f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c502f7bf09bb0c8edfae6dcff58b297f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c502f7bf09bb0c8edfae6dcff58b297f,
        type_description_1,
        par_string,
        var_tokens,
        var_key,
        var_index,
        var_path,
        var_match,
        var_parts,
        var_offset,
        var_delimiter,
        var_token_pattern,
        var_token
    );


    // Release cached frame if used for exception.
    if (frame_c502f7bf09bb0c8edfae6dcff58b297f == cache_frame_c502f7bf09bb0c8edfae6dcff58b297f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c502f7bf09bb0c8edfae6dcff58b297f);
        cache_frame_c502f7bf09bb0c8edfae6dcff58b297f = NULL;
    }

    assertFrameObject(frame_c502f7bf09bb0c8edfae6dcff58b297f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_tokens);
    var_tokens = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_delimiter);
    var_delimiter = NULL;
    Py_XDECREF(var_token_pattern);
    var_token_pattern = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_tokens);
    var_tokens = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_delimiter);
    var_delimiter = NULL;
    Py_XDECREF(var_token_pattern);
    var_token_pattern = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_repath$$$function__4_tokens_to_template(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_tokens = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_template_function = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_tokens;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_repath$$$function__4_tokens_to_template$$$function__1_template_function(tmp_closure_1);

        assert(var_template_function == NULL);
        var_template_function = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_template_function);
    tmp_return_value = var_template_function;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_template_function);
    Py_DECREF(var_template_function);
    var_template_function = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tokens);
    Py_DECREF(par_tokens);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_repath$$$function__4_tokens_to_template$$$function__1_template_function(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *var_path = NULL;
    PyObject *var_token = NULL;
    PyObject *var_regexp = NULL;
    PyObject *var_value = NULL;
    PyObject *var_i = NULL;
    PyObject *var_val = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_20c5443cac8bcd388c8ea86df491e45d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_20c5443cac8bcd388c8ea86df491e45d = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[7];
        assert(var_path == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_path = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_20c5443cac8bcd388c8ea86df491e45d)) {
        Py_XDECREF(cache_frame_20c5443cac8bcd388c8ea86df491e45d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_20c5443cac8bcd388c8ea86df491e45d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_20c5443cac8bcd388c8ea86df491e45d = MAKE_FUNCTION_FRAME(codeobj_20c5443cac8bcd388c8ea86df491e45d, module_repath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_20c5443cac8bcd388c8ea86df491e45d->m_type_description == NULL);
    frame_20c5443cac8bcd388c8ea86df491e45d = cache_frame_20c5443cac8bcd388c8ea86df491e45d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_20c5443cac8bcd388c8ea86df491e45d);
    assert(Py_REFCNT(frame_20c5443cac8bcd388c8ea86df491e45d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT(par_obj);
        tmp_or_left_value_1 = par_obj;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = MAKE_DICT_EMPTY();
        tmp_assign_source_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assign_source_2 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = par_obj;
            assert(old != NULL);
            par_obj = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooc";
                exception_lineno = 143;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_token;
            var_token = tmp_assign_source_5;
            Py_INCREF(var_token);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_token);
        tmp_isinstance_inst_1 = var_token;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_path;
        CHECK_OBJECT(var_token);
        tmp_iadd_expr_right_1 = var_token;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = tmp_iadd_expr_left_1;
        var_path = tmp_assign_source_6;

    }
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_mod_expr_left_1 = mod_consts[44];
        CHECK_OBJECT(var_token);
        tmp_expression_value_3 = var_token;
        tmp_subscript_value_1 = mod_consts[35];
        tmp_mod_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 148;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 148;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 148;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_regexp;
            var_regexp = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        if (par_obj == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_obj;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[46]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_token);
        tmp_expression_value_5 = var_token;
        tmp_subscript_value_2 = mod_consts[26];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 150;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 150;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_1 = var_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_token);
        tmp_expression_value_6 = var_token;
        tmp_subscript_value_3 = mod_consts[30];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 152;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_start_1;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_dircall_arg2_1;
        tmp_expression_value_7 = mod_consts[47];
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[48]);
        assert(!(tmp_dircall_arg1_1 == NULL));
        CHECK_OBJECT(var_token);
        tmp_dircall_arg2_1 = var_token;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_make_exception_arg_1 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 155;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_KeyError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 155;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooc";
        goto try_except_handler_2;
    }
    branch_end_3:;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_value);
        tmp_isinstance_inst_2 = var_value;
        tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_token);
        tmp_expression_value_8 = var_token;
        tmp_subscript_value_4 = mod_consts[33];
        tmp_operand_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_dircall_arg2_2;
        tmp_expression_value_9 = mod_consts[49];
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[48]);
        assert(!(tmp_dircall_arg1_2 == NULL));
        CHECK_OBJECT(var_token);
        tmp_dircall_arg2_2 = var_token;
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_make_exception_arg_2 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 161;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 161;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooc";
        goto try_except_handler_2;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_value);
        tmp_len_arg_1 = var_value;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = 0;
        tmp_condition_result_6 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_token);
        tmp_expression_value_10 = var_token;
        tmp_subscript_value_5 = mod_consts[30];
        tmp_subscript_result_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
        if (tmp_subscript_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_subscript_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_2);

            exception_lineno = 166;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_2);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    goto loop_start_1;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_dircall_arg2_3;
        tmp_expression_value_11 = mod_consts[50];
        tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[48]);
        assert(!(tmp_dircall_arg1_3 == NULL));
        CHECK_OBJECT(var_token);
        tmp_dircall_arg2_3 = var_token;
        Py_INCREF(tmp_dircall_arg2_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3};
            tmp_make_exception_arg_3 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 169;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 169;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooc";
        goto try_except_handler_2;
    }
    branch_end_7:;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_3 = var_value;
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 173;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooc";
                exception_lineno = 173;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooc";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooc";
            exception_lineno = 173;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooc";
            exception_lineno = 173;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
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

                    type_description_1 = "oooooooc";
                    exception_lineno = 173;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[51];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooc";
            exception_lineno = 173;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_14;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_15;
            Py_INCREF(var_val);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_val);
        tmp_args_element_value_4 = var_val;
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 174;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[52], tmp_args_element_value_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_val;
            assert(old != NULL);
            var_val = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        if (var_regexp == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }

        tmp_called_instance_2 = var_regexp;
        CHECK_OBJECT(var_val);
        tmp_args_element_value_5 = var_val;
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 175;
        tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[54], tmp_args_element_value_5);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
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
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_dircall_arg1_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_dircall_arg2_4;
        tmp_expression_value_12 = mod_consts[55];
        tmp_dircall_arg1_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[48]);
        assert(!(tmp_dircall_arg1_4 == NULL));
        CHECK_OBJECT(var_token);
        tmp_dircall_arg2_4 = var_token;
        Py_INCREF(tmp_dircall_arg2_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4};
            tmp_make_exception_arg_4 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_make_exception_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 176;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 176;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooc";
        goto try_except_handler_3;
    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_7;
        if (var_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }

        tmp_iadd_expr_left_2 = var_path;
        CHECK_OBJECT(var_i);
        tmp_cmp_expr_left_3 = var_i;
        tmp_cmp_expr_right_3 = mod_consts[6];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_token);
        tmp_expression_value_13 = var_token;
        tmp_subscript_value_6 = mod_consts[20];
        tmp_iadd_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_6);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_token);
        tmp_expression_value_14 = var_token;
        tmp_subscript_value_7 = mod_consts[29];
        tmp_iadd_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_7);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }
        condexpr_end_1:;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }
        tmp_assign_source_17 = tmp_iadd_expr_left_2;
        var_path = tmp_assign_source_17;

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_path);
        tmp_iadd_expr_left_3 = var_path;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_val);
        tmp_args_element_value_6 = var_val;
        tmp_args_element_value_7 = mod_consts[7];
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_iadd_expr_right_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[57],
                call_args
            );
        }

        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooc";
            goto try_except_handler_3;
        }
        tmp_assign_source_18 = tmp_iadd_expr_left_3;
        var_path = tmp_assign_source_18;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 173;
        type_description_1 = "oooooooc";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    goto loop_start_1;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_value);
        tmp_args_element_value_8 = var_value;
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 185;
        tmp_assign_source_19 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[52], tmp_args_element_value_8);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(var_regexp);
        tmp_called_instance_5 = var_regexp;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_9 = var_value;
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 186;
        tmp_operand_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[54], tmp_args_element_value_9);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        PyObject *tmp_dircall_arg1_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_dircall_arg2_5;
        tmp_expression_value_15 = mod_consts[58];
        tmp_dircall_arg1_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[48]);
        assert(!(tmp_dircall_arg1_5 == NULL));
        CHECK_OBJECT(var_token);
        tmp_dircall_arg2_5 = var_token;
        Py_INCREF(tmp_dircall_arg2_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5, tmp_dircall_arg2_5};
            tmp_make_exception_arg_5 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_make_exception_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 187;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_5);
        Py_DECREF(tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 187;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooc";
        goto try_except_handler_2;
    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_11;
        if (var_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_4 = var_path;
        CHECK_OBJECT(var_token);
        tmp_expression_value_16 = var_token;
        tmp_subscript_value_8 = mod_consts[20];
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_8);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[57]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_value);
        tmp_expression_value_18 = var_value;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[59]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 191;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[60]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_args_element_value_11 = mod_consts[61];
        frame_20c5443cac8bcd388c8ea86df491e45d->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_add_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_iadd_expr_right_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_iadd_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_20 = tmp_iadd_expr_left_4;
        var_path = tmp_assign_source_20;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 143;
        type_description_1 = "oooooooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_path == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 193;
        type_description_1 = "oooooooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_path;
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
        exception_tb = MAKE_TRACEBACK(frame_20c5443cac8bcd388c8ea86df491e45d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_20c5443cac8bcd388c8ea86df491e45d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20c5443cac8bcd388c8ea86df491e45d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_20c5443cac8bcd388c8ea86df491e45d,
        type_description_1,
        par_obj,
        var_path,
        var_token,
        var_regexp,
        var_value,
        var_i,
        var_val,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_20c5443cac8bcd388c8ea86df491e45d == cache_frame_20c5443cac8bcd388c8ea86df491e45d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_20c5443cac8bcd388c8ea86df491e45d);
        cache_frame_20c5443cac8bcd388c8ea86df491e45d = NULL;
    }

    assertFrameObject(frame_20c5443cac8bcd388c8ea86df491e45d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_obj);
    par_obj = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
    Py_XDECREF(var_regexp);
    var_regexp = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
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

    Py_XDECREF(par_obj);
    par_obj = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
    Py_XDECREF(var_regexp);
    var_regexp = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
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


static PyObject *impl_repath$$$function__5_tokens_to_pattern(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tokens = python_pars[0];
    PyObject *par_end = python_pars[1];
    PyObject *par_strict = python_pars[2];
    PyObject *var_route = NULL;
    PyObject *var_last = NULL;
    PyObject *var_trailing_slash = NULL;
    PyObject *var_token = NULL;
    PyObject *var_parts = NULL;
    PyObject *var_segment_necessity = NULL;
    PyObject *var_segment_template = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    struct Nuitka_FrameObject *frame_029b80dfd65e6f3af360ea345ae79dcd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_029b80dfd65e6f3af360ea345ae79dcd = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[7];
        assert(var_route == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_route = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_029b80dfd65e6f3af360ea345ae79dcd)) {
        Py_XDECREF(cache_frame_029b80dfd65e6f3af360ea345ae79dcd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_029b80dfd65e6f3af360ea345ae79dcd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_029b80dfd65e6f3af360ea345ae79dcd = MAKE_FUNCTION_FRAME(codeobj_029b80dfd65e6f3af360ea345ae79dcd, module_repath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_029b80dfd65e6f3af360ea345ae79dcd->m_type_description == NULL);
    frame_029b80dfd65e6f3af360ea345ae79dcd = cache_frame_029b80dfd65e6f3af360ea345ae79dcd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_029b80dfd65e6f3af360ea345ae79dcd);
    assert(Py_REFCNT(frame_029b80dfd65e6f3af360ea345ae79dcd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_tokens);
        tmp_expression_value_1 = par_tokens;
        tmp_subscript_value_1 = mod_consts[62];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, -1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_last == NULL);
        var_last = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_last);
        tmp_isinstance_inst_1 = var_last;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_last);
        tmp_expression_value_3 = var_last;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_029b80dfd65e6f3af360ea345ae79dcd->m_frame.f_lineno = 204;
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[64]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_assign_source_3 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_trailing_slash == NULL);
        var_trailing_slash = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_tokens);
        tmp_iter_arg_1 = par_tokens;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 206;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_token;
            var_token = tmp_assign_source_6;
            Py_INCREF(var_token);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_token);
        tmp_isinstance_inst_2 = var_token;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[42]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        if (var_route == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_route;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_token);
        tmp_args_element_value_1 = var_token;
        frame_029b80dfd65e6f3af360ea345ae79dcd->m_frame.f_lineno = 208;
        tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = tmp_iadd_expr_left_1;
        var_route = tmp_assign_source_7;

    }
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        tmp_dict_key_1 = mod_consts[20];
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_token);
        tmp_expression_value_5 = var_token;
        tmp_subscript_value_2 = mod_consts[20];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_029b80dfd65e6f3af360ea345ae79dcd->m_frame.f_lineno = 212;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_3;
            tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[22];
            CHECK_OBJECT(var_token);
            tmp_expression_value_6 = var_token;
            tmp_subscript_value_3 = mod_consts[35];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_1 = "oooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[26];
            tmp_dict_value_1 = mod_consts[7];
            tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_8);
        goto try_except_handler_2;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        {
            PyObject *old = var_parts;
            var_parts = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_5;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_token);
        tmp_expression_value_7 = var_token;
        tmp_subscript_value_4 = mod_consts[26];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_4);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[54]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_3 = mod_consts[67];
        CHECK_OBJECT(var_token);
        tmp_expression_value_9 = var_token;
        tmp_subscript_value_5 = mod_consts[26];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_029b80dfd65e6f3af360ea345ae79dcd->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 217;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_6;
        tmp_mod_expr_left_1 = mod_consts[68];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[69]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_token);
        tmp_expression_value_11 = var_token;
        tmp_subscript_value_6 = mod_consts[26];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 218;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_029b80dfd65e6f3af360ea345ae79dcd->m_frame.f_lineno = 218;
        tmp_mod_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_dictset_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_parts);
        tmp_dictset_dict = var_parts;
        tmp_dictset_key = mod_consts[26];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_subscript_result_2;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_token);
        tmp_expression_value_12 = var_token;
        tmp_subscript_value_7 = mod_consts[33];
        tmp_subscript_result_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_7);
        if (tmp_subscript_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_subscript_result_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_2);

            exception_lineno = 220;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_9;
        if (var_parts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_9 = var_parts;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_9;
            Py_INCREF(tmp_inplace_assign_subscr_1__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[22];
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_10;
            Py_INCREF(tmp_inplace_assign_subscr_1__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_dict_arg_value_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_key_value_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_11 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__value;
            tmp_inplace_assign_subscr_1__value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_2 = tmp_inplace_assign_subscr_1__value;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_8 = mod_consts[71];
        tmp_expression_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_8);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[48]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        if (var_parts == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_dircall_arg2_1 = var_parts;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_iadd_expr_right_2 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_12 = tmp_iadd_expr_left_2;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_12;

    }
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    tmp_dictset_value = tmp_inplace_assign_subscr_1__value;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    tmp_dictset_dict = tmp_inplace_assign_subscr_1__target;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    tmp_dictset_key = tmp_inplace_assign_subscr_1__subscript;
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    if (tmp_res != 0) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 221;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_13;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_subscript_result_3;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_token);
        tmp_expression_value_15 = var_token;
        tmp_subscript_value_9 = mod_consts[30];
        tmp_subscript_result_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_9);
        if (tmp_subscript_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_subscript_result_3);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_3);

            exception_lineno = 223;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_13 = mod_consts[72];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_13 = mod_consts[73];
        condexpr_end_1:;
        {
            PyObject *old = var_segment_necessity;
            var_segment_necessity = tmp_assign_source_13;
            Py_INCREF(var_segment_necessity);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_10;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_segment_necessity);
        tmp_subscript_value_10 = var_segment_necessity;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_10);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_segment_template;
            var_segment_template = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_dircall_arg2_2;
        if (var_route == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_3 = var_route;
        CHECK_OBJECT(var_segment_template);
        tmp_expression_value_17 = var_segment_template;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[48]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (var_parts == NULL) {
            Py_DECREF(tmp_dircall_arg1_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_dircall_arg2_2 = var_parts;
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_iadd_expr_right_3 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_15 = tmp_iadd_expr_left_3;
        var_route = tmp_assign_source_15;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 206;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_strict);
        tmp_operand_value_1 = par_strict;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_16;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(var_trailing_slash);
        tmp_truth_name_5 = CHECK_IF_TRUE(var_trailing_slash);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        if (var_route == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_route;
        tmp_subscript_value_11 = mod_consts[74];
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_11);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        if (var_route == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_16 = var_route;
        Py_INCREF(tmp_assign_source_16);
        condexpr_end_2:;
        {
            PyObject *old = var_route;
            var_route = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        CHECK_OBJECT(var_route);
        tmp_iadd_expr_left_4 = var_route;
        tmp_iadd_expr_right_4 = mod_consts[75];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = tmp_iadd_expr_left_4;
        var_route = tmp_assign_source_17;

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_end);
        tmp_truth_name_6 = CHECK_IF_TRUE(par_end);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        if (var_route == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_5 = var_route;
        tmp_iadd_expr_right_5 = mod_consts[76];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_iadd_expr_left_5;
        var_route = tmp_assign_source_18;

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_7;
        int tmp_truth_name_8;
        if (var_route == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 234;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_6 = var_route;
        CHECK_OBJECT(par_strict);
        tmp_truth_name_7 = CHECK_IF_TRUE(par_strict);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_trailing_slash);
        tmp_truth_name_8 = CHECK_IF_TRUE(var_trailing_slash);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_8 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_iadd_expr_right_6 = mod_consts[7];
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_iadd_expr_right_6 = mod_consts[77];
        condexpr_end_3:;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = tmp_iadd_expr_left_6;
        var_route = tmp_assign_source_19;

    }
    branch_end_5:;
    {
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[78];
        CHECK_OBJECT(var_route);
        tmp_mod_expr_right_2 = var_route;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_029b80dfd65e6f3af360ea345ae79dcd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_029b80dfd65e6f3af360ea345ae79dcd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_029b80dfd65e6f3af360ea345ae79dcd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_029b80dfd65e6f3af360ea345ae79dcd,
        type_description_1,
        par_tokens,
        par_end,
        par_strict,
        var_route,
        var_last,
        var_trailing_slash,
        var_token,
        var_parts,
        var_segment_necessity,
        var_segment_template
    );


    // Release cached frame if used for exception.
    if (frame_029b80dfd65e6f3af360ea345ae79dcd == cache_frame_029b80dfd65e6f3af360ea345ae79dcd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_029b80dfd65e6f3af360ea345ae79dcd);
        cache_frame_029b80dfd65e6f3af360ea345ae79dcd = NULL;
    }

    assertFrameObject(frame_029b80dfd65e6f3af360ea345ae79dcd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_route);
    Py_DECREF(var_route);
    var_route = NULL;
    Py_XDECREF(var_last);
    var_last = NULL;
    CHECK_OBJECT(var_trailing_slash);
    Py_DECREF(var_trailing_slash);
    var_trailing_slash = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    Py_XDECREF(var_segment_necessity);
    var_segment_necessity = NULL;
    Py_XDECREF(var_segment_template);
    var_segment_template = NULL;
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

    Py_XDECREF(var_route);
    var_route = NULL;
    Py_XDECREF(var_last);
    var_last = NULL;
    Py_XDECREF(var_trailing_slash);
    var_trailing_slash = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    Py_XDECREF(var_segment_necessity);
    var_segment_necessity = NULL;
    Py_XDECREF(var_segment_template);
    var_segment_template = NULL;
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
    CHECK_OBJECT(par_tokens);
    Py_DECREF(par_tokens);
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tokens);
    Py_DECREF(par_tokens);
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_repath$$$function__6_compile(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *par_flags = python_pars[1];
    PyObject *par_options = python_pars[2];
    struct Nuitka_FrameObject *frame_bdded8e4decc87a45d4a14b33b42d4d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bdded8e4decc87a45d4a14b33b42d4d4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bdded8e4decc87a45d4a14b33b42d4d4)) {
        Py_XDECREF(cache_frame_bdded8e4decc87a45d4a14b33b42d4d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bdded8e4decc87a45d4a14b33b42d4d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bdded8e4decc87a45d4a14b33b42d4d4 = MAKE_FUNCTION_FRAME(codeobj_bdded8e4decc87a45d4a14b33b42d4d4, module_repath, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bdded8e4decc87a45d4a14b33b42d4d4->m_type_description == NULL);
    frame_bdded8e4decc87a45d4a14b33b42d4d4 = cache_frame_bdded8e4decc87a45d4a14b33b42d4d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bdded8e4decc87a45d4a14b33b42d4d4);
    assert(Py_REFCNT(frame_bdded8e4decc87a45d4a14b33b42d4d4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_tuple_element_1 = par_path;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_options);
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_1 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_flags);
        tmp_args_element_value_2 = par_flags;
        frame_bdded8e4decc87a45d4a14b33b42d4d4->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bdded8e4decc87a45d4a14b33b42d4d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bdded8e4decc87a45d4a14b33b42d4d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bdded8e4decc87a45d4a14b33b42d4d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bdded8e4decc87a45d4a14b33b42d4d4,
        type_description_1,
        par_path,
        par_flags,
        par_options
    );


    // Release cached frame if used for exception.
    if (frame_bdded8e4decc87a45d4a14b33b42d4d4 == cache_frame_bdded8e4decc87a45d4a14b33b42d4d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bdded8e4decc87a45d4a14b33b42d4d4);
        cache_frame_bdded8e4decc87a45d4a14b33b42d4d4 = NULL;
    }

    assertFrameObject(frame_bdded8e4decc87a45d4a14b33b42d4d4);

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
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_repath$$$function__7_match(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *par_string = python_pars[1];
    PyObject *par_flags = python_pars[2];
    PyObject *par_options = python_pars[3];
    struct Nuitka_FrameObject *frame_92bcb82e4c6876a098ce4c76a7883c7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_92bcb82e4c6876a098ce4c76a7883c7c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_92bcb82e4c6876a098ce4c76a7883c7c)) {
        Py_XDECREF(cache_frame_92bcb82e4c6876a098ce4c76a7883c7c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_92bcb82e4c6876a098ce4c76a7883c7c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_92bcb82e4c6876a098ce4c76a7883c7c = MAKE_FUNCTION_FRAME(codeobj_92bcb82e4c6876a098ce4c76a7883c7c, module_repath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_92bcb82e4c6876a098ce4c76a7883c7c->m_type_description == NULL);
    frame_92bcb82e4c6876a098ce4c76a7883c7c = cache_frame_92bcb82e4c6876a098ce4c76a7883c7c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_92bcb82e4c6876a098ce4c76a7883c7c);
    assert(Py_REFCNT(frame_92bcb82e4c6876a098ce4c76a7883c7c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_args_element_value_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_tuple_element_1 = par_path;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dircall_arg3_1 = DICT_COPY(mod_consts[81]);
        CHECK_OBJECT(par_options);
        tmp_dircall_arg4_1 = par_options;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_called_instance_1 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_string);
        tmp_args_element_value_1 = par_string;
        frame_92bcb82e4c6876a098ce4c76a7883c7c->m_frame.f_lineno = 263;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[82], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_92bcb82e4c6876a098ce4c76a7883c7c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_92bcb82e4c6876a098ce4c76a7883c7c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_92bcb82e4c6876a098ce4c76a7883c7c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_92bcb82e4c6876a098ce4c76a7883c7c,
        type_description_1,
        par_path,
        par_string,
        par_flags,
        par_options
    );


    // Release cached frame if used for exception.
    if (frame_92bcb82e4c6876a098ce4c76a7883c7c == cache_frame_92bcb82e4c6876a098ce4c76a7883c7c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_92bcb82e4c6876a098ce4c76a7883c7c);
        cache_frame_92bcb82e4c6876a098ce4c76a7883c7c = NULL;
    }

    assertFrameObject(frame_92bcb82e4c6876a098ce4c76a7883c7c);

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
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_repath$$$function__8_pattern(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *par_options = python_pars[1];
    PyObject *var_parts = NULL;
    PyObject *outline_0_var_p = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_50b4b5ca331c4e15a76fb996db5181f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_24f326ef53adbfca3bfa7dc10028b858_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_24f326ef53adbfca3bfa7dc10028b858_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_50b4b5ca331c4e15a76fb996db5181f3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_50b4b5ca331c4e15a76fb996db5181f3)) {
        Py_XDECREF(cache_frame_50b4b5ca331c4e15a76fb996db5181f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50b4b5ca331c4e15a76fb996db5181f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50b4b5ca331c4e15a76fb996db5181f3 = MAKE_FUNCTION_FRAME(codeobj_50b4b5ca331c4e15a76fb996db5181f3, module_repath, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50b4b5ca331c4e15a76fb996db5181f3->m_type_description == NULL);
    frame_50b4b5ca331c4e15a76fb996db5181f3 = cache_frame_50b4b5ca331c4e15a76fb996db5181f3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_50b4b5ca331c4e15a76fb996db5181f3);
    assert(Py_REFCNT(frame_50b4b5ca331c4e15a76fb996db5181f3) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_path);
        tmp_isinstance_inst_1 = par_path;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooo";
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
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_path);
        tmp_expression_value_1 = par_path;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_path);
        tmp_isinstance_inst_2 = par_path;
        tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_path);
            tmp_iter_arg_1 = par_path;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_24f326ef53adbfca3bfa7dc10028b858_2)) {
            Py_XDECREF(cache_frame_24f326ef53adbfca3bfa7dc10028b858_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_24f326ef53adbfca3bfa7dc10028b858_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_24f326ef53adbfca3bfa7dc10028b858_2 = MAKE_FUNCTION_FRAME(codeobj_24f326ef53adbfca3bfa7dc10028b858, module_repath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_24f326ef53adbfca3bfa7dc10028b858_2->m_type_description == NULL);
        frame_24f326ef53adbfca3bfa7dc10028b858_2 = cache_frame_24f326ef53adbfca3bfa7dc10028b858_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_24f326ef53adbfca3bfa7dc10028b858_2);
        assert(Py_REFCNT(frame_24f326ef53adbfca3bfa7dc10028b858_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 282;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_p;
                outline_0_var_p = tmp_assign_source_5;
                Py_INCREF(outline_0_var_p);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_dircall_arg1_1 == NULL)) {
                tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
            }

            if (tmp_dircall_arg1_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_p);
            tmp_tuple_element_1 = outline_0_var_p;
            tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_options);
            tmp_dircall_arg3_1 = par_options;
            Py_INCREF(tmp_dircall_arg1_1);
            Py_INCREF(tmp_dircall_arg3_1);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_append_value_1 = impl___main__$$$function__9_complex_call_helper_pos_star_dict(dir_call_args);
            }
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
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
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
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
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_24f326ef53adbfca3bfa7dc10028b858_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_24f326ef53adbfca3bfa7dc10028b858_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_24f326ef53adbfca3bfa7dc10028b858_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_24f326ef53adbfca3bfa7dc10028b858_2,
            type_description_2,
            outline_0_var_p,
            par_options
        );


        // Release cached frame if used for exception.
        if (frame_24f326ef53adbfca3bfa7dc10028b858_2 == cache_frame_24f326ef53adbfca3bfa7dc10028b858_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_24f326ef53adbfca3bfa7dc10028b858_2);
            cache_frame_24f326ef53adbfca3bfa7dc10028b858_2 = NULL;
        }

        assertFrameObject(frame_24f326ef53adbfca3bfa7dc10028b858_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_p);
        outline_0_var_p = NULL;
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

        Py_XDECREF(outline_0_var_p);
        outline_0_var_p = NULL;
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
        exception_lineno = 282;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_parts == NULL);
        var_parts = tmp_assign_source_1;
    }
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_mod_expr_left_1 = mod_consts[85];
        tmp_str_arg_value_1 = mod_consts[86];
        CHECK_OBJECT(var_parts);
        tmp_iterable_value_1 = var_parts;
        tmp_mod_expr_right_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_UNICODE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dircall_arg3_2;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_50b4b5ca331c4e15a76fb996db5181f3->m_frame.f_lineno = 285;
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_options);
        tmp_dircall_arg3_2 = par_options;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__9_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_50b4b5ca331c4e15a76fb996db5181f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50b4b5ca331c4e15a76fb996db5181f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50b4b5ca331c4e15a76fb996db5181f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50b4b5ca331c4e15a76fb996db5181f3,
        type_description_1,
        par_path,
        par_options,
        var_parts
    );


    // Release cached frame if used for exception.
    if (frame_50b4b5ca331c4e15a76fb996db5181f3 == cache_frame_50b4b5ca331c4e15a76fb996db5181f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50b4b5ca331c4e15a76fb996db5181f3);
        cache_frame_50b4b5ca331c4e15a76fb996db5181f3 = NULL;
    }

    assertFrameObject(frame_50b4b5ca331c4e15a76fb996db5181f3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_parts);
    var_parts = NULL;
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

    Py_XDECREF(var_parts);
    var_parts = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_repath$$$function__9_template(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    struct Nuitka_FrameObject *frame_1e826b8949a2a6275f514d4ebe165bc3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e826b8949a2a6275f514d4ebe165bc3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e826b8949a2a6275f514d4ebe165bc3)) {
        Py_XDECREF(cache_frame_1e826b8949a2a6275f514d4ebe165bc3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e826b8949a2a6275f514d4ebe165bc3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e826b8949a2a6275f514d4ebe165bc3 = MAKE_FUNCTION_FRAME(codeobj_1e826b8949a2a6275f514d4ebe165bc3, module_repath, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e826b8949a2a6275f514d4ebe165bc3->m_type_description == NULL);
    frame_1e826b8949a2a6275f514d4ebe165bc3 = cache_frame_1e826b8949a2a6275f514d4ebe165bc3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1e826b8949a2a6275f514d4ebe165bc3);
    assert(Py_REFCNT(frame_1e826b8949a2a6275f514d4ebe165bc3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        frame_1e826b8949a2a6275f514d4ebe165bc3->m_frame.f_lineno = 296;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1e826b8949a2a6275f514d4ebe165bc3->m_frame.f_lineno = 296;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
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
        exception_tb = MAKE_TRACEBACK(frame_1e826b8949a2a6275f514d4ebe165bc3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e826b8949a2a6275f514d4ebe165bc3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e826b8949a2a6275f514d4ebe165bc3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e826b8949a2a6275f514d4ebe165bc3,
        type_description_1,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_1e826b8949a2a6275f514d4ebe165bc3 == cache_frame_1e826b8949a2a6275f514d4ebe165bc3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e826b8949a2a6275f514d4ebe165bc3);
        cache_frame_1e826b8949a2a6275f514d4ebe165bc3 = NULL;
    }

    assertFrameObject(frame_1e826b8949a2a6275f514d4ebe165bc3);

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



static PyObject *MAKE_FUNCTION_repath$$$function__1_escape_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_repath$$$function__1_escape_string,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9ad55c91ee362ebc2595801e84e97d05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_repath,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_repath$$$function__2_escape_group() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_repath$$$function__2_escape_group,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3bb8df7739e08c0ea049c270c7ac9d3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_repath,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_repath$$$function__3_parse() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_repath$$$function__3_parse,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c502f7bf09bb0c8edfae6dcff58b297f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_repath,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_repath$$$function__4_tokens_to_template() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_repath$$$function__4_tokens_to_template,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fe84030b1ba49538b84b7b34b0c3f5a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_repath,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_repath$$$function__4_tokens_to_template$$$function__1_template_function(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_repath$$$function__4_tokens_to_template$$$function__1_template_function,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_20c5443cac8bcd388c8ea86df491e45d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_repath,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_repath$$$function__5_tokens_to_pattern(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_repath$$$function__5_tokens_to_pattern,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_029b80dfd65e6f3af360ea345ae79dcd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_repath,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_repath$$$function__6_compile(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_repath$$$function__6_compile,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bdded8e4decc87a45d4a14b33b42d4d4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_repath,
        mod_consts[80],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_repath$$$function__7_match(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_repath$$$function__7_match,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_92bcb82e4c6876a098ce4c76a7883c7c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_repath,
        mod_consts[83],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_repath$$$function__8_pattern() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_repath$$$function__8_pattern,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_50b4b5ca331c4e15a76fb996db5181f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_repath,
        mod_consts[89],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_repath$$$function__9_template() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_repath$$$function__9_template,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1e826b8949a2a6275f514d4ebe165bc3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_repath,
        mod_consts[91],
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

function_impl_code functable_repath[] = {
    impl_repath$$$function__4_tokens_to_template$$$function__1_template_function,
    impl_repath$$$function__1_escape_string,
    impl_repath$$$function__2_escape_group,
    impl_repath$$$function__3_parse,
    impl_repath$$$function__4_tokens_to_template,
    impl_repath$$$function__5_tokens_to_pattern,
    impl_repath$$$function__6_compile,
    impl_repath$$$function__7_match,
    impl_repath$$$function__8_pattern,
    impl_repath$$$function__9_template,
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

    function_impl_code *current = functable_repath;
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

    if (offset > sizeof(functable_repath) || offset < 0) {
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
        functable_repath[offset],
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
        module_repath,
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
PyObject *modulecode_repath(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("repath");

    // Store the module for future use.
    module_repath = module;

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
        PRINT_STRING("repath: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("repath: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("repath: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initrepath\n");

    moduledict_repath = MODULE_DICT(module_repath);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_repath,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_repath,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[7]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_repath,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_repath,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_repath,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_repath);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_repath, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_repath, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_repath, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_repath);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_26ba07117c8a4da2b3db2e76b29cd0b6;
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
        UPDATE_STRING_DICT0(moduledict_repath, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_repath, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_2);
    }
    frame_26ba07117c8a4da2b3db2e76b29cd0b6 = MAKE_MODULE_FRAME(codeobj_26ba07117c8a4da2b3db2e76b29cd0b6, module_repath);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_26ba07117c8a4da2b3db2e76b29cd0b6);
    assert(Py_REFCNT(frame_26ba07117c8a4da2b3db2e76b29cd0b6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[93];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[96], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[97], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_repath, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_repath;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[6];
        frame_26ba07117c8a4da2b3db2e76b29cd0b6->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[41];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_repath;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[6];
        frame_26ba07117c8a4da2b3db2e76b29cd0b6->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[99];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_repath;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[100];
        tmp_level_value_3 = mod_consts[6];
        frame_26ba07117c8a4da2b3db2e76b29cd0b6->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_repath,
                mod_consts[88],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[88]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        frame_26ba07117c8a4da2b3db2e76b29cd0b6->m_frame.f_lineno = 6;
        tmp_type_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[43],
            PyTuple_GET_ITEM(mod_consts[101], 0)
        );

        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[102];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[103]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        frame_26ba07117c8a4da2b3db2e76b29cd0b6->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_8);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_26ba07117c8a4da2b3db2e76b29cd0b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_26ba07117c8a4da2b3db2e76b29cd0b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_26ba07117c8a4da2b3db2e76b29cd0b6, exception_lineno);
    }



    assertFrameObject(frame_26ba07117c8a4da2b3db2e76b29cd0b6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = DICT_COPY(mod_consts[104]);
        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_repath$$$function__1_escape_string();

        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_repath$$$function__2_escape_group();

        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_repath$$$function__3_parse();

        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_repath$$$function__4_tokens_to_template();

        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[105];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_14 = MAKE_FUNCTION_repath$$$function__5_tokens_to_pattern(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[12];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_15 = MAKE_FUNCTION_repath$$$function__6_compile(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[12];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_16 = MAKE_FUNCTION_repath$$$function__7_match(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_repath$$$function__8_pattern();

        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_repath$$$function__9_template();

        UPDATE_STRING_DICT1(moduledict_repath, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_18);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("repath", false);

    Py_INCREF(module_repath);
    return module_repath;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_repath, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("repath", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
