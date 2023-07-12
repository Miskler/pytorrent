/* Generated code for Python module 'flet_core.border_radius'
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

/* The "module_flet_core$border_radius" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$border_radius;
PyDictObject *moduledict_flet_core$border_radius;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[39];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[39];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.border_radius"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 39; i++) {
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
void checkModuleConstants_flet_core$border_radius(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 39; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c97799cdf54a88c10a572ba488c9153f;
static PyCodeObject *codeobj_3a7f289ea169f90f30caf4586c909be2;
static PyCodeObject *codeobj_b602d02c082ea3f6910dfb0f1af88f6f;
static PyCodeObject *codeobj_981421b23ca7496005c213fbd0be1505;
static PyCodeObject *codeobj_7d29e3f1d97185eb8ea45ee8350c59c8;
static PyCodeObject *codeobj_843277bae4fc34a67952c7a40d06ad04;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[3]; CHECK_OBJECT(module_filename_obj);
    codeobj_c97799cdf54a88c10a572ba488c9153f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[33], mod_consts[33], NULL, NULL, 0, 0, 0);
    codeobj_3a7f289ea169f90f30caf4586c909be2 = MAKE_CODE_OBJECT(module_filename_obj, 6, CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[34], NULL, 0, 0, 0);
    codeobj_b602d02c082ea3f6910dfb0f1af88f6f = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[35], NULL, 1, 0, 0);
    codeobj_981421b23ca7496005c213fbd0be1505 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[36], NULL, 2, 0, 0);
    codeobj_7d29e3f1d97185eb8ea45ee8350c59c8 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[1], NULL, 4, 0, 0);
    codeobj_843277bae4fc34a67952c7a40d06ad04 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[37], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_flet_core$border_radius$$$function__1_all(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$border_radius$$$function__2_horizontal(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$border_radius$$$function__3_vertical(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$border_radius$$$function__4_only(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$border_radius$$$function__1_all(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_b602d02c082ea3f6910dfb0f1af88f6f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b602d02c082ea3f6910dfb0f1af88f6f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b602d02c082ea3f6910dfb0f1af88f6f)) {
        Py_XDECREF(cache_frame_b602d02c082ea3f6910dfb0f1af88f6f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b602d02c082ea3f6910dfb0f1af88f6f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b602d02c082ea3f6910dfb0f1af88f6f = MAKE_FUNCTION_FRAME(codeobj_b602d02c082ea3f6910dfb0f1af88f6f, module_flet_core$border_radius, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b602d02c082ea3f6910dfb0f1af88f6f->m_type_description == NULL);
    frame_b602d02c082ea3f6910dfb0f1af88f6f = cache_frame_b602d02c082ea3f6910dfb0f1af88f6f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b602d02c082ea3f6910dfb0f1af88f6f);
    assert(Py_REFCNT(frame_b602d02c082ea3f6910dfb0f1af88f6f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_value_0_1 = par_value;
        CHECK_OBJECT(par_value);
        tmp_kw_call_value_1_1 = par_value;
        CHECK_OBJECT(par_value);
        tmp_kw_call_value_2_1 = par_value;
        CHECK_OBJECT(par_value);
        tmp_kw_call_value_3_1 = par_value;
        frame_b602d02c082ea3f6910dfb0f1af88f6f->m_frame.f_lineno = 14;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[1]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
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
        exception_tb = MAKE_TRACEBACK(frame_b602d02c082ea3f6910dfb0f1af88f6f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b602d02c082ea3f6910dfb0f1af88f6f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b602d02c082ea3f6910dfb0f1af88f6f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b602d02c082ea3f6910dfb0f1af88f6f,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b602d02c082ea3f6910dfb0f1af88f6f == cache_frame_b602d02c082ea3f6910dfb0f1af88f6f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b602d02c082ea3f6910dfb0f1af88f6f);
        cache_frame_b602d02c082ea3f6910dfb0f1af88f6f = NULL;
    }

    assertFrameObject(frame_b602d02c082ea3f6910dfb0f1af88f6f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$border_radius$$$function__2_horizontal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_981421b23ca7496005c213fbd0be1505;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_981421b23ca7496005c213fbd0be1505 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_981421b23ca7496005c213fbd0be1505)) {
        Py_XDECREF(cache_frame_981421b23ca7496005c213fbd0be1505);

#if _DEBUG_REFCOUNTS
        if (cache_frame_981421b23ca7496005c213fbd0be1505 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_981421b23ca7496005c213fbd0be1505 = MAKE_FUNCTION_FRAME(codeobj_981421b23ca7496005c213fbd0be1505, module_flet_core$border_radius, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_981421b23ca7496005c213fbd0be1505->m_type_description == NULL);
    frame_981421b23ca7496005c213fbd0be1505 = cache_frame_981421b23ca7496005c213fbd0be1505;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_981421b23ca7496005c213fbd0be1505);
    assert(Py_REFCNT(frame_981421b23ca7496005c213fbd0be1505) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_left);
        tmp_kw_call_value_0_1 = par_left;
        CHECK_OBJECT(par_right);
        tmp_kw_call_value_1_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_kw_call_value_2_1 = par_left;
        CHECK_OBJECT(par_right);
        tmp_kw_call_value_3_1 = par_right;
        frame_981421b23ca7496005c213fbd0be1505->m_frame.f_lineno = 20;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[1]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
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
        exception_tb = MAKE_TRACEBACK(frame_981421b23ca7496005c213fbd0be1505, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_981421b23ca7496005c213fbd0be1505->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_981421b23ca7496005c213fbd0be1505, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_981421b23ca7496005c213fbd0be1505,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_981421b23ca7496005c213fbd0be1505 == cache_frame_981421b23ca7496005c213fbd0be1505) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_981421b23ca7496005c213fbd0be1505);
        cache_frame_981421b23ca7496005c213fbd0be1505 = NULL;
    }

    assertFrameObject(frame_981421b23ca7496005c213fbd0be1505);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$border_radius$$$function__3_vertical(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_top = python_pars[0];
    PyObject *par_bottom = python_pars[1];
    struct Nuitka_FrameObject *frame_843277bae4fc34a67952c7a40d06ad04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_843277bae4fc34a67952c7a40d06ad04 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_843277bae4fc34a67952c7a40d06ad04)) {
        Py_XDECREF(cache_frame_843277bae4fc34a67952c7a40d06ad04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_843277bae4fc34a67952c7a40d06ad04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_843277bae4fc34a67952c7a40d06ad04 = MAKE_FUNCTION_FRAME(codeobj_843277bae4fc34a67952c7a40d06ad04, module_flet_core$border_radius, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_843277bae4fc34a67952c7a40d06ad04->m_type_description == NULL);
    frame_843277bae4fc34a67952c7a40d06ad04 = cache_frame_843277bae4fc34a67952c7a40d06ad04;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_843277bae4fc34a67952c7a40d06ad04);
    assert(Py_REFCNT(frame_843277bae4fc34a67952c7a40d06ad04) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_top);
        tmp_kw_call_value_0_1 = par_top;
        CHECK_OBJECT(par_top);
        tmp_kw_call_value_1_1 = par_top;
        CHECK_OBJECT(par_bottom);
        tmp_kw_call_value_2_1 = par_bottom;
        CHECK_OBJECT(par_bottom);
        tmp_kw_call_value_3_1 = par_bottom;
        frame_843277bae4fc34a67952c7a40d06ad04->m_frame.f_lineno = 26;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[1]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
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
        exception_tb = MAKE_TRACEBACK(frame_843277bae4fc34a67952c7a40d06ad04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_843277bae4fc34a67952c7a40d06ad04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_843277bae4fc34a67952c7a40d06ad04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_843277bae4fc34a67952c7a40d06ad04,
        type_description_1,
        par_top,
        par_bottom
    );


    // Release cached frame if used for exception.
    if (frame_843277bae4fc34a67952c7a40d06ad04 == cache_frame_843277bae4fc34a67952c7a40d06ad04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_843277bae4fc34a67952c7a40d06ad04);
        cache_frame_843277bae4fc34a67952c7a40d06ad04 = NULL;
    }

    assertFrameObject(frame_843277bae4fc34a67952c7a40d06ad04);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_top);
    Py_DECREF(par_top);
    CHECK_OBJECT(par_bottom);
    Py_DECREF(par_bottom);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_top);
    Py_DECREF(par_top);
    CHECK_OBJECT(par_bottom);
    Py_DECREF(par_bottom);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$border_radius$$$function__4_only(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_top_left = python_pars[0];
    PyObject *par_top_right = python_pars[1];
    PyObject *par_bottom_left = python_pars[2];
    PyObject *par_bottom_right = python_pars[3];
    struct Nuitka_FrameObject *frame_7d29e3f1d97185eb8ea45ee8350c59c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d29e3f1d97185eb8ea45ee8350c59c8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d29e3f1d97185eb8ea45ee8350c59c8)) {
        Py_XDECREF(cache_frame_7d29e3f1d97185eb8ea45ee8350c59c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d29e3f1d97185eb8ea45ee8350c59c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d29e3f1d97185eb8ea45ee8350c59c8 = MAKE_FUNCTION_FRAME(codeobj_7d29e3f1d97185eb8ea45ee8350c59c8, module_flet_core$border_radius, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d29e3f1d97185eb8ea45ee8350c59c8->m_type_description == NULL);
    frame_7d29e3f1d97185eb8ea45ee8350c59c8 = cache_frame_7d29e3f1d97185eb8ea45ee8350c59c8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7d29e3f1d97185eb8ea45ee8350c59c8);
    assert(Py_REFCNT(frame_7d29e3f1d97185eb8ea45ee8350c59c8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_top_left);
        tmp_kw_call_value_0_1 = par_top_left;
        CHECK_OBJECT(par_top_right);
        tmp_kw_call_value_1_1 = par_top_right;
        CHECK_OBJECT(par_bottom_left);
        tmp_kw_call_value_2_1 = par_bottom_left;
        CHECK_OBJECT(par_bottom_right);
        tmp_kw_call_value_3_1 = par_bottom_right;
        frame_7d29e3f1d97185eb8ea45ee8350c59c8->m_frame.f_lineno = 37;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[1]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
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
        exception_tb = MAKE_TRACEBACK(frame_7d29e3f1d97185eb8ea45ee8350c59c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d29e3f1d97185eb8ea45ee8350c59c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d29e3f1d97185eb8ea45ee8350c59c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d29e3f1d97185eb8ea45ee8350c59c8,
        type_description_1,
        par_top_left,
        par_top_right,
        par_bottom_left,
        par_bottom_right
    );


    // Release cached frame if used for exception.
    if (frame_7d29e3f1d97185eb8ea45ee8350c59c8 == cache_frame_7d29e3f1d97185eb8ea45ee8350c59c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d29e3f1d97185eb8ea45ee8350c59c8);
        cache_frame_7d29e3f1d97185eb8ea45ee8350c59c8 = NULL;
    }

    assertFrameObject(frame_7d29e3f1d97185eb8ea45ee8350c59c8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_top_left);
    Py_DECREF(par_top_left);
    CHECK_OBJECT(par_top_right);
    Py_DECREF(par_top_right);
    CHECK_OBJECT(par_bottom_left);
    Py_DECREF(par_bottom_left);
    CHECK_OBJECT(par_bottom_right);
    Py_DECREF(par_bottom_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_top_left);
    Py_DECREF(par_top_left);
    CHECK_OBJECT(par_top_right);
    Py_DECREF(par_top_right);
    CHECK_OBJECT(par_bottom_left);
    Py_DECREF(par_bottom_left);
    CHECK_OBJECT(par_bottom_right);
    Py_DECREF(par_bottom_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_flet_core$border_radius$$$function__1_all(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$border_radius$$$function__1_all,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b602d02c082ea3f6910dfb0f1af88f6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$border_radius,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$border_radius$$$function__2_horizontal(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$border_radius$$$function__2_horizontal,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_981421b23ca7496005c213fbd0be1505,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$border_radius,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$border_radius$$$function__3_vertical(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$border_radius$$$function__3_vertical,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_843277bae4fc34a67952c7a40d06ad04,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$border_radius,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$border_radius$$$function__4_only(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$border_radius$$$function__4_only,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d29e3f1d97185eb8ea45ee8350c59c8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$border_radius,
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

function_impl_code functable_flet_core$border_radius[] = {
    impl_flet_core$border_radius$$$function__1_all,
    impl_flet_core$border_radius$$$function__2_horizontal,
    impl_flet_core$border_radius$$$function__3_vertical,
    impl_flet_core$border_radius$$$function__4_only,
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

    function_impl_code *current = functable_flet_core$border_radius;
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

    if (offset > sizeof(functable_flet_core$border_radius) || offset < 0) {
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
        functable_flet_core$border_radius[offset],
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
        module_flet_core$border_radius,
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
PyObject *modulecode_flet_core$border_radius(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.border_radius");

    // Store the module for future use.
    module_flet_core$border_radius = module;

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
        PRINT_STRING("flet_core.border_radius: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.border_radius: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.border_radius: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$border_radius\n");

    moduledict_flet_core$border_radius = MODULE_DICT(module_flet_core$border_radius);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$border_radius,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$border_radius,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[38]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$border_radius,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$border_radius,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$border_radius,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$border_radius);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$border_radius, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$border_radius, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$border_radius, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$border_radius);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$border_radius, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_c97799cdf54a88c10a572ba488c9153f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_flet_core$border_radius$$$class__1_BorderRadius_6 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_3a7f289ea169f90f30caf4586c909be2_2;
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
        UPDATE_STRING_DICT0(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[3];
        UPDATE_STRING_DICT0(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_2);
    }
    frame_c97799cdf54a88c10a572ba488c9153f = MAKE_MODULE_FRAME(codeobj_c97799cdf54a88c10a572ba488c9153f, module_flet_core$border_radius);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c97799cdf54a88c10a572ba488c9153f);
    assert(Py_REFCNT(frame_c97799cdf54a88c10a572ba488c9153f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[3];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$border_radius;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[10];
        frame_c97799cdf54a88c10a572ba488c9153f->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet_core$border_radius,
                mod_consts[11],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[11]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$border_radius$$$class__1_BorderRadius_6 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[13];
        tmp_res = PyDict_SetItem(locals_flet_core$border_radius$$$class__1_BorderRadius_6, mod_consts[14], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[0];
        tmp_res = PyDict_SetItem(locals_flet_core$border_radius$$$class__1_BorderRadius_6, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_flet_core$border_radius$$$class__1_BorderRadius_6, mod_consts[16], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_3a7f289ea169f90f30caf4586c909be2_2 = MAKE_CLASS_FRAME(codeobj_3a7f289ea169f90f30caf4586c909be2, module_flet_core$border_radius, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3a7f289ea169f90f30caf4586c909be2_2);
        assert(Py_REFCNT(frame_3a7f289ea169f90f30caf4586c909be2_2) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_1 = mod_consts[17];
            tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            if (tmp_ass_subvalue_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_1 = DICT_GET_ITEM0(locals_flet_core$border_radius$$$class__1_BorderRadius_6, mod_consts[16]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[16]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 7;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 7;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_1 = mod_consts[18];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_2 = mod_consts[17];
            tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_ass_subvalue_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_2 = DICT_GET_ITEM0(locals_flet_core$border_radius$$$class__1_BorderRadius_6, mod_consts[16]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[16]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 8;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 8;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_2 = mod_consts[19];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_3 = mod_consts[17];
            tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_ass_subvalue_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_3 = DICT_GET_ITEM0(locals_flet_core$border_radius$$$class__1_BorderRadius_6, mod_consts[16]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[16]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 9;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 9;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_3 = mod_consts[20];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_4 = mod_consts[17];
            tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_ass_subvalue_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_4 = DICT_GET_ITEM0(locals_flet_core$border_radius$$$class__1_BorderRadius_6, mod_consts[16]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[16]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 10;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 10;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_4 = mod_consts[21];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3a7f289ea169f90f30caf4586c909be2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3a7f289ea169f90f30caf4586c909be2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3a7f289ea169f90f30caf4586c909be2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3a7f289ea169f90f30caf4586c909be2_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_3a7f289ea169f90f30caf4586c909be2_2);

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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[0];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_flet_core$border_radius$$$class__1_BorderRadius_6;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_c97799cdf54a88c10a572ba488c9153f->m_frame.f_lineno = 6;
            tmp_assign_source_9 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_9;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_args_element_value_1 = outline_0_var___class__;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_flet_core$border_radius$$$class__1_BorderRadius_6);
        locals_flet_core$border_radius$$$class__1_BorderRadius_6 = NULL;
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

        Py_DECREF(locals_flet_core$border_radius$$$class__1_BorderRadius_6);
        locals_flet_core$border_radius$$$class__1_BorderRadius_6 = NULL;
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
        exception_lineno = 6;
        goto try_except_handler_1;
        outline_result_1:;
        frame_c97799cdf54a88c10a572ba488c9153f->m_frame.f_lineno = 5;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[12], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_8);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c97799cdf54a88c10a572ba488c9153f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c97799cdf54a88c10a572ba488c9153f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c97799cdf54a88c10a572ba488c9153f, exception_lineno);
    }



    assertFrameObject(frame_c97799cdf54a88c10a572ba488c9153f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[23]);


        tmp_assign_source_10 = MAKE_FUNCTION_flet_core$border_radius$$$function__1_all(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_2;
        tmp_defaults_1 = mod_consts[25];
        tmp_annotations_2 = DICT_COPY(mod_consts[26]);
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_11 = MAKE_FUNCTION_flet_core$border_radius$$$function__2_horizontal(tmp_defaults_1, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_3;
        tmp_defaults_2 = mod_consts[25];
        tmp_annotations_3 = DICT_COPY(mod_consts[28]);
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_12 = MAKE_FUNCTION_flet_core$border_radius$$$function__3_vertical(tmp_defaults_2, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_4;
        tmp_defaults_3 = mod_consts[30];
        tmp_annotations_4 = DICT_COPY(mod_consts[31]);
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_13 = MAKE_FUNCTION_flet_core$border_radius$$$function__4_only(tmp_defaults_3, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_flet_core$border_radius, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_13);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core.border_radius", false);

    Py_INCREF(module_flet_core$border_radius);
    return module_flet_core$border_radius;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$border_radius, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$border_radius", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
