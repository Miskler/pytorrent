/* Generated code for Python module 'hpack.compat'
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

/* The "module_hpack$compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_hpack$compat;
PyDictObject *moduledict_hpack$compat;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[28];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[28];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("hpack.compat"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 28; i++) {
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
void checkModuleConstants_hpack$compat(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 28; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1adab4e17c6805294aa21be6ac375675;
static PyCodeObject *codeobj_f5fec00ba3990762d56e9bfd6b23d68b;
static PyCodeObject *codeobj_6dcec32b60d50966b70288bfc51853b2;
static PyCodeObject *codeobj_63726ba5a54aa3eac50946b841a6475c;
static PyCodeObject *codeobj_4a0f51996f50cc746d0a04408e1c943a;
static PyCodeObject *codeobj_7844c6e1c3d16f1b641b2d30ac4d7339;
static PyCodeObject *codeobj_c0ee66623200f0f4451c10151554a64e;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[7]; CHECK_OBJECT(module_filename_obj);
    codeobj_1adab4e17c6805294aa21be6ac375675 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[24], mod_consts[24], NULL, NULL, 0, 0, 0);
    codeobj_f5fec00ba3990762d56e9bfd6b23d68b = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[25], NULL, 1, 0, 0);
    codeobj_6dcec32b60d50966b70288bfc51853b2 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[25], NULL, 1, 0, 0);
    codeobj_63726ba5a54aa3eac50946b841a6475c = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[26], NULL, 1, 0, 0);
    codeobj_4a0f51996f50cc746d0a04408e1c943a = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[26], NULL, 1, 0, 0);
    codeobj_7844c6e1c3d16f1b641b2d30ac4d7339 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[25], NULL, 1, 0, 0);
    codeobj_c0ee66623200f0f4451c10151554a64e = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[25], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_hpack$compat$$$function__1_to_byte();


static PyObject *MAKE_FUNCTION_hpack$compat$$$function__2_decode_hex();


static PyObject *MAKE_FUNCTION_hpack$compat$$$function__3_to_bytes();


static PyObject *MAKE_FUNCTION_hpack$compat$$$function__4_to_byte();


static PyObject *MAKE_FUNCTION_hpack$compat$$$function__5_decode_hex();


static PyObject *MAKE_FUNCTION_hpack$compat$$$function__6_to_bytes();


// The module function definitions.
static PyObject *impl_hpack$compat$$$function__1_to_byte(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_char = python_pars[0];
    struct Nuitka_FrameObject *frame_63726ba5a54aa3eac50946b841a6475c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_63726ba5a54aa3eac50946b841a6475c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_63726ba5a54aa3eac50946b841a6475c)) {
        Py_XDECREF(cache_frame_63726ba5a54aa3eac50946b841a6475c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_63726ba5a54aa3eac50946b841a6475c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_63726ba5a54aa3eac50946b841a6475c = MAKE_FUNCTION_FRAME(codeobj_63726ba5a54aa3eac50946b841a6475c, module_hpack$compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_63726ba5a54aa3eac50946b841a6475c->m_type_description == NULL);
    frame_63726ba5a54aa3eac50946b841a6475c = cache_frame_63726ba5a54aa3eac50946b841a6475c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_63726ba5a54aa3eac50946b841a6475c);
    assert(Py_REFCNT(frame_63726ba5a54aa3eac50946b841a6475c) == 2);

    // Framed code:
    {
        PyObject *tmp_ord_arg_1;
        CHECK_OBJECT(par_char);
        tmp_ord_arg_1 = par_char;
        tmp_return_value = BUILTIN_ORD(tmp_ord_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
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
        exception_tb = MAKE_TRACEBACK(frame_63726ba5a54aa3eac50946b841a6475c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_63726ba5a54aa3eac50946b841a6475c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_63726ba5a54aa3eac50946b841a6475c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_63726ba5a54aa3eac50946b841a6475c,
        type_description_1,
        par_char
    );


    // Release cached frame if used for exception.
    if (frame_63726ba5a54aa3eac50946b841a6475c == cache_frame_63726ba5a54aa3eac50946b841a6475c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_63726ba5a54aa3eac50946b841a6475c);
        cache_frame_63726ba5a54aa3eac50946b841a6475c = NULL;
    }

    assertFrameObject(frame_63726ba5a54aa3eac50946b841a6475c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_char);
    Py_DECREF(par_char);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_char);
    Py_DECREF(par_char);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$compat$$$function__2_decode_hex(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_b = python_pars[0];
    struct Nuitka_FrameObject *frame_f5fec00ba3990762d56e9bfd6b23d68b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f5fec00ba3990762d56e9bfd6b23d68b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f5fec00ba3990762d56e9bfd6b23d68b)) {
        Py_XDECREF(cache_frame_f5fec00ba3990762d56e9bfd6b23d68b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f5fec00ba3990762d56e9bfd6b23d68b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f5fec00ba3990762d56e9bfd6b23d68b = MAKE_FUNCTION_FRAME(codeobj_f5fec00ba3990762d56e9bfd6b23d68b, module_hpack$compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f5fec00ba3990762d56e9bfd6b23d68b->m_type_description == NULL);
    frame_f5fec00ba3990762d56e9bfd6b23d68b = cache_frame_f5fec00ba3990762d56e9bfd6b23d68b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f5fec00ba3990762d56e9bfd6b23d68b);
    assert(Py_REFCNT(frame_f5fec00ba3990762d56e9bfd6b23d68b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_b);
        tmp_expression_value_1 = par_b;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f5fec00ba3990762d56e9bfd6b23d68b->m_frame.f_lineno = 20;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        Py_DECREF(tmp_called_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_f5fec00ba3990762d56e9bfd6b23d68b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5fec00ba3990762d56e9bfd6b23d68b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5fec00ba3990762d56e9bfd6b23d68b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f5fec00ba3990762d56e9bfd6b23d68b,
        type_description_1,
        par_b
    );


    // Release cached frame if used for exception.
    if (frame_f5fec00ba3990762d56e9bfd6b23d68b == cache_frame_f5fec00ba3990762d56e9bfd6b23d68b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f5fec00ba3990762d56e9bfd6b23d68b);
        cache_frame_f5fec00ba3990762d56e9bfd6b23d68b = NULL;
    }

    assertFrameObject(frame_f5fec00ba3990762d56e9bfd6b23d68b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$compat$$$function__3_to_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_b = python_pars[0];
    struct Nuitka_FrameObject *frame_7844c6e1c3d16f1b641b2d30ac4d7339;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7844c6e1c3d16f1b641b2d30ac4d7339 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7844c6e1c3d16f1b641b2d30ac4d7339)) {
        Py_XDECREF(cache_frame_7844c6e1c3d16f1b641b2d30ac4d7339);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7844c6e1c3d16f1b641b2d30ac4d7339 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7844c6e1c3d16f1b641b2d30ac4d7339 = MAKE_FUNCTION_FRAME(codeobj_7844c6e1c3d16f1b641b2d30ac4d7339, module_hpack$compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7844c6e1c3d16f1b641b2d30ac4d7339->m_type_description == NULL);
    frame_7844c6e1c3d16f1b641b2d30ac4d7339 = cache_frame_7844c6e1c3d16f1b641b2d30ac4d7339;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7844c6e1c3d16f1b641b2d30ac4d7339);
    assert(Py_REFCNT(frame_7844c6e1c3d16f1b641b2d30ac4d7339) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_b);
        tmp_isinstance_inst_1 = par_b;
        tmp_isinstance_cls_1 = (PyObject *)&PyMemoryView_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
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
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_b);
        tmp_called_instance_1 = par_b;
        frame_7844c6e1c3d16f1b641b2d30ac4d7339->m_frame.f_lineno = 24;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[2]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_b);
        tmp_args_element_value_1 = par_b;
        frame_7844c6e1c3d16f1b641b2d30ac4d7339->m_frame.f_lineno = 26;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7844c6e1c3d16f1b641b2d30ac4d7339, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7844c6e1c3d16f1b641b2d30ac4d7339->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7844c6e1c3d16f1b641b2d30ac4d7339, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7844c6e1c3d16f1b641b2d30ac4d7339,
        type_description_1,
        par_b
    );


    // Release cached frame if used for exception.
    if (frame_7844c6e1c3d16f1b641b2d30ac4d7339 == cache_frame_7844c6e1c3d16f1b641b2d30ac4d7339) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7844c6e1c3d16f1b641b2d30ac4d7339);
        cache_frame_7844c6e1c3d16f1b641b2d30ac4d7339 = NULL;
    }

    assertFrameObject(frame_7844c6e1c3d16f1b641b2d30ac4d7339);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$compat$$$function__4_to_byte(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_char = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_char);
    tmp_return_value = par_char;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_char);
    Py_DECREF(par_char);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$compat$$$function__5_decode_hex(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_b = python_pars[0];
    struct Nuitka_FrameObject *frame_6dcec32b60d50966b70288bfc51853b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6dcec32b60d50966b70288bfc51853b2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6dcec32b60d50966b70288bfc51853b2)) {
        Py_XDECREF(cache_frame_6dcec32b60d50966b70288bfc51853b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6dcec32b60d50966b70288bfc51853b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6dcec32b60d50966b70288bfc51853b2 = MAKE_FUNCTION_FRAME(codeobj_6dcec32b60d50966b70288bfc51853b2, module_hpack$compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6dcec32b60d50966b70288bfc51853b2->m_type_description == NULL);
    frame_6dcec32b60d50966b70288bfc51853b2 = cache_frame_6dcec32b60d50966b70288bfc51853b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6dcec32b60d50966b70288bfc51853b2);
    assert(Py_REFCNT(frame_6dcec32b60d50966b70288bfc51853b2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_b);
        tmp_args_element_value_1 = par_b;
        frame_6dcec32b60d50966b70288bfc51853b2->m_frame.f_lineno = 36;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[4], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_6dcec32b60d50966b70288bfc51853b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6dcec32b60d50966b70288bfc51853b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6dcec32b60d50966b70288bfc51853b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6dcec32b60d50966b70288bfc51853b2,
        type_description_1,
        par_b
    );


    // Release cached frame if used for exception.
    if (frame_6dcec32b60d50966b70288bfc51853b2 == cache_frame_6dcec32b60d50966b70288bfc51853b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6dcec32b60d50966b70288bfc51853b2);
        cache_frame_6dcec32b60d50966b70288bfc51853b2 = NULL;
    }

    assertFrameObject(frame_6dcec32b60d50966b70288bfc51853b2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_hpack$compat$$$function__6_to_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_b = python_pars[0];
    struct Nuitka_FrameObject *frame_c0ee66623200f0f4451c10151554a64e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c0ee66623200f0f4451c10151554a64e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c0ee66623200f0f4451c10151554a64e)) {
        Py_XDECREF(cache_frame_c0ee66623200f0f4451c10151554a64e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0ee66623200f0f4451c10151554a64e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0ee66623200f0f4451c10151554a64e = MAKE_FUNCTION_FRAME(codeobj_c0ee66623200f0f4451c10151554a64e, module_hpack$compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c0ee66623200f0f4451c10151554a64e->m_type_description == NULL);
    frame_c0ee66623200f0f4451c10151554a64e = cache_frame_c0ee66623200f0f4451c10151554a64e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c0ee66623200f0f4451c10151554a64e);
    assert(Py_REFCNT(frame_c0ee66623200f0f4451c10151554a64e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_b);
        tmp_args_element_value_1 = par_b;
        frame_c0ee66623200f0f4451c10151554a64e->m_frame.f_lineno = 39;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
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
        exception_tb = MAKE_TRACEBACK(frame_c0ee66623200f0f4451c10151554a64e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0ee66623200f0f4451c10151554a64e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0ee66623200f0f4451c10151554a64e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0ee66623200f0f4451c10151554a64e,
        type_description_1,
        par_b
    );


    // Release cached frame if used for exception.
    if (frame_c0ee66623200f0f4451c10151554a64e == cache_frame_c0ee66623200f0f4451c10151554a64e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0ee66623200f0f4451c10151554a64e);
        cache_frame_c0ee66623200f0f4451c10151554a64e = NULL;
    }

    assertFrameObject(frame_c0ee66623200f0f4451c10151554a64e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_hpack$compat$$$function__1_to_byte() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$compat$$$function__1_to_byte,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_63726ba5a54aa3eac50946b841a6475c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$compat$$$function__2_decode_hex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$compat$$$function__2_decode_hex,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f5fec00ba3990762d56e9bfd6b23d68b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$compat$$$function__3_to_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$compat$$$function__3_to_bytes,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7844c6e1c3d16f1b641b2d30ac4d7339,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$compat$$$function__4_to_byte() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$compat$$$function__4_to_byte,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4a0f51996f50cc746d0a04408e1c943a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$compat$$$function__5_decode_hex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$compat$$$function__5_decode_hex,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6dcec32b60d50966b70288bfc51853b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$compat$$$function__6_to_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$compat$$$function__6_to_bytes,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c0ee66623200f0f4451c10151554a64e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$compat,
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

function_impl_code functable_hpack$compat[] = {
    impl_hpack$compat$$$function__1_to_byte,
    impl_hpack$compat$$$function__2_decode_hex,
    impl_hpack$compat$$$function__3_to_bytes,
    impl_hpack$compat$$$function__4_to_byte,
    impl_hpack$compat$$$function__5_decode_hex,
    impl_hpack$compat$$$function__6_to_bytes,
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

    function_impl_code *current = functable_hpack$compat;
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

    if (offset > sizeof(functable_hpack$compat) || offset < 0) {
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
        functable_hpack$compat[offset],
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
        module_hpack$compat,
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
PyObject *modulecode_hpack$compat(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("hpack.compat");

    // Store the module for future use.
    module_hpack$compat = module;

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
        PRINT_STRING("hpack.compat: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("hpack.compat: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("hpack.compat: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithpack$compat\n");

    moduledict_hpack$compat = MODULE_DICT(module_hpack$compat);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_hpack$compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_hpack$compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[27]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_hpack$compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_hpack$compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_hpack$compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_hpack$compat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_hpack$compat);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_hpack$compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_1adab4e17c6805294aa21be6ac375675;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[5];
        UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_2);
    }
    frame_1adab4e17c6805294aa21be6ac375675 = MAKE_MODULE_FRAME(codeobj_1adab4e17c6805294aa21be6ac375675, module_hpack$compat);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1adab4e17c6805294aa21be6ac375675);
    assert(Py_REFCNT(frame_1adab4e17c6805294aa21be6ac375675) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[7];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Nuitka_SysGetObject("version_info");
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = mod_consts[15];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[16];
        tmp_assign_source_6 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[15];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[18];
        tmp_assign_source_7 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_7);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_hpack$compat$$$function__1_to_byte();

        UPDATE_STRING_DICT1(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_hpack$compat$$$function__2_decode_hex();

        UPDATE_STRING_DICT1(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_hpack$compat$$$function__3_to_bytes();

        UPDATE_STRING_DICT1(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assign_source_11 == NULL)) {
            tmp_assign_source_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = (PyObject *)&PyUnicode_Type;
        UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_12);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        assert(!(tmp_mvar_value_2 == NULL));
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_hpack$compat$$$function__4_to_byte();

        UPDATE_STRING_DICT1(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_hpack$compat$$$function__5_decode_hex();

        UPDATE_STRING_DICT1(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_hpack$compat$$$function__6_to_bytes();

        UPDATE_STRING_DICT1(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = (PyObject *)&PyUnicode_Type;
        UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assign_source_17 == NULL)) {
            tmp_assign_source_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_hpack$compat, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_17);
    }
    branch_no_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1adab4e17c6805294aa21be6ac375675, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1adab4e17c6805294aa21be6ac375675->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1adab4e17c6805294aa21be6ac375675, exception_lineno);
    }



    assertFrameObject(frame_1adab4e17c6805294aa21be6ac375675);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("hpack.compat", false);

    Py_INCREF(module_hpack$compat);
    return module_hpack$compat;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$compat, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("hpack$compat", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
