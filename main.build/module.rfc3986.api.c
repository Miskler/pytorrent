/* Generated code for Python module 'rfc3986.api'
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

/* The "module_rfc3986$api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rfc3986$api;
PyDictObject *moduledict_rfc3986$api;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[41];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[41];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("rfc3986.api"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 41; i++) {
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
void checkModuleConstants_rfc3986$api(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 41; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9b1c8412b05e48360da31b546c4e7d91;
static PyCodeObject *codeobj_6bdececae4b200157cb8f7945a84eef4;
static PyCodeObject *codeobj_8a32bfc124c78c2fd2fbfb0a03fbd170;
static PyCodeObject *codeobj_1c3fbdc9303e7c0ff0efe1b01d0f232e;
static PyCodeObject *codeobj_06b6656f2586e2d07d54a0211c6a6846;
static PyCodeObject *codeobj_6561d75ad04bbeab8df78ed91d288eba;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[15]; CHECK_OBJECT(module_filename_obj);
    codeobj_9b1c8412b05e48360da31b546c4e7d91 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_6bdececae4b200157cb8f7945a84eef4 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[36], NULL, 2, 0, 0);
    codeobj_8a32bfc124c78c2fd2fbfb0a03fbd170 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[37], NULL, 2, 0, 0);
    codeobj_1c3fbdc9303e7c0ff0efe1b01d0f232e = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[38], NULL, 2, 0, 0);
    codeobj_06b6656f2586e2d07d54a0211c6a6846 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[39], NULL, 2, 0, 0);
    codeobj_6561d75ad04bbeab8df78ed91d288eba = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[39], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_rfc3986$api$$$function__1_uri_reference(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$api$$$function__2_iri_reference(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$api$$$function__3_is_valid_uri(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$api$$$function__4_normalize_uri(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$api$$$function__5_urlparse(PyObject *defaults);


// The module function definitions.
static PyObject *impl_rfc3986$api$$$function__1_uri_reference(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    struct Nuitka_FrameObject *frame_06b6656f2586e2d07d54a0211c6a6846;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_06b6656f2586e2d07d54a0211c6a6846 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_06b6656f2586e2d07d54a0211c6a6846)) {
        Py_XDECREF(cache_frame_06b6656f2586e2d07d54a0211c6a6846);

#if _DEBUG_REFCOUNTS
        if (cache_frame_06b6656f2586e2d07d54a0211c6a6846 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_06b6656f2586e2d07d54a0211c6a6846 = MAKE_FUNCTION_FRAME(codeobj_06b6656f2586e2d07d54a0211c6a6846, module_rfc3986$api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_06b6656f2586e2d07d54a0211c6a6846->m_type_description == NULL);
    frame_06b6656f2586e2d07d54a0211c6a6846 = cache_frame_06b6656f2586e2d07d54a0211c6a6846;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_06b6656f2586e2d07d54a0211c6a6846);
    assert(Py_REFCNT(frame_06b6656f2586e2d07d54a0211c6a6846) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_1 = par_uri;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_2 = par_encoding;
        frame_06b6656f2586e2d07d54a0211c6a6846->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_06b6656f2586e2d07d54a0211c6a6846, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_06b6656f2586e2d07d54a0211c6a6846->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_06b6656f2586e2d07d54a0211c6a6846, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_06b6656f2586e2d07d54a0211c6a6846,
        type_description_1,
        par_uri,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_06b6656f2586e2d07d54a0211c6a6846 == cache_frame_06b6656f2586e2d07d54a0211c6a6846) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_06b6656f2586e2d07d54a0211c6a6846);
        cache_frame_06b6656f2586e2d07d54a0211c6a6846 = NULL;
    }

    assertFrameObject(frame_06b6656f2586e2d07d54a0211c6a6846);

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
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$api$$$function__2_iri_reference(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_iri = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    struct Nuitka_FrameObject *frame_6bdececae4b200157cb8f7945a84eef4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6bdececae4b200157cb8f7945a84eef4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6bdececae4b200157cb8f7945a84eef4)) {
        Py_XDECREF(cache_frame_6bdececae4b200157cb8f7945a84eef4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6bdececae4b200157cb8f7945a84eef4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6bdececae4b200157cb8f7945a84eef4 = MAKE_FUNCTION_FRAME(codeobj_6bdececae4b200157cb8f7945a84eef4, module_rfc3986$api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6bdececae4b200157cb8f7945a84eef4->m_type_description == NULL);
    frame_6bdececae4b200157cb8f7945a84eef4 = cache_frame_6bdececae4b200157cb8f7945a84eef4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6bdececae4b200157cb8f7945a84eef4);
    assert(Py_REFCNT(frame_6bdececae4b200157cb8f7945a84eef4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_iri);
        tmp_args_element_value_1 = par_iri;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_2 = par_encoding;
        frame_6bdececae4b200157cb8f7945a84eef4->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6bdececae4b200157cb8f7945a84eef4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6bdececae4b200157cb8f7945a84eef4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6bdececae4b200157cb8f7945a84eef4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6bdececae4b200157cb8f7945a84eef4,
        type_description_1,
        par_iri,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_6bdececae4b200157cb8f7945a84eef4 == cache_frame_6bdececae4b200157cb8f7945a84eef4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6bdececae4b200157cb8f7945a84eef4);
        cache_frame_6bdececae4b200157cb8f7945a84eef4 = NULL;
    }

    assertFrameObject(frame_6bdececae4b200157cb8f7945a84eef4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_iri);
    Py_DECREF(par_iri);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_iri);
    Py_DECREF(par_iri);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$api$$$function__3_is_valid_uri(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_8a32bfc124c78c2fd2fbfb0a03fbd170;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a32bfc124c78c2fd2fbfb0a03fbd170 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8a32bfc124c78c2fd2fbfb0a03fbd170)) {
        Py_XDECREF(cache_frame_8a32bfc124c78c2fd2fbfb0a03fbd170);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a32bfc124c78c2fd2fbfb0a03fbd170 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a32bfc124c78c2fd2fbfb0a03fbd170 = MAKE_FUNCTION_FRAME(codeobj_8a32bfc124c78c2fd2fbfb0a03fbd170, module_rfc3986$api, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8a32bfc124c78c2fd2fbfb0a03fbd170->m_type_description == NULL);
    frame_8a32bfc124c78c2fd2fbfb0a03fbd170 = cache_frame_8a32bfc124c78c2fd2fbfb0a03fbd170;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8a32bfc124c78c2fd2fbfb0a03fbd170);
    assert(Py_REFCNT(frame_8a32bfc124c78c2fd2fbfb0a03fbd170) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dircall_arg2_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_1 = par_uri;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_2 = par_encoding;
        frame_8a32bfc124c78c2fd2fbfb0a03fbd170->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
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
        exception_tb = MAKE_TRACEBACK(frame_8a32bfc124c78c2fd2fbfb0a03fbd170, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a32bfc124c78c2fd2fbfb0a03fbd170->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a32bfc124c78c2fd2fbfb0a03fbd170, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a32bfc124c78c2fd2fbfb0a03fbd170,
        type_description_1,
        par_uri,
        par_encoding,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_8a32bfc124c78c2fd2fbfb0a03fbd170 == cache_frame_8a32bfc124c78c2fd2fbfb0a03fbd170) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8a32bfc124c78c2fd2fbfb0a03fbd170);
        cache_frame_8a32bfc124c78c2fd2fbfb0a03fbd170 = NULL;
    }

    assertFrameObject(frame_8a32bfc124c78c2fd2fbfb0a03fbd170);

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
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$api$$$function__4_normalize_uri(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    PyObject *var_normalized_reference = NULL;
    struct Nuitka_FrameObject *frame_1c3fbdc9303e7c0ff0efe1b01d0f232e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1c3fbdc9303e7c0ff0efe1b01d0f232e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1c3fbdc9303e7c0ff0efe1b01d0f232e)) {
        Py_XDECREF(cache_frame_1c3fbdc9303e7c0ff0efe1b01d0f232e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c3fbdc9303e7c0ff0efe1b01d0f232e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c3fbdc9303e7c0ff0efe1b01d0f232e = MAKE_FUNCTION_FRAME(codeobj_1c3fbdc9303e7c0ff0efe1b01d0f232e, module_rfc3986$api, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c3fbdc9303e7c0ff0efe1b01d0f232e->m_type_description == NULL);
    frame_1c3fbdc9303e7c0ff0efe1b01d0f232e = cache_frame_1c3fbdc9303e7c0ff0efe1b01d0f232e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c3fbdc9303e7c0ff0efe1b01d0f232e);
    assert(Py_REFCNT(frame_1c3fbdc9303e7c0ff0efe1b01d0f232e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_1 = par_uri;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_2 = par_encoding;
        frame_1c3fbdc9303e7c0ff0efe1b01d0f232e->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[1],
                call_args
            );
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1c3fbdc9303e7c0ff0efe1b01d0f232e->m_frame.f_lineno = 92;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_normalized_reference == NULL);
        var_normalized_reference = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_normalized_reference);
        tmp_called_instance_3 = var_normalized_reference;
        frame_1c3fbdc9303e7c0ff0efe1b01d0f232e->m_frame.f_lineno = 93;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[8]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c3fbdc9303e7c0ff0efe1b01d0f232e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c3fbdc9303e7c0ff0efe1b01d0f232e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c3fbdc9303e7c0ff0efe1b01d0f232e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c3fbdc9303e7c0ff0efe1b01d0f232e,
        type_description_1,
        par_uri,
        par_encoding,
        var_normalized_reference
    );


    // Release cached frame if used for exception.
    if (frame_1c3fbdc9303e7c0ff0efe1b01d0f232e == cache_frame_1c3fbdc9303e7c0ff0efe1b01d0f232e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c3fbdc9303e7c0ff0efe1b01d0f232e);
        cache_frame_1c3fbdc9303e7c0ff0efe1b01d0f232e = NULL;
    }

    assertFrameObject(frame_1c3fbdc9303e7c0ff0efe1b01d0f232e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_normalized_reference);
    Py_DECREF(var_normalized_reference);
    var_normalized_reference = NULL;
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

    Py_XDECREF(var_normalized_reference);
    var_normalized_reference = NULL;
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
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$api$$$function__5_urlparse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    struct Nuitka_FrameObject *frame_6561d75ad04bbeab8df78ed91d288eba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6561d75ad04bbeab8df78ed91d288eba = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6561d75ad04bbeab8df78ed91d288eba)) {
        Py_XDECREF(cache_frame_6561d75ad04bbeab8df78ed91d288eba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6561d75ad04bbeab8df78ed91d288eba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6561d75ad04bbeab8df78ed91d288eba = MAKE_FUNCTION_FRAME(codeobj_6561d75ad04bbeab8df78ed91d288eba, module_rfc3986$api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6561d75ad04bbeab8df78ed91d288eba->m_type_description == NULL);
    frame_6561d75ad04bbeab8df78ed91d288eba = cache_frame_6561d75ad04bbeab8df78ed91d288eba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6561d75ad04bbeab8df78ed91d288eba);
    assert(Py_REFCNT(frame_6561d75ad04bbeab8df78ed91d288eba) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_tuple_element_1 = par_uri;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_encoding);
        tmp_tuple_element_1 = par_encoding;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[11]);
        frame_6561d75ad04bbeab8df78ed91d288eba->m_frame.f_lineno = 106;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6561d75ad04bbeab8df78ed91d288eba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6561d75ad04bbeab8df78ed91d288eba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6561d75ad04bbeab8df78ed91d288eba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6561d75ad04bbeab8df78ed91d288eba,
        type_description_1,
        par_uri,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_6561d75ad04bbeab8df78ed91d288eba == cache_frame_6561d75ad04bbeab8df78ed91d288eba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6561d75ad04bbeab8df78ed91d288eba);
        cache_frame_6561d75ad04bbeab8df78ed91d288eba = NULL;
    }

    assertFrameObject(frame_6561d75ad04bbeab8df78ed91d288eba);

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
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_rfc3986$api$$$function__1_uri_reference(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$api$$$function__1_uri_reference,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_06b6656f2586e2d07d54a0211c6a6846,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$api,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$api$$$function__2_iri_reference(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$api$$$function__2_iri_reference,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6bdececae4b200157cb8f7945a84eef4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$api,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$api$$$function__3_is_valid_uri(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$api$$$function__3_is_valid_uri,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8a32bfc124c78c2fd2fbfb0a03fbd170,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$api,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$api$$$function__4_normalize_uri(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$api$$$function__4_normalize_uri,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c3fbdc9303e7c0ff0efe1b01d0f232e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$api,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$api$$$function__5_urlparse(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$api$$$function__5_urlparse,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6561d75ad04bbeab8df78ed91d288eba,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$api,
        mod_consts[12],
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

function_impl_code functable_rfc3986$api[] = {
    impl_rfc3986$api$$$function__1_uri_reference,
    impl_rfc3986$api$$$function__2_iri_reference,
    impl_rfc3986$api$$$function__3_is_valid_uri,
    impl_rfc3986$api$$$function__4_normalize_uri,
    impl_rfc3986$api$$$function__5_urlparse,
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

    function_impl_code *current = functable_rfc3986$api;
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

    if (offset > sizeof(functable_rfc3986$api) || offset < 0) {
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
        functable_rfc3986$api[offset],
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
        module_rfc3986$api,
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
PyObject *modulecode_rfc3986$api(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("rfc3986.api");

    // Store the module for future use.
    module_rfc3986$api = module;

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
        PRINT_STRING("rfc3986.api: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("rfc3986.api: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("rfc3986.api: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initrfc3986$api\n");

    moduledict_rfc3986$api = MODULE_DICT(module_rfc3986$api);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_rfc3986$api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_rfc3986$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[40]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_rfc3986$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_rfc3986$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_rfc3986$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_rfc3986$api);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_rfc3986$api, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_rfc3986$api, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_rfc3986$api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_rfc3986$api);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_rfc3986$api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_9b1c8412b05e48360da31b546c4e7d91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_2);
    }
    frame_9b1c8412b05e48360da31b546c4e7d91 = MAKE_MODULE_FRAME(codeobj_9b1c8412b05e48360da31b546c4e7d91, module_rfc3986$api);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b1c8412b05e48360da31b546c4e7d91);
    assert(Py_REFCNT(frame_9b1c8412b05e48360da31b546c4e7d91) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[15];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_rfc3986$api;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[22];
        tmp_level_value_1 = mod_consts[23];
        frame_9b1c8412b05e48360da31b546c4e7d91->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_rfc3986$api,
                mod_consts[3],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[25];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_rfc3986$api;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[26];
        tmp_level_value_2 = mod_consts[23];
        frame_9b1c8412b05e48360da31b546c4e7d91->m_frame.f_lineno = 23;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_rfc3986$api,
                mod_consts[10],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[10]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[27];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_rfc3986$api;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[28];
        tmp_level_value_3 = mod_consts[23];
        frame_9b1c8412b05e48360da31b546c4e7d91->m_frame.f_lineno = 24;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_rfc3986$api,
                mod_consts[0],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9b1c8412b05e48360da31b546c4e7d91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b1c8412b05e48360da31b546c4e7d91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b1c8412b05e48360da31b546c4e7d91, exception_lineno);
    }



    assertFrameObject(frame_9b1c8412b05e48360da31b546c4e7d91);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[29];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_7 = MAKE_FUNCTION_rfc3986$api$$$function__1_uri_reference(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[29];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_8 = MAKE_FUNCTION_rfc3986$api$$$function__2_iri_reference(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[29];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_9 = MAKE_FUNCTION_rfc3986$api$$$function__3_is_valid_uri(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[29];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_10 = MAKE_FUNCTION_rfc3986$api$$$function__4_normalize_uri(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[29];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_11 = MAKE_FUNCTION_rfc3986$api$$$function__5_urlparse(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_rfc3986$api, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_11);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("rfc3986.api", false);

    Py_INCREF(module_rfc3986$api);
    return module_rfc3986$api;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$api, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("rfc3986$api", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
