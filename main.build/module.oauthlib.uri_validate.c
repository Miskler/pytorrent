/* Generated code for Python module 'oauthlib.uri_validate'
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

/* The "module_oauthlib$uri_validate" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauthlib$uri_validate;
PyDictObject *moduledict_oauthlib$uri_validate;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[90];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[90];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("oauthlib.uri_validate"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 90; i++) {
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
void checkModuleConstants_oauthlib$uri_validate(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 90; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_84d182a6a37fcecdd4606ef1e99c4d66;
static PyCodeObject *codeobj_042793bd6e60ce171a163c51f1b0b190;
static PyCodeObject *codeobj_9cb197288f28acf529ff369cdceec931;
static PyCodeObject *codeobj_0ca9282e77e69ba4c88d6801d9c970bc;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[8]; CHECK_OBJECT(module_filename_obj);
    codeobj_84d182a6a37fcecdd4606ef1e99c4d66 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[88], mod_consts[88], NULL, NULL, 0, 0, 0);
    codeobj_042793bd6e60ce171a163c51f1b0b190 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[89], NULL, 1, 0, 0);
    codeobj_9cb197288f28acf529ff369cdceec931 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[89], NULL, 1, 0, 0);
    codeobj_0ca9282e77e69ba4c88d6801d9c970bc = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[89], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_oauthlib$uri_validate$$$function__1_is_uri();


static PyObject *MAKE_FUNCTION_oauthlib$uri_validate$$$function__2_is_uri_reference();


static PyObject *MAKE_FUNCTION_oauthlib$uri_validate$$$function__3_is_absolute_uri();


// The module function definitions.
static PyObject *impl_oauthlib$uri_validate$$$function__1_is_uri(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[0];
    struct Nuitka_FrameObject *frame_9cb197288f28acf529ff369cdceec931;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9cb197288f28acf529ff369cdceec931 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9cb197288f28acf529ff369cdceec931)) {
        Py_XDECREF(cache_frame_9cb197288f28acf529ff369cdceec931);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9cb197288f28acf529ff369cdceec931 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9cb197288f28acf529ff369cdceec931 = MAKE_FUNCTION_FRAME(codeobj_9cb197288f28acf529ff369cdceec931, module_oauthlib$uri_validate, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9cb197288f28acf529ff369cdceec931->m_type_description == NULL);
    frame_9cb197288f28acf529ff369cdceec931 = cache_frame_9cb197288f28acf529ff369cdceec931;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9cb197288f28acf529ff369cdceec931);
    assert(Py_REFCNT(frame_9cb197288f28acf529ff369cdceec931) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_2 = par_uri;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9cb197288f28acf529ff369cdceec931->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
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
        exception_tb = MAKE_TRACEBACK(frame_9cb197288f28acf529ff369cdceec931, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9cb197288f28acf529ff369cdceec931->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9cb197288f28acf529ff369cdceec931, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9cb197288f28acf529ff369cdceec931,
        type_description_1,
        par_uri
    );


    // Release cached frame if used for exception.
    if (frame_9cb197288f28acf529ff369cdceec931 == cache_frame_9cb197288f28acf529ff369cdceec931) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9cb197288f28acf529ff369cdceec931);
        cache_frame_9cb197288f28acf529ff369cdceec931 = NULL;
    }

    assertFrameObject(frame_9cb197288f28acf529ff369cdceec931);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$uri_validate$$$function__2_is_uri_reference(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[0];
    struct Nuitka_FrameObject *frame_0ca9282e77e69ba4c88d6801d9c970bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0ca9282e77e69ba4c88d6801d9c970bc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0ca9282e77e69ba4c88d6801d9c970bc)) {
        Py_XDECREF(cache_frame_0ca9282e77e69ba4c88d6801d9c970bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ca9282e77e69ba4c88d6801d9c970bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ca9282e77e69ba4c88d6801d9c970bc = MAKE_FUNCTION_FRAME(codeobj_0ca9282e77e69ba4c88d6801d9c970bc, module_oauthlib$uri_validate, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0ca9282e77e69ba4c88d6801d9c970bc->m_type_description == NULL);
    frame_0ca9282e77e69ba4c88d6801d9c970bc = cache_frame_0ca9282e77e69ba4c88d6801d9c970bc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0ca9282e77e69ba4c88d6801d9c970bc);
    assert(Py_REFCNT(frame_0ca9282e77e69ba4c88d6801d9c970bc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_2 = par_uri;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0ca9282e77e69ba4c88d6801d9c970bc->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
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
        exception_tb = MAKE_TRACEBACK(frame_0ca9282e77e69ba4c88d6801d9c970bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ca9282e77e69ba4c88d6801d9c970bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ca9282e77e69ba4c88d6801d9c970bc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ca9282e77e69ba4c88d6801d9c970bc,
        type_description_1,
        par_uri
    );


    // Release cached frame if used for exception.
    if (frame_0ca9282e77e69ba4c88d6801d9c970bc == cache_frame_0ca9282e77e69ba4c88d6801d9c970bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0ca9282e77e69ba4c88d6801d9c970bc);
        cache_frame_0ca9282e77e69ba4c88d6801d9c970bc = NULL;
    }

    assertFrameObject(frame_0ca9282e77e69ba4c88d6801d9c970bc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$uri_validate$$$function__3_is_absolute_uri(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[0];
    struct Nuitka_FrameObject *frame_042793bd6e60ce171a163c51f1b0b190;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_042793bd6e60ce171a163c51f1b0b190 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_042793bd6e60ce171a163c51f1b0b190)) {
        Py_XDECREF(cache_frame_042793bd6e60ce171a163c51f1b0b190);

#if _DEBUG_REFCOUNTS
        if (cache_frame_042793bd6e60ce171a163c51f1b0b190 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_042793bd6e60ce171a163c51f1b0b190 = MAKE_FUNCTION_FRAME(codeobj_042793bd6e60ce171a163c51f1b0b190, module_oauthlib$uri_validate, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_042793bd6e60ce171a163c51f1b0b190->m_type_description == NULL);
    frame_042793bd6e60ce171a163c51f1b0b190 = cache_frame_042793bd6e60ce171a163c51f1b0b190;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_042793bd6e60ce171a163c51f1b0b190);
    assert(Py_REFCNT(frame_042793bd6e60ce171a163c51f1b0b190) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_2 = par_uri;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_042793bd6e60ce171a163c51f1b0b190->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
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
        exception_tb = MAKE_TRACEBACK(frame_042793bd6e60ce171a163c51f1b0b190, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_042793bd6e60ce171a163c51f1b0b190->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_042793bd6e60ce171a163c51f1b0b190, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_042793bd6e60ce171a163c51f1b0b190,
        type_description_1,
        par_uri
    );


    // Release cached frame if used for exception.
    if (frame_042793bd6e60ce171a163c51f1b0b190 == cache_frame_042793bd6e60ce171a163c51f1b0b190) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_042793bd6e60ce171a163c51f1b0b190);
        cache_frame_042793bd6e60ce171a163c51f1b0b190 = NULL;
    }

    assertFrameObject(frame_042793bd6e60ce171a163c51f1b0b190);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_oauthlib$uri_validate$$$function__1_is_uri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$uri_validate$$$function__1_is_uri,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9cb197288f28acf529ff369cdceec931,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$uri_validate,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$uri_validate$$$function__2_is_uri_reference() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$uri_validate$$$function__2_is_uri_reference,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0ca9282e77e69ba4c88d6801d9c970bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$uri_validate,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$uri_validate$$$function__3_is_absolute_uri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$uri_validate$$$function__3_is_absolute_uri,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_042793bd6e60ce171a163c51f1b0b190,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$uri_validate,
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

function_impl_code functable_oauthlib$uri_validate[] = {
    impl_oauthlib$uri_validate$$$function__1_is_uri,
    impl_oauthlib$uri_validate$$$function__2_is_uri_reference,
    impl_oauthlib$uri_validate$$$function__3_is_absolute_uri,
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

    function_impl_code *current = functable_oauthlib$uri_validate;
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

    if (offset > sizeof(functable_oauthlib$uri_validate) || offset < 0) {
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
        functable_oauthlib$uri_validate[offset],
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
        module_oauthlib$uri_validate,
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
PyObject *modulecode_oauthlib$uri_validate(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("oauthlib.uri_validate");

    // Store the module for future use.
    module_oauthlib$uri_validate = module;

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
        PRINT_STRING("oauthlib.uri_validate: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("oauthlib.uri_validate: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("oauthlib.uri_validate: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initoauthlib$uri_validate\n");

    moduledict_oauthlib$uri_validate = MODULE_DICT(module_oauthlib$uri_validate);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_oauthlib$uri_validate,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_oauthlib$uri_validate,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[69]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_oauthlib$uri_validate,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$uri_validate,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$uri_validate,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_oauthlib$uri_validate);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_oauthlib$uri_validate);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_84d182a6a37fcecdd4606ef1e99c4d66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_2);
    }
    frame_84d182a6a37fcecdd4606ef1e99c4d66 = MAKE_MODULE_FRAME(codeobj_84d182a6a37fcecdd4606ef1e99c4d66, module_oauthlib$uri_validate);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_84d182a6a37fcecdd4606ef1e99c4d66);
    assert(Py_REFCNT(frame_84d182a6a37fcecdd4606ef1e99c4d66) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[8];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[10]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[10]);

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
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[14];
        frame_84d182a6a37fcecdd4606ef1e99c4d66->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[21];
        tmp_mod_expr_right_1 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[23];
        tmp_mod_expr_right_2 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        tmp_mod_expr_left_3 = mod_consts[29];
        tmp_mod_expr_right_3 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        tmp_mod_expr_left_4 = mod_consts[31];
        tmp_mod_expr_right_4 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        tmp_mod_expr_left_5 = mod_consts[33];
        tmp_mod_expr_right_5 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        tmp_mod_expr_left_6 = mod_consts[35];
        tmp_mod_expr_right_6 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        tmp_mod_expr_left_7 = mod_consts[37];
        tmp_mod_expr_right_7 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        tmp_mod_expr_left_8 = mod_consts[41];
        tmp_mod_expr_right_8 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        tmp_mod_expr_left_9 = mod_consts[43];
        tmp_mod_expr_right_9 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        tmp_mod_expr_left_10 = mod_consts[45];
        tmp_mod_expr_right_10 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        tmp_mod_expr_left_11 = mod_consts[47];
        tmp_mod_expr_right_11 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        tmp_mod_expr_left_12 = mod_consts[49];
        tmp_mod_expr_right_12 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        tmp_mod_expr_left_13 = mod_consts[51];
        tmp_mod_expr_right_13 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        tmp_mod_expr_left_14 = mod_consts[53];
        tmp_mod_expr_right_14 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_24 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        tmp_mod_expr_left_15 = mod_consts[55];
        tmp_mod_expr_right_15 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_25 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        tmp_mod_expr_left_16 = mod_consts[57];
        tmp_mod_expr_right_16 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_26 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_mod_expr_left_17;
        PyObject *tmp_mod_expr_right_17;
        tmp_mod_expr_left_17 = mod_consts[59];
        tmp_mod_expr_right_17 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_27 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_mod_expr_left_18;
        PyObject *tmp_mod_expr_right_18;
        tmp_mod_expr_left_18 = mod_consts[61];
        tmp_mod_expr_right_18 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_28 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_mod_expr_left_19;
        PyObject *tmp_mod_expr_right_19;
        tmp_mod_expr_left_19 = mod_consts[63];
        tmp_mod_expr_right_19 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_29 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_mod_expr_left_20;
        PyObject *tmp_mod_expr_right_20;
        tmp_mod_expr_left_20 = mod_consts[65];
        tmp_mod_expr_right_20 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_30 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_mod_expr_left_21;
        PyObject *tmp_mod_expr_right_21;
        tmp_mod_expr_left_21 = mod_consts[67];
        tmp_mod_expr_right_21 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_31 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_mod_expr_left_22;
        PyObject *tmp_mod_expr_right_22;
        tmp_mod_expr_left_22 = mod_consts[71];
        tmp_mod_expr_right_22 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_33 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_mod_expr_left_23;
        PyObject *tmp_mod_expr_right_23;
        tmp_mod_expr_left_23 = mod_consts[73];
        tmp_mod_expr_right_23 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_34 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_mod_expr_left_24;
        PyObject *tmp_mod_expr_right_24;
        tmp_mod_expr_left_24 = mod_consts[73];
        tmp_mod_expr_right_24 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_35 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_mod_expr_left_25;
        PyObject *tmp_mod_expr_right_25;
        tmp_mod_expr_left_25 = mod_consts[76];
        tmp_mod_expr_right_25 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_36 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_25, tmp_mod_expr_right_25);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_mod_expr_left_26;
        PyObject *tmp_mod_expr_right_26;
        tmp_mod_expr_left_26 = mod_consts[78];
        tmp_mod_expr_right_26 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_37 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_26, tmp_mod_expr_right_26);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_mod_expr_left_27;
        PyObject *tmp_mod_expr_right_27;
        tmp_mod_expr_left_27 = mod_consts[80];
        tmp_mod_expr_right_27 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_38 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_27, tmp_mod_expr_right_27);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_mod_expr_left_28;
        PyObject *tmp_mod_expr_right_28;
        tmp_mod_expr_left_28 = mod_consts[82];
        tmp_mod_expr_right_28 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_39 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_28, tmp_mod_expr_right_28);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_mod_expr_left_29;
        PyObject *tmp_mod_expr_right_29;
        tmp_mod_expr_left_29 = mod_consts[83];
        tmp_mod_expr_right_29 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_40 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_29, tmp_mod_expr_right_29);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_mod_expr_left_30;
        PyObject *tmp_mod_expr_right_30;
        tmp_mod_expr_left_30 = mod_consts[84];
        tmp_mod_expr_right_30 = (PyObject *)moduledict_oauthlib$uri_validate;
        tmp_assign_source_41 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_30, tmp_mod_expr_right_30);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_41);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84d182a6a37fcecdd4606ef1e99c4d66, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84d182a6a37fcecdd4606ef1e99c4d66->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84d182a6a37fcecdd4606ef1e99c4d66, exception_lineno);
    }



    assertFrameObject(frame_84d182a6a37fcecdd4606ef1e99c4d66);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_oauthlib$uri_validate$$$function__1_is_uri();

        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_oauthlib$uri_validate$$$function__2_is_uri_reference();

        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_oauthlib$uri_validate$$$function__3_is_absolute_uri();

        UPDATE_STRING_DICT1(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_44);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("oauthlib.uri_validate", false);

    Py_INCREF(module_oauthlib$uri_validate);
    return module_oauthlib$uri_validate;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$uri_validate, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("oauthlib$uri_validate", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
